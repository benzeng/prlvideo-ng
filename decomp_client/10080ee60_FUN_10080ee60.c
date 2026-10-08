
void FUN_10080ee60(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10080eff0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_39 = *(undefined1 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_39;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102200a10,0,&local_38);
      break;
    case 1:
      FUN_10020c0a0(param_1,param_4[1]);
      return;
    case 2:
      FUN_10020c120(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_10020c140();
      return;
    case 4:
      FUN_10020c160();
      return;
    case 5:
      FUN_10020c2a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 6:
      uVar2 = FUN_10020bca0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 7:
      uVar2 = FUN_10020bd70();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 8:
      uVar2 = FUN_10020c230();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

