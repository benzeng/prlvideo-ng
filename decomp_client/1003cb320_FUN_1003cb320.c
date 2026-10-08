
void FUN_1003cb320(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  QVariant local_80;
  QArrayData *local_70;
  QString local_68;
  QVariant local_60;
  QArrayData *local_50;
  QString local_48;
  QVariant local_40;
  undefined1 local_29;
  
  uVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  local_48.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("MouseSync.Enabled",0x11);
  puVar2 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  MappingHelpers::getValueByName((QHash *)&local_40,param_3,&local_48);
  bVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003cb3ba;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003cb3ba:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003cb3ea;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1003cb3ea:
  local_68.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("SmartMouse.Enabled",0x12);
  local_70 = (QArrayData *)puVar2;
  MappingHelpers::getValueByName((QHash *)&local_60,param_3,&local_68);
  cVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_60);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003cb45b;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003cb45b:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003cb48b;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1003cb48b:
  uVar1 = bVar3 + 1;
  if (cVar4 == '\0') {
    uVar1 = (uint)bVar3;
  }
  QVariant::QVariant(&local_80,uVar1);
  QComboBox::findData(uVar5,&local_80,0x100,0x10);
  QComboBox::setCurrentIndex((int)uVar5);
  QVariant::~QVariant(&local_80);
  return;
}

