
void FUN_100831bd0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

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
    if ((pcVar4 == FUN_100831f70) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100831fd0) && (lVar5 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_40 = param_4[1];
      local_49 = *(undefined1 *)param_4[2];
      local_50 = *(undefined4 *)param_4[3];
      local_48 = (void *)0x0;
      local_38 = &local_49;
      local_30 = &local_50;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220da10,0,&local_48);
      break;
    case 1:
      local_40 = param_4[1];
      local_49 = *(undefined1 *)param_4[2];
      local_50 = *(undefined4 *)param_4[3];
      local_48 = (void *)0x0;
      local_38 = &local_49;
      local_30 = &local_50;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220da10,1,&local_48);
      break;
    case 2:
      FUN_10035cb40();
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x000100831d4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x60))(param_1,param_4[1]);
      return;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x000100831d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x68))
                (param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 5:
      FUN_10035c410(param_1,param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 6:
      FUN_10035c4a0(param_1,param_4[1]);
      return;
    case 7:
      FUN_10035c4f0(param_1,param_4[1]);
      return;
    case 8:
      FUN_10035c580(param_1,param_4[1]);
      return;
    case 9:
      FUN_10035c610(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 10:
      FUN_10035c830();
      return;
    case 0xb:
      FUN_10035c890(param_1,*(undefined1 *)param_4[1]);
      return;
    case 0xc:
      FUN_10035c8f0();
      return;
    case 0xd:
      FUN_10035c940();
      return;
    case 0xe:
      FUN_10035c9a0();
      return;
    case 0xf:
      FUN_10035ca60(param_1,param_4[1]);
      break;
    case 0x10:
      FUN_10035cae0(param_1,param_4[1],*(undefined4 *)param_4[2]);
      return;
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

