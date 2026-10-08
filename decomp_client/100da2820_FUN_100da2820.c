
undefined1 FUN_100da2820(void)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  size_t sVar5;
  QArrayData *local_8b8;
  QArrayData *local_8b0;
  undefined1 local_8a1;
  undefined1 local_8a0 [1112];
  char local_448 [1056];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  ___bzero(local_8a0,0x878);
  QString::toUtf8();
  iVar3 = _statfs_INODE64(local_8b0 + *(long *)(local_8b0 + 0x10),local_8a0);
  if (*(int *)local_8b0 != -1) {
    if (*(int *)local_8b0 != 0) {
      LOCK();
      *(int *)local_8b0 = *(int *)local_8b0 + -1;
      local_8a1 = *(int *)local_8b0 != 0;
      UNLOCK();
      if ((bool)local_8a1) goto LAB_100da28b5;
    }
    QArrayData::deallocate(local_8b0,1,8);
  }
LAB_100da28b5:
  if (iVar3 == 0) {
    sVar5 = _strlen(local_448);
    local_8b8 = (QArrayData *)QString::fromLatin1_helper(local_448,(int)sVar5);
    uVar2 = FUN_100da1c90(&local_8b8);
    if (*(int *)local_8b8 != -1) {
      if (*(int *)local_8b8 != 0) {
        LOCK();
        *(int *)local_8b8 = *(int *)local_8b8 + -1;
        local_8a1 = *(int *)local_8b8 != 0;
        UNLOCK();
        if ((bool)local_8a1) goto LAB_100da294d;
      }
      QArrayData::deallocate(local_8b8,2,8);
    }
  }
  else {
    piVar4 = ___error();
    uVar2 = 0;
    FUN_100df99c0("","cmn_utils",0,"statfs() returns an error: %u",*piVar4);
  }
LAB_100da294d:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

