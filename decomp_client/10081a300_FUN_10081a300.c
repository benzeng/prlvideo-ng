
/* WARNING: Removing unreachable block (ram,0x00010081a3ca) */

void FUN_10081a300(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long local_48;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10081a5f0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
    goto switchD_10081a382_default;
  }
  if (param_2 != 0) goto switchD_10081a382_default;
  switch(param_3) {
  case 0:
    local_3c = *(undefined4 *)param_4[1];
    local_38 = (void *)0x0;
    local_30 = &local_3c;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102205810,0,&local_38);
    break;
  case 1:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x78);
    uVar3 = *(undefined4 *)param_4[1];
    goto LAB_10081a3e5;
  case 2:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x78);
    uVar3 = 0x80000107;
LAB_10081a3e5:
                    /* WARNING: Could not recover jumptable at 0x00010081a3f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar3);
    return;
  case 3:
    FUN_10026d5e0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],
                  *(undefined4 *)param_4[3]);
    return;
  case 4:
    FUN_10026d8b0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 5:
    FUN_10026d9c0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 6:
    FUN_10026d3c0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 7:
    FUN_10026e0b0(param_1);
    return;
  case 8:
    FUN_10026dff0(param_1,param_4[1]);
    return;
  case 9:
    local_48 = *(long *)param_4[1];
    if (local_48 != 0) {
      _PrlHandle_AddRef();
    }
    uVar2 = FUN_10026e170(param_1,&local_48);
    if (local_48 != 0) {
      _PrlHandle_Free();
    }
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 10:
    uVar3 = FUN_10026b440(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 0xb:
    uVar3 = FUN_10026bca0(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 0xc:
    uVar3 = FUN_10026bd70(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 0xd:
    uVar3 = FUN_10026d160(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 0xe:
    uVar3 = FUN_10026bc00(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 0xf:
    uVar3 = FUN_10026bb50(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
  }
switchD_10081a382_default:
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

