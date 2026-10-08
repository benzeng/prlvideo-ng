
undefined8
FUN_1009d87b0(undefined8 param_1,int *param_2,undefined8 param_3,char param_4,undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (*param_2 == 0xd) {
    cVar1 = FUN_1009d96a0(param_1,param_5,0x18,param_3);
    uVar2 = 0;
    if ((cVar1 != '\0') && (param_4 != '\0')) {
      FUN_1009d8d00(param_5);
      uVar2 = 0;
    }
  }
  return uVar2;
}

