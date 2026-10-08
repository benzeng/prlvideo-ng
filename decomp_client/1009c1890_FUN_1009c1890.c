
void FUN_1009c1890(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  void *local_28;
  undefined8 local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1009c1920) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    local_20 = param_4[1];
    local_28 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102236300,0,&local_28);
  }
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

