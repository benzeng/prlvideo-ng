
bool FUN_1004e2f60(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char local_891;
  undefined1 local_890 [2168];
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_18 = lVar1;
  if (*(int *)(param_1 + 0x10) == -1) {
    iVar2 = _statfs_INODE64(*(long *)(param_1 + 8) + *(long *)(*(long *)(param_1 + 8) + 0x10),
                            local_890);
  }
  else {
    iVar2 = _fstatfs_INODE64(*(int *)(param_1 + 0x10),local_890);
  }
  iVar3 = -1;
  if (iVar2 == 0) {
    iVar3 = FUN_1004e56f0(local_890,&local_891);
  }
  if (lVar1 == local_18) {
    return iVar3 != 0 || local_891 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

