
void FUN_10080bf50(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

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
    if ((*(code **)param_4[1] == FUN_10080c150) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_39 = *(undefined1 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_39;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021ffdb0,0,&local_38);
      break;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x00010080c014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x80))();
      return;
    case 2:
      FUN_1001ef810(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1001efc90(param_1,param_4[1]);
      return;
    case 4:
      FUN_1001efe00(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_1001efe20();
      return;
    case 6:
      FUN_1001efe60();
      return;
    case 7:
      FUN_1001f0030();
      return;
    case 8:
      uVar2 = FUN_1001ef570();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 9:
      uVar2 = FUN_1001ef5d0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 10:
      uVar2 = FUN_1001ef870();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0xb:
      uVar2 = FUN_1001f0090();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0xc:
      uVar2 = FUN_1001f0100();
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

