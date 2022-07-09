#include "widget.h"
#include "from.h"
#include "release.h"
#include "release_2.h"
#include "release_3.h"
#include "person_interface.h"
#include <QApplication>


int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  Widget w;
  w.show();
  return a.exec();
}
