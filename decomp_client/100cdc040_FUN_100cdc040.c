
undefined8 FUN_100cdc040(long *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (param_2 != 0) {
    if ((param_2 == 0x4d) && (param_3 == 0)) {
      *(int *)(param_1 + 0xa1) = -(int)param_1[0xa1];
    }
    cVar1 = FUN_100cd3900(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0xc0))(param_1,param_2,param_3 != 0);
    }
  }
  return uVar2;
}

