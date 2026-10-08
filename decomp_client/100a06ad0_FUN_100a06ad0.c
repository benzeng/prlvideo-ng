
void FUN_100a06ad0(QObject *param_1)

{
  long lVar1;
  void *local_28;
  QObject *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  param_1[0x22] = (QObject)0x0;
  local_20 = param_1 + 0x18;
  local_28 = (void *)0x0;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102236cc0,0,&local_28);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

