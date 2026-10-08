
QVariant * FUN_100592bd0(QVariant *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 in_R8;
  undefined1 local_4a;
  undefined1 local_49;
  QArrayData *local_48;
  Data_conflict local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c0);
  if (lVar2 == 0) {
    (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
    (param_1->field0_0x0).field0_0x0.field7 = 0;
    return param_1;
  }
  local_38 = 0x80000000;
  local_40.field7 = 0;
  local_48 = (QArrayData *)QString::fromAscii_helper(".VerboseLogWasChanged",0x15);
  cVar1 = QString::endsWith(in_R8,&local_48,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100592c68;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100592c68:
  if (cVar1 == '\0') {
    local_4a = QAbstractButton::isChecked();
    QVariant::QVariant(param_1,1,&local_4a,0);
  }
  else {
    local_49 = 1;
    QVariant::QVariant(param_1,1,&local_49,0);
  }
  QVariant::~QVariant((QVariant *)&local_40);
  return param_1;
}

