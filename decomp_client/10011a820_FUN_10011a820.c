
uint FUN_10011a820(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_10018d470();
  uVar1 = 1;
  if ((uVar2 & 2) == 0) {
    uVar1 = FUN_10018d470(param_1);
    uVar1 = (uVar1 & 4) >> 2;
  }
  return uVar1;
}

