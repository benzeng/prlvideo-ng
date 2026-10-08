
bool FUN_100da0710(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  QArrayData *pQVar7;
  bool bVar8;
  QArrayData *local_8f0;
  QArrayData *local_8e8;
  QString local_8e0;
  QString local_8d8;
  QArrayData *local_8d0;
  QArrayData *local_8c8;
  QString local_8c0;
  QString local_8b8;
  undefined1 local_8a9;
  undefined1 local_8a8 [72];
  char local_860 [1040];
  char local_450 [1056];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_8b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_8c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_30 = lVar1;
  QString::toUtf8();
  iVar3 = _statfs_INODE64(local_8c8 + *(long *)(local_8c8 + 0x10),local_8a8);
  if (*(int *)local_8c8 != -1) {
    if (*(int *)local_8c8 != 0) {
      LOCK();
      *(int *)local_8c8 = *(int *)local_8c8 + -1;
      local_8a9 = *(int *)local_8c8 != 0;
      UNLOCK();
      if ((bool)local_8a9) goto LAB_100da07b0;
    }
    QArrayData::deallocate(local_8c8,1,8);
  }
LAB_100da07b0:
  if (iVar3 == 0) {
    sVar6 = _strlen(local_450);
    local_8d8.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(local_450,(int)sVar6);
    QString::operator=(&local_8b8,&local_8d8);
    if (*(int *)local_8d8.field0_0x0 != -1) {
      if (*(int *)local_8d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_8d8.field0_0x0 = *(int *)local_8d8.field0_0x0 + -1;
        local_8a9 = *(int *)local_8d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_8a9) goto LAB_100da089e;
      }
      QArrayData::deallocate((QArrayData *)local_8d8.field0_0x0,2,8);
    }
LAB_100da089e:
    sVar6 = _strlen(local_860);
    local_8e0.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(local_860,(int)sVar6);
    QString::operator=(&local_8c0,&local_8e0);
    if (*(int *)local_8e0.field0_0x0 != -1) {
      if (*(int *)local_8e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_8e0.field0_0x0 = *(int *)local_8e0.field0_0x0 + -1;
        local_8a9 = *(int *)local_8e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_8a9) goto LAB_100da090d;
      }
      QArrayData::deallocate((QArrayData *)local_8e0.field0_0x0,2,8);
    }
LAB_100da090d:
    cVar2 = QtPrivate::QStringList_contains(param_2,&local_8c0,1);
    if (cVar2 == '\0') {
      local_8e8 = (QArrayData *)QString::fromAscii_helper(":",1);
      iVar3 = QString::indexOf(&local_8b8,&local_8e8,0,1);
      bVar8 = true;
      if (iVar3 == -1) {
        local_8f0 = (QArrayData *)QString::fromAscii_helper("//",2);
        cVar2 = QString::startsWith(&local_8b8,&local_8f0,1);
        if (cVar2 == '\0') {
LAB_100da0a1e:
          iVar3 = QString::compare_helper
                            ((QArrayData *)
                             (local_8c0.field0_0x0 + *(long *)(local_8c0.field0_0x0 + 0x10)),
                             *(undefined4 *)(local_8c0.field0_0x0 + 4),"afpfs",0xffffffff,1);
          bVar8 = iVar3 == 0;
        }
        else {
          iVar3 = QString::compare_helper
                            ((QArrayData *)
                             (local_8c0.field0_0x0 + *(long *)(local_8c0.field0_0x0 + 0x10)),
                             *(undefined4 *)(local_8c0.field0_0x0 + 4),"smbfs",0xffffffff,1);
          bVar8 = true;
          if ((iVar3 != 0) &&
             (iVar3 = QString::compare_helper
                                ((QArrayData *)
                                 (local_8c0.field0_0x0 + *(long *)(local_8c0.field0_0x0 + 0x10)),
                                 *(undefined4 *)(local_8c0.field0_0x0 + 4),"cifs",0xffffffff,1),
             iVar3 != 0)) goto LAB_100da0a1e;
        }
        if (*(int *)local_8f0 != -1) {
          if (*(int *)local_8f0 != 0) {
            LOCK();
            *(int *)local_8f0 = *(int *)local_8f0 + -1;
            local_8a9 = *(int *)local_8f0 != 0;
            UNLOCK();
            if ((bool)local_8a9) goto LAB_100da0a87;
          }
          QArrayData::deallocate(local_8f0,2,8);
        }
      }
LAB_100da0a87:
      if (*(int *)local_8e8 != -1) {
        if (*(int *)local_8e8 != 0) {
          LOCK();
          *(int *)local_8e8 = *(int *)local_8e8 + -1;
          local_8a9 = *(int *)local_8e8 != 0;
          UNLOCK();
          if ((bool)local_8a9) goto LAB_100da0add;
        }
        QArrayData::deallocate(local_8e8,2,8);
      }
    }
    else {
      bVar8 = false;
    }
  }
  else {
    QString::toUtf8();
    pQVar7 = local_8d0 + *(long *)(local_8d0 + 0x10);
    piVar4 = ___error();
    iVar3 = *piVar4;
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    FUN_100df99c0("","cmn_utils",0,"[%s] statfs64 %s error: %d (%s)","isRemotePath",pQVar7,iVar3,
                  pcVar5);
    if (*(int *)local_8d0 == -1) {
      bVar8 = false;
    }
    else {
      if (*(int *)local_8d0 != 0) {
        LOCK();
        *(int *)local_8d0 = *(int *)local_8d0 + -1;
        local_8a9 = *(int *)local_8d0 != 0;
        UNLOCK();
        if ((bool)local_8a9) {
          bVar8 = false;
          goto LAB_100da0add;
        }
      }
      QArrayData::deallocate(local_8d0,1,8);
      bVar8 = false;
    }
  }
LAB_100da0add:
  if (*(int *)local_8c0.field0_0x0 != -1) {
    if (*(int *)local_8c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_8c0.field0_0x0 = *(int *)local_8c0.field0_0x0 + -1;
      local_8a9 = *(int *)local_8c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_8a9) goto LAB_100da0b19;
    }
    QArrayData::deallocate((QArrayData *)local_8c0.field0_0x0,2,8);
  }
LAB_100da0b19:
  if (*(int *)local_8b8.field0_0x0 != -1) {
    if (*(int *)local_8b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_8b8.field0_0x0 = *(int *)local_8b8.field0_0x0 + -1;
      local_8a9 = *(int *)local_8b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_8a9) goto LAB_100da0b55;
    }
    QArrayData::deallocate((QArrayData *)local_8b8.field0_0x0,2,8);
  }
LAB_100da0b55:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar8;
}

