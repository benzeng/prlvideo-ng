
void FUN_100833ab0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  int *local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  void *local_48;
  undefined8 local_40;
  undefined4 *puStack_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar4 == FUN_100833eb0) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100833f10) && (lVar5 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100833f70) && (lVar5 == 0)) {
      *puVar2 = 2;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100833fd0) && (lVar5 == 0)) {
      *puVar2 = 3;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100834030) && (lVar5 == 0)) {
      *puVar2 = 4;
      pcVar4 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar4 == FUN_100834090) && (lVar5 == 0)) {
      *puVar2 = 5;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_40 = param_4[1];
      local_4c = *(undefined4 *)param_4[2];
      local_48 = (void *)0x0;
      puStack_38 = &local_4c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220e420,0,&local_48);
      break;
    case 1:
      local_40 = param_4[1];
      local_4c = *(undefined4 *)param_4[2];
      local_48 = (void *)0x0;
      puStack_38 = &local_4c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220e420,1,&local_48);
      break;
    case 2:
      local_40 = param_4[1];
      puStack_38 = (undefined4 *)param_4[2];
      local_4c = *(undefined4 *)param_4[3];
      local_48 = (void *)0x0;
      local_30 = &local_4c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220e420,2,&local_48);
      break;
    case 3:
      local_40 = param_4[1];
      local_4c = *(undefined4 *)param_4[2];
      local_48 = (void *)0x0;
      puStack_38 = &local_4c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220e420,3,&local_48);
      break;
    case 4:
      local_40 = param_4[1];
      local_4c = *(undefined4 *)param_4[2];
      local_48 = (void *)0x0;
      puStack_38 = &local_4c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220e420,4,&local_48);
      break;
    case 5:
      local_40 = param_4[1];
      local_4c = *(undefined4 *)param_4[2];
      local_48 = (void *)0x0;
      puStack_38 = &local_4c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220e420,5,&local_48);
      break;
    case 6:
      local_68 = *(int **)param_4[1];
      uStack_60 = ((undefined8 *)param_4[1])[1];
      if (local_68 != (int *)0x0) {
        LOCK();
        *local_68 = *local_68 + 1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*local_68 != 0);
      }
      FUN_100370810(param_1,&local_68);
      if (local_68 != (int *)0x0) {
        LOCK();
        *local_68 = *local_68 + -1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*local_68 != 0);
        if ((*local_68 == 0) && (local_68 != (int *)0x0)) {
          operator_delete(local_68);
        }
      }
      break;
    case 7:
      FUN_100370bd0(param_1,param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 8:
      FUN_100370d70(param_1,param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 9:
      FUN_1003702d0(param_1,param_4[1]);
      return;
    case 10:
      FUN_1003748d0(param_1,param_4[1]);
      return;
    case 0xb:
      FUN_100374890(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    }
  }
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

