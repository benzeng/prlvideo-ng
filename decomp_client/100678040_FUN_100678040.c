
void FUN_100678040(long param_1)

{
  if (*(char *)(param_1 + 0x15d) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x15d) = 1;
  CAbstractWizardModel::finished((int)param_1);
  return;
}

