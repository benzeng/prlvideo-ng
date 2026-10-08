
undefined1 FUN_10067dee0(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_10067df20();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (*(char *)(param_1 + 0x15d) == '\0') {
      *(undefined1 *)(param_1 + 0x15d) = 1;
      CAbstractWizardModel::finished((int)param_1);
    }
  }
  return uVar2;
}

