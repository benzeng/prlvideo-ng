
void FUN_10085d6f0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  undefined8 uStack_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_10085d8a0) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_10085d8f0) && (lVar5 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_10085d940) && (lVar5 == 0)) {
      *puVar2 = 2;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_39 = *(undefined1 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_39;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10222a8a0,0,&local_38);
      break;
    case 1:
      local_30 = (undefined1 *)param_4[1];
      uStack_28 = param_4[2];
      local_38 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10222a8a0,1,&local_38);
      break;
    case 2:
      local_30 = (undefined1 *)param_4[1];
      local_38 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10222a8a0,2,&local_38);
      break;
    case 3:
      FUN_1007834a0(param_1,*(undefined1 *)param_4[1]);
      return;
    case 4:
      FUN_100782c20(param_1,param_4[1]);
      return;
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

