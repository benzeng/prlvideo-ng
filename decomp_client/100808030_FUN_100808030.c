
void FUN_100808030(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar4 == FUN_100808280) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_1008082d0) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_1008082f0) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100808310) && (lVar6 == 0)) {
      *puVar2 = 3;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100808330) && (lVar6 == 0)) {
      *puVar2 = 4;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100808350) && (lVar6 == 0)) {
      *puVar2 = 5;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100808370) && (lVar6 == 0)) {
      *puVar2 = 6;
    }
    goto switchD_10080819a_default;
  }
  if (param_2 != 0) goto switchD_10080819a_default;
  switch(param_3) {
  case 0:
    local_39 = *(undefined1 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_39;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe2b0,0,&local_38);
  default:
switchD_10080819a_default:
    if (lVar1 == local_20) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  case 1:
    iVar5 = 1;
    break;
  case 2:
    iVar5 = 2;
    break;
  case 3:
    iVar5 = 3;
    break;
  case 4:
    iVar5 = 4;
    break;
  case 5:
    iVar5 = 5;
    break;
  case 6:
    iVar5 = 6;
  }
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fe2b0,iVar5,(void **)0x0);
  return;
}

