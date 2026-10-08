
void FUN_1007fd7e0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

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
    if ((pcVar4 == FUN_1007fd9a0) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_1007fd9f0) && (lVar6 == 0)) {
      *puVar2 = 1;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_1007fda40) && (lVar6 == 0)) {
      *puVar2 = 2;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_1007fda60) && (lVar6 == 0)) {
      *puVar2 = 3;
    }
    goto switchD_1007fd8cc_default;
  }
  if (param_2 != 0) goto switchD_1007fd8cc_default;
  switch(param_3) {
  case 0:
    local_30 = param_4[1];
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fcd50,0,&local_38);
    break;
  case 1:
    local_30 = param_4[1];
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fcd50,1,&local_38);
    break;
  case 2:
    iVar5 = 2;
    goto LAB_1007fd94c;
  case 3:
    iVar5 = 3;
LAB_1007fd94c:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fcd50,iVar5,(void **)0x0)
    ;
    return;
  case 4:
    FUN_1001823e0();
    return;
  case 5:
    FUN_100182a20();
    return;
  }
switchD_1007fd8cc_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

