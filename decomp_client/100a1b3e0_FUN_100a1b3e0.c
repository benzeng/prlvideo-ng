
void FUN_100a1b3e0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

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
    if ((*(code **)param_4[1] == FUN_100a1b4d0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_3c = *(undefined4 *)param_4[1];
      local_28 = param_4[2];
      uStack_20 = param_4[3];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102236f10,0,&local_38);
      break;
    case 1:
      FUN_100a0ecc0();
      return;
    case 2:
      FUN_100a0fbf0();
      return;
    case 3:
      FUN_100a0fe00();
      return;
    }
  }
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

