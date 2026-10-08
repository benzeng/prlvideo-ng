
void FUN_100aaec40(QObject *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  void *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = (void *)0x0;
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102239a50,8,&local_38);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

