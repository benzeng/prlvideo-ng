
undefined8 FUN_1005c3310(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x50) == 10) {
    return 7;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  CAbstractWizardPageFlow::currentPageId();
  uVar1 = CAbstractWizardPageFlow::getPrevPageId((int)uVar1);
  return uVar1;
}

