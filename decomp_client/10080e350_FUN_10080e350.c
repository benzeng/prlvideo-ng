
void FUN_10080e350(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined1 uVar2;
  long local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10080e4f0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_40 = *(undefined8 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022007d0,0,&local_38);
      break;
    case 1:
      FUN_100208780(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_100209240(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1002082e0(param_1);
      return;
    case 4:
      local_48 = *(long *)param_4[1];
      if (local_48 != 0) {
        _PrlHandle_AddRef();
      }
      uVar2 = FUN_100209070(param_1,&local_48);
      if (local_48 != 0) {
        _PrlHandle_Free();
      }
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        *(undefined1 *)*param_4 = uVar2;
      }
    }
  }
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

