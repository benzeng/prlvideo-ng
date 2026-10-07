
undefined8 FUN_1000e9180(long param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    if (param_3 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(*(long *)(param_1 + 0x10) + 0x8d0) != '\0';
    }
    FUN_1000e91e0(param_1,bVar2);
    uVar1 = FUN_1000e9310(param_1,param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

