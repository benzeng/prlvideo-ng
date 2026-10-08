
void FUN_100999460(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  QVariant local_48;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar2 = FUN_1009983a0(param_1);
  iVar1 = FUN_100990bd0(uVar2);
  if (iVar1 == 1) {
    QString::fromUtf8_helper((char *)&local_30,0x1dda177);
    QString::operator=(&local_38,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100999559;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  else {
    uVar2 = FUN_1009983a0(param_1);
    iVar1 = FUN_100990bd0(uVar2);
    if (iVar1 == 2) {
      QString::fromUtf8_helper((char *)&local_28,0x1e32fb4);
      QString::operator=(&local_38,&local_28);
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          local_19 = *(int *)local_28.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100999559;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
      }
    }
  }
LAB_100999559:
  QVariant::QVariant(&local_48,&local_38);
  QObject::setProperty(param_2,(QVariant *)"appExecuteMode");
  QVariant::~QVariant(&local_48);
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

