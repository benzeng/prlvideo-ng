
void FUN_1007fa4d0(QObject *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long lVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_48 = (void *)0x0;
  local_40 = &local_4c;
  local_38 = &local_50;
  local_30 = &local_54;
  local_28 = &local_58;
  local_58 = param_5;
  local_54 = param_4;
  local_50 = param_3;
  local_4c = param_2;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f9b10,0,&local_48);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

