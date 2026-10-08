
void FUN_10080dec0(QObject *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long local_48;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 0xc) {
    if (((param_3 == 6) || (param_3 == 8)) && (*(int *)param_4[1] == 1)) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10080e230) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_3c = *(undefined4 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022006b0,0,&local_38);
      break;
    case 1:
      FUN_100205fa0(param_1);
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x00010080e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0xb0))(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_100206b30(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_100206f20(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_100203ea0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 6:
      FUN_100207d20(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 7:
      FUN_100206cd0(param_1);
      return;
    case 8:
      FUN_100205f50(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 9:
      FUN_100204710(param_1);
      return;
    case 10:
      FUN_100205710(param_1);
      return;
    case 0xb:
      uVar3 = FUN_100204c10(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar3;
      }
      break;
    case 0xc:
      uVar3 = FUN_100204560(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar3;
      }
      break;
    case 0xd:
      uVar3 = FUN_100205420(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar3;
      }
      break;
    case 0xe:
      local_48 = *(long *)param_4[1];
      if (local_48 != 0) {
        _PrlHandle_AddRef();
      }
      uVar2 = FUN_100205ff0(param_1,&local_48);
      if (local_48 != 0) {
        _PrlHandle_Free();
      }
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        *(undefined1 *)*param_4 = uVar2;
      }
    }
  }
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

