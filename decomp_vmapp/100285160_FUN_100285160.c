
undefined8 FUN_100285160(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  int local_2c;
  
  QMutex::lock();
  iVar2 = FUN_100285000();
  local_2c = iVar2 * 2 + 7;
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",3,"SARE: Save list (count = %d)",local_2c);
  }
  iVar2 = FUN_1000ed430(local_2c);
  uVar5 = 1;
  if ((iVar2 != 0) && (iVar2 = FUN_1000ed5c0(&local_2c,4), iVar2 != 0)) {
    iVar2 = FUN_100284e10();
    uVar4 = 0;
    if (iVar2 == 0) {
      plVar3 = &DAT_1011b89e0;
      do {
        lVar1 = *plVar3;
        if ((lVar1 != 0) &&
           ((iVar2 = FUN_1002857c0(lVar1), iVar2 != 0 || (iVar2 = FUN_100285890(lVar1), iVar2 != 0))
           )) {
          FUN_1008e3970("","LocalDevices",0,"LSI: Can\'t write dev data!(%u)",uVar4 & 0xffffffff);
          uVar5 = 1;
          break;
        }
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 1;
        uVar5 = 0;
      } while (uVar4 < 0x10);
    }
    else {
      FUN_1008e3970("","LocalDevices",0,"LSI: Can\'t write ioc data!");
    }
  }
  iVar2 = FUN_1000ed7d0();
  if (iVar2 == 0) {
    uVar5 = 1;
    FUN_1008e3970("","LocalDevices",0,"SARE: Can\'t stop SARE subsystem write!");
  }
  QMutex::unlock();
  return uVar5;
}

