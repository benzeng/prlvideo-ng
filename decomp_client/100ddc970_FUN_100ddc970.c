
uint FUN_100ddc970(uint *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = 0xffffffea;
  if ((param_1 != (uint *)0x0) && (param_2 < *param_1)) {
    lVar1 = *(long *)(param_1 + (ulong)(param_2 >> 0xf) * 2 + 2);
    uVar2 = 0;
    if (lVar1 != 0) {
      if (lVar1 == 1) {
        return 1;
      }
      uVar2 = -(uint)((*(ulong *)(lVar1 + (ulong)(param_2 >> 6 & 0x1ff) * 8) >>
                       ((ulong)param_2 & 0x3f) & 1) != 0) & 1;
    }
  }
  return uVar2;
}

