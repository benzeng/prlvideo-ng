
void FUN_100aaee10(QObject *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined4 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = (void *)0x0;
  local_30 = &local_40;
  local_20 = &local_44;
  local_44 = param_4;
  local_40 = param_2;
  local_28 = param_3;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102239a50,0xd,&local_38);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

