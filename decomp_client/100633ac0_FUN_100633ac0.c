
void FUN_100633ac0(long param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  Data_conflict local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  int *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  undefined1 local_88;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  QVariant local_40;
  undefined1 local_29;
  
  QObject::sender();
  lVar5 = QMetaObject::cast((QObject *)&PTR_PTR_1022065b0);
  if (param_2 < 0) {
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98),0));
    QStackedWidget::setCurrentWidget(*(QWidget **)(*(long *)(param_1 + 0x60) + 0x20));
    CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40),0));
    local_f8 = (int *)0x0;
    uStack_f0 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_d0 = 0x80000000;
    local_d8.field7 = 0;
    local_c8 = 1;
    FUN_100621ac0(param_2,param_1,&local_f8,lVar5);
    QVariant::~QVariant((QVariant *)&local_d8);
    if (local_f8 == (int *)0x0) {
      return;
    }
    LOCK();
    *local_f8 = *local_f8 + -1;
    iVar3 = *local_f8;
    UNLOCK();
    piVar1 = local_f8;
  }
  else {
    QWidget::close();
    iVar3 = FUN_1006268d0();
    if (lVar5 != 0) {
      QObject::property((char *)&local_40);
      iVar3 = QVariant::toInt((bool *)&local_40);
      QVariant::~QVariant(&local_40);
    }
    iVar4 = FUN_1006268d0();
    if (iVar3 == iVar4) {
      local_b8 = (int *)0x0;
      uStack_b0 = 0;
      local_a0 = 0;
      local_a8 = 0;
      local_90 = 0x80000000;
      local_98.field7 = 0;
      local_88 = 1;
      FUN_100622fa0(0x3c72,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10),&local_b8);
      QVariant::~QVariant((QVariant *)&local_98);
      if (local_b8 == (int *)0x0) {
        return;
      }
      LOCK();
      *local_b8 = *local_b8 + -1;
      iVar3 = *local_b8;
      UNLOCK();
      piVar1 = local_b8;
    }
    else {
      uVar2 = FUN_1006269e0(iVar3);
      local_78 = (int *)0x0;
      uStack_70 = 0;
      local_60 = 0;
      local_68 = 0;
      local_50 = 0x80000000;
      local_58.field7 = 0;
      local_48 = 1;
      FUN_100622920(uVar2,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10),&local_78);
      QVariant::~QVariant((QVariant *)&local_58);
      if (local_78 == (int *)0x0) {
        return;
      }
      LOCK();
      *local_78 = *local_78 + -1;
      iVar3 = *local_78;
      UNLOCK();
      piVar1 = local_78;
    }
  }
  if ((iVar3 == 0) && (local_29 = 0, piVar1 != (int *)0x0)) {
    operator_delete(piVar1);
  }
  return;
}

