
ulong FUN_1002a5990(ulong *param_1,ulong param_2,void *param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar2 = (uint)param_1[1] - param_2;
  uVar1 = 0;
  if (param_2 <= (uint)param_1[1]) {
    uVar3 = uVar2 & 0xffffffff;
    if (param_4 <= uVar2) {
      uVar3 = (ulong)param_4;
    }
    if ((int)uVar3 != 0) {
      param_2 = (*param_1 & 0xfff) + param_2;
      uVar2 = uVar3;
      do {
        uVar4 = 0x1000 - (int)(param_2 & 0xfff);
        uVar1 = (ulong)uVar4;
        if ((uint)uVar2 < uVar4) {
          uVar1 = uVar2;
        }
        _memcpy(param_3,(void *)(*(long *)((long)param_1 + (param_2 >> 8 & 0xfffffffffffff0) + 0x20)
                                + (param_2 & 0xfff)),uVar1);
        param_2 = param_2 + uVar1;
        param_3 = (void *)((long)param_3 + uVar1);
        uVar4 = (uint)uVar2 - (int)uVar1;
        uVar2 = (ulong)uVar4;
        uVar1 = uVar3;
      } while (uVar4 != 0);
    }
  }
  return uVar1;
}

