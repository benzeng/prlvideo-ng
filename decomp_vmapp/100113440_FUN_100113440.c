
void FUN_100113440(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1158),0x84,0);
  lVar2 = (ulong)param_2 * 0x3024;
  if (*(int *)(lVar1 + 0x2098 + lVar2) != 0) {
    lVar3 = 0;
    do {
      FUN_10008c980(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1940),
                    (ulong)*(uint *)((ulong)param_2 * 0x3024 + 0x20a4 + lVar1 + lVar3 * 4) << 0xc);
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)(lVar1 + 0x2098 + lVar2));
  }
  return;
}

