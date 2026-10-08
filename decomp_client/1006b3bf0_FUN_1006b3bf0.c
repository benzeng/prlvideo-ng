
void FUN_1006b3bf0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  QString QVar3;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QUrl local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  if (*(int *)(param_1 + 0x10) != 0x82) {
    if (*(int *)(param_1 + 0x10) != 0x81) {
      return;
    }
    local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_10018c280(uVar2);
    uVar2 = FUN_100319bf0(uVar2);
    local_30 = (QArrayData *)QString::fromAscii_helper("parallels.Username.guest.cross",0x1e);
    uVar2 = FUN_10032d8b0(uVar2,&local_30);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006b3d8e;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_1006b3d8e:
    iVar1 = FUN_10032c830(uVar2);
    if (iVar1 == 1) {
      FUN_10032d120(&local_38,uVar2,0);
      QString::operator=(&local_28,&local_38);
      if (*(int *)local_38.field0_0x0 != -1) {
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          local_19 = *(int *)local_38.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1006b3de6;
        }
        QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      }
    }
LAB_1006b3de6:
    if (*(int *)(local_28.field0_0x0 + 4) != 0) {
      QString::fromUtf8_helper((char *)&local_40,0x1e0f91f);
      QString::append(&local_40);
      QString::operator=(&local_28,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_19 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1006b3e4f;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
LAB_1006b3e4f:
    local_58 = (QArrayData *)QString::fromAscii_helper("ssh %1%2",8);
    QHostAddress::toString();
    QString::arg(&local_50,&local_58,&local_60,0,0x20);
    QString::arg(&local_48,&local_50,&local_28,0,0x20);
    MacUtils::execInTerminal(&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_19 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006b3edf;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1006b3edf:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_19 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006b3f0f;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1006b3f0f:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_19 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006b3f3f;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1006b3f3f:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_19 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006b3f6f;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1006b3f6f:
    if (*(int *)local_28.field0_0x0 == -1) {
      return;
    }
    QVar3.field0_0x0 = local_28.field0_0x0;
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    goto LAB_1006b3f90;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("http://%1",9);
  QHostAddress::toString();
  QString::arg(&local_70,&local_78,&local_80,0,0x20);
  QUrl::QUrl(local_68,&local_70,0);
  QDesktopServices::openUrl(local_68);
  QUrl::~QUrl(local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006b3c9b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006b3c9b:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006b3ccb;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006b3ccb:
  if (*(int *)local_78 == -1) {
    return;
  }
  QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
  if (*(int *)local_78 != 0) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + -1;
    UNLOCK();
    if (*(int *)local_78 != 0) {
      return;
    }
    local_19 = 0;
  }
LAB_1006b3f90:
  QArrayData::deallocate((QArrayData *)QVar3.field0_0x0,2,8);
  return;
}

