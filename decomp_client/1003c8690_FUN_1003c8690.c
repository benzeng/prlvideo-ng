
void FUN_1003c8690(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  QString *pQVar2;
  QString local_40;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar2 = (QString *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15e0);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("MAC",3);
  puVar1 = PTR_shared_null_1021e1288;
  MappingHelpers::getValueByName((QHash *)&local_38,param_3,&local_40);
  QVariant::toString();
  QLineEdit::setText(pQVar2);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003c872a;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1003c872a:
  QVariant::~QVariant(&local_38);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_19 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003c8763;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1003c8763:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

