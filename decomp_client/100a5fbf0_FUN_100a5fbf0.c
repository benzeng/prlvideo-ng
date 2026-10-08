
void FUN_100a5fbf0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *local_70;
  long *local_68;
  undefined4 local_60;
  undefined1 local_59;
  void *local_58;
  long **local_50;
  undefined4 *local_48;
  void *local_38;
  undefined1 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar6 = (long *)param_4[1];
    pcVar4 = (code *)*plVar6;
    lVar5 = plVar6[1];
    if ((pcVar4 == FUN_100a5feb0) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar6;
      lVar5 = plVar6[1];
    }
    if ((pcVar4 == FUN_100a5ff10) && (lVar5 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar6;
      lVar5 = plVar6[1];
    }
    if ((pcVar4 == FUN_100a5ff70) && (lVar5 == 0)) {
      *puVar2 = 2;
    }
    goto switchD_100a5fcc5_default;
  }
  if (param_2 != 0) goto switchD_100a5fcc5_default;
  switch(param_3) {
  case 0:
    local_68 = *(long **)param_4[1];
    if (local_68 != (long *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    local_60 = *(undefined4 *)param_4[2];
    local_58 = (void *)0x0;
    local_50 = &local_68;
    local_48 = &local_60;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022389b0,0,&local_58);
    if (local_68 == (long *)0x0) break;
    LOCK();
    plVar6 = local_68 + 1;
    iVar3 = (int)*plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    plVar6 = local_68;
    goto LAB_100a5fdcc;
  case 1:
    local_59 = *(undefined1 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_59;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022389b0,1,&local_38);
    break;
  case 2:
    local_59 = *(undefined1 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_59;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022389b0,2,&local_38);
    break;
  case 3:
    local_70 = *(long **)param_4[1];
    if (local_70 != (long *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    FUN_100a5e960(param_1,&local_70,*(undefined4 *)param_4[2]);
    if (local_70 == (long *)0x0) break;
    LOCK();
    plVar6 = local_70 + 1;
    iVar3 = (int)*plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    plVar6 = local_70;
LAB_100a5fdcc:
    if (iVar3 == 1) {
      (**(code **)(*plVar6 + 0x10))();
    }
    break;
  case 4:
    FUN_100a5ea80(param_1,*(undefined1 *)param_4[1]);
    return;
  case 5:
    FUN_100a5ea00(param_1,param_4[1]);
    return;
  case 6:
    FUN_100a5e9a0(param_1,*(undefined1 *)param_4[1]);
    return;
  }
switchD_100a5fcc5_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

