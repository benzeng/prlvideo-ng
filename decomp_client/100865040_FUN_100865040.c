
/* WARNING: Removing unreachable block (ram,0x0001008650a6) */

void FUN_100865040(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  void *local_28;
  undefined4 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100865100) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      uVar2 = 0;
    }
    else {
      if (param_3 != 1) {
        if (param_3 == 0) {
          local_2c = *(undefined4 *)param_4[1];
          local_28 = (void *)0x0;
          local_20 = &local_2c;
          QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222e4e0,0,&local_28);
        }
        goto LAB_1008650ea;
      }
      uVar2 = *(undefined4 *)param_4[1];
    }
    FUN_100031bd0(param_1,uVar2);
    return;
  }
LAB_1008650ea:
  if (lVar1 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

