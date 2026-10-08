
void FUN_1005379f0(QStringList *param_1)

{
  QMetaObject *pQVar1;
  QMetaObject *pQVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  QTreeWidgetItem *this;
  QMetaObject *pQVar7;
  QMetaObject *pQVar8;
  long *plVar9;
  undefined8 uVar10;
  QVariant local_d0;
  QString local_c0;
  QVariant local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  Data_conflict local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70 [63];
  undefined1 local_31;
  
  if (param_1[10].field0_0x0.field1 == (Data *)0x0) {
    return;
  }
  lVar3 = *(long *)((long)param_1[6].field0_0x0.field1 + 0x38);
  uVar10 = 0;
  if ((lVar3 != 0) && (uVar10 = 0, *(int *)(lVar3 + 4) != 0)) {
    uVar10 = *(undefined8 *)((long)param_1[6].field0_0x0.field1 + 0x40);
  }
  FUN_1005341c0(local_70 + 0x10,uVar10,*(undefined8 *)((long)param_1[9].field0_0x0.field1 + 0x78));
  pQVar8 = (QMetaObject *)local_70._16_8_;
  if (*(int *)(local_70._16_8_ + 0x14) == 0) {
    iVar6 = CMessageManager::instance();
    local_70._8_8_ = PTR_shared_null_1021e15e8;
    local_70._0_8_ = PTR_shared_null_1021e15e8;
    local_a8 = (int *)0x0;
    uStack_a0 = 0;
    local_90 = 0;
    local_98 = 0;
    local_80 = 0x80000000;
    local_88.field7 = 0;
    local_78 = 1;
    CMessageManager::showMessageBox
              (iVar6,(QWidget *)0x80015204,param_1,(QStringList *)(local_70 + 8),
               (CSlotInfo *)local_70,SUB81(&local_a8,0));
    QVariant::~QVariant((QVariant *)&local_88);
    if (local_a8 != (int *)0x0) {
      LOCK();
      *local_a8 = *local_a8 + -1;
      local_31 = *local_a8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_a8 != (int *)0x0)) {
        operator_delete(local_a8);
      }
    }
    FUN_100039a80(local_70);
    FUN_100039a80(local_70 + 8);
    goto LAB_100537e06;
  }
  this = operator_new(0x40);
  QTreeWidgetItem::QTreeWidgetItem(this,0);
  uVar5 = QTreeWidgetItem::flags();
  QTreeWidgetItem::setFlags(this,uVar5 | 2);
  pQVar7 = pQVar8;
  if (1 < *(uint *)((undefined8)pQVar8 + 0x10)) {
    pQVar7 = (QMetaObject *)
             QHashData::detach_helper
                       ((_func_void_Node_ptr_void_ptr *)pQVar8,FUN_10002c570,0x2c4b0,0x20);
    local_70._16_8_ = pQVar7;
    if (*(int *)((undefined8)pQVar8 + 0x10) != -1) {
      if (*(int *)((undefined8)pQVar8 + 0x10) != 0) {
        LOCK();
        pQVar1 = (QMetaObject *)((undefined8)pQVar8 + 0x10);
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100537ad3;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pQVar8);
    }
  }
LAB_100537ad3:
  iVar6 = *(int *)(pQVar7 + 0x20);
  pQVar8 = pQVar7;
  if (iVar6 != 0) {
    plVar9 = *(long **)(pQVar7 + 8);
    do {
      pQVar8 = (QMetaObject *)*plVar9;
      if ((QMetaObject *)*plVar9 != pQVar7) break;
      iVar6 = iVar6 + -1;
      plVar9 = plVar9 + 1;
      pQVar8 = pQVar7;
    } while (iVar6 != 0);
  }
  pcVar4 = *(code **)(*(long *)this + 0x20);
  QVariant::QVariant((QVariant *)(local_70 + 0x18),(QString *)(pQVar8 + 0x10));
  (*pcVar4)(this,0,0,local_70 + 0x18);
  QVariant::~QVariant((QVariant *)(local_70 + 0x18));
  pcVar4 = *(code **)(*(long *)this + 0x20);
  pQVar8 = pQVar7;
  pQVar1 = (QMetaObject *)local_70._16_8_;
  if (1 < *(uint *)(pQVar7 + 0x10)) {
    pQVar8 = (QMetaObject *)
             QHashData::detach_helper
                       ((_func_void_Node_ptr_void_ptr *)pQVar7,FUN_10002c570,0x2c4b0,0x20);
    pQVar1 = pQVar8;
    if (*(int *)(pQVar7 + 0x10) != -1) {
      if (*(int *)(pQVar7 + 0x10) != 0) {
        LOCK();
        pQVar2 = pQVar7 + 0x10;
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100537b92;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pQVar7);
    }
  }
LAB_100537b92:
  local_70._16_8_ = pQVar1;
  iVar6 = *(int *)(pQVar8 + 0x20);
  pQVar7 = pQVar8;
  if (iVar6 != 0) {
    plVar9 = *(long **)(pQVar8 + 8);
    do {
      pQVar7 = (QMetaObject *)*plVar9;
      if ((QMetaObject *)*plVar9 != pQVar8) break;
      iVar6 = iVar6 + -1;
      plVar9 = plVar9 + 1;
      pQVar7 = pQVar8;
    } while (iVar6 != 0);
  }
  QVariant::QVariant(&local_b8,(QString *)(pQVar7 + 0x18));
  (*pcVar4)(this,0,0x100,&local_b8);
  QVariant::~QVariant(&local_b8);
  QMetaObject::tr((char *)&local_c0,PTR_staticMetaObject_1021e1520,(int)PTR_s_Your_Mac_10226de28);
  pcVar4 = *(code **)(*(long *)this + 0x20);
  QVariant::QVariant((QVariant *)(local_70 + 0x28),&local_c0);
  (*pcVar4)(this,1,0,local_70 + 0x28);
  QVariant::~QVariant((QVariant *)(local_70 + 0x28));
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100537c71;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100537c71:
  pcVar4 = *(code **)(*(long *)this + 0x20);
  QVariant::QVariant(&local_d0,PTR_s_COMPUTER_FAKE_ID_1022710d8);
  (*pcVar4)(this,1,0x100,&local_d0);
  QVariant::~QVariant(&local_d0);
  QTreeWidget::addTopLevelItem(*(QTreeWidgetItem **)((long)param_1[9].field0_0x0.field1 + 0x78));
  QTreeWidget::setCurrentItem(*(QTreeWidgetItem **)((long)param_1[9].field0_0x0.field1 + 0x78));
  lVar3 = *(long *)((long)param_1[6].field0_0x0.field1 + 0x38);
  uVar10 = 0;
  if ((lVar3 != 0) && (uVar10 = 0, *(int *)(lVar3 + 4) != 0)) {
    uVar10 = *(undefined8 *)((long)param_1[6].field0_0x0.field1 + 0x40);
  }
  FUN_100534ab0(param_1[10].field0_0x0.field1,uVar10,
                *(undefined8 *)((long)param_1[9].field0_0x0.field1 + 0x78));
  FUN_1001b55c0(*(undefined8 *)((long)param_1[9].field0_0x0.field1 + 0x78));
  lVar3 = *(long *)((long)param_1[6].field0_0x0.field1 + 0x38);
  uVar10 = 0;
  if ((lVar3 != 0) && (uVar10 = 0, *(int *)(lVar3 + 4) != 0)) {
    uVar10 = *(undefined8 *)((long)param_1[6].field0_0x0.field1 + 0x40);
  }
  FUN_1001b5630(uVar10,*(undefined8 *)((long)param_1[9].field0_0x0.field1 + 0x78));
  QTreeWidget::editItem(*(QTreeWidgetItem **)((long)param_1[9].field0_0x0.field1 + 0x78),(int)this);
  FUN_1005375f0(param_1);
LAB_100537e06:
  if (*(int *)(pQVar8 + 0x10) != -1) {
    if (*(int *)(pQVar8 + 0x10) != 0) {
      LOCK();
      pQVar7 = pQVar8 + 0x10;
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)pQVar8);
  }
  return;
}

