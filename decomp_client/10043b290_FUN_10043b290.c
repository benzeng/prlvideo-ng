
void FUN_10043b290(CBaseDialog *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_102211ad0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102211cc0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102211d10;
  QStandardItemModel::clear();
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

