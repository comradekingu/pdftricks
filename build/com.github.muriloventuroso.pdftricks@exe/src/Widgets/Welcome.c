/* Welcome.c generated by valac 0.40.12, the Vala compiler
 * generated from Welcome.vala, do not modify */

/*
* Copyright (c) 2018 Murilo Venturoso
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 3 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* Authored by: Murilo Venturoso <muriloventuroso@gmail.com>
*/


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <granite.h>
#include <glib/gi18n-lib.h>
#include <stdlib.h>
#include <string.h>


#define PDFTRICKS_TYPE_WELCOME (pdftricks_welcome_get_type ())
#define PDFTRICKS_WELCOME(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PDFTRICKS_TYPE_WELCOME, pdftricksWelcome))
#define PDFTRICKS_WELCOME_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PDFTRICKS_TYPE_WELCOME, pdftricksWelcomeClass))
#define PDFTRICKS_IS_WELCOME(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PDFTRICKS_TYPE_WELCOME))
#define PDFTRICKS_IS_WELCOME_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PDFTRICKS_TYPE_WELCOME))
#define PDFTRICKS_WELCOME_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PDFTRICKS_TYPE_WELCOME, pdftricksWelcomeClass))

typedef struct _pdftricksWelcome pdftricksWelcome;
typedef struct _pdftricksWelcomeClass pdftricksWelcomeClass;
typedef struct _pdftricksWelcomePrivate pdftricksWelcomePrivate;
enum  {
	PDFTRICKS_WELCOME_0_PROPERTY,
	PDFTRICKS_WELCOME_NUM_PROPERTIES
};
static GParamSpec* pdftricks_welcome_properties[PDFTRICKS_WELCOME_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _pdftricksWelcome {
	GtkGrid parent_instance;
	pdftricksWelcomePrivate * priv;
};

struct _pdftricksWelcomeClass {
	GtkGridClass parent_class;
};


static gpointer pdftricks_welcome_parent_class = NULL;

GType pdftricks_welcome_get_type (void) G_GNUC_CONST;
pdftricksWelcome* pdftricks_welcome_new (void);
pdftricksWelcome* pdftricks_welcome_construct (GType object_type);
static GObject * pdftricks_welcome_constructor (GType type,
                                         guint n_construct_properties,
                                         GObjectConstructParam * construct_properties);
#define PDFTRICKS_APPLICATION_ACTION_PREFIX "win."
#define PDFTRICKS_APPLICATION_ACTION_COMPRESS_PDF "action_compress_pdf"
#define PDFTRICKS_APPLICATION_ACTION_SPLIT_PDF "action_split_pdf"
#define PDFTRICKS_APPLICATION_ACTION_MERGE_PDF "action_merge_pdf"


pdftricksWelcome*
pdftricks_welcome_construct (GType object_type)
{
	pdftricksWelcome * self = NULL;
#line 23 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	self = (pdftricksWelcome*) g_object_new (object_type, NULL);
#line 23 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	return self;
#line 85 "Welcome.c"
}


pdftricksWelcome*
pdftricks_welcome_new (void)
{
#line 23 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	return pdftricks_welcome_construct (PDFTRICKS_TYPE_WELCOME);
#line 94 "Welcome.c"
}


static GObject *
pdftricks_welcome_constructor (GType type,
                               guint n_construct_properties,
                               GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	pdftricksWelcome * self;
	GraniteWidgetsWelcome* welcome = NULL;
	GraniteWidgetsWelcome* _tmp0_;
	GraniteWidgetsWelcome* _tmp1_;
	GraniteWidgetsWelcome* _tmp2_;
	GraniteWidgetsWelcome* _tmp3_;
	GraniteWidgetsWelcome* _tmp4_;
	GraniteWidgetsWelcome* _tmp5_;
	GraniteWidgetsWelcomeButton* _tmp6_;
	GraniteWidgetsWelcomeButton* _tmp7_;
	GraniteWidgetsWelcome* _tmp8_;
	GraniteWidgetsWelcomeButton* _tmp9_;
	GraniteWidgetsWelcomeButton* _tmp10_;
	GraniteWidgetsWelcome* _tmp11_;
	GraniteWidgetsWelcomeButton* _tmp12_;
	GraniteWidgetsWelcomeButton* _tmp13_;
#line 24 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	parent_class = G_OBJECT_CLASS (pdftricks_welcome_parent_class);
#line 24 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 24 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PDFTRICKS_TYPE_WELCOME, pdftricksWelcome);
#line 25 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp0_ = granite_widgets_welcome_new ("PDF Tricks", _ ("Tricks for PDF files"));
#line 25 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	g_object_ref_sink (_tmp0_);
#line 25 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	welcome = _tmp0_;
#line 26 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp1_ = welcome;
#line 26 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	granite_widgets_welcome_append (_tmp1_, "compress-pdf", _ ("Compress PDF"), _ ("Compress PDF file to get the same PDF quality but less filesize."));
#line 27 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp2_ = welcome;
#line 27 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	granite_widgets_welcome_append (_tmp2_, "split-pdf", _ ("Split PDF"), _ ("Split a PDF file by page ranges or extract all PDF pages to multiple P" \
"DF files."));
#line 28 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp3_ = welcome;
#line 28 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	granite_widgets_welcome_append (_tmp3_, "merge-pdf", _ ("Merge PDF"), _ ("Select multiple PDF files and merge them in seconds."));
#line 29 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp4_ = welcome;
#line 29 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp4_);
#line 31 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp5_ = welcome;
#line 31 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp6_ = granite_widgets_welcome_get_button_from_index (_tmp5_, 0);
#line 31 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp7_ = _tmp6_;
#line 31 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	gtk_actionable_set_action_name ((GtkActionable*) _tmp7_, PDFTRICKS_APPLICATION_ACTION_PREFIX PDFTRICKS_APPLICATION_ACTION_COMPRESS_PDF);
#line 31 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_g_object_unref0 (_tmp7_);
#line 32 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp8_ = welcome;
#line 32 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp9_ = granite_widgets_welcome_get_button_from_index (_tmp8_, 1);
#line 32 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp10_ = _tmp9_;
#line 32 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	gtk_actionable_set_action_name ((GtkActionable*) _tmp10_, PDFTRICKS_APPLICATION_ACTION_PREFIX PDFTRICKS_APPLICATION_ACTION_SPLIT_PDF);
#line 32 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_g_object_unref0 (_tmp10_);
#line 33 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp11_ = welcome;
#line 33 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp12_ = granite_widgets_welcome_get_button_from_index (_tmp11_, 2);
#line 33 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_tmp13_ = _tmp12_;
#line 33 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	gtk_actionable_set_action_name ((GtkActionable*) _tmp13_, PDFTRICKS_APPLICATION_ACTION_PREFIX PDFTRICKS_APPLICATION_ACTION_MERGE_PDF);
#line 33 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_g_object_unref0 (_tmp13_);
#line 24 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	_g_object_unref0 (welcome);
#line 24 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	return obj;
#line 183 "Welcome.c"
}


static void
pdftricks_welcome_class_init (pdftricksWelcomeClass * klass)
{
#line 23 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	pdftricks_welcome_parent_class = g_type_class_peek_parent (klass);
#line 23 "/home/muriloventuroso/Dev/Vala/com.github.muriloventuroso.pdftricks/src/Widgets/Welcome.vala"
	G_OBJECT_CLASS (klass)->constructor = pdftricks_welcome_constructor;
#line 194 "Welcome.c"
}


static void
pdftricks_welcome_instance_init (pdftricksWelcome * self)
{
}


GType
pdftricks_welcome_get_type (void)
{
	static volatile gsize pdftricks_welcome_type_id__volatile = 0;
	if (g_once_init_enter (&pdftricks_welcome_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (pdftricksWelcomeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) pdftricks_welcome_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (pdftricksWelcome), 0, (GInstanceInitFunc) pdftricks_welcome_instance_init, NULL };
		GType pdftricks_welcome_type_id;
		pdftricks_welcome_type_id = g_type_register_static (gtk_grid_get_type (), "pdftricksWelcome", &g_define_type_info, 0);
		g_once_init_leave (&pdftricks_welcome_type_id__volatile, pdftricks_welcome_type_id);
	}
	return pdftricks_welcome_type_id__volatile;
}



