
void FUN_100850850(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  int *local_68;
  undefined8 uStack_60;
  int *local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  void *local_38;
  undefined8 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    switch(param_3) {
    case 2:
    case 3:
      if (*(int *)param_4[1] == 0) {
        uVar4 = FUN_100850de0();
LAB_1008509b0:
        *(undefined4 *)*param_4 = uVar4;
        goto switchD_10085097b_default;
      }
      break;
    case 6:
      if (*(uint *)param_4[1] < 2) {
        uVar4 = FUN_100809850();
        goto LAB_1008509b0;
      }
      break;
    case 7:
      if (*(uint *)param_4[1] < 2) {
        uVar4 = FUN_1003dff90();
        goto LAB_1008509b0;
      }
    }
    *(undefined4 *)*param_4 = 0xffffffff;
    goto switchD_10085097b_default;
  }
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar5 = (code *)*plVar3;
    lVar7 = plVar3[1];
    if ((pcVar5 == FUN_100850c20) && (lVar7 == 0)) {
      *puVar2 = 0;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_100850c40) && (lVar7 == 0)) {
      *puVar2 = 1;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_100850c60) && (lVar7 == 0)) {
      *puVar2 = 2;
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
    }
    if ((pcVar5 == FUN_100850cc0) && (lVar7 == 0)) {
      *puVar2 = 3;
    }
    goto switchD_10085097b_default;
  }
  if (param_2 != 0) goto switchD_10085097b_default;
  switch(param_3) {
  case 0:
    iVar6 = 0;
    goto LAB_1008509e9;
  case 1:
    iVar6 = 1;
LAB_1008509e9:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022256d0,iVar6,(void **)0x0)
    ;
    return;
  case 2:
    local_40 = *(undefined8 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_40;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022256d0,2,&local_38);
    break;
  case 3:
    local_40 = *(undefined8 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_40;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022256d0,3,&local_38);
    break;
  case 4:
    FUN_1000702f0();
    return;
  case 5:
    FUN_100070750(param_1,param_4[1]);
    return;
  case 6:
    local_58 = *(int **)param_4[1];
    uStack_50 = ((undefined8 *)param_4[1])[1];
    if (local_58 != (int *)0x0) {
      LOCK();
      *local_58 = *local_58 + 1;
      UNLOCK();
      local_38 = (void *)CONCAT71(local_38._1_7_,*local_58 != 0);
    }
    local_68 = *(int **)param_4[2];
    uStack_60 = ((undefined8 *)param_4[2])[1];
    if (local_68 != (int *)0x0) {
      LOCK();
      *local_68 = *local_68 + 1;
      UNLOCK();
      local_38 = (void *)CONCAT71(local_38._1_7_,*local_68 != 0);
    }
    FUN_1006b5420(param_1,&local_58,&local_68);
    if (local_68 != (int *)0x0) {
      LOCK();
      *local_68 = *local_68 + -1;
      UNLOCK();
      local_38 = (void *)CONCAT71(local_38._1_7_,*local_68 != 0);
      if ((*local_68 == 0) && (local_68 != (int *)0x0)) {
        operator_delete(local_68);
      }
    }
    if (local_58 != (int *)0x0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      local_38 = (void *)CONCAT71(local_38._1_7_,*local_58 != 0);
      if ((*local_58 == 0) && (local_58 != (int *)0x0)) {
        operator_delete(local_58);
      }
    }
    break;
  case 7:
    FUN_1006b53a0(param_1,*(undefined8 *)param_4[1],*(undefined8 *)param_4[2]);
    return;
  case 8:
    FUN_1006b5340();
    return;
  case 9:
    FUN_1006b5370();
    return;
  }
switchD_10085097b_default:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

