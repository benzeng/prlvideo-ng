
void FUN_1009bf930(QObject *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_48 = (void *)0x0;
  local_40 = &local_4c;
  local_38 = &local_4e;
  local_30 = &local_50;
  local_28 = &local_58;
  local_20 = &local_60;
  local_60 = param_6;
  local_58 = param_5;
  local_50 = param_4;
  local_4e = param_3;
  local_4c = param_2;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102234620,1,&local_48);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

