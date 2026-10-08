
void FUN_1007fbb00(QComboBox *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_1021fb2f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fb4b0;
  QVariant::~QVariant((QVariant *)(param_1 + 0x38));
  FUN_10013e3d0(param_1 + 0x30);
  QComboBox::~QComboBox(param_1);
  operator_delete(param_1);
  return;
}

