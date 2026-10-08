
void FUN_1003d3a70(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  long lVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  int iVar5;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  if (lVar2 == 0) {
    return;
  }
  local_58.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("Settings.Startup.WindowMode",0x1b);
  puVar1 = PTR_s_VmConfig_1021f1e00;
  iVar5 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar5 = (int)sVar3;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  MappingHelpers::getValueByPath((QHash *)&local_50,param_3,&local_58);
  QVariant::toString();
  QVariant::QVariant(&local_38,10,&local_40,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d3b3d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003d3b3d:
  QVariant::~QVariant(&local_50);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d3b76;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1003d3b76:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003d3ba6;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1003d3ba6:
  QComboBox::findData(lVar2,&local_38,0x100,0x10);
  QComboBox::setCurrentIndex((int)lVar2);
  QVariant::~QVariant(&local_38);
  return;
}

