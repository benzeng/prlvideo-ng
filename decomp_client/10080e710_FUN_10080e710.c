
/* WARNING: Removing unreachable block (ram,0x00010080e8d0) */

void FUN_10080e710(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long local_48;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 != 0xc) {
    if (param_2 == 10) {
      if ((*(code **)param_4[1] == FUN_10080eb10) && (((long *)param_4[1])[1] == 0)) {
        *(undefined4 *)*param_4 = 0;
      }
      goto switchD_10080e7cd_default;
    }
    if (param_2 != 0) goto switchD_10080e7cd_default;
    switch(param_3) {
    case 0:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022008f0,0,&local_38);
      break;
    case 1:
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x78);
      uVar4 = *(undefined4 *)param_4[1];
      goto LAB_10080e8eb;
    case 2:
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x78);
      uVar4 = 0x80000275;
LAB_10080e8eb:
                    /* WARNING: Could not recover jumptable at 0x00010080e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar4);
      return;
    case 3:
      FUN_10020a940(param_1,*(undefined4 *)param_4[1],param_4[2]);
      return;
    case 4:
      FUN_10020aa90(param_1,param_4[1]);
      return;
    case 5:
      local_48 = *(long *)param_4[1];
      if (local_48 != 0) {
        _PrlHandle_AddRef();
      }
      uVar2 = FUN_10020ac00(param_1,&local_48);
      if (local_48 != 0) {
        _PrlHandle_Free();
      }
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        *(undefined1 *)*param_4 = uVar2;
      }
      break;
    case 6:
      FUN_10020b0e0(param_1,param_4[1],*(undefined8 *)param_4[2],*(undefined8 *)param_4[3]);
      return;
    case 7:
      FUN_10020b290(param_1,*(undefined1 *)param_4[1]);
      return;
    case 8:
      FUN_10020b2a0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 9:
      FUN_10020a7e0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 10:
      uVar4 = FUN_100209e80(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0xb:
      uVar4 = FUN_10020a380(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0xc:
      uVar4 = FUN_10020a900(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
      break;
    case 0xd:
      uVar4 = FUN_10020a590(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar4;
      }
    }
    goto switchD_10080e7cd_default;
  }
  switch(param_3) {
  case 1:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_10080e7cd_default;
  case 3:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_10080e7cd_default;
  case 6:
    if (*(int *)param_4[1] == 1) {
      iVar3 = FUN_1003dff90();
LAB_10080e880:
      *(int *)*param_4 = iVar3;
      goto switchD_10080e7cd_default;
    }
    break;
  case 8:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
      goto switchD_10080e7cd_default;
    }
    if (*(int *)param_4[1] == 1) {
      iVar3 = DAT_10226db58;
      if (DAT_10226db58 == 0) {
        iVar3 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
        DAT_10226db58 = iVar3;
      }
      goto LAB_10080e880;
    }
    break;
  case 9:
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_10080e7cd_default;
  }
  *(undefined4 *)*param_4 = 0xffffffff;
switchD_10080e7cd_default:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

