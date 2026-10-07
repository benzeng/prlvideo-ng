
void FUN_1004d7b60(long param_1)

{
  ulong uVar1;
  uid_t uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  void *local_58;
  undefined1 local_38 [8];
  
  uVar2 = _getuid();
  *(uid_t *)(param_1 + 0x68) = uVar2;
  iVar3 = _getgroups(0,0);
  local_58 = (void *)0x0;
  if (iVar3 != 0) {
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar1 = (long)iVar3 * 4;
    local_58 = operator_new(uVar1);
    ___bzero(local_58,uVar1);
  }
  iVar4 = _getgroups(iVar3,(gid_t)local_58);
  if ((iVar4 != -1) && (0 < iVar3)) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      FUN_1004dc0c0(param_1 + 0x70,(long)local_58 + lVar6,local_38);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 4;
    } while (lVar5 < iVar3);
  }
  if (local_58 != (void *)0x0) {
    operator_delete(local_58);
  }
  return;
}

