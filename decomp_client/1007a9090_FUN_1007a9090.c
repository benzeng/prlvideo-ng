
void FUN_1007a9090(CBaseDialog *param_1,undefined8 param_2,undefined8 param_3)

{
  CBaseDialog::CBaseDialog(param_1,param_3,5,0);
  *(undefined ***)param_1 = &PTR_FUN_10222cd60;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222cf50;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222cfa0;
  FUN_1007a92d0(param_1 + 0x60,param_1);
  QLabel::setText(*(QString **)(param_1 + 0x68));
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
  QWidget::setFixedSize((int)param_1,400);
  return;
}

