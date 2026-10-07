
/* WARNING: Removing unreachable block (ram,0x000100554413) */
/* WARNING: Removing unreachable block (ram,0x00010055435c) */
/* WARNING: Removing unreachable block (ram,0x000100554395) */

long FUN_100554310(short *param_1)

{
  short sVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  sVar1 = *param_1;
  if (sVar1 == 0x201) {
    uVar4 = (ulong)*(uint *)(param_1 + 4) * 4 + 0xfff & 0x7fffff000;
    uVar3 = (ulong)((*(uint *)(param_1 + 4) * *(int *)(param_1 + 0x12) + 0x1f >> 5) * 4 + 0xfff &
                   0x3ffff000);
    uVar2 = 0;
    if (*(char *)((long)param_1 + 3) != '\0') {
      uVar2 = uVar4;
    }
    uVar2 = ((ulong)*(uint *)(param_1 + 0xe) + (ulong)*(uint *)(param_1 + 6)) * 0x1000 + uVar4 +
            uVar2;
  }
  else {
    if (sVar1 != 0x200) {
      if (sVar1 != 1) {
        return -1;
      }
      return ((ulong)*(uint *)(param_1 + 8) +
             (ulong)(uint)(*(int *)(param_1 + 0x12) * *(int *)(param_1 + 6))) * 0x1000;
    }
    uVar3 = ((ulong)*(uint *)(param_1 + 8) +
            (ulong)(uint)(*(int *)(param_1 + 0x12) * *(int *)(param_1 + 6))) * 0x1000;
    uVar2 = (ulong)*(uint *)(param_1 + 4) * 4 + 0xfff & 0x7fffff000;
  }
  return uVar2 + uVar3;
}

