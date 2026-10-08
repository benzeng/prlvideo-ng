
void FUN_1008667f0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 local_39;
  void *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100866890) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    local_30 = param_4[1];
    local_39 = *(undefined1 *)param_4[2];
    local_38 = (void *)0x0;
    local_28 = &local_39;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222f100,0,&local_38);
  }
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

