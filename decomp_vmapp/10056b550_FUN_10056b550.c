
undefined8 FUN_10056b550(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = param_1 + 0x1280;
  QMutex::lock();
  if (*(long *)(param_1 + 0x1298) == param_1 + 0x1298) {
    plVar3 = _malloc(0x38);
    if (plVar3 == (long *)0x0) {
      uVar4 = 0x80000002;
      FUN_1008e3970("","vdisk",0,"Error: allocation problems");
      goto LAB_10056b732;
    }
    plVar3[3] = 0;
    plVar3[2] = 0;
    plVar3[4] = param_1;
    plVar3[5] = 0;
    *(undefined4 *)(plVar3 + 6) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x12a0);
    *(long **)(param_1 + 0x12a0) = plVar3;
    *plVar3 = param_1 + 0x1298;
    plVar3[1] = (long)puVar1;
    *puVar1 = plVar3;
  }
  plVar3 = _malloc(0x38);
  if (plVar3 == (long *)0x0) {
    uVar4 = 0x80000002;
    FUN_1008e3970("","vdisk",0,"Error: allocation problems");
  }
  else {
    lVar2 = *(long *)(param_1 + 0x12a0);
    if (lVar2 == 0) {
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","LastFlush",
                    "DiskStatesImp.cpp",0x481,"PrepareFlushDio",lVar5);
    }
    plVar3[3] = param_3[2];
    plVar3[4] = param_3[9];
    plVar3[5] = lVar2;
    plVar3[2] = param_2;
    plVar3[6] = -1;
    if ((*(byte *)(param_3 + 1) & 1) != 0) {
      plVar3[6] = *param_3;
    }
    puVar1 = *(undefined8 **)(param_2 + 0x130);
    *(long **)(param_2 + 0x130) = plVar3;
    *plVar3 = param_2 + 0x128;
    plVar3[1] = (long)puVar1;
    *puVar1 = plVar3;
    param_3[9] = (long)FUN_10056b770;
    param_3[2] = (long)plVar3;
    *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
    lVar5 = param_2 + 0x138;
    if (*(long *)(param_2 + 0x138) == lVar5) {
      plVar3 = *(long **)(param_1 + 0x12b0);
      *(long *)(param_1 + 0x12b0) = lVar5;
      *(long *)(param_2 + 0x138) = param_1 + 0x12a8;
      *(long **)(param_2 + 0x140) = plVar3;
      *plVar3 = lVar5;
    }
    *(long *)(param_2 + 0x148) = lVar2;
    uVar4 = 0;
  }
LAB_10056b732:
  QMutex::unlock();
  return uVar4;
}

