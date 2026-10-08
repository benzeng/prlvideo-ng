
void FUN_1007f3870(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  void *local_38;
  undefined8 local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar5 = (long *)param_4[1];
    UNRECOVERED_JUMPTABLE = (code *)*plVar5;
    lVar4 = plVar5[1];
    if ((UNRECOVERED_JUMPTABLE == FUN_1007f3a40) && (lVar4 == 0)) {
      *puVar2 = 0;
      UNRECOVERED_JUMPTABLE = (code *)*plVar5;
      lVar4 = plVar5[1];
    }
    if ((UNRECOVERED_JUMPTABLE == FUN_1007f3a90) && (lVar4 == 0)) {
      *puVar2 = 1;
      UNRECOVERED_JUMPTABLE = (code *)*plVar5;
      lVar4 = plVar5[1];
    }
    if ((UNRECOVERED_JUMPTABLE == FUN_1007f3ae0) && (lVar4 == 0)) {
      *puVar2 = 2;
    }
    goto switchD_1007f3945_default;
  }
  if (param_2 != 0) goto switchD_1007f3945_default;
  switch(param_3) {
  case 0:
    local_30 = param_4[1];
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f85a0,0,&local_38);
    break;
  case 1:
    local_30 = param_4[1];
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f85a0,1,&local_38);
    break;
  case 2:
    local_30 = param_4[1];
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021f85a0,2,&local_38);
    break;
  case 3:
    puVar3 = (undefined8 *)param_4[1];
                    /* WARNING: Could not recover jumptable at 0x0001007f39ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))
              (*(long **)(param_1 + 0x18),*puVar3,puVar3 + 1,puVar3[2]);
    return;
  case 4:
    puVar3 = (undefined8 *)param_4[1];
    plVar5 = *(long **)(param_1 + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x10);
    goto LAB_1007f3a10;
  case 5:
    puVar3 = (undefined8 *)param_4[1];
    plVar5 = *(long **)(param_1 + 0x18);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x18);
LAB_1007f3a10:
                    /* WARNING: Could not recover jumptable at 0x0001007f3a21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar5,*puVar3);
    return;
  }
switchD_1007f3945_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

