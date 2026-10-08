
int FUN_100db9720(void)

{
  long lVar1;
  long lVar2;
  QArrayData *pQVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  int *piVar8;
  QArrayData *local_8e0;
  QArrayData *local_8d8;
  QArrayData *local_8d0;
  QArrayData *local_8c8;
  QArrayData *local_8c0;
  undefined1 local_8b1;
  undefined1 local_8b0 [72];
  char local_868 [2096];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  ___bzero(local_8b0,0x878);
  QString::toUtf8();
  if ((1 < *(uint *)local_8c0) || (*(long *)(local_8c0 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_8c0,*(uint *)(local_8c0 + 4) + 1,*(uint *)(local_8c0 + 8) >> 0x1f);
  }
  iVar4 = _statfs_INODE64(local_8c0 + *(long *)(local_8c0 + 0x10),local_8b0);
  if (*(int *)local_8c0 != -1) {
    if (*(int *)local_8c0 != 0) {
      LOCK();
      *(int *)local_8c0 = *(int *)local_8c0 + -1;
      local_8b1 = *(int *)local_8c0 != 0;
      UNLOCK();
      if ((bool)local_8b1) goto LAB_100db97e5;
    }
    QArrayData::deallocate(local_8c0,1,8);
  }
LAB_100db97e5:
  if (iVar4 < 0) {
    QString::toUtf8();
    if ((1 < *(uint *)local_8c8) || (*(long *)(local_8c8 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_8c8,*(uint *)(local_8c8 + 4) + 1,*(uint *)(local_8c8 + 8) >> 0x1f);
    }
    pQVar3 = local_8c8;
    lVar2 = *(long *)(local_8c8 + 0x10);
    piVar8 = ___error();
    iVar4 = 0;
    FUN_100df99c0("","HostUtils",0,"statfs(%s) failed %u",pQVar3 + lVar2,*piVar8);
    if (*(int *)local_8c8 != -1) {
      if (*(int *)local_8c8 != 0) {
        LOCK();
        *(int *)local_8c8 = *(int *)local_8c8 + -1;
        local_8b1 = *(int *)local_8c8 != 0;
        UNLOCK();
        if ((bool)local_8b1) goto LAB_100db9a2c;
      }
      QArrayData::deallocate(local_8c8,1,8);
    }
    goto LAB_100db9a2c;
  }
  iVar4 = _strncmp(local_868,"hfs",0xf);
  iVar5 = _strncmp(local_868,"smbfs",0xf);
  iVar6 = 0x12;
  if (iVar5 != 0) {
    iVar6 = (uint)(iVar4 == 0) << 2;
  }
  iVar5 = _strncmp(local_868,"msdos",0xf);
  iVar4 = 2;
  if (iVar5 != 0) {
    iVar4 = iVar6;
  }
  sVar7 = _strlen(local_868);
  local_8d8 = (QArrayData *)QString::fromAscii_helper(local_868,(int)sVar7);
  QString::toLower();
  local_8e0 = (QArrayData *)QString::fromAscii_helper("ntfs",4);
  iVar6 = QString::indexOf(&local_8d0,&local_8e0,0,1);
  if (*(int *)local_8e0 != -1) {
    if (*(int *)local_8e0 != 0) {
      LOCK();
      *(int *)local_8e0 = *(int *)local_8e0 + -1;
      local_8b1 = *(int *)local_8e0 != 0;
      UNLOCK();
      if ((bool)local_8b1) goto LAB_100db98f0;
    }
    QArrayData::deallocate(local_8e0,2,8);
  }
LAB_100db98f0:
  if (*(int *)local_8d0 != -1) {
    if (*(int *)local_8d0 != 0) {
      LOCK();
      *(int *)local_8d0 = *(int *)local_8d0 + -1;
      local_8b1 = *(int *)local_8d0 != 0;
      UNLOCK();
      if ((bool)local_8b1) goto LAB_100db992c;
    }
    QArrayData::deallocate(local_8d0,2,8);
  }
LAB_100db992c:
  if (*(int *)local_8d8 != -1) {
    if (*(int *)local_8d8 != 0) {
      LOCK();
      *(int *)local_8d8 = *(int *)local_8d8 + -1;
      local_8b1 = *(int *)local_8d8 != 0;
      UNLOCK();
      if ((bool)local_8b1) goto LAB_100db9968;
    }
    QArrayData::deallocate(local_8d8,2,8);
  }
LAB_100db9968:
  if (iVar6 != -1) {
    iVar4 = 3;
  }
LAB_100db9a2c:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

