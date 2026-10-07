
void FUN_100404570(long param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (((lVar4 == 0) || (param_2 < *(ulong *)(lVar4 + 0x20))) ||
     ((ulong)*(uint *)(lVar4 + 0x1c) + *(ulong *)(lVar4 + 0x20) <= param_2)) {
    lVar4 = *(long *)(param_1 + 8);
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar2 = 0;
      do {
        if (param_2 < (ulong)*(uint *)(lVar4 + -0x14) + *(ulong *)(lVar4 + -0x10)) {
          if (*(ulong *)(lVar4 + -0x10) < (param_3 & 0xffffffff) + param_2) {
            lVar2 = lVar4 + -0x30;
            break;
          }
          plVar1 = (long *)(lVar4 + 0x10);
        }
        else {
          plVar1 = (long *)(lVar4 + 8);
        }
        lVar4 = *plVar1;
      } while (lVar4 != 0);
    }
    do {
      lVar4 = 0;
      if ((lVar2 == 0) || (lVar3 = FUN_1007d9a60(lVar2 + 0x30), lVar4 = lVar2, lVar3 == 0)) break;
      lVar2 = lVar3 + -0x30;
    } while (param_2 < (ulong)*(uint *)(lVar3 + -0x14) + *(long *)(lVar3 + -0x10));
    *(long *)(param_1 + 0x30) = lVar4;
  }
  return;
}

