
uint FUN_1005f4510(long param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_RDX;
  uint uVar5;
  
  uVar5 = 0xffffffff;
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x330))();
    uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x300))();
    uVar4 = uVar3 % (ulong)uVar2;
    uVar5 = 0xffffffff;
    do {
      uVar5 = uVar5 + 1;
      if ((uint)(uVar3 / uVar2) <= uVar5) {
        return 0xffffffff;
      }
      cVar1 = FUN_1005f4600(param_1,uVar5,uVar4);
      uVar4 = extraout_RDX;
    } while (cVar1 == '\0');
  }
  return uVar5;
}

