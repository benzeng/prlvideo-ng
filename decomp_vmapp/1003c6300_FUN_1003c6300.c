
undefined8 FUN_1003c6300(byte *param_1,long *param_2)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  ulong uVar6;
  
  lVar3 = *param_2;
  if (*(int *)(lVar3 + 0x30) != 0) {
    return 2;
  }
  if ((*(byte *)((long)param_2 + 0x39) & 1) == 0) {
    bVar5 = 8;
    if (((*(byte *)((long)param_2 + 0x35) & 0x10) != 0) ||
       (((*(byte *)((long)param_2 + 0x35) & 4) != 0 && ((*(ushort *)(lVar3 + 0x54) & 0x2000) != 0)))
       ) goto LAB_1003c6372;
  }
  lVar3 = FUN_1003a7de0(*(undefined2 *)(lVar3 + 0x4c));
  uVar6 = (ulong)((long)param_2 - *(long *)(*param_2 + 0x40)) >> 6;
  if (((*(ushort *)(lVar3 + 0x1c) & 0xf) <= (uint)uVar6) ||
     (bVar5 = *(byte *)(*param_2 + 0x4e), bVar5 == 0)) {
    bVar1 = *(byte *)(lVar3 + 0x10 + (uVar6 & 0xffffffff) * 2);
    bVar5 = 0xf;
    if (bVar1 != 0) {
      bVar5 = bVar1;
    }
  }
LAB_1003c6372:
  *param_1 = *param_1 | bVar5;
  bVar5 = param_1[0x10] & *(byte *)(param_2 + 6);
  pbVar4 = param_1 + 1;
  do {
    pbVar2 = *(byte **)(param_1 + 8);
    while( true ) {
      if (pbVar2 <= pbVar4) {
        if (param_1[0x10] == bVar5) {
          return 3;
        }
        *(byte **)(param_1 + 8) = pbVar2 + 1;
        *pbVar2 = bVar5;
        return 0;
      }
      if ((bVar5 & *pbVar4) != 0) break;
      pbVar4 = pbVar4 + 1;
    }
    bVar5 = bVar5 | *pbVar4;
    *(byte **)(param_1 + 8) = pbVar2 + -1;
    *pbVar4 = pbVar2[-1];
    **(undefined1 **)(param_1 + 8) = 0;
  } while( true );
}

