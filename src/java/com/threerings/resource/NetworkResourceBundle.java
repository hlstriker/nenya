//
// $Id$
//
// Nenya library - tools for developing networked games
// Copyright (C) 2002-2007 Three Rings Design, Inc., All Rights Reserved
// http://www.threerings.net/code/nenya/
//
// This library is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License as published
// by the Free Software Foundation; either version 2.1 of the License, or
// (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

package com.threerings.resource;

import java.io.InputStream;

import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;

import java.awt.image.BufferedImage;

/**
 * Resource bundle that retrieves its contents via HTTP over the network from a root URL.
 */
public class NetworkResourceBundle extends ResourceBundle
{
    public NetworkResourceBundle (String root, String path)
    {
        try {
            _bundleURL = new URL(root + path);
        } catch (MalformedURLException mue) {
            Log.warning("Created malformed URL for resource. [root=" + root + ", path=" + path);
        }
        _ident = path;
    }

    @Override // documentation inherited
    public String getIdent ()
    {
        return _ident;
    }

    @Override // documentation inherited
    public InputStream getResource (String path)
        throws IOException
    {
        URL resourceUrl = new URL(_bundleURL, path);
        HttpURLConnection ucon = null;
        try {
            ucon = (HttpURLConnection) resourceUrl.openConnection();
        } catch (IOException ioe) {
        }

        if (ucon == null) {
            return null;
        }
        try {
            ucon.connect();
            return ucon.getInputStream();
        } catch (IOException ioe) {
            return null;
        }
    }

    @Override // documentation inherited
    public BufferedImage getImageResource (String path, boolean useFastIO)
        throws IOException
    {
        InputStream in = getResource(path);
        if (in == null) {
            return null;
        }
        return ResourceManager.loadImage(in);
    }

    /** Our identifier for this bundle. */
    protected String _ident;

    /** Our root url to the resources in this bundle. */
    protected URL _bundleURL;
}