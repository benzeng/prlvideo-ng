
void FUN_100863d70(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  void *local_38;
  undefined8 local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar4 == FUN_100863ee0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100863f30) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_100863f50) && (lVar6 == 0)) {
      *puVar2 = 2;
    }
    goto switchD_100863e32_default;
  }
  if (param_2 != 0) goto switchD_100863e32_default;
  switch(param_3) {
  case 0:
    local_30 = param_4[1];
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222dc30,0,&local_38);
  default:
switchD_100863e32_default:
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
    FUN_1007c4fd0();
    return;
  case 4:
    FUN_1007be6d0();
    return;
  }
  QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222dc30,iVar5,(void **)0x0);
  return;
}

