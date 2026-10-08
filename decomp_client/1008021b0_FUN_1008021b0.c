
void FUN_1008021b0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  undefined8 uStack_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_100802460) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_1008024b0) && (lVar5 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100802500) && (lVar5 == 0)) {
      *puVar2 = 2;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100802560) && (lVar5 == 0)) {
      *puVar2 = 3;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_30 = (undefined4 *)param_4[1];
      uStack_28 = param_4[2];
      local_38 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fd360,0,&local_38);
      break;
    case 1:
      local_30 = (undefined4 *)param_4[1];
      uStack_28 = param_4[2];
      local_38 = (void *)0x0;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fd360,1,&local_38);
      break;
    case 2:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fd360,2,&local_38);
      break;
    case 3:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fd360,3,&local_38);
      break;
    case 4:
      FUN_10017da40(param_1,param_4[1]);
      return;
    case 5:
      FUN_10017da70(param_1,param_4[1]);
      return;
    case 6:
      FUN_10017db40(param_1,param_4[1]);
      return;
    case 7:
      FUN_10017dc50(param_1,param_4[1]);
      return;
    case 8:
      FUN_10017dd20(param_1,*(undefined4 *)param_4[1]);
      return;
    case 9:
      FUN_10017dd90(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 10:
      FUN_10017de00(param_1,*(undefined4 *)param_4[1]);
      return;
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

