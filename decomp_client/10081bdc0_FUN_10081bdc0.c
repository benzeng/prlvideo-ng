
void FUN_10081bdc0(QObject *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined4 uVar2;
  void *local_38;
  long local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10081be90) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      uVar2 = FUN_1002823f0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
    }
    else {
      if (param_3 == 1) {
        FUN_100282ac0(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
        return;
      }
      if (param_3 == 0) {
        local_30 = param_4[1];
        local_38 = (void *)0x0;
        QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102206010,0,&local_38);
      }
    }
  }
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

