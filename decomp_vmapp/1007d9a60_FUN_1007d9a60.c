
void FUN_1007d9a60(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar2 = param_1[2];
  if (uVar2 == 0) {
    do {
      puVar1 = (ulong *)(*param_1 & 0xfffffffffffffffe);
      if (puVar1 == (ulong *)0x0) {
        return;
      }
      bVar3 = param_1 == (ulong *)puVar1[2];
      param_1 = puVar1;
    } while (bVar3);
  }
  else {
    do {
      uVar2 = *(ulong *)(uVar2 + 8);
    } while (uVar2 != 0);
  }
  return;
}

