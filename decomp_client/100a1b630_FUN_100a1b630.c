
void FUN_100a1b630(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100a1b720) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_100a11a10(param_1,*(undefined4 *)param_4[1],param_4[2],param_4[3]);
      return;
    }
    if (param_3 == 1) {
      FUN_100a11cd0(param_1,*(undefined4 *)param_4[1],*(undefined8 *)param_4[2]);
      return;
    }
    if (param_3 == 0) {
      local_3c = *(undefined4 *)param_4[1];
      local_28 = param_4[2];
      uStack_20 = param_4[3];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102236fe0,0,&local_38);
    }
  }
  if (lVar1 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

