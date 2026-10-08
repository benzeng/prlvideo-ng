
void FUN_10064b9f0(long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_60 [8];
  QString local_58 [3];
  QVariant local_40;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  lVar4 = FUN_10063f730();
  local_28.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar4 + 0x170);
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  if (local_28.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288)
  goto LAB_10064bac1;
  uVar5 = FUN_10063f730(param_1);
  lVar4 = FUN_100675e00(uVar5);
  if (lVar4 == 0) goto LAB_10064bac1;
  uVar5 = FUN_10063f730(param_1);
  uVar5 = FUN_100675e00(uVar5);
  uVar5 = FUN_10016f500(uVar5);
  FUN_10061abe0(&local_40,uVar5,0x12);
  QVariant::toString();
  QString::operator=(&local_28,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10064bab8;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10064bab8:
  QVariant::~QVariant(&local_40);
LAB_10064bac1:
  if (*(int *)(local_28.field0_0x0 + 4) == 0) {
    uVar5 = FUN_10063f730(param_1);
    FUN_10067fb60(local_60,uVar5);
    QString::operator=(&local_28,local_58);
    FUN_10064e770(local_60);
  }
  lVar4 = FUN_10063f730(param_1);
  iVar2 = *(int *)(lVar4 + 0x178);
  lVar4 = FUN_10063f730(param_1);
  *(undefined4 *)(lVar4 + 0x178) = 0;
  if (iVar2 == 1) {
    QAbstractButton::setChecked(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40),0));
  }
  else if (iVar2 == 2) {
    QAbstractButton::setChecked(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48),0));
  }
  plVar1 = (long *)(param_1 + 0x48);
  QLineEdit::setText(*(QString **)(*plVar1 + 0x70));
  if ((*(int *)(local_28.field0_0x0 + 4) == 0) ||
     (cVar3 = QAbstractButton::isChecked(), cVar3 != '\0')) {
    QWidget::setFocus(*(undefined8 *)(*plVar1 + 0x70),7);
  }
  else {
    QWidget::setFocus(*(undefined8 *)(*plVar1 + 0x88),7);
  }
  FUN_10064b2e0(param_1);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

