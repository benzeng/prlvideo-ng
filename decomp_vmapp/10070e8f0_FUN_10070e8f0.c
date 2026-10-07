
char * FUN_10070e8f0(uint param_1,char *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = _getpid();
  uVar2 = FUN_10070f6b0(uVar1);
  _snprintf(param_2,0x3ff,"prf%u_%u",(ulong)uVar1,(ulong)param_1,uVar2);
  return param_2;
}

