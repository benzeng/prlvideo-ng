
undefined8 FUN_10046a770(long *param_1)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = (char *)(*(long *)(*param_1 + 0x10) + 0x10 + *param_1);
  sVar2 = _strlen(pcVar1);
  FUN_1008e3f20(pcVar1,sVar2 & 0xffffffff);
  return 0;
}

