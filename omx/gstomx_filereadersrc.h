/*
 * Copyright (C) 2007-2008 Nokia Corporation.
 *
 * Author: Felipe Contreras <felipe.contreras@nokia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation
 * version 2.1 of the License.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef GSTOMX_FILEREADERSRC_H
#define GSTOMX_FILEREADERSRC_H

#include <gst/gst.h>

#include <config.h>

G_BEGIN_DECLS

#define GST_OMX_FILEREADERSRC(obj) (GstOmxFilereaderSrc *) (obj)
#define GST_OMX_FILEREADERSRC_TYPE (gst_omx_filereadersrc_get_type ())

typedef struct GstOmxFilereaderSrc GstOmxFilereaderSrc;
typedef struct GstOmxFilereaderSrcClass GstOmxFilereaderSrcClass;

#include "gstomx_base_src.h"

struct GstOmxFilereaderSrc
{
    GstOmxBaseSrc omx_base;

    char *file_name; /**< The input file name. */
};

struct GstOmxFilereaderSrcClass
{
    GstOmxBaseSrcClass parent_class;
};

GType gst_omx_filereadersrc_get_type (void);

G_END_DECLS

#endif /* GSTOMX_FILEREADERSRC_H */
