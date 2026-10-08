
void FUN_100808d20(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  undefined8 local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100808dd0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    local_30 = param_4[1];
    local_3c = *(undefined4 *)param_4[2];
    local_40 = *(undefined4 *)param_4[3];
    local_38 = (void *)0x0;
    local_28 = &local_3c;
    local_20 = &local_40;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fed00,0,&local_38);
  }
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

