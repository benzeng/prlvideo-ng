
void FUN_100592d20(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  long lVar2;
  QString local_38;
  QVariant local_30;
  undefined1 local_19;
  
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c0);
  if (lVar2 == 0) {
    return;
  }
  local_38.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(".VerboseLogEnabled",0x12);
  puVar1 = PTR_shared_null_1021e1288;
  MappingHelpers::getValueByName((QHash *)&local_30,param_3,&local_38);
  QVariant::toBool();
  QAbstractButton::setChecked(SUB81(lVar2,0));
  QVariant::~QVariant(&local_30);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_19 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100592dc7;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_100592dc7:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

