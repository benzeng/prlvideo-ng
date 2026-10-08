
void FUN_1003d5010(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  int iVar5;
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  if (lVar3 == 0) {
    return;
  }
  local_58.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("Settings.Startup.ExternalDeviceSystemName",0x29);
  puVar1 = PTR_s_VmConfig_1021f1e00;
  iVar5 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar5 = (int)sVar4;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  MappingHelpers::getValueByPath((QHash *)&local_50,param_3,&local_58);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d50d7;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003d50d7:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003d5107;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1003d5107:
  iVar5 = 0;
  do {
    iVar2 = QComboBox::count();
    if (iVar2 <= iVar5) {
      QComboBox::setCurrentIndex((int)lVar3);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return;
          }
          local_31 = 0;
        }
        QArrayData::deallocate(local_40,2,8);
      }
      return;
    }
    QComboBox::itemData((int)&local_78,(int)lVar3);
    QVariant::toString();
    FUN_1001aee90(&local_68,&local_40);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003d5120;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1003d5120:
    QVariant::~QVariant(&local_78);
    iVar5 = iVar5 + 1;
  } while( true );
}

