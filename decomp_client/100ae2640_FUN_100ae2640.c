
void FUN_100ae2640(QObject *param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 local_41;
  undefined8 local_40;
  void *local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = (void *)0x0;
  local_30 = &local_40;
  local_28 = &local_41;
  local_41 = param_3;
  local_40 = param_2;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223a710,5,&local_38);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

