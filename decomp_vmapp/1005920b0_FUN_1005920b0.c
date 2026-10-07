
undefined8 FUN_1005920b0(long param_1,long param_2,ulong param_3,long param_4)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  ulong local_40;
  long *local_38;
  
  plVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar2 == (long *)0x0) {
    FUN_1008e3970("","vdisk",0,"Error: memory allocation problems");
    return 0x80000002;
  }
  QMutex::lock();
  uVar3 = param_3 / *(uint *)(param_4 + 0x18);
  if (*(long **)(param_2 + 8) != (long *)0x0) {
    plVar5 = *(long **)(param_2 + 8);
    plVar7 = (long *)(param_2 + 8);
    do {
      while (plVar8 = plVar5, (ulong)plVar8[4] < uVar3) {
        plVar9 = plVar8 + 1;
        plVar8 = plVar7;
        plVar5 = (long *)*plVar9;
        if ((long *)*plVar9 == (long *)0x0) goto LAB_100592160;
      }
      plVar5 = (long *)*plVar8;
      plVar7 = plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
LAB_100592160:
    if ((plVar8 != (long *)(param_2 + 8)) && ((ulong)plVar8[4] <= uVar3)) {
      piVar1 = (int *)(*(long *)(plVar8[5] + 0x10) + 0x1108);
      *piVar1 = *piVar1 + 1;
      goto LAB_1005922f0;
    }
  }
  pvVar4 = operator_new(0x1178);
  FUN_1005938d0(pvVar4,param_2,param_3,param_4);
  plVar5 = (long *)FUN_10059a1c0(pvVar4,0);
  if (plVar5 != (long *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_40 = uVar3;
  local_38 = plVar5;
  auVar10 = FUN_10059a310(param_2,&local_40);
  plVar8 = auVar10._0_8_;
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 1;
    LOCK();
    plVar7 = plVar5 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    LOCK();
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    LOCK();
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    LOCK();
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  if ((auVar10._8_8_ & 1) == 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","res.second","Storage.cpp",0xea7
                  ,"TrackDio");
  }
LAB_1005922f0:
  plVar5 = (long *)plVar8[5];
  if (plVar5 != (long *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  lVar6 = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[2];
  }
  *plVar2 = lVar6;
  plVar2[1] = *(long *)(param_1 + 0x10);
  plVar2[2] = *(long *)(param_1 + 0x48);
  *(long **)(param_1 + 0x10) = plVar2;
  *(code **)(param_1 + 0x48) = FUN_100594880;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return 0;
}

