
undefined4 FUN_1008b6f90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_48 [6];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  FUN_1008a1170(param_1,0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x20);
  uVar4 = FUN_100891760();
  iVar3 = FUN_10088ad10(uVar2,(long)iVar3,local_48,0,uVar4,0);
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar5 = local_48[0];
  }
  if (lVar1 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

