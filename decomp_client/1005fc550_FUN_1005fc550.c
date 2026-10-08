
void FUN_1005fc550(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = FUN_1005ec990(param_1 + 0x38);
    if (*(long *)(lVar1 + 0xa0) == 0) {
      FUN_1005fc5a0(param_1);
    }
    else {
      FUN_1005fbbb0(param_1);
    }
  }
  CAbstractWizardPage::enterPage(param_1,param_2);
  return;
}

