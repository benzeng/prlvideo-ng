
void FUN_100837620(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    if ((param_3 == 3) && (*(int *)param_4[1] == 0)) {
      if (DAT_102273e78 == 0) {
        DAT_102273e78 = FUN_1003df970("Mappings::Values",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_102273e78;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_100837840) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_1008378b0) && (lVar5 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_4c = *(undefined4 *)param_4[1];
      local_50 = *(undefined4 *)param_4[2];
      local_54 = *(undefined4 *)param_4[3];
      local_48 = (void *)0x0;
      local_40 = &local_4c;
      local_38 = &local_50;
      local_30 = &local_54;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102210970,0,&local_48);
      break;
    case 1:
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102210970,1,(void **)0x0);
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x0001008377ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x70))(param_1,param_4[1],param_4[2],param_4[3]);
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x0001008377e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x78))(param_1,param_4[1]);
      return;
    case 4:
      FUN_1003e5c00(param_1,*(undefined1 *)param_4[1]);
      return;
    case 5:
      FUN_1003e5c20();
      return;
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

