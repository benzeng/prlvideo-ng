
bool FUN_1004b9980(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar2 = param_2 >> 0x10 ^ param_2;
  uVar3 = (ulong)(uVar2 >> 8 ^ uVar2) & 0xff;
  plVar1 = *(long **)(param_1 + 0x818 + uVar3 * 8);
  if (plVar1 != (long *)0x0) {
    plVar5 = (long *)(param_1 + 0x818 + uVar3 * 8);
    do {
      plVar4 = plVar1;
      if (*(uint *)(plVar4 + 1) == param_2) {
        FUN_1004bd1b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),plVar4);
        _free((void *)plVar4[0xe]);
        plVar4[0xe] = 0;
        *(undefined4 *)(plVar4 + 0xf) = 0;
        *(undefined1 *)((long)plVar4 + 0x7c) = 0;
        _free((void *)plVar4[0xd]);
        plVar4[0xd] = 0;
        *plVar5 = *plVar4;
        _free(plVar4);
        return *plVar5 != 0;
      }
      plVar1 = (long *)*plVar4;
      plVar5 = plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  return false;
}

