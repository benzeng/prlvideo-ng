
QString * FUN_10019ca20(QString *param_1)

{
  undefined8 uVar1;
  long lVar2;
  QVariant local_38;
  QString local_28;
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001554a0(uVar1);
  if (lVar2 == 0) {
    return param_1;
  }
  uVar1 = FUN_10016f500(lVar2);
  FUN_10061abe0(&local_38,uVar1,0x12);
  QVariant::toString();
  QString::operator=(param_1,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10019caac;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_10019caac:
  QVariant::~QVariant(&local_38);
  return param_1;
}

