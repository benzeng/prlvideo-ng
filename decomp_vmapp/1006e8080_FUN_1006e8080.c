
QString * FUN_1006e8080(QString *param_1,undefined8 param_2,QString *param_3,QString *param_4,
                       undefined8 param_5,char param_6,ulong param_7)

{
  char cVar1;
  ulong uVar2;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (*(int *)(param_4->field0_0x0 + 4) != 0) {
    QString::operator=(param_1,param_4);
    FUN_1007d7680(param_1);
    return param_1;
  }
  uVar2 = FUN_100769470(param_3);
  if ((param_7 <= uVar2) && (param_6 == '\0')) {
    QString::operator=(param_1,param_3);
    return param_1;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  QString::arg(&local_48,&local_50,param_5,0,0x20);
  QString::arg(&local_40,&local_48,param_2,0,0x20);
  QString::operator=(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e816f;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006e816f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e819f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006e819f:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e81cf;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006e81cf:
  QDir::QDir((QDir *)&local_58,param_1);
  cVar1 = QDir::exists();
  if (cVar1 == '\0') {
    QDir::mkdir(&local_58);
  }
  QDir::~QDir((QDir *)&local_58);
  return param_1;
}

