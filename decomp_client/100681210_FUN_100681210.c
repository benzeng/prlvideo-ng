
void FUN_100681210(long param_1,char param_2)

{
  FUN_100626d20(1);
  if (param_2 != '\0') {
    CAbstractWizardModel::goToNextPage();
    return;
  }
  if (*(char *)(param_1 + 0x15d) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x15d) = 1;
  CAbstractWizardModel::finished((int)param_1);
  return;
}

