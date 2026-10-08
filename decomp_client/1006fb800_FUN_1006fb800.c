
void FUN_1006fb800(long param_1,int param_2,ulong param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  
  if (param_2 != 0xc) {
    if (param_2 != 0) {
      return;
    }
    switch(param_3 & 0xffffffff) {
    case 0:
      uVar1 = *(undefined1 *)param_4[1];
      break;
    case 1:
      uVar1 = 0;
      break;
    case 2:
      FUN_1006fad00(param_1,*(undefined4 *)param_4[1],param_3,param_4[3]);
      return;
    case 3:
      if ((*(byte *)param_4[2] & 1) == 0) {
        if ((*(uint *)param_4[1] & 1) == 0) {
          return;
        }
      }
      else if ((*(uint *)param_4[1] & 1) != 0) {
        return;
      }
      FUN_100720b50(param_1 + 0x48);
      return;
    case 4:
      FUN_1006fae20();
      return;
    default:
      return;
    }
    FUN_1006fa4d0(param_1,uVar1);
    return;
  }
  if (((int)param_3 == 2) && (*(int *)param_4[1] == 0)) {
    if (DAT_10226c7d8 == 0) {
      DAT_10226c7d8 = FUN_1000871d0("Actions::ActionType",0xffffffffffffffff,1);
    }
    *(int *)*param_4 = DAT_10226c7d8;
    return;
  }
  *(undefined4 *)*param_4 = 0xffffffff;
  return;
}

