
void FUN_100adb760(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar2 = param_2 >> 0x10 ^ param_2;
  uVar3 = (ulong)((uVar2 >> 8 ^ uVar2) & 0xff);
  plVar1 = *(long **)(param_1 + uVar3 * 8);
  if (plVar1 != (long *)0x0) {
    plVar5 = (long *)(param_1 + uVar3 * 8);
    do {
      plVar4 = plVar1;
      if (*(uint *)(plVar4 + 1) == param_2) {
        if ((int)plVar4[9] == 0) {
          *(int *)(param_1 + 0x818) = *(int *)(param_1 + 0x818) + -1;
        }
        _free((void *)plVar4[0xd]);
        _free((void *)plVar4[0xf]);
        _free((void *)plVar4[0x11]);
        *plVar5 = *plVar4;
        _free(plVar4);
        return;
      }
      plVar1 = (long *)*plVar4;
      plVar5 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  return;
}

