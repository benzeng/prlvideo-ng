
void FUN_1007641e0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 local_2c;
  void *local_28;
  undefined4 *local_20;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_2 == 0xc) {
    if (param_3 == 1) {
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100763e10) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_100763c50(param_1,*(undefined4 *)param_4[1]);
      return;
    }
    if (param_3 == 0) {
      local_2c = *(undefined4 *)param_4[1];
      local_28 = (void *)0x0;
      local_20 = &local_2c;
      QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6640,0,&local_28);
    }
  }
  if (lVar1 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

