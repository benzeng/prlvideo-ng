
void FUN_100801870(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long local_48;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  long *local_30;
  undefined4 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar4 == FUN_100801ba0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100801bf0) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100801c40) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100801c90) && (lVar6 == 0)) {
      *puVar2 = 3;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100801ce0) && (lVar6 == 0)) {
      *puVar2 = 4;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100801d30) && (lVar6 == 0)) {
      *puVar2 = 5;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100801d90) && (lVar6 == 0)) {
      *puVar2 = 6;
    }
    goto switchD_1008019f0_default;
  }
  if (param_2 != 0) goto switchD_1008019f0_default;
  switch(param_3) {
  case 0:
    local_30 = (long *)param_4[1];
    iVar5 = 0;
    break;
  case 1:
    local_30 = (long *)param_4[1];
    iVar5 = 1;
    break;
  case 2:
    local_30 = (long *)param_4[1];
    iVar5 = 2;
    break;
  case 3:
    local_30 = (long *)param_4[1];
    iVar5 = 3;
    break;
  case 4:
    local_30 = (long *)param_4[1];
    iVar5 = 4;
    break;
  case 5:
    local_3c = *(undefined4 *)param_4[1];
    local_40 = *(undefined4 *)param_4[2];
    local_30 = (long *)&local_3c;
    local_28 = &local_40;
    iVar5 = 5;
    break;
  case 6:
    local_48 = *(long *)param_4[1];
    if (local_48 != 0) {
      _PrlHandle_AddRef();
    }
    local_38 = (void *)0x0;
    local_30 = &local_48;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fcf90,6,&local_38);
    if (local_48 != 0) {
      _PrlHandle_Free();
    }
    goto switchD_1008019f0_default;
  case 7:
    FUN_100155710(param_1);
    return;
  default:
    goto switchD_1008019f0_default;
  }
  local_38 = (void *)0x0;
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fcf90,iVar5,&local_38);
switchD_1008019f0_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

