
undefined8 FUN_100770d10(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = CAbstractWizardPageFlow::wizardModel();
  uVar2 = 0;
  if ((param_2 != -1) && ((param_2 != 0 || (uVar2 = 1, *(int *)(lVar1 + 0x24) != 1)))) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

