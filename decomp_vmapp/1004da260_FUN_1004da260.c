
undefined1 FUN_1004da260(void)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  long lVar4;
  undefined1 uVar5;
  QString local_148;
  undefined1 local_139;
  char local_138 [9];
  char acStack_12f [263];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  QString::toUtf8_helper(&local_148);
  sVar3 = _readlink((char *)(local_148.field0_0x0 + *(long *)(local_148.field0_0x0 + 0x10)),
                    local_138,0x109);
  if (*(int *)local_148.field0_0x0 != -1) {
    if (*(int *)local_148.field0_0x0 != 0) {
      LOCK();
      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
      local_139 = *(int *)local_148.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_139) goto LAB_1004da2eb;
    }
    QArrayData::deallocate((QArrayData *)local_148.field0_0x0,1,8);
  }
LAB_1004da2eb:
  uVar5 = 1;
  if (9 < (int)sVar3) {
    iVar2 = _memcmp(local_138,"/Volumes/",9);
    if (iVar2 == 0) {
      lVar4 = 9;
      do {
        if (local_138[lVar4] == '/') goto LAB_1004da338;
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)sVar3);
      uVar5 = 0;
    }
  }
LAB_1004da338:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

