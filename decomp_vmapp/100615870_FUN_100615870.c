
void FUN_100615870(void)

{
  QMutex::lock();
  FUN_100615920(0);
  if (DAT_1011cca68 != 0) {
    FUN_1008e3970("","prlplg",0,"ASSERT( %s ) occured in %s:%d [%s]","s_Plugins.Objs.size() == 0",
                  "PrlPlugins.cpp",0xf6,"Fini");
  }
  QMutex::unlock();
  return;
}

