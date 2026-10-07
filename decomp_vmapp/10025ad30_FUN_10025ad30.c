
long FUN_10025ad30(long *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  
  lVar6 = 0;
  if (param_1 != (long *)0x0) {
    iVar1 = CVmDevice::getEnabled();
    lVar6 = 0;
    if (iVar1 == 1) {
      QTime::start();
      lVar6 = FUN_10025a110(param_1);
      uVar2 = (**(code **)(*param_1 + 0x68))(param_1);
      if (uVar2 < 0x15) {
        pcVar8 = (&PTR_s_GENERIC_100baea80)[uVar2];
      }
      else {
        pcVar8 = "UNKNOWN";
      }
      iVar3 = CVmDevice::getIndex();
      iVar1 = QTime::elapsed();
      if (iVar3 == -1) {
        pcVar7 = "[Profile] %s creation time is %u msecs";
      }
      else {
        pcVar7 = "[Profile] %s %u creation time is %u msecs";
        iVar1 = iVar3;
      }
      FUN_1008e3970("","LocalDevices",0,pcVar7,pcVar8,iVar1);
      if (lVar6 == 0) {
        uVar4 = (**(code **)(*param_1 + 0x68))(param_1);
        uVar5 = CVmDevice::getIndex();
        FUN_1003fad80(uVar4,uVar5);
        lVar6 = 0;
      }
    }
  }
  return lVar6;
}

