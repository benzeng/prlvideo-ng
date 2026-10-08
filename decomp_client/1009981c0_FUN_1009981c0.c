
void FUN_1009981c0(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar2 = QObject::sender();
  plVar3 = (long *)0x0;
  if (lVar2 != 0) {
    plVar3 = (long *)___dynamic_cast(lVar2,PTR_typeinfo_1021e1720,&PTR_vtable_102234380,0);
  }
  lVar2 = CAbstractWizardModel::actionHandler();
  uVar4 = 0;
  if (lVar2 != 0) {
    uVar4 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e1708,&PTR_vtable_102234010,0);
  }
  cVar1 = FUN_100997a60(uVar4);
  if (cVar1 != '\0') {
    CAbstractWizardModel::finished((int)*(undefined8 *)(param_1 + 0x10));
    return;
  }
  cVar1 = CAbstractWizardModel::isRollingBack();
  if (cVar1 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100998259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  return;
}

