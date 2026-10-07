
undefined4 FUN_1008b6ef0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 local_48 [6];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *(long *)(*param_1 + 0x18);
  local_30 = lVar1;
  FUN_1008a1170(lVar2,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  iVar4 = *(int *)(lVar2 + 0x20);
  uVar5 = FUN_100891760();
  iVar4 = FUN_10088ad10(uVar3,(long)iVar4,local_48,0,uVar5,0);
  uVar6 = 0;
  if (iVar4 != 0) {
    uVar6 = local_48[0];
  }
  if (lVar1 == local_30) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

