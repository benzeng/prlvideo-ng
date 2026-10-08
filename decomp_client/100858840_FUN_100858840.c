
void FUN_100858840(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_100858950) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_1008589a0) && (lVar6 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 1) {
    if (param_3 == 0) {
      puVar2 = (undefined4 *)*param_4;
      uVar4 = FUN_100746a60();
      *puVar2 = uVar4;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102228140,1,(void **)0x0);
      return;
    }
    if (param_3 == 0) {
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102228140,0,&local_38);
    }
  }
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

