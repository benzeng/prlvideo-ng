
undefined8
FUN_100cbe860(long param_1,long param_2,long *param_3,long *param_4,long param_5,long param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_a08 [2512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar2 = FUN_100c27a20();
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (long *)0x0)) ||
     (((param_4 == (long *)0x0 || (param_5 == 0)) || ((param_6 == 0 || (lVar2 == 0)))))) {
    uVar3 = 0;
    lVar5 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = *param_3;
    if (lVar5 == 0) {
      iVar1 = FUN_100c62190(local_a08,0x14);
      uVar3 = 0;
      lVar5 = 0;
      uVar6 = 0;
      if (iVar1 < 0) goto LAB_100cbe9e9;
      lVar5 = FUN_100c26e20(local_a08,0x14,0);
    }
    uVar3 = FUN_100cbcce0(lVar5,param_1,param_2);
    lVar4 = FUN_100c26720();
    *param_4 = lVar4;
    if (lVar4 == 0) {
      uVar6 = 0;
    }
    else {
      iVar1 = FUN_100c239a0(lVar4,param_6,uVar3,param_5);
      if (iVar1 == 0) {
        FUN_100c26640(*param_4);
        uVar6 = 0;
      }
      else {
        *param_3 = lVar5;
        uVar6 = 1;
      }
    }
  }
LAB_100cbe9e9:
  if (*param_3 != lVar5) {
    FUN_100c26640(lVar5);
  }
  FUN_100c26640(uVar3);
  FUN_100c27ab0(lVar2);
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

