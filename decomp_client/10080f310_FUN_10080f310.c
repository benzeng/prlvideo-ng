
void FUN_10080f310(QObject *param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long local_48;
  undefined1 local_39;
  void *local_38;
  undefined1 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 10) {
    if ((*(code **)param_4[1] == FUN_10080f5a0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_39 = *(undefined1 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_39;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102200b30,0,&local_38);
      break;
    case 1:
      FUN_10020cef0(param_1,param_4[1]);
      return;
    case 2:
      FUN_10020cf70(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_10020cf90(param_1);
      return;
    case 4:
      FUN_10020cfb0(param_1);
      return;
    case 5:
      FUN_10020d560(param_1);
      return;
    case 6:
      FUN_10020d5a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      uVar3 = FUN_10020c880(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar3;
      }
      break;
    case 8:
      uVar3 = FUN_10020ca10(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar3;
      }
      break;
    case 9:
      uVar3 = FUN_10020cfd0(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar3;
      }
      break;
    case 10:
      uVar3 = FUN_10020d740(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar3;
      }
      break;
    case 0xb:
      uVar3 = FUN_10020dbf0(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar3;
      }
      break;
    case 0xc:
      local_48 = *(long *)param_4[1];
      if (local_48 != 0) {
        _PrlHandle_AddRef();
      }
      uVar2 = FUN_10020d5c0(param_1,&local_48);
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

