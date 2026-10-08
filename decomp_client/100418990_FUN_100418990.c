
void FUN_100418990(QList *param_1)

{
  code *pcVar1;
  QStandardItem *pQVar2;
  QVariant local_130;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  QVariant local_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  QVariant local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  QString local_70;
  QStandardItem *local_68;
  QString local_60;
  QStandardItem *local_58;
  QString local_50;
  QStandardItem *local_48;
  Data *local_40;
  undefined1 local_31;
  
  if (param_1 == (QList *)0x0) {
    return;
  }
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pQVar2 = operator_new(0x10);
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1dc064a);
  QStandardItem::QStandardItem(pQVar2,&local_50);
  local_48 = pQVar2;
  FUN_10041a7f0(&local_40,&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100418a3a;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100418a3a:
  pQVar2 = operator_new(0x10);
  QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,0x1df36a3);
  QStandardItem::QStandardItem(pQVar2,&local_60);
  local_58 = pQVar2;
  FUN_10041a7f0(&local_40,&local_58);
  pQVar2 = operator_new(0x10);
  QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,0x1df36b3);
  QStandardItem::QStandardItem(pQVar2,&local_70);
  local_68 = pQVar2;
  FUN_10041a7f0(&local_40,&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100418b0b;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100418b0b:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100418b3b;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100418b3b:
  QStandardItemModel::appendColumn(param_1);
  local_a0 = 0xffffffff;
  local_9c = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
  (**(code **)(*(long *)param_1 + 0x60))(&local_88,param_1,0,0,&local_a0);
  pcVar1 = *(code **)(*(long *)param_1 + 0x98);
  QVariant::QVariant(&local_b0,0);
  (*pcVar1)(param_1,&local_88,&local_b0,0x100);
  QVariant::~QVariant(&local_b0);
  local_e0 = 0xffffffff;
  local_dc = 0xffffffff;
  local_d0 = 0;
  local_d8 = 0;
  (**(code **)(*(long *)param_1 + 0x60))(&local_c8,param_1,1,0,&local_e0);
  local_78 = local_b8;
  local_80 = local_c0;
  local_88 = local_c8;
  pcVar1 = *(code **)(*(long *)param_1 + 0x98);
  QVariant::QVariant(&local_f0,1);
  (*pcVar1)(param_1,&local_88,&local_f0,0x100);
  QVariant::~QVariant(&local_f0);
  local_120 = 0xffffffff;
  local_11c = 0xffffffff;
  local_110 = 0;
  local_118 = 0;
  (**(code **)(*(long *)param_1 + 0x60))(&local_108,param_1,2,0,&local_120);
  local_78 = local_f8;
  local_80 = local_100;
  local_88 = local_108;
  pcVar1 = *(code **)(*(long *)param_1 + 0x98);
  QVariant::QVariant(&local_130,2);
  (*pcVar1)(param_1,&local_88,&local_130,0x100);
  QVariant::~QVariant(&local_130);
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
    QListData::dispose(local_40);
  }
  return;
}

