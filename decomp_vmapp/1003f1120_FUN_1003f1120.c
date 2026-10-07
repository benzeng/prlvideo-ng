
undefined8 FUN_1003f1120(long param_1,undefined2 *param_2,uint param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  uVar4 = 0xfffffff1;
  if ((param_2 != (undefined2 *)0x0) && (*(int *)(param_1 + 0x1c) + 3U <= param_3)) {
    param_2[1] = 0x101;
    uVar3 = param_3 * 0xb + 2 & 0xffff;
    *param_2 = CONCAT11((char)uVar3,(char)(uVar3 >> 8));
    pcVar1 = *(char **)(param_1 + 0x1fe0);
    do {
      pcVar5 = pcVar1;
      pcVar1 = *(char **)(pcVar5 + 0x38);
    } while (pcVar1 != (char *)0x0);
    bVar2 = *pcVar5 << 4;
    *(byte *)((long)param_2 + 5) = *(byte *)((long)param_2 + 5) & 0xf | bVar2;
    pbVar7 = *(byte **)(param_1 + 0x1fe0);
    do {
      pbVar6 = pbVar7;
      pbVar7 = *(byte **)(pbVar6 + 0x38);
    } while (pbVar7 != (byte *)0x0);
    *(byte *)((long)param_2 + 5) = bVar2 | *pbVar6 >> 4;
    *(undefined1 *)((long)param_2 + 7) = 0xa0;
    *(undefined1 *)(param_2 + 2) = 1;
    *(undefined1 *)((long)param_2 + 0xb) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined1 *)((long)param_2 + 0xd) = 0;
    *(undefined1 *)(param_2 + 7) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 9) = 0;
    *(undefined1 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    pcVar1 = *(char **)(param_1 + 0x1fe0);
    do {
      pcVar5 = pcVar1;
      pcVar1 = *(char **)(pcVar5 + 0x38);
    } while (pcVar1 != (char *)0x0);
    bVar2 = *pcVar5 << 4;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xf | bVar2;
    pbVar7 = *(byte **)(param_1 + 0x1fe0);
    do {
      pbVar6 = pbVar7;
      pbVar7 = *(byte **)(pbVar6 + 0x38);
    } while (pbVar7 != (byte *)0x0);
    *(byte *)(param_2 + 8) = bVar2 | *pbVar6 >> 4;
    *(undefined1 *)(param_2 + 9) = 0xa1;
    *(undefined1 *)((long)param_2 + 0xf) = 1;
    *(undefined1 *)(param_2 + 0xb) = 0;
    *(undefined1 *)((long)param_2 + 0x17) = *(undefined1 *)(param_1 + 0x18f9);
    *(undefined1 *)(param_2 + 0xc) = 0;
    *(undefined1 *)((long)param_2 + 0x19) = 0;
    *(undefined1 *)((long)param_2 + 0x13) = 0;
    *(undefined1 *)(param_2 + 10) = 0;
    *(undefined1 *)((long)param_2 + 0x15) = 0;
    *(undefined1 *)((long)param_2 + 0x11) = 0;
    pcVar1 = *(char **)(param_1 + 0x1fe0);
    do {
      pcVar5 = pcVar1;
      pcVar1 = *(char **)(pcVar5 + 0x38);
    } while (pcVar1 != (char *)0x0);
    bVar2 = *pcVar5 << 4;
    *(byte *)((long)param_2 + 0x1b) = *(byte *)((long)param_2 + 0x1b) & 0xf | bVar2;
    pbVar7 = *(byte **)(param_1 + 0x1fe0);
    do {
      pbVar6 = pbVar7;
      pbVar7 = *(byte **)(pbVar6 + 0x38);
    } while (pbVar7 != (byte *)0x0);
    *(byte *)((long)param_2 + 0x1b) = bVar2 | *pbVar6 >> 4;
    *(undefined1 *)((long)param_2 + 0x1d) = 0xa2;
    *(undefined1 *)(param_2 + 0xd) = 1;
    *(undefined1 *)((long)param_2 + 0x21) = 0;
    *(undefined1 *)(param_2 + 0x11) =
         *(undefined1 *)(param_1 + 0x59 + (ulong)(*(int *)(param_1 + 0x18) - 1) * 0x40);
    *(undefined1 *)((long)param_2 + 0x23) =
         *(undefined1 *)(param_1 + 0x5a + (ulong)(*(int *)(param_1 + 0x18) - 1) * 0x40);
    *(undefined1 *)(param_2 + 0x12) =
         *(undefined1 *)(param_1 + 0x5b + (ulong)(*(int *)(param_1 + 0x18) - 1) * 0x40);
    *(undefined1 *)(param_2 + 0xf) = 0;
    *(undefined1 *)((long)param_2 + 0x1f) = 0;
    *(undefined1 *)(param_2 + 0x10) = 0;
    *(undefined1 *)(param_2 + 0xe) = 0;
    pbVar7 = *(byte **)(param_1 + 0x1fe0);
    do {
      pbVar6 = pbVar7;
      pbVar7 = *(byte **)(pbVar6 + 0x38);
    } while (*(byte **)(pbVar6 + 0x38) != (byte *)0x0);
    uVar4 = 0;
    if (pbVar6 != (byte *)0x0) {
      pbVar7 = (byte *)((long)param_2 + 0x2f);
      do {
        bVar2 = *pbVar6;
        pbVar7[-9] = pbVar7[-9] & 0xf | bVar2 << 4;
        pbVar7[-9] = *pbVar6 >> 4 | bVar2 << 4;
        pbVar7[-7] = pbVar6[0x14];
        pbVar7[-10] = 1;
        pbVar7[-3] = 0;
        pbVar7[-2] = pbVar6[10];
        pbVar7[-1] = pbVar6[0xb];
        *pbVar7 = pbVar6[0xc];
        pbVar7[-6] = 0;
        pbVar7[-5] = 0;
        pbVar7[-4] = 0;
        pbVar7[-8] = 0;
        pbVar6 = *(byte **)(pbVar6 + 0x30);
        pbVar7 = pbVar7 + 0xb;
      } while (pbVar6 != (byte *)0x0);
    }
  }
  return uVar4;
}

