
void FUN_100ae3690(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 local_29;
  void *local_28;
  undefined1 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100ae3790) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_29 = *(undefined1 *)param_4[1];
      local_28 = (void *)0x0;
      local_20 = &local_29;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a9b0,0,&local_28);
      break;
    case 1:
      FUN_100ad9d70();
      return;
    case 2:
      FUN_100ad9ed0();
      return;
    case 3:
      FUN_100ad9f60();
      return;
    case 4:
      FUN_100ada8d0();
      return;
    }
  }
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

