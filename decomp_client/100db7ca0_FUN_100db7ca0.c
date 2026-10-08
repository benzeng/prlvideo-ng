
char * FUN_100db7ca0(ulong param_1,ulong param_2,char *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100db8ab0();
  _snprintf(param_3,0x3ff,"prf%u_%u",param_1 & 0xffffffff,param_2 & 0xffffffff,uVar1);
  return param_3;
}

