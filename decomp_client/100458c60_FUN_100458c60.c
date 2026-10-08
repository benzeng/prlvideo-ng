
void FUN_100458c60(long param_1,char *param_2)

{
  QVariant *pQVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  QVariant local_c0;
  QVariant local_b0;
  QVariant local_a0;
  QVariant local_90;
  QVariant local_80;
  QVariant local_70;
  undefined4 local_5c;
  QVariant local_58;
  QString local_48;
  QVariant local_40;
  undefined1 local_29;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  pQVar1 = *(QVariant **)PTR_DynamicPathPart_1021e1568;
  local_48.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x60);
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_29 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QVariant::QVariant(&local_40,&local_48);
  QObject::setProperty(param_2,pQVar1);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100458cf9;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100458cf9:
  puVar2 = PTR_s_deviceType_1021f1e48;
  uVar4 = FUN_10044e5b0(param_1);
  local_5c = FUN_1003b1cd0(uVar4);
  if (DAT_102273e70 == 0) {
    DAT_102273e70 = FUN_1003deea0("PRL_DEVICE_TYPE",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_58,DAT_102273e70,&local_5c,0);
  QObject::setProperty(param_2,(QVariant *)puVar2);
  QVariant::~QVariant(&local_58);
  QObject::property((char *)&local_70);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_70);
  if (cVar3 != '\0') {
    uVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1470);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    QWidget::setFixedWidth((int)uVar5);
  }
  QObject::property((char *)&local_80);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_80);
  if (cVar3 != '\0') {
    uVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c0);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
  }
  QObject::property((char *)&local_90);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_90);
  if (cVar3 != '\0') {
    uVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c0);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
  }
  QObject::property((char *)&local_a0);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_a0);
  if (cVar3 != '\0') {
    uVar5 = QMetaObject::cast((QObject *)&PTR_PTR_1021f9b10);
    *(undefined8 *)(param_1 + 0x58) = uVar5;
    QWidget::setFixedWidth((int)uVar5);
  }
  QObject::property((char *)&local_b0);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_b0);
  if (cVar3 != '\0') {
    uVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
  }
  QObject::property((char *)&local_c0);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_c0);
  if (cVar3 != '\0') {
    QWidget::setFixedWidth((int)param_2);
  }
  return;
}

