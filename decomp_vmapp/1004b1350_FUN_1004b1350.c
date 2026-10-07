
undefined8
FUN_1004b1350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  plVar4 = (long *)FUN_100529f50(param_3,param_4);
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar5 == (long *)0x0) {
    uVar7 = 1;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = (long)plVar4;
    *plVar5 = (long)&PTR_FUN_10111cbb0;
    uVar7 = 1;
    if (plVar4 != (long *)0x0) {
      sVar2 = FUN_100529ee0(plVar4);
      uVar7 = 2;
      if (sVar2 == 2) {
        uVar6 = FUN_100529ec0(plVar5[2]);
        if ((uVar6 & 0xfffe) == 0) {
          iVar3 = FUN_100529f00(plVar5[2]);
          uVar7 = 3;
          if (iVar3 == 1) {
            uVar7 = 0;
            FUN_1004b1470(param_1,param_2,plVar5[2]);
          }
        }
      }
    }
    LOCK();
    plVar4 = plVar5 + 1;
    lVar1 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return uVar7;
}

