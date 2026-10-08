
void FUN_100838d00(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100838de0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000100838d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x1b0))();
      return;
    }
    if (param_3 == 1) {
      FUN_10044e880();
      return;
    }
    if (param_3 == 0) {
      local_3c = *(undefined4 *)param_4[1];
      local_40 = *(undefined4 *)param_4[2];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      local_28 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102212eb0,0,&local_38);
    }
  }
  if (lVar1 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

