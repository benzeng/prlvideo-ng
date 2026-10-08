
void FUN_100aeae40(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined1 uVar2;
  void *local_38;
  long local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_100aeaf40) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_30 = param_4[1];
      local_38 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10223b420,0,&local_38);
      break;
    case 1:
      uVar2 = FUN_100ae8a80(param_1,param_4[1],*(undefined4 *)param_4[2]);
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        *(undefined1 *)*param_4 = uVar2;
      }
      break;
    case 2:
      uVar2 = FUN_100ae8a80(param_1,param_4[1],5000);
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        *(undefined1 *)*param_4 = uVar2;
      }
      break;
    case 3:
      FUN_100ae8d30();
      return;
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

