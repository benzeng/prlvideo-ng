
ulong FUN_1003a00f0(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0xffffffff;
  if (param_2 == 0) {
    uVar3 = 0xffffffff00000000;
  }
  else {
    uVar1 = FUN_1003a0360(param_1,param_2);
    uVar4 = (ulong)uVar1;
    lVar2 = FUN_1003a0140(param_1,param_2);
    uVar3 = lVar2 << 0x20;
  }
  return uVar3 | uVar4;
}

