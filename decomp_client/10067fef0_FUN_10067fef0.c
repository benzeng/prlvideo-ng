
void FUN_10067fef0(long param_1,undefined8 param_2,undefined8 param_3,bool *param_4)

{
  QVariant::toInt(param_4);
  if (*(char *)(param_1 + 0x15d) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x15d) = 1;
  CAbstractWizardModel::finished((int)param_1);
  return;
}

