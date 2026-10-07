
int FUN_100296d60(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  iVar3 = (**(code **)(*param_1 + 0x80))();
  if (iVar3 < 0) {
    FUN_10025b310(param_1 + 0xd,0);
    QMutex::lock();
    plVar1 = (long *)param_1[0x10];
    if (plVar1 != (long *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    QMutex::unlock();
    if (iVar3 == -0x7ffffd9d) {
      plVar6 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        plVar6 = (long *)plVar1[2];
      }
      uVar4 = (**(code **)(*plVar6 + 0x68))();
      uVar5 = CVmDevice::getIndex();
      iVar3 = -0x7ffffd9d;
      FUN_1003fad80(uVar4,uVar5);
    }
    else {
      FUN_10006a060();
      plVar6 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        plVar6 = (long *)plVar1[2];
      }
      uVar4 = (**(code **)(*plVar6 + 0x68))();
      FUN_10006a860(local_40,uVar4,0);
      uVar4 = CVmDevice::getIndex();
      FUN_10006a860(local_40,uVar4,1);
      local_58 = (void *)0x0;
      pvStack_50 = (void *)0x0;
      local_48 = 0;
      FUN_1000648b0(DAT_1011c3650,iVar3,&local_58,local_40);
      if (local_58 != (void *)0x0) {
        if (pvStack_50 != local_58) {
          pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU)
                               + (long)pvStack_50);
        }
        operator_delete(local_58);
      }
      FUN_10006a680(local_40);
    }
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar6 = plVar1 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  else {
    FUN_10025b310(param_1 + 0xd,1);
    FUN_100257c20(param_1);
  }
  return iVar3;
}

