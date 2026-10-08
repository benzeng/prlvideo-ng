
void FUN_100832110(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined4 local_50;
  undefined1 local_49;
  void *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_100832250) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_1008322b0) && (lVar5 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      local_40 = param_4[1];
      local_49 = *(undefined1 *)param_4[2];
      local_50 = *(undefined4 *)param_4[3];
      local_48 = (void *)0x0;
      local_38 = &local_49;
      local_30 = &local_50;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220db30,1,&local_48);
    }
    else if (param_3 == 0) {
      local_40 = param_4[1];
      local_49 = *(undefined1 *)param_4[2];
      local_50 = *(undefined4 *)param_4[3];
      local_48 = (void *)0x0;
      local_38 = &local_49;
      local_30 = &local_50;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220db30,0,&local_48);
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

