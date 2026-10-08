
undefined8 FUN_1001b3ce0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1001aea00();
  uVar2 = 0x3b33;
  if (cVar1 == '\0') {
    cVar1 = FUN_1001aeb10(param_1,param_2);
    uVar2 = 0x3b34;
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
  }
  return uVar2;
}

