
void FUN_100178440(long param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2 != 0xc) {
    if ((int)param_2 != 0) {
      return;
    }
    if (param_3 == 2) {
      uVar2 = FUN_1001d50a0();
      FUN_1001d51e0(uVar2,0x80000251,1,0xffff);
      return;
    }
    if (param_3 == 1) {
      FUN_100157bc0(param_1,param_2,*(undefined4 *)param_4[2]);
      return;
    }
    if (param_3 != 0) {
      return;
    }
    if (*(int *)param_4[2] != 1) {
      return;
    }
    FUN_100157d20(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  if ((param_3 == 0) || (param_3 == 1)) {
    if (*(int *)param_4[1] == 0) {
      puVar1 = (undefined4 *)*param_4;
LAB_100178464:
      *puVar1 = 2;
      return;
    }
    if (*(int *)param_4[1] == 1) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
      return;
    }
  }
  else if (param_3 == 2) {
    puVar1 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] == 0) goto LAB_100178464;
    goto LAB_1001784d9;
  }
  puVar1 = (undefined4 *)*param_4;
LAB_1001784d9:
  *puVar1 = 0xffffffff;
  return;
}

