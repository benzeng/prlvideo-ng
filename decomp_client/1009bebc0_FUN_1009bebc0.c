
void FUN_1009bebc0(QObject *param_1,undefined1 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 local_40;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = (void *)0x0;
  local_30 = &local_39;
  local_28 = &local_40;
  local_40 = param_3;
  local_39 = param_2;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102233d80,0,&local_38);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

