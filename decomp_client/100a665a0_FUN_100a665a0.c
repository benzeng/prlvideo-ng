
void FUN_100a665a0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_100a66740) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100a667a0) && (lVar5 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_30 = (undefined4 *)param_4[1];
      local_3c = *(undefined4 *)param_4[2];
      local_38 = (void *)0x0;
      local_28 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102238ed0,0,&local_38);
      break;
    case 1:
      local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)param_4[1]);
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102238ed0,1,&local_38);
      break;
    case 2:
      FUN_100a66340(param_1,param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 3:
      FUN_100a66420(param_1,param_4[1]);
      return;
    case 4:
      FUN_100a663d0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 5:
      FUN_100a662f0(param_1,*(undefined1 *)param_4[1]);
      return;
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

