
undefined8 FUN_100069d60(undefined8 param_1)

{
  undefined *self;
  undefined8 uVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar1 = _NSTemporaryDirectory();
  if (self == (undefined *)0x0) {
    local_30 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_30,(ID)self,PTR_s_QStringWithString__1022696d0,uVar1);
  }
  FUN_100d95440(&local_38);
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_30;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_19 = *(int *)local_30 != 0;
    UNLOCK();
  }
  QString::append(&local_28);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100069dfe;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100069dfe:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100069e2e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100069e2e:
  FUN_100d95470(&local_40);
  QFile::copy(&local_40,&local_28);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100069e74;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100069e74:
  local_50 = (QArrayData *)QString::fromAscii_helper("open \"%1\"",9);
  QString::arg(&local_48,&local_50,&local_28,0,0x20);
  FUN_1000699b0(param_1,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100069ede;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100069ede:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100069f0e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100069f0e:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return 0;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return 0;
}

