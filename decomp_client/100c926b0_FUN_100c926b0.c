
undefined4 FUN_100c926b0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 local_48 [6];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar2 = *(long *)(*param_1 + 0x28);
  local_30 = lVar1;
  FUN_100c7c6f0(lVar2,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  iVar4 = *(int *)(lVar2 + 0x20);
  uVar5 = FUN_100c6ca00();
  iVar4 = FUN_100c65f10(uVar3,(long)iVar4,local_48,0,uVar5,0);
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

