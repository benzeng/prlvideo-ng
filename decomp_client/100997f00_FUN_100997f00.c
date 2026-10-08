
void FUN_100997f00(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  CAbstractWizardActionHandler::wizardModel();
  lVar2 = CAbstractWizardModel::currentPage();
  if (lVar2 != 0) {
    plVar3 = (long *)___dynamic_cast(lVar2,PTR_typeinfo_1021e16e8,&PTR_vtable_102234210,0);
    if (plVar3 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 0x78))(plVar3);
      uVar4 = CAbstractWizardActionHandler::wizardModel();
      lVar2 = ___dynamic_cast(uVar4,PTR_typeinfo_1021e16f0,&PTR_vtable_102233d60,0);
      if (lVar2 != 0) {
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("","TransporterWizardModel",1,"help request");
        }
        FUN_100990bc0(lVar2,uVar1);
        return;
      }
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("","TransporterWizardModel",1,"No model for help request");
        return;
      }
    }
  }
  return;
}

