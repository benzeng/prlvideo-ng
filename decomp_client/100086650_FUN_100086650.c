
void FUN_100086650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3;
  if ((int)param_2 != 0xc) {
    if ((int)param_2 != 0) {
      return;
    }
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return;
      }
      FUN_100085ff0(param_1,*(undefined4 *)param_4[1],param_3,param_4,param_4[4]);
      return;
    }
    FUN_100086350(param_1,param_2,*(undefined4 *)param_4[2],param_4[3]);
    return;
  }
  if (iVar1 == 0) {
    if (*(int *)param_4[1] != 0) {
LAB_1000866f4:
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    iVar1 = DAT_10226c7d8;
    if (DAT_10226c7d8 == 0) {
      iVar1 = FUN_1000871d0("Actions::ActionType",0xffffffffffffffff,1);
      DAT_10226c7d8 = iVar1;
    }
  }
  else {
    if ((iVar1 != 1) || (*(int *)param_4[1] != 1)) goto LAB_1000866f4;
    iVar1 = DAT_10226db58;
    if (DAT_10226db58 == 0) {
      iVar1 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      DAT_10226db58 = iVar1;
    }
  }
  *(int *)*param_4 = iVar1;
  return;
}

