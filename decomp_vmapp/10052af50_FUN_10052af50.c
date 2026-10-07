
ulong FUN_10052af50(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  uVar3 = 0;
  if (param_2 < *(uint *)(lVar2 + 4)) {
    lVar2 = lVar2 + *(long *)(lVar2 + 0x10);
    uVar3 = (ulong)*(uint *)((long)(int)param_2 * 0x20 + 0x18 + lVar2);
    uVar1 = (ulong)*(uint *)((long)(int)param_2 * 0x20 + 0x1c + lVar2) << 0x20;
  }
  return uVar1 | uVar3;
}

