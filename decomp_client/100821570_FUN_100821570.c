
/* WARNING: Removing unreachable block (ram,0x000100821680) */

void FUN_100821570(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  void *local_38;
  long local_30;
  long lStack_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    UNRECOVERED_JUMPTABLE = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((UNRECOVERED_JUMPTABLE == FUN_100821740) && (lVar5 == 0)) {
      *puVar2 = 0;
      UNRECOVERED_JUMPTABLE = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((UNRECOVERED_JUMPTABLE == FUN_100821790) && (lVar5 == 0)) {
      *puVar2 = 1;
    }
    goto switchD_10082161a_default;
  }
  if (param_2 != 0) goto switchD_10082161a_default;
  switch(param_3) {
  case 0:
    local_30 = param_4[1];
    lStack_28 = param_4[2];
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102208010,0,&local_38);
    break;
  case 1:
    local_30 = param_4[1];
    local_38 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102208010,1,&local_38);
    break;
  case 2:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x78);
    uVar4 = *(undefined4 *)param_4[1];
    goto LAB_100821697;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x78);
    uVar4 = 0x80000275;
LAB_100821697:
                    /* WARNING: Could not recover jumptable at 0x00010082169f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar4);
    return;
  case 4:
    FUN_1002b5580(param_1,*(undefined4 *)param_4[1]);
    return;
  case 5:
    FUN_1002b5ab0();
    return;
  case 6:
    FUN_1002b53b0();
    return;
  case 7:
    uVar4 = FUN_1002b4120();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 8:
    uVar4 = FUN_1002b4650();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
  }
switchD_10082161a_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

