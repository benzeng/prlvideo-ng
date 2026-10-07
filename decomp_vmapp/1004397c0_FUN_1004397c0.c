
void FUN_1004397c0(QObject *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  long lVar1;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_70 = param_7;
  local_74 = param_8;
  local_58 = (void *)0x0;
  local_50 = &local_5c;
  local_48 = &local_60;
  local_40 = &local_64;
  local_38 = &local_68;
  local_30 = &local_6c;
  local_28 = &local_70;
  local_20 = &local_74;
  local_6c = param_6;
  local_68 = param_5;
  local_64 = param_4;
  local_60 = param_3;
  local_5c = param_2;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc0ac0,6,&local_58);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

