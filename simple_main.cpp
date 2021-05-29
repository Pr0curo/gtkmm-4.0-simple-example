#include <iostream>

#include <gtkmm.h>

using namespace Glib;
using namespace Gtk;

int main(int argc, char* argv[]) {
  auto application = Application::create("procuro.test.app");
  Window window;
  return application->make_window_and_run<Gtk::Window>(argc, argv);
}
