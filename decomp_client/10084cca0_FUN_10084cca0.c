
void FUN_10084cca0(QObject *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_48;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  undefined8 *local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = (void *)0x0;
  local_30 = &local_3c;
  local_28 = &local_48;
  local_48 = param_3;
  local_3c = param_2;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102224640,0x17,&local_38);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

