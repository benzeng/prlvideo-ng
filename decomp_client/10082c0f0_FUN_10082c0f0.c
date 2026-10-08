
void FUN_10082c0f0(QObject *param_1,undefined8 param_2)

{
  long lVar1;
  void *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = (void *)0x0;
  local_28 = &stack0x00000008;
  local_30 = param_2;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bb40,3,&local_38);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

