
undefined8
FUN_1008e2020(long param_1,long param_2,long *param_3,long *param_4,long param_5,long param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_a08 [2512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = FUN_10084c820();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (long *)0x0)) ||
     (((param_4 == (long *)0x0 || (param_5 == 0)) || ((param_6 == 0 || (lVar2 == 0)))))) {
    uVar3 = 0;
    lVar5 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = *param_3;
    if (lVar5 == 0) {
      iVar1 = FUN_100886f90(local_a08,0x14);
      uVar3 = 0;
      lVar5 = 0;
      uVar6 = 0;
      if (iVar1 < 0) goto LAB_1008e21a9;
      lVar5 = FUN_10084bc20(local_a08,0x14,0);
    }
    uVar3 = FUN_1008e04a0(lVar5,param_1,param_2);
    lVar4 = FUN_10084b520();
    *param_4 = lVar4;
    if (lVar4 == 0) {
      uVar6 = 0;
    }
    else {
      iVar1 = FUN_1008487a0(lVar4,param_6,uVar3,param_5);
      if (iVar1 == 0) {
        FUN_10084b440(*param_4);
        uVar6 = 0;
      }
      else {
        *param_3 = lVar5;
        uVar6 = 1;
      }
    }
  }
LAB_1008e21a9:
  if (*param_3 != lVar5) {
    FUN_10084b440(lVar5);
  }
  FUN_10084b440(uVar3);
  FUN_10084c8b0(lVar2);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

