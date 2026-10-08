
void FUN_1007fa3d0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

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
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1007fa4d0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_100133880(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    }
    if (param_3 == 0) {
      local_4c = *(undefined4 *)param_4[1];
      local_50 = *(undefined4 *)param_4[2];
      local_54 = *(undefined4 *)param_4[3];
      local_58 = *(undefined4 *)param_4[4];
      local_48 = (void *)0x0;
      local_40 = &local_4c;
      local_38 = &local_50;
      local_30 = &local_54;
      local_28 = &local_58;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f9b10,0,&local_48);
    }
  }
  if (lVar1 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

