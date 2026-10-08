
void FUN_10084c8f0(QObject *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_48 = (void *)0x0;
  local_40 = &local_4c;
  local_38 = &local_50;
  local_50 = param_3;
  local_4c = param_2;
  local_30 = param_4;
  local_28 = param_5;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102224640,0xc,&local_48);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

