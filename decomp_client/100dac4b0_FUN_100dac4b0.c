
ulong FUN_100dac4b0(char *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != (char *)0x0) {
    uVar1 = (ulong)(uint)(int)*param_1 % (ulong)param_2;
  }
  return uVar1;
}

