
void FUN_1000a9f40(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = QObject::sender();
  if (lVar1 != 0) {
    lVar1 = ___dynamic_cast(lVar1,PTR_typeinfo_1021e1720,&PTR_vtable_1021fd4e0,0);
    if (lVar1 != 0) {
      auVar3 = FUN_10018c2b0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000a9f8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x78))(param_1,auVar3._0_8_,auVar3._8_8_,*(code **)(*param_1 + 0x78));
      return;
    }
  }
  uVar2 = QObject::sender();
  FUN_100df99c0("SGAD","prl_client_app",0,
                "Error: signal sender=%p is invalid for slot onVmToolsStateChanged()",uVar2);
  return;
}

