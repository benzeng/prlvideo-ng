
void FUN_100808b00(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 local_29;
  void *local_28;
  undefined1 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100808bb0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_1001baaa0(param_1,*(undefined1 *)param_4[1]);
      return;
    }
    if (param_3 == 0) {
      local_29 = *(undefined1 *)param_4[1];
      local_28 = (void *)0x0;
      local_20 = &local_29;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fec40,0,&local_28);
    }
  }
  if (lVar1 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

