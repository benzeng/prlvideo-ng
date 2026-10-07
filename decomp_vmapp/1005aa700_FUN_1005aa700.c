
ulong FUN_1005aa700(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar5 = (ulong)param_2 * (ulong)uVar1;
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar4 = 0;
  if (uVar5 < uVar2 + uVar3) {
    if (param_2 == 0) {
      uVar4 = (ulong)(uVar1 - uVar2);
    }
    else {
      uVar4 = (ulong)uVar1;
      if (uVar3 <= uVar5 && uVar5 - uVar3 != 0) {
        uVar4 = (ulong)uVar2;
      }
    }
  }
  return uVar4;
}

