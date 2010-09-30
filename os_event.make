; $Id$

core = 6.x
api = 2

; Calendar - grab 2.x-dev version *and* apply many patches.
; Patch at node 613528 is not necessary since we're using dev version
projects[calendar][subdir] = "contrib"
projects[calendar][type] = "module"
projects[calendar][download][type] = "cvs"
projects[calendar][download][module] = "contributions/modules/calendar"
projects[calendar][download][revision] = "DRUPAL-6--2:2010-08-24"
projects[calendar][patch][] = "http://drupal.org/files/issues/calendar.427388.patch"
projects[calendar][patch][] = "http://drupal.org/files/issues/calendar.preprocess_class.patch"
projects[calendar][patch][] = "http://drupal.org/files/issues/calendar.zebra-stripe.patch"
projects[calendar][patch][] = "http://drupal.org/files/issues/calendar.732896.patch"

; Project-specific modules, and overrides.
projects[date][subdir] = "contrib"
projects[date][version] = "2.6"
