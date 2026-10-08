
void FUN_1006022a0(long param_1)

{
  if (*(char *)(param_1 + 0x31) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x31) = 1;
  CAbstractWizardModel::finished((int)param_1);
  return;
}

