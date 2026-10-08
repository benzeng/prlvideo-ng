
void FUN_10038f8b0(CBaseDialog *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  CBaseDialog::CBaseDialog(param_1,param_2,0,0x1c0);
  *(undefined ***)param_1 = &PTR_FUN_10220f9c0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220fbb0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10220fc00;
  pvVar1 = operator_new(0x170);
  FUN_10038feb0(pvVar1,param_1);
  *(void **)(param_1 + 0x60) = pvVar1;
  QWidget::setWindowModality(param_1,0);
  QWidget::setAttribute(param_1,0x37,1);
  return;
}

