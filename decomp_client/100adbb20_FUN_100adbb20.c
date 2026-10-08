
void FUN_100adbb20(long param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_3 * 4 + 0x3ff;
  if ((uint)(uVar2 >> 10) != *(int *)(param_1 + 0x800) + 0x3ffU >> 10) {
    _free(*(void **)(param_1 + 0x808));
    uVar2 = (ulong)((uint)uVar2 & 0xfffffc00);
    pvVar1 = _malloc(uVar2);
    *(void **)(param_1 + 0x808) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      *(undefined4 *)(param_1 + 0x800) = 0;
      FUN_100df99c0("CHRCLIENT","ChrToolClient",0,"Failed to allocate memory (%d bytes) for zorder",
                    uVar2);
      return;
    }
  }
  *(uint *)(param_1 + 0x800) = param_3;
  if (param_3 != 0) {
    _memcpy(*(void **)(param_1 + 0x808),param_2,(ulong)param_3 << 2);
  }
  return;
}

