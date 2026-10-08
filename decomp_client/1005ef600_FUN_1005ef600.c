
void FUN_1005ef600(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    lVar1 = FUN_1005ec990(param_1 + 0x38);
    if (*(long *)(lVar1 + 0xa0) == 0) {
      FUN_1005ef660(param_1);
    }
    else {
      uVar2 = FUN_1005ec990(param_1 + 0x38);
      FUN_1005bb920(uVar2);
    }
  }
  CAbstractWizardPage::enterPage(param_1,param_2);
  return;
}

