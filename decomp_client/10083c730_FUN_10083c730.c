
void FUN_10083c730(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 local_50;
  void *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_10083c860) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_10083c8b0) && (lVar5 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_100535760(param_1,param_4[1]);
      return;
    }
    if (param_3 == 1) {
      local_40 = (undefined8 *)param_4[1];
      uStack_38 = param_4[2];
      local_30 = param_4[3];
      local_48 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221a850,1,&local_48);
    }
    else if (param_3 == 0) {
      local_50 = *(undefined8 *)param_4[1];
      local_48 = (void *)0x0;
      local_40 = &local_50;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221a850,0,&local_48);
    }
  }
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

