
void FUN_100590670(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  int extraout_var_02;
  uint uVar7;
  QVariant local_88;
  QArrayData *local_78;
  int *local_70 [4];
  QVariant local_50 [2];
  undefined1 local_31;
  
  QStackedWidget::widget((int)*(undefined8 *)(param_1 + 0xb0));
  plVar5 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221a0a0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  iVar2 = QStackedWidget::currentIndex();
  iVar3 = QStackedWidget::count();
  if (iVar2 == iVar3 + -1) {
    FUN_100590ee0(param_1,param_2);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  QStackedWidget::currentIndex();
  lVar6 = QStackedWidget::widget((int)uVar1);
  if (lVar6 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    QStackedWidget::count();
    QStackedWidget::setCurrentIndex((int)uVar1);
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("onSwitchToPageFinished",0x16);
  QVariant::QVariant(&local_88,param_2);
  FUN_100a1c6b0(local_70,&local_78,param_1,&local_88);
  QVariant::~QVariant(&local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059078d;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10059078d:
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
  iVar2 = *(int *)(lVar6 + 0x1c);
  iVar3 = *(int *)(lVar6 + 0x14);
  (**(code **)(*plVar5 + 0x70))(plVar5);
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x48) + 0x70))();
  uVar7 = extraout_var_00 + extraout_var;
  plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x40);
  if ((*(byte *)(plVar5[5] + 9) & 0x80) != 0) {
    (**(code **)(*plVar5 + 0x70))();
    uVar7 = extraout_var_01 + uVar7;
  }
  iVar4 = CMappingModel::getSubmitPolicy();
  if (iVar4 == 1) {
    (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x18) + 0x70))();
    uVar7 = extraout_var_02 + uVar7;
  }
  CWindowResizeController::beginResize((int)uVar1,(iVar2 + 1) - iVar3,(CSlotInfo *)(ulong)uVar7);
  QVariant::~QVariant(local_50);
  if (local_70[0] != (int *)0x0) {
    LOCK();
    *local_70[0] = *local_70[0] + -1;
    local_31 = *local_70[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_70[0] != (int *)0x0)) {
      operator_delete(local_70[0]);
    }
  }
  return;
}

