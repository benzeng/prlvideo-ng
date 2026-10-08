
undefined8 FUN_100996230(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (param_2 != -1) {
    iVar1 = CAbstractWizardPageFlow::wizardModel();
    lVar2 = CAbstractWizardModel::page(iVar1);
    plVar3 = (long *)0x0;
    if (lVar2 != 0) {
      plVar3 = (long *)___dynamic_cast(lVar2,PTR_typeinfo_1021e16e8,&PTR_vtable_102234380,0);
    }
                    /* WARNING: Could not recover jumptable at 0x000100996277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar3 + 0xd8))();
    return uVar4;
  }
  return 2;
}

