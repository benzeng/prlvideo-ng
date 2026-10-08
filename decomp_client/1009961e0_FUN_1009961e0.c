
undefined1 FUN_1009961e0(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  
  uVar1 = CAbstractWizardPageFlow::wizardModel();
  uVar1 = ___dynamic_cast(uVar1,PTR_typeinfo_1021e16f0,&PTR_vtable_102233d60,0);
  lVar2 = FUN_100990b00(uVar1);
  uVar3 = 1;
  if ((*(byte *)(lVar2 + 0x20) & 0x18) == 0) {
    uVar3 = CAbstractWizardPageFlow::canGoBack(param_1);
  }
  return uVar3;
}

