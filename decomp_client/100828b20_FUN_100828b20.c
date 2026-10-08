
/* WARNING: Removing unreachable block (ram,0x000100828c42) */

void FUN_100828b20(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    UNRECOVERED_JUMPTABLE = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((UNRECOVERED_JUMPTABLE == FUN_100828d50) && (lVar5 == 0)) {
      *puVar2 = 0;
      UNRECOVERED_JUMPTABLE = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((UNRECOVERED_JUMPTABLE == FUN_100828da0) && (lVar5 == 0)) {
      *puVar2 = 1;
    }
    goto switchD_100828bca_default;
  }
  if (param_2 != 0) goto switchD_100828bca_default;
  switch(param_3) {
  case 0:
    local_3c = *(undefined4 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220af80,0,&local_38);
    break;
  case 1:
    local_3c = *(undefined4 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10220af80,1,&local_38);
    break;
  case 2:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x78);
    uVar4 = *(undefined4 *)param_4[1];
    goto LAB_100828c5d;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x78);
    uVar4 = 0x80000275;
LAB_100828c5d:
                    /* WARNING: Could not recover jumptable at 0x000100828c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar4);
    return;
  case 4:
    uVar4 = FUN_1002f2450();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 5:
    uVar4 = FUN_1002f2530();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 6:
    uVar4 = FUN_1002f28f0();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 7:
    uVar4 = FUN_1002f2db0();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 8:
    uVar4 = FUN_1002f2df0();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 9:
    uVar4 = FUN_1002f2b40();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 10:
    uVar4 = FUN_1002f2e20();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 0xb:
    uVar4 = FUN_1002f32d0();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 0xc:
    uVar4 = FUN_1002f3330();
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
  }
switchD_100828bca_default:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

