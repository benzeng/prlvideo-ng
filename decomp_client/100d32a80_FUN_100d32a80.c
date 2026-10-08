
long FUN_100d32a80(undefined8 *param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  int iVar3;
  QArrayData *local_8c0;
  QArrayData *local_8b8;
  QArrayData *local_8b0;
  undefined1 local_8a1;
  uint local_8a0 [6];
  long local_888;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  QString::normalized(&local_8b0,param_1,0,0);
  QString::toUtf8();
  if (*(int *)local_8b0 != -1) {
    if (*(int *)local_8b0 != 0) {
      LOCK();
      *(int *)local_8b0 = *(int *)local_8b0 + -1;
      local_8a1 = *(int *)local_8b0 != 0;
      UNLOCK();
      if ((bool)local_8a1) goto LAB_100d32b02;
    }
    QArrayData::deallocate(local_8b0,2,8);
  }
LAB_100d32b02:
  if ((1 < *(uint *)local_8b8) || (*(long *)(local_8b8 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_8b8,*(uint *)(local_8b8 + 4) + 1,*(uint *)(local_8b8 + 8) >> 0x1f);
  }
  iVar3 = _statfs_INODE64(local_8b8 + *(long *)(local_8b8 + 0x10),local_8a0);
  if (*(int *)local_8b8 != -1) {
    if (*(int *)local_8b8 != 0) {
      LOCK();
      *(int *)local_8b8 = *(int *)local_8b8 + -1;
      local_8a1 = *(int *)local_8b8 != 0;
      UNLOCK();
      if ((bool)local_8a1) goto LAB_100d32b81;
    }
    QArrayData::deallocate(local_8b8,1,8);
  }
LAB_100d32b81:
  if (iVar3 == 0) {
    local_888 = (ulong)local_8a0[0] * local_888;
    goto LAB_100d32c86;
  }
  local_888 = 0;
  if (DAT_10230ffd0 < 1) goto LAB_100d32c86;
  pQVar2 = (QArrayData *)*param_1;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_8a1 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","VIUtils",1,"Warning : Failed to get fsstat/disk space for \'%s\'",
                local_8c0 + *(long *)(local_8c0 + 0x10));
  if (*(int *)local_8c0 != -1) {
    if (*(int *)local_8c0 != 0) {
      LOCK();
      *(int *)local_8c0 = *(int *)local_8c0 + -1;
      local_8a1 = *(int *)local_8c0 != 0;
      UNLOCK();
      if ((bool)local_8a1) goto LAB_100d32c34;
    }
    QArrayData::deallocate(local_8c0,1,8);
  }
LAB_100d32c34:
  local_888 = 0;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_8a1 = *(int *)pQVar2 != 0;
      UNLOCK();
      local_888 = 0;
      if ((bool)local_8a1) goto LAB_100d32c86;
    }
    QArrayData::deallocate(pQVar2,2,8);
    local_888 = 0;
  }
LAB_100d32c86:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_888;
}

