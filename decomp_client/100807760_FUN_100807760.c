
void FUN_100807760(QObject *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  undefined8 local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = (void *)0x0;
  local_28 = &local_3c;
  local_20 = &local_40;
  local_40 = param_4;
  local_3c = param_3;
  local_30 = param_2;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe1f0,9,&local_38);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

