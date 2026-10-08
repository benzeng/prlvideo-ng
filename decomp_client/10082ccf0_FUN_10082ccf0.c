
void FUN_10082ccf0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *local_60;
  long *local_58;
  undefined4 local_4c;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  long **local_30;
  undefined4 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    if (((param_3 == 6) || (param_3 == 7)) && (*(int *)param_4[1] == 0)) {
      if (DAT_10226ca68 == 0) {
        DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226ca68;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_10082ce8f_default;
  }
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar6 = (long *)param_4[1];
    pcVar4 = (code *)*plVar6;
    lVar5 = plVar6[1];
    if ((pcVar4 == FUN_10082d100) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar6;
      lVar5 = plVar6[1];
    }
    if ((pcVar4 == FUN_10082d150) && (lVar5 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar6;
      lVar5 = plVar6[1];
    }
    if ((pcVar4 == FUN_10082d1a0) && (lVar5 == 0)) {
      *puVar2 = 2;
      pcVar4 = (code *)*plVar6;
      lVar5 = plVar6[1];
    }
    if ((pcVar4 == FUN_10082d1f0) && (lVar5 == 0)) {
      *puVar2 = 3;
      pcVar4 = (code *)*plVar6;
      lVar5 = plVar6[1];
    }
    if ((pcVar4 == FUN_10082d240) && (lVar5 == 0)) {
      *puVar2 = 4;
      pcVar4 = (code *)*plVar6;
      lVar5 = plVar6[1];
    }
    if ((pcVar4 == FUN_10082d290) && (lVar5 == 0)) {
      *puVar2 = 5;
      pcVar4 = (code *)*plVar6;
      lVar5 = plVar6[1];
    }
    if ((pcVar4 == FUN_10082d2e0) && (lVar5 == 0)) {
      *puVar2 = 6;
    }
    goto switchD_10082ce8f_default;
  }
  if (param_2 != 0) goto switchD_10082ce8f_default;
  switch(param_3) {
  case 0:
    local_40 = param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bdb0,0,&local_48);
    break;
  case 1:
    local_40 = param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bdb0,1,&local_48);
    break;
  case 2:
    local_40 = param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bdb0,2,&local_48);
    break;
  case 3:
    local_40 = param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bdb0,3,&local_48);
    break;
  case 4:
    local_40 = param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bdb0,4,&local_48);
    break;
  case 5:
    local_40 = param_4[1];
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bdb0,5,&local_48);
    break;
  case 6:
    local_58 = *(long **)param_4[1];
    if (local_58 != (long *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    local_4c = *(undefined4 *)param_4[2];
    local_38 = (void *)0x0;
    local_30 = &local_58;
    local_28 = &local_4c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_10220bdb0,6,&local_38);
    if (local_58 == (long *)0x0) break;
    LOCK();
    plVar6 = local_58 + 1;
    iVar3 = (int)*plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    plVar6 = local_58;
    goto LAB_10082d06a;
  case 7:
    local_60 = *(long **)param_4[1];
    if (local_60 != (long *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    FUN_10032efe0(param_1,&local_60,*(undefined4 *)param_4[2]);
    if (local_60 == (long *)0x0) break;
    LOCK();
    plVar6 = local_60 + 1;
    iVar3 = (int)*plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    plVar6 = local_60;
LAB_10082d06a:
    if (iVar3 == 1) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
switchD_10082ce8f_default:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

