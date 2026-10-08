
void FUN_100528f10(long param_1)

{
  undefined *puVar1;
  char cVar2;
  CAppUpdateLogic *this;
  
  cVar2 = FUN_1005a5f40(*(undefined8 *)(param_1 + 0x30));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 200),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x68),0));
  puVar1 = PTR_m_instance_1021e1340;
  if (cVar2 == '\0') {
    if (*(long *)PTR_m_instance_1021e1340 == 0) {
      this = operator_new(0x18);
      CAppUpdateLogic::CAppUpdateLogic(this);
      *(CAppUpdateLogic **)puVar1 = this;
      DAT_102274b28 = 1;
    }
    CAppUpdateLogic::isUpdatesAvailableInUI();
  }
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x80),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x90),0));
  FUN_1005265d0(param_1);
  return;
}

