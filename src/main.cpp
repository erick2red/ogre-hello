#include <Ogre.h>

int main(int argc, char *argv[])
{
  Ogre::Root *root = new Ogre::Root ();

  root->showConfigDialog ();

  delete root;
  return 0;
}
