
void FUN_100858360(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined4 local_5c;
  void *local_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_1008584f0) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100858550) && (lVar5 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_5c = *(undefined4 *)param_4[1];
      local_48 = param_4[2];
      uStack_40 = param_4[3];
      local_38 = param_4[4];
      uStack_30 = param_4[5];
      local_58 = (void *)0x0;
      local_50 = &local_5c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102227fc0,0,&local_58);
      break;
    case 1:
      local_48 = param_4[2];
      local_5c = *(undefined4 *)param_4[1];
      local_58 = (void *)0x0;
      local_50 = &local_5c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102227fc0,1,&local_58);
      break;
    case 2:
      FUN_10073fe60(param_1,*(undefined4 *)param_4[1],param_4[2],param_4[3],param_4[4],param_4[5]);
      return;
    case 3:
      FUN_10073fe70(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

