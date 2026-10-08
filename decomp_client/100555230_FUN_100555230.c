
void FUN_100555230(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  QStandardItem *this;
  int iVar8;
  long lVar9;
  long lVar10;
  QStandardItem *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  QVariant local_e8;
  QString local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  QString local_b8;
  QVariant local_b0;
  QString local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  QVariant local_80;
  QString local_70;
  Data *local_68;
  QStandardItem *local_60;
  Data *local_58;
  QStandardItem *local_50;
  Data *local_48;
  QStandardItem *local_40;
  undefined1 local_31;
  
  if (param_2 < 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x60) + 0xc) - *(int *)(*(long *)(param_1 + 0x60) + 8) <= param_2
     ) {
    return;
  }
  QComboBox::model();
  plVar7 = (long *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e13f8);
  if (plVar7 == (long *)0x0) {
    return;
  }
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),0));
  QStandardItemModel::clear();
  lVar9 = *(long *)(param_1 + 0x60);
  iVar1 = *(int *)(lVar9 + 0xc);
  iVar2 = *(int *)(lVar9 + 8);
  local_108 = operator_new(0x10);
  iVar8 = (int)plVar7;
  if (iVar2 < iVar1) {
    lVar10 = 0;
    do {
      FUN_10071abd0(&local_70,*(undefined8 *)(lVar9 + 0x10 + (*(int *)(lVar9 + 8) + lVar10) * 8));
      QStandardItem::QStandardItem(local_108,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10055534a;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_10055534a:
      pcVar3 = *(code **)(*(long *)local_108 + 0x18);
      QVariant::QVariant(&local_80,(int)lVar10);
      (*pcVar3)(local_108,&local_80,0x100);
      QVariant::~QVariant(&local_80);
      local_98 = 0xffffffff;
      local_94 = 0xffffffff;
      local_88 = 0;
      local_90 = 0;
      uVar6 = (**(code **)(*plVar7 + 0x78))(plVar7,&local_98);
      local_60 = local_108;
      local_68 = (Data *)PTR_shared_null_1021e15e8;
      FUN_10041a7f0(&local_68,&local_60);
      QStandardItemModel::insertRow(iVar8,(QList *)(ulong)uVar6);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10055540e;
        }
        QListData::dispose(local_68);
      }
LAB_10055540e:
      lVar10 = lVar10 + 1;
      lVar9 = *(long *)(param_1 + 0x60);
      iVar1 = *(int *)(lVar9 + 0xc);
      iVar2 = *(int *)(lVar9 + 8);
      local_108 = operator_new(0x10);
    } while (lVar10 < (long)iVar1 - (long)iVar2);
  }
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  QStandardItem::QStandardItem(local_108,&local_a0);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005554af;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1005554af:
  pcVar3 = *(code **)(*(long *)local_108 + 0x18);
  local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromLatin1_helper("separator",9)
  ;
  QVariant::QVariant(&local_b0,&local_b8);
  (*pcVar3)(local_108,&local_b0,0xc);
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055553c;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_10055553c:
  uVar6 = QStandardItem::flags();
  QStandardItem::setFlags(local_108,uVar6 & 0xffffffde);
  local_d0 = 0xffffffff;
  local_cc = 0xffffffff;
  local_c0 = 0;
  local_c8 = 0;
  uVar6 = (**(code **)(*plVar7 + 0x78))(plVar7,&local_d0);
  puVar5 = PTR_shared_null_1021e15e8;
  local_50 = local_108;
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10041a7f0(&local_58,&local_50);
  QStandardItemModel::insertRow(iVar8,(QList *)(ulong)uVar6);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005555e3;
    }
    QListData::dispose(local_58);
  }
LAB_1005555e3:
  this = operator_new(0x10);
  QMetaObject::tr((char *)&local_d8,"",0x1e01122);
  QStandardItem::QStandardItem(this,&local_d8);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100555657;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_100555657:
  pcVar3 = *(code **)(*(long *)this + 0x18);
  QVariant::QVariant(&local_e8,-1);
  (*pcVar3)(this,&local_e8,0x100);
  QVariant::~QVariant(&local_e8);
  QStandardItem::setFlags(this,0x21);
  local_100 = 0xffffffff;
  local_fc = 0xffffffff;
  local_f0 = 0;
  local_f8 = 0;
  uVar6 = (**(code **)(*plVar7 + 0x78))(plVar7,&local_100);
  local_48 = (Data *)puVar5;
  local_40 = this;
  FUN_10041a7f0(&local_48,&local_40);
  QStandardItemModel::insertRow(iVar8,(QList *)(ulong)uVar6);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100555733;
    }
    QListData::dispose(local_48);
  }
LAB_100555733:
  QComboBox::setCurrentIndex((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28));
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),0));
  *(int *)(param_1 + 0x70) = param_2;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28);
  FUN_1005a5f40(*(undefined8 *)(param_1 + 0x50));
  QWidget::setDisabled(SUB81(uVar4,0));
  return;
}

