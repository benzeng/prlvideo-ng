
void FUN_10040d530(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  QVariant local_c0;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QVariant local_88;
  int local_78;
  int local_74;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QVariant local_50;
  int *local_40;
  char local_32;
  undefined1 local_31;
  
  lVar4 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  uVar5 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  uVar5 = FUN_1001766b0(uVar5);
  uVar1 = FUN_100615d30(uVar5,1,&local_32);
  if (local_32 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"No license restriction PLRK_VM_CPU_LIMIT.");
    uVar1 = 10000;
  }
  uVar5 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  FUN_10015a340(uVar5);
  CHostHardwareInfoBase::getCpu();
  uVar2 = CHwCpu::getNumber();
  uVar5 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  FUN_10015a340(uVar5);
  CHostHardwareInfoBase::getCpu();
  iVar3 = CHwCpu::getVtxMode();
  iVar3 = FUN_10011d8c0(uVar2,iVar3 != 0,uVar1);
  local_40 = (int *)PTR_shared_null_1021e15e8;
  if (0 < iVar3) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      QString::number((int)&local_60,iVar6);
      local_74 = iVar6;
      QVariant::QVariant(&local_70,3,&local_74,0);
      FUN_10041e0f0(&local_58,&local_60,&local_70);
      FUN_10041e170(&local_40,&local_58);
      QVariant::~QVariant(&local_50);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10040d6b9;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_10040d6b9:
      QVariant::~QVariant(&local_70);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10040d6f1;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10040d6f1:
    } while (iVar6 < iVar3);
  }
  uVar5 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_90 = (QArrayData *)QString::fromAscii_helper("Hardware.Cpu.Number",0x13);
  FUN_1003e1800(&local_88,uVar5,&local_90);
  iVar6 = QVariant::toInt((bool *)&local_88);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10040d790;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10040d790:
  local_78 = iVar6;
  if (iVar6 <= iVar3) goto LAB_10040d877;
  QString::number((int)&local_b0,iVar6);
  QVariant::QVariant(&local_c0,2,&local_78,0);
  FUN_10041e0f0(&local_a8,&local_b0,&local_c0);
  FUN_10041e170(&local_40,&local_a8);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10040d835;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10040d835:
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10040d877;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10040d877:
  FUN_1003fa820();
  if ((iVar3 < local_78) &&
     (lVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8), lVar4 != 0)) {
    QComboBox::model();
    iVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e13f8);
    iVar6 = QComboBox::count();
    uVar5 = QStandardItemModel::item(iVar3,iVar6 + -1);
    QStandardItem::setFlags(uVar5,0);
  }
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_10041b480(&local_40,local_40);
  }
  return;
}

