
void FUN_1008197c0(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1008198f0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102205270,0,&local_38);
      break;
    case 1:
      FUN_100266310(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_100266c60(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_100266810(param_1,param_4[1]);
      return;
    case 4:
      uVar2 = FUN_100266950();
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

