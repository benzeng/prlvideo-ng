
void FUN_1005252c0(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined4 local_2c;
  
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    lVar3 = CVmTools::getVmCoherence();
    if (lVar3 != 0) {
      lVar3 = CVmTools::getVmCoherence();
      if (lVar3 != 0) {
        bVar1 = CVmCoherence::isShowWinSystrayInMacMenu();
        bVar2 = CVmCoherence::isShowWinSystrayInMacMenu();
        if ((bVar2 ^ bVar1) == 1) {
          bVar1 = CVmCoherence::isShowWinSystrayInMacMenu();
          LOCK();
          *(uint *)(param_1 + 0x6c) = (uint)bVar1;
          UNLOCK();
          if (bVar1 != 0) {
            FUN_100524fb0(param_1,0x103,0,0);
            return;
          }
          local_2c = 6;
          FUN_1005253a0(param_1,&local_2c,4);
        }
      }
    }
  }
  return;
}

