
void FUN_1007fa840(QObject *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    if ((param_3 == 1) && (*(int *)param_4[1] == 0)) {
      uVar3 = FUN_100691e00();
      *(undefined4 *)*param_4 = uVar3;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1007fa980) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f9da0,0,&local_38);
      break;
    case 1:
      FUN_1001369c0(param_1,*(undefined8 *)param_4[1]);
      return;
    case 2:
      FUN_100136bc0();
      return;
    case 3:
      FUN_100136a80(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      uVar2 = FUN_100136bd0();
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        *(undefined1 *)*param_4 = uVar2;
      }
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

