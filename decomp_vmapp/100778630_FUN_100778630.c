
undefined4 FUN_100778630(QString *param_1,undefined8 param_2)

{
  char cVar1;
  uid_t uVar2;
  gid_t gVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QFileInfo local_30 [15];
  undefined1 local_21;
  
  QFileInfo::QFileInfo(local_30,param_1);
  uVar2 = QFileInfo::ownerId();
  gVar3 = QFileInfo::groupId();
  uVar4 = QFileInfo::permissions();
  cVar1 = QFile::setPermissions(param_2,uVar4);
  if (cVar1 == '\0') {
    piVar6 = ___error();
    iVar5 = *piVar6;
    QString::toUtf8();
    if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f)
      ;
    }
    FUN_1008e3970("","HostUtils",0,"Error [%u] setting permissions to the file: %s",iVar5,
                  local_38 + *(long *)(local_38 + 0x10));
    uVar4 = 0x80000009;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100778846;
      }
      QArrayData::deallocate(local_38,1,8);
    }
    goto LAB_100778846;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  iVar5 = _chown((char *)(local_40 + *(long *)(local_40 + 0x10)),uVar2,gVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007786f8;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1007786f8:
  uVar4 = 0;
  if (iVar5 < 0) {
    piVar6 = ___error();
    iVar5 = *piVar6;
    QString::toUtf8();
    if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f)
      ;
    }
    FUN_1008e3970("","HostUtils",0,"Error [%u] setting UID&GID to the file: %s",iVar5,
                  local_48 + *(long *)(local_48 + 0x10));
    uVar4 = 0x80000009;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100778846;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
LAB_100778846:
  QFileInfo::~QFileInfo(local_30);
  return uVar4;
}

