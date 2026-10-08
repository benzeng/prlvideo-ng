
void FUN_10082f590(QObject *param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = (void *)0x0;
  local_30 = &local_3c;
  local_28 = &stack0x00000008;
  local_3c = param_2;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220c980,0,&local_38);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

