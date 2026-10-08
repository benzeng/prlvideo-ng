
void FUN_1007f6a00(QObject *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined1 local_41;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined1 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = (void *)0x0;
  local_28 = &local_40;
  local_20 = &local_41;
  local_41 = param_4;
  local_40 = param_3;
  local_30 = param_2;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f89d0,6,&local_38);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

