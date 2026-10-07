
undefined8 FUN_100549b40(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if ((char)param_1[0x17] == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
    if ((cVar1 == '\0') && (cVar1 = FUN_1005493a0(param_1), cVar1 == '\0')) {
      uVar2 = 0;
    }
    else if (param_1[0x18] == 0) {
      uVar2 = FUN_100549800(param_1);
    }
    else {
      uVar2 = FUN_100549a70(param_1);
    }
  }
  return uVar2;
}

