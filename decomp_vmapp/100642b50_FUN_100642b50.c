
void FUN_100642b50(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  void *local_28;
  QObject *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100642180) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_100642020();
      return;
    }
    if (param_3 == 1) {
      param_1[0x22] = (QObject)0x0;
      local_20 = param_1 + 0x18;
    }
    else {
      if (param_3 != 0) goto LAB_100642beb;
      local_20 = (QObject *)param_4[1];
    }
    local_28 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_100bc9600,0,&local_28);
  }
LAB_100642beb:
  if (lVar1 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

