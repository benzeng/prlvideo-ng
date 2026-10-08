
void FUN_1008224f0(QObject *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    if (param_3 == 6) {
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else if (param_3 == 7) {
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
    if ((*(code **)param_4[1] == FUN_100822760) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_39 = *(undefined1 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_39;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102208370,0,&local_38);
      break;
    case 1:
      FUN_1002be350(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_1002be7e0();
      return;
    case 3:
      FUN_1002bde40();
      return;
    case 4:
      FUN_1002bde60();
      return;
    case 5:
      FUN_1002bdf50(param_1,param_4[1]);
      return;
    case 6:
      FUN_1002be080(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_1002bea20(param_1,*(undefined4 *)param_4[1]);
      return;
    case 8:
      FUN_1002be9a0(param_1,param_4[1]);
      return;
    case 9:
      FUN_1002be300();
      return;
    case 10:
      uVar2 = FUN_1002bdbd0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0xb:
      uVar2 = FUN_1002be320();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0xc:
      uVar2 = FUN_1002be800();
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

