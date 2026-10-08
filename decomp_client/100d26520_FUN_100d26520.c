
undefined1 FUN_100d26520(QString *param_1)

{
  char cVar1;
  undefined1 uVar2;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QString local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_20 = (QArrayData *)QString::fromAscii_helper("passthrough",0xb);
  cVar1 = QDomElement::hasAttribute(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
    goto LAB_100d26679;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper("passthrough",0xb);
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  QDomElement::attribute(&local_28,param_1);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("true",4);
  uVar2 = operator==(&local_28,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_11 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d265dd;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d265dd:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d2660d;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_100d2660d:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d2663d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d2663d:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100d26679;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d26679:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar2;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar2;
}

