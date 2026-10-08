
void FUN_10082f440(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  undefined8 *local_28;
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_18 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10082f590) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      puVar2 = (undefined8 *)param_4[2];
      local_3c = *(undefined4 *)param_4[1];
      local_58 = *puVar2;
      local_50 = puVar2[1];
      local_48 = puVar2[2];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      local_28 = &local_58;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220c980,0,&local_38);
      break;
    case 1:
      FUN_10033de50(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 2:
      FUN_100342120(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    case 3:
      FUN_100341e80();
      return;
    case 4:
      FUN_10033e900(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
      return;
    }
  }
  if (lVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

