
int FUN_1002efb70(long *param_1,char param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar4 = (ulong)param_3 / 1000;
  }
  if ((int)param_1[1] == 0) {
    QMutex::lock();
    *(undefined4 *)(param_1 + 1) = 1;
    QWaitCondition::wakeAll();
    QMutex::unlock();
  }
  lVar1 = *param_1;
  while( true ) {
    FUN_1007d8b40(param_1 + 0xc);
    if ((*(int *)(lVar1 + 0xc) != 0) && (iVar2 = FUN_1002efd40(param_1), iVar2 != 0)) {
      return iVar2;
    }
    if ((int)param_1[1] == 2 && param_2 == '\x01') {
      QMutex::lock();
      *(undefined4 *)(param_1 + 1) = 3;
      QWaitCondition::wakeAll();
      QMutex::unlock();
    }
    iVar2 = FUN_1007dce40(param_1 + 5,uVar4);
    if (iVar2 == 0) break;
    if (0 < iVar2) {
      iVar2 = FUN_1002efd40(param_1);
      if (iVar2 == 0) {
        return 2;
      }
      return iVar2;
    }
    if (iVar2 != -4) {
      iVar3 = FUN_1008e38f0(&DAT_101117220);
      if (iVar3 != 0) {
        FUN_1008e3970("","LocalDevices",0,"__adev_poll() returned sys-error %d",iVar2);
      }
      return -0xfbff;
    }
  }
  return -0xffff;
}

