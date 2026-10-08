
bool FUN_100678060(long param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x161) != '\0';
  if (bVar1) {
    CAbstractWizardModel::goToPage(param_1,1,1);
  }
  return bVar1;
}

