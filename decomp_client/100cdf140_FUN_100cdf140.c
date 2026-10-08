
void FUN_100cdf140(QObject *param_1)

{
  long lVar1;
  void *local_28;
  undefined1 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = (void *)0x0;
  local_20 = &stack0x00000008;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10225a1f0,1,&local_28);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

