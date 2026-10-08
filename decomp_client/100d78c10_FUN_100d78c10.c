
void FUN_100d78c10(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  long local_48;
  long local_40;
  void *local_38;
  long *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100d78d40) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      local_48 = *(long *)param_4[1];
      if (local_48 != 0) {
        _PrlHandle_AddRef();
      }
      FUN_100d78820(param_1,&local_48);
      if (local_48 != 0) {
        _PrlHandle_Free();
      }
    }
    else if (param_3 == 0) {
      local_40 = *(long *)param_4[1];
      if (local_40 != 0) {
        _PrlHandle_AddRef();
      }
      local_38 = (void *)0x0;
      local_30 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10225bcc0,0,&local_38);
      if (local_40 != 0) {
        _PrlHandle_Free();
      }
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

