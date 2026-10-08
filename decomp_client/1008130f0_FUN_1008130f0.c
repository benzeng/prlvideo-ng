
void FUN_1008130f0(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  long local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar5 == FUN_1008132e0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar5 == FUN_100813350) && (lVar6 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_38 = param_4[2];
      local_4c = *(undefined4 *)param_4[3];
      local_50 = *(undefined4 *)param_4[4];
      local_54 = CONCAT31(local_54._1_3_,*(undefined1 *)param_4[1]);
      local_48 = (void *)0x0;
      local_40 = &local_54;
      local_30 = &local_4c;
      local_28 = &local_50;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102202240,0,&local_48);
      break;
    case 1:
      local_38 = param_4[2];
      local_4c = *(undefined4 *)param_4[1];
      local_50 = *(undefined4 *)param_4[3];
      local_54 = *(undefined4 *)param_4[4];
      local_48 = (void *)0x0;
      local_40 = &local_4c;
      local_30 = &local_50;
      local_28 = &local_54;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102202240,1,&local_48);
      break;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x00010081326e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0xb0))(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_10022c940(param_1,*(undefined1 *)param_4[1]);
      return;
    case 4:
      FUN_10022c9a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      uVar4 = FUN_10022c340();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

