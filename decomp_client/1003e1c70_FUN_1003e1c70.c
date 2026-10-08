
void FUN_1003e1c70(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0xc) {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      if (*(char *)param_4[1] == '\0') {
        return;
      }
      uVar3 = FUN_1003b0ad0(*(undefined8 *)(param_1 + 0x18));
      FUN_1003e5c20(uVar3);
      return;
    case 1:
      FUN_1003e13e0(param_1);
      return;
    case 2:
      uVar1 = *(undefined4 *)param_4[1];
      break;
    case 3:
      uVar1 = *(undefined4 *)param_4[1];
      uVar2 = *(undefined4 *)param_4[2];
      CMappingController::valueHandler();
      uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102210a70);
      FUN_1003f9c60(uVar3,uVar1,uVar2);
      break;
    default:
      return;
    }
    FUN_1003e16a0(param_1,uVar1);
    return;
  }
  if (((param_3 == 2) || (param_3 == 3)) && (*(int *)param_4[1] == 0)) {
    if (DAT_102273e70 == 0) {
      DAT_102273e70 = FUN_1003deea0("PRL_DEVICE_TYPE",0xffffffffffffffff,1);
    }
    *(int *)*param_4 = DAT_102273e70;
    return;
  }
  *(undefined4 *)*param_4 = 0xffffffff;
  return;
}

