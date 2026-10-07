
undefined1 FUN_1006f9d10(QString *param_1)

{
  long lVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  size_t sVar5;
  int *piVar6;
  uint uVar7;
  QArrayData *local_a08;
  QArrayData *local_a00;
  QFileInfo local_9f8 [8];
  QString local_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined4 local_9c0;
  QFileInfo local_9b0 [8];
  QArrayData *local_9a8;
  QArrayData *local_9a0;
  undefined1 local_991;
  undefined1 local_990 [1112];
  char local_538 [1056];
  undefined1 local_118 [2];
  short local_116;
  undefined1 local_80 [80];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  QFileInfo::QFileInfo(local_9f8,param_1);
  QFileInfo::absolutePath();
  QFileInfo::QFileInfo(local_9b0,&local_9f0);
  QFileInfo::absoluteFilePath();
  QString::toUtf8();
  if ((1 < *(uint *)local_9a0) || (*(long *)(local_9a0 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_9a0,*(uint *)(local_9a0 + 4) + 1,*(uint *)(local_9a0 + 8) >> 0x1f);
  }
  iVar4 = _FSPathMakeRef(local_9a0 + *(long *)(local_9a0 + 0x10),local_80,0);
  if (*(int *)local_9a0 != -1) {
    if (*(int *)local_9a0 != 0) {
      LOCK();
      *(int *)local_9a0 = *(int *)local_9a0 + -1;
      local_991 = *(int *)local_9a0 != 0;
      UNLOCK();
      if ((bool)local_991) goto LAB_1006f9e0c;
    }
    QArrayData::deallocate(local_9a0,1,8);
  }
LAB_1006f9e0c:
  if (*(int *)local_9a8 != -1) {
    if (*(int *)local_9a8 != 0) {
      LOCK();
      *(int *)local_9a8 = *(int *)local_9a8 + -1;
      local_991 = *(int *)local_9a8 != 0;
      UNLOCK();
      if ((bool)local_991) goto LAB_1006f9e48;
    }
    QArrayData::deallocate(local_9a8,2,8);
  }
LAB_1006f9e48:
  QFileInfo::~QFileInfo(local_9b0);
  uVar7 = 0;
  if (iVar4 == 0) {
    sVar3 = _FSGetCatalogInfo(local_80,4,local_118,0,0,0);
    uVar7 = 0;
    if (sVar3 == 0) {
      local_9d8 = 0;
      uStack_9d0 = 0;
      local_9e8 = 0;
      uStack_9e0 = 0;
      local_9c0 = 0;
      local_9c8 = 0;
      iVar4 = _FSGetVolumeParms((int)local_116,&local_9e8,0x2c);
      uVar7 = 0;
      if (iVar4 == 0) {
        uVar7 = (uint)uStack_9d0;
      }
    }
  }
  if (*(int *)local_9f0.field0_0x0 != -1) {
    if (*(int *)local_9f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_9f0.field0_0x0 = *(int *)local_9f0.field0_0x0 + -1;
      local_991 = *(int *)local_9f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_991) goto LAB_1006f9f05;
    }
    QArrayData::deallocate((QArrayData *)local_9f0.field0_0x0,2,8);
  }
LAB_1006f9f05:
  QFileInfo::~QFileInfo(local_9f8);
  uVar2 = 1;
  if ((uVar7 & 0x200000) != 0) goto LAB_1006fa041;
  ___bzero(local_990,0x878);
  QString::toUtf8();
  iVar4 = _statfs_INODE64(local_a00 + *(long *)(local_a00 + 0x10),local_990);
  if (*(int *)local_a00 != -1) {
    if (*(int *)local_a00 != 0) {
      LOCK();
      *(int *)local_a00 = *(int *)local_a00 + -1;
      local_991 = *(int *)local_a00 != 0;
      UNLOCK();
      if ((bool)local_991) goto LAB_1006f9f93;
    }
    QArrayData::deallocate(local_a00,1,8);
  }
LAB_1006f9f93:
  if (iVar4 == 0) {
    sVar5 = _strlen(local_538);
    local_a08 = (QArrayData *)QString::fromLatin1_helper(local_538,(int)sVar5);
    uVar2 = FUN_1006f9a40(&local_a08);
    if (*(int *)local_a08 != -1) {
      if (*(int *)local_a08 != 0) {
        LOCK();
        *(int *)local_a08 = *(int *)local_a08 + -1;
        local_991 = *(int *)local_a08 != 0;
        UNLOCK();
        if ((bool)local_991) goto LAB_1006fa041;
      }
      QArrayData::deallocate(local_a08,2,8);
    }
  }
  else if (DAT_1011b55f8 < 3) {
    uVar2 = 0;
  }
  else {
    piVar6 = ___error();
    uVar2 = 0;
    FUN_1008e3970("","cmn_utils",3,"statfs() returns an error: %u",*piVar6);
  }
LAB_1006fa041:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

