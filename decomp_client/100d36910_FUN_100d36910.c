
undefined1 FUN_100d36910(undefined8 param_1,QString *param_2)

{
  long lVar1;
  long lVar2;
  QArrayData *pQVar3;
  int iVar4;
  int *piVar5;
  undefined1 uVar6;
  QString local_8d0;
  QArrayData *local_8c8;
  QArrayData *local_8c0;
  QArrayData *local_8b8;
  undefined1 local_8a9;
  undefined1 local_8a8 [88];
  char local_850 [2080];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  QString::normalized(&local_8b8,param_1,0,0);
  QString::toUtf8();
  if (*(int *)local_8b8 != -1) {
    if (*(int *)local_8b8 != 0) {
      LOCK();
      *(int *)local_8b8 = *(int *)local_8b8 + -1;
      local_8a9 = *(int *)local_8b8 != 0;
      UNLOCK();
      if ((bool)local_8a9) goto LAB_100d36998;
    }
    QArrayData::deallocate(local_8b8,2,8);
  }
LAB_100d36998:
  if ((1 < *(uint *)local_8c0) || (*(long *)(local_8c0 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_8c0,*(uint *)(local_8c0 + 4) + 1,*(uint *)(local_8c0 + 8) >> 0x1f);
  }
  iVar4 = _statfs_INODE64(local_8c0 + *(long *)(local_8c0 + 0x10),local_8a8);
  if (*(int *)local_8c0 != -1) {
    if (*(int *)local_8c0 != 0) {
      LOCK();
      *(int *)local_8c0 = *(int *)local_8c0 + -1;
      local_8a9 = *(int *)local_8c0 != 0;
      UNLOCK();
      if ((bool)local_8a9) goto LAB_100d36a17;
    }
    QArrayData::deallocate(local_8c0,1,8);
  }
LAB_100d36a17:
  if (iVar4 == 0) {
    _strlen(local_850);
    QString::fromUtf8_helper((char *)&local_8d0,(int)local_850);
    QString::operator=(param_2,&local_8d0);
    uVar6 = 1;
    if (*(int *)local_8d0.field0_0x0 != -1) {
      if (*(int *)local_8d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_8d0.field0_0x0 = *(int *)local_8d0.field0_0x0 + -1;
        local_8a9 = *(int *)local_8d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_8a9) goto LAB_100d36b24;
      }
      QArrayData::deallocate((QArrayData *)local_8d0.field0_0x0,2,8);
    }
    goto LAB_100d36b24;
  }
  if (0 < DAT_10230ffd0) {
    QString::toUtf8();
    pQVar3 = local_8c8;
    lVar2 = *(long *)(local_8c8 + 0x10);
    piVar5 = ___error();
    FUN_100df99c0("","VIUtils",1,"Failed to get the mount point for \'%s\', 0x%x",pQVar3 + lVar2,
                  *piVar5);
    if (*(int *)local_8c8 != -1) {
      if (*(int *)local_8c8 != 0) {
        LOCK();
        *(int *)local_8c8 = *(int *)local_8c8 + -1;
        local_8a9 = *(int *)local_8c8 != 0;
        UNLOCK();
        if ((bool)local_8a9) goto LAB_100d36ab4;
      }
      QArrayData::deallocate(local_8c8,1,8);
    }
  }
LAB_100d36ab4:
  uVar6 = 0;
LAB_100d36b24:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

