
void FUN_1005fd170(long param_1,char *param_2)

{
  long lVar1;
  undefined8 local_60;
  QVariant local_58;
  QArrayData *local_48;
  QString local_40;
  QVariant local_38;
  undefined1 local_21;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  lVar1 = FUN_1005ec990(param_1 + 0x38);
  ResourceUtils::getOsIconPath
            (&local_48,(char)((uint)*(undefined4 *)(lVar1 + 0x38) >> 8),
             *(undefined4 *)(lVar1 + 0x38),10);
  QString::fromUtf8_helper((char *)&local_40,0x1def9df);
  QString::append(&local_40);
  QVariant::QVariant(&local_38,&local_40);
  QObject::setProperty(param_2,(QVariant *)"progressPixmap");
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005fd224;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005fd224:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005fd254;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005fd254:
  local_60 = *(undefined8 *)(param_1 + 0x40);
  QVariant::QVariant(&local_58,0x27,&local_60,1);
  QObject::setProperty(param_2,(QVariant *)"progressOperation");
  QVariant::~QVariant(&local_58);
  return;
}

