
long FUN_100769600(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  QArrayData *local_8c0;
  QArrayData *local_8b8;
  QArrayData *local_8b0;
  undefined1 local_8a1;
  uint local_8a0 [6];
  long local_888;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  local_8b0 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
  cVar2 = QString::startsWith(param_1,&local_8b0,0);
  if (*(int *)local_8b0 != -1) {
    if (*(int *)local_8b0 != 0) {
      LOCK();
      *(int *)local_8b0 = *(int *)local_8b0 + -1;
      local_8a1 = *(int *)local_8b0 != 0;
      UNLOCK();
      if ((bool)local_8a1) goto LAB_100769688;
    }
    QArrayData::deallocate(local_8b0,2,8);
  }
LAB_100769688:
  lVar4 = -1;
  if (cVar2 != '\0') goto LAB_10076975f;
  QString::toUtf8();
  if (*(int *)local_8b8 != -1) {
    if (*(int *)local_8b8 != 0) {
      LOCK();
      *(int *)local_8b8 = *(int *)local_8b8 + -1;
      local_8a1 = *(int *)local_8b8 != 0;
      UNLOCK();
      if ((bool)local_8a1) goto LAB_1007696e2;
    }
    QArrayData::deallocate(local_8b8,1,8);
  }
LAB_1007696e2:
  QString::toUtf8();
  iVar3 = _statfs_INODE64(local_8c0 + *(long *)(local_8c0 + 0x10),local_8a0);
  if (*(int *)local_8c0 != -1) {
    if (*(int *)local_8c0 != 0) {
      LOCK();
      *(int *)local_8c0 = *(int *)local_8c0 + -1;
      local_8a1 = *(int *)local_8c0 != 0;
      UNLOCK();
      if ((bool)local_8a1) goto LAB_100769746;
    }
    QArrayData::deallocate(local_8c0,1,8);
  }
LAB_100769746:
  lVar4 = -1;
  if (iVar3 == 0) {
    lVar4 = (ulong)local_8a0[0] * local_888;
  }
LAB_10076975f:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

