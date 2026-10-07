
void FUN_1007d34d0(QObject *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = (void *)0x0;
  local_30 = param_2;
  local_28 = param_3;
  local_18 = lVar1;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bcf810,4,&local_38);
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

