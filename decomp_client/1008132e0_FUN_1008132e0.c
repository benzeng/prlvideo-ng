
void FUN_1008132e0(QObject *param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long lVar1;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_49;
  void *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_48 = (void *)0x0;
  local_40 = &local_49;
  local_30 = &local_50;
  local_28 = &local_54;
  local_54 = param_5;
  local_50 = param_4;
  local_49 = param_2;
  local_38 = param_3;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102202240,0,&local_48);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

