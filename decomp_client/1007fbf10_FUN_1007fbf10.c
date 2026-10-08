
void FUN_1007fbf10(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 local_2c;
  void *local_28;
  undefined4 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1007fc030) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_2c = *(undefined4 *)param_4[1];
      local_28 = (void *)0x0;
      local_20 = &local_2c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fb760,0,&local_28);
      break;
    case 1:
      FUN_10013fbb0(param_1,*(undefined1 *)param_4[1]);
      return;
    case 2:
      FUN_100140ae0();
      return;
    case 3:
      FUN_100140bf0();
      return;
    case 4:
      FUN_100140db0();
      return;
    case 5:
      FUN_100140de0();
      return;
    }
  }
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

