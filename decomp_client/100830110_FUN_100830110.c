
void FUN_100830110(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  void *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_100830220) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100830270) && (lVar6 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220d0e0,1,(void **)0x0);
      return;
    }
    if (param_3 == 0) {
      local_30 = param_4[1];
      puVar4 = (undefined8 *)param_4[2];
      local_58 = *puVar4;
      local_50 = puVar4[1];
      local_48 = puVar4[2];
      local_40 = *(undefined4 *)(puVar4 + 3);
      local_38 = (void *)0x0;
      local_28 = &local_58;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220d0e0,0,&local_38);
    }
  }
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

