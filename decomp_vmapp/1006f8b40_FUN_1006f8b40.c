
byte FUN_1006f8b40(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  byte bVar6;
  QArrayData *local_8b8;
  QArrayData *local_8b0;
  undefined1 local_8a0 [66];
  byte local_85e;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  QString::toUtf8();
  iVar3 = _statfs_INODE64(local_8b0 + *(long *)(local_8b0 + 0x10),local_8a0);
  if (*(int *)local_8b0 != -1) {
    if (*(int *)local_8b0 != 0) {
      LOCK();
      *(int *)local_8b0 = *(int *)local_8b0 + -1;
      UNLOCK();
      if (*(int *)local_8b0 != 0) goto LAB_1006f8bc5;
    }
    QArrayData::deallocate(local_8b0,1,8);
  }
LAB_1006f8bc5:
  if (iVar3 == 0) {
    bVar6 = (local_85e & 0x20) >> 5;
  }
  else {
    QString::toUtf8();
    lVar2 = *(long *)(local_8b8 + 0x10);
    piVar4 = ___error();
    iVar3 = *piVar4;
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    FUN_1008e3970("","cmn_utils",0,"[%s] statfs64 %s error: %d (%s)","isIgnoreOwnership",
                  local_8b8 + lVar2,iVar3,pcVar5);
    if (*(int *)local_8b8 == -1) {
      bVar6 = 0;
    }
    else {
      if (*(int *)local_8b8 != 0) {
        LOCK();
        *(int *)local_8b8 = *(int *)local_8b8 + -1;
        UNLOCK();
        if (*(int *)local_8b8 != 0) {
          bVar6 = 0;
          goto LAB_1006f8c7f;
        }
      }
      QArrayData::deallocate(local_8b8,1,8);
      bVar6 = 0;
    }
  }
LAB_1006f8c7f:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar6;
}

