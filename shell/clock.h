/*
 * Copyright (C) 2013 Collabora Ltd.
 *
 * Author: Emilio Pozuelo Monfort <emilio.pozuelo@collabora.co.uk>
 */

#ifndef __WESTON_GTK_CLOCK_H__
#define __WESTON_GTK_CLOCK_H__

#include <gtk/gtk.h>

#define WESTON_GTK_CLOCK_TYPE                 (weston_gtk_clock_get_type ())
#define WESTON_GTK_CLOCK(obj)                 (G_TYPE_CHECK_INSTANCE_CAST ((obj), WESTON_GTK_CLOCK_TYPE, WestonGtkClock))
#define WESTON_GTK_CLOCK_CLASS(klass)         (G_TYPE_CHECK_CLASS_CAST ((klass), WESTON_GTK_CLOCK_TYPE, WestonGtkClockClass))
#define WESTON_GTK_IS_CLOCK(obj)              (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WESTON_GTK_CLOCK_TYPE))
#define WESTON_GTK_IS_CLOCK_CLASS(klass)      (G_TYPE_CHECK_CLASS_TYPE ((klass), WESTON_GTK_CLOCK_TYPE))
#define WESTON_GTK_CLOCK_GET_CLASS(obj)       (G_TYPE_INSTANCE_GET_CLASS ((obj), WESTON_GTK_CLOCK_TYPE, WestonGtkClockClass))

typedef struct WestonGtkClock WestonGtkClock;
typedef struct WestonGtkClockClass WestonGtkClockClass;
typedef struct WestonGtkClockPrivate WestonGtkClockPrivate;

struct WestonGtkClock
{
  GtkLabel parent;

  WestonGtkClockPrivate *priv;
};

struct WestonGtkClockClass
{
  GtkLabelClass parent_class;
};

GType      weston_gtk_clock_get_type       (void) G_GNUC_CONST;
GtkWidget *weston_gtk_clock_new            (void);

#endif /* __WESTON_GTK_CLOCK_H__ */