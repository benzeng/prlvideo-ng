
void FUN_1008111a0(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 == 0xc) {
    switch(param_3) {
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
      if (*(int *)param_4[1] == 1) {
        if (DAT_10226db58 == 0) {
          DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
        }
        *(int *)*param_4 = DAT_10226db58;
        goto switchD_100811276_default;
      }
    }
    *(undefined4 *)*param_4 = 0xffffffff;
  }
  else if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_1008115d0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_3c = *(undefined4 *)param_4[1];
      local_40 = *(undefined4 *)param_4[2];
      local_38 = (void *)0x0;
      local_30 = &local_3c;
      local_28 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_102201620,0,&local_38);
      break;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x0001008112e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x80))();
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x000100811315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x128))
                (param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 3:
      FUN_10021cc00(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_10021d300(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 5:
      FUN_10021e430(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 6:
      FUN_1002204f0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 7:
      FUN_1002209e0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 8:
      FUN_100221480(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 9:
      FUN_10021cbc0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 10:
      FUN_100221930(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0xb:
      uVar2 = FUN_10021cbf0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0xc:
      uVar2 = (**(code **)(*(long *)param_1 + 0xe0))();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0xd:
      uVar2 = (**(code **)(*(long *)param_1 + 0xd8))();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0xe:
      uVar2 = FUN_10021c650();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0xf:
      uVar2 = FUN_10021d320();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0x10:
      uVar2 = FUN_10021ef30();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0x11:
      uVar2 = FUN_10021f570();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0x12:
      uVar2 = FUN_100220ad0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0x13:
      uVar2 = FUN_10021e9c0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0x14:
      uVar2 = FUN_100220600();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0x15:
      uVar2 = FUN_1002213f0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0x16:
      uVar2 = FUN_100221570();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
    }
  }
switchD_100811276_default:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

