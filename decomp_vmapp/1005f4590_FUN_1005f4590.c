
uint FUN_1005f4590(long param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_RDX;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    param_2 = 0xffffffff;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x330))();
    uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x300))();
    uVar4 = uVar3 % (ulong)uVar2;
    do {
      param_2 = param_2 + 1;
      if ((uint)(uVar3 / uVar2) <= param_2) {
        return 0xffffffff;
      }
      cVar1 = FUN_1005f4600(param_1,param_2,uVar4);
      uVar4 = extraout_RDX;
    } while (cVar1 == '\0');
  }
  return param_2;
}

