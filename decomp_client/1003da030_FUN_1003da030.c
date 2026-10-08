
void FUN_1003da030(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QVariant local_80;
  QArrayData *local_70;
  QString local_68;
  QVariant local_60;
  QArrayData *local_50;
  QString local_48;
  QVariant local_40;
  undefined1 local_29;
  
  uVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  local_48.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("NetProfile.Type",0xf);
  puVar1 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  MappingHelpers::getValueByName((QHash *)&local_40,param_3,&local_48);
  iVar3 = QVariant::toInt((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003da0cc;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003da0cc:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003da0fc;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1003da0fc:
  local_68.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("NetProfile.Custom",0x11);
  local_70 = (QArrayData *)puVar1;
  MappingHelpers::getValueByName((QHash *)&local_60,param_3,&local_68);
  cVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_60);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003da16d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003da16d:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003da19d;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1003da19d:
  if (cVar2 != '\0') {
    iVar3 = -1;
  }
  QVariant::QVariant(&local_80,iVar3);
  iVar3 = QComboBox::findData(uVar4,&local_80,0x100,0x10);
  QVariant::~QVariant(&local_80);
  if (-1 < iVar3) {
    QComboBox::setCurrentIndex((int)uVar4);
  }
  return;
}

