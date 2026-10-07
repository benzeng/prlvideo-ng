
bool FUN_10027e990(long param_1)

{
  byte *pbVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined1 *)(param_1 + 0x2f) = 0;
    pbVar1 = *(byte **)(param_1 + 0x20);
    if ((*(byte *)(param_1 + 0xf) & 0x20) == 0) {
      *pbVar1 = *pbVar1 & 0xfe;
    }
    else {
      *(undefined2 *)(pbVar1 + (ulong)*(uint *)(param_1 + 4) * 8 + 4) =
           *(undefined2 *)(param_1 + 0x2a);
    }
    bVar2 = *(short *)(param_1 + 0x2a) != *(short *)(*(long *)(param_1 + 0x18) + 2);
  }
  return bVar2;
}

