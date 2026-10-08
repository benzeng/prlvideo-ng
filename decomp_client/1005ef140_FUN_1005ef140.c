
void FUN_1005ef140(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x18) = 0;
  if (param_2 == 0) {
    lVar1 = param_1 + 0x38;
    lVar2 = FUN_1005ec990(lVar1);
    if (*(int *)(lVar2 + 0x50) != 8) {
      lVar2 = FUN_1005ec990(lVar1);
      if (*(long *)(lVar2 + 0xa0) == 0) {
        FUN_1005ece60(*(undefined8 *)(param_1 + 0x40));
      }
      else {
        uVar3 = FUN_1005ec990(lVar1);
        FUN_1005bb920(uVar3);
      }
    }
  }
  CAbstractWizardPage::enterPage(param_1,param_2);
  return;
}

