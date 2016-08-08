#include <cassert>
#include <vector>

#include "wsg.h"

int main(int argc, char** argv) {
  schunk_driver::Wsg wsg;

  assert(wsg.Home(schunk_driver::Wsg::kPositive));

  assert(wsg.Grasp(62, 200));

  return 0;
}
