
undefined8 FUN_100293240(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = operator_new(0x38,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x11c8) = 0;
    uVar7 = 0x80000002;
  }
  else {
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[4] = &PTR_FUN_101115d40;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    FUN_100284dc0(puVar6);
    *(undefined8 **)(param_1 + 0x11c8) = puVar6;
    QMutex::lock();
    plVar2 = *(long **)(param_1 + 0x80);
    if (plVar2 == (long *)0x0) {
      QMutex::unlock();
    }
    else {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      QMutex::unlock();
    }
    iVar4 = CVmDevice::getConnected();
    if ((iVar4 == 1) && (iVar4 = FUN_10026c890(param_1 + 0x1068), iVar4 < 0)) {
      uVar5 = CVmDevice::getIndex();
      FUN_1003f9010(uVar5,0x80000263);
    }
    *(undefined1 *)(param_1 + 0x1078) = 0;
    FUN_100257c20(param_1);
    uVar7 = 0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return uVar7;
}

