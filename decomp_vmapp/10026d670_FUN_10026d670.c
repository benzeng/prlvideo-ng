
int FUN_10026d670(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  QMutex::lock();
  plVar1 = *(long **)(param_1 + 0x80);
  if (plVar1 == (long *)0x0) {
    QMutex::unlock();
  }
  else {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
    QMutex::unlock();
  }
  iVar3 = CVmDevice::getConnected();
  iVar4 = 0;
  if (iVar3 == 1) {
    iVar4 = FUN_10026d8a0(param_1);
    if (iVar4 < 0) {
      FUN_10025b310(param_1 + 0x68,0);
      if (iVar4 == -0x7ffffd9d) {
        plVar7 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          plVar7 = (long *)plVar1[2];
        }
        uVar5 = (**(code **)(*plVar7 + 0x68))();
        uVar6 = CVmDevice::getIndex();
        iVar4 = -0x7ffffd9d;
        FUN_1003fad80(uVar5,uVar6);
      }
      else {
        FUN_10006a060();
        plVar7 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          plVar7 = (long *)plVar1[2];
        }
        uVar5 = (**(code **)(*plVar7 + 0x68))();
        FUN_10006a860(local_40,uVar5,0);
        uVar5 = CVmDevice::getIndex();
        FUN_10006a860(local_40,uVar5,1);
        local_58 = (void *)0x0;
        pvStack_50 = (void *)0x0;
        local_48 = 0;
        FUN_1000648b0(DAT_1011c3650,iVar4,&local_58,local_40);
        if (local_58 != (void *)0x0) {
          if (pvStack_50 != local_58) {
            pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU
                                  ) + (long)pvStack_50);
          }
          operator_delete(local_58);
        }
        FUN_10006a680(local_40);
      }
    }
    else {
      FUN_10025b310(param_1 + 0x68,1);
      FUN_100257c20(param_1);
    }
  }
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar7 = plVar1 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  return iVar4;
}

