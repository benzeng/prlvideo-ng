
undefined8 FUN_1004e2ff0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_898 [2168];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  iVar2 = _statfs_INODE64(param_1,local_898);
  uVar3 = 0xffffffff;
  if (iVar2 == 0) {
    uVar3 = FUN_1004e56f0(local_898,param_2);
  }
  if (lVar1 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

