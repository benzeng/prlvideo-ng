
void FUN_1009bece0(QObject *param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_2c;
  void *local_28;
  undefined4 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = (void *)0x0;
  local_20 = &local_2c;
  local_2c = param_2;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102233d80,3,&local_28);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

