
void FUN_10007a7c0(long param_1)

{
  undefined *self;
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QDir local_38 [8];
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  cVar1 = FUN_100075300();
  if (cVar1 == '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x38) = 1;
    return;
  }
  QDir::homePath();
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_19 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1db9cc3);
  QString::append(&local_50);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10007a84f;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10007a84f:
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSBundle_10226a988,PTR_s_mainBundle_102269b28);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_bundleIdentifier_102269eb8);
  if (self == (undefined *)0x0) {
    local_60 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_60,(ID)self,PTR_s_QStringWithString__1022696d0,uVar3);
  }
  local_48.field0_0x0 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_19 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_48);
  local_40.field0_0x0 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_19 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1db9ce5);
  QString::append(&local_40);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10007a93d;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10007a93d:
  QDir::QDir(local_38,&local_40);
  bVar2 = QDir::exists();
  *(byte *)(*(long *)(param_1 + 0x10) + 0x38) = bVar2 ^ 1;
  QDir::~QDir(local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10007a995;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10007a995:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10007a9c5;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10007a9c5:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10007a9f5;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10007a9f5:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_19 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10007aa25;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10007aa25:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

