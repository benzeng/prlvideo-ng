
void FUN_100764ac0(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong local_20;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (*(uint *)(plVar1 + 4) != 0) {
    uVar3 = (uint)(param_2 >> 0x1f) ^ (uint)param_2 ^ *(uint *)((long)plVar1 + 0x24);
    plVar2 = *(long **)(plVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(plVar1 + 4)) * 8);
    if (plVar2 != plVar1) {
      do {
        if ((*(uint *)(plVar2 + 1) == uVar3) && (plVar2[2] == param_2)) {
          if (plVar2 == plVar1) {
            return;
          }
          local_20 = param_2;
          FUN_100764c30(param_1 + 0x20,&local_20);
          FUN_10085bca0(param_1);
          return;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != plVar1);
    }
  }
  return;
}

