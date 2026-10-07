
void FUN_1002adb60(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_ac;
  undefined4 local_a8 [34];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_ac = 0;
  local_20 = lVar1;
  if (*(int *)(param_1 + 0x860) == -1) {
    iVar2 = FUN_1002afda0(param_1,local_a8,0x20,&local_ac);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = local_a8[local_ac];
    }
    *(undefined4 *)(param_1 + 0x860) = uVar3;
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

