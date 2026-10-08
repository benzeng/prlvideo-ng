
void FUN_10067bb10(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar3 = FUN_10016f500(uVar3);
  if (*(int *)(param_1 + 0x78) != 1) {
    cVar1 = FUN_10061b4d0(uVar3,2);
    if (cVar1 == '\0') {
LAB_10067bb76:
      FUN_100677d80(param_1);
      return;
    }
    iVar2 = CAbstractWizardModel::currentPageId();
    if (iVar2 != 3) {
      iVar2 = CAbstractWizardModel::currentPageId();
      if (iVar2 != 4) goto LAB_10067bb76;
    }
  }
  if (*(char *)(param_1 + 0x15d) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x15d) = 1;
  CAbstractWizardModel::finished((int)param_1);
  return;
}

