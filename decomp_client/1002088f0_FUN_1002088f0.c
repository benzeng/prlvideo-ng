
void FUN_1002088f0(long param_1)

{
  QString QVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  QString QVar7;
  QFileInfo local_a8 [8];
  QDir local_a0 [8];
  QString local_98;
  QFileInfo local_90 [8];
  QString local_88;
  QFileInfo local_80 [8];
  QString local_78;
  QArrayData *local_70;
  QFileInfo local_68 [8];
  QDir local_60 [8];
  QString local_58;
  QFileInfo local_50 [8];
  QString local_48;
  QFileInfo local_40 [8];
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  iVar3 = CVmDevice::getEmulatedType();
  if (iVar3 != 1) {
    return;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    return;
  }
  uVar4 = FUN_100152280();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_100188480(&local_30,uVar6);
  lVar5 = FUN_1001547d0(uVar4,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002089ca;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002089ca:
  if (lVar5 == 0) {
    return;
  }
  iVar3 = FUN_10015aae0(lVar5);
  if (iVar3 == 0) {
    return;
  }
  CVmDevice::getUserFriendlyName();
  QFileInfo::QFileInfo(local_40,&local_38);
  cVar2 = QFileInfo::isDir();
  if (cVar2 == '\0') {
    QFileInfo::QFileInfo(local_50,&local_38);
    QFileInfo::fileName();
    QFileInfo::QFileInfo(local_68,&local_38);
    QFileInfo::dir();
    QDir::dirName();
    cVar2 = operator==(&local_48,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100208aa8;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100208aa8:
    QDir::~QDir(local_60);
    QFileInfo::~QFileInfo(local_68);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100208aea;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100208aea:
    QFileInfo::~QFileInfo(local_50);
  }
  else {
    cVar2 = '\0';
  }
  QFileInfo::~QFileInfo(local_40);
  if (cVar2 != '\0') {
    FUN_100109830();
    QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0,
       *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      QVar7.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x20);
    }
    local_70 = (QArrayData *)local_38.field0_0x0;
    if (1 < *(int *)local_38.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
    }
    CVmDevice::setUserFriendlyName(QVar7);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100208b73;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_100208b73:
  CVmDevice::getSystemName();
  QString::operator=(&local_38,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_21 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100208bd0;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100208bd0:
  QFileInfo::QFileInfo(local_80,&local_38);
  cVar2 = QFileInfo::isDir();
  if (cVar2 == '\0') {
    QFileInfo::QFileInfo(local_90,&local_38);
    QFileInfo::fileName();
    QFileInfo::QFileInfo(local_a8,&local_38);
    QFileInfo::dir();
    QDir::dirName();
    cVar2 = operator==(&local_88,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_21 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100208c91;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_100208c91:
    QDir::~QDir(local_a0);
    QFileInfo::~QFileInfo(local_a8);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_21 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100208cd9;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_100208cd9:
    QFileInfo::~QFileInfo(local_90);
  }
  else {
    cVar2 = '\0';
  }
  QFileInfo::~QFileInfo(local_80);
  if (cVar2 != '\0') {
    FUN_100109830();
    QVar1.field0_0x0 = local_38.field0_0x0;
    QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0,
       *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      QVar7.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x20);
    }
    if (1 < *(int *)local_38.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
    }
    CVmDevice::setSystemName(QVar7);
    if (*(int *)QVar1.field0_0x0 != -1) {
      if (*(int *)QVar1.field0_0x0 != 0) {
        LOCK();
        *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
        local_21 = *(int *)QVar1.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100208d71;
      }
      QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
    }
  }
LAB_100208d71:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

