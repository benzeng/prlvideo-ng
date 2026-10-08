
void FUN_100680780(long param_1,undefined4 param_2,char param_3)

{
  *(byte *)(param_1 + 0x169) = (byte)((uint)param_2 >> 0x1f) ^ 1;
  CContentModel::setBusy(SUB81(param_1,0));
  if (param_3 != '\0') {
    CAbstractWizardModel::goToNextPage();
    return;
  }
  return;
}

