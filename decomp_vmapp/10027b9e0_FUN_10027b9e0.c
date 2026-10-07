
void FUN_10027b9e0(int *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)*param_1;
  lVar4 = lVar3 * 0x10;
  *param_1 = *param_1 + 1;
  *(undefined1 *)(param_1 + lVar3 * 4 + 0x212) = *param_2;
  *(undefined1 *)((long)param_1 + lVar4 + 0x849) = param_2[1];
  *(undefined2 *)((long)param_1 + lVar4 + 0x84a) = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)(param_1 + lVar3 * 4 + 0x213) = param_2[4];
  *(undefined1 *)((long)param_1 + lVar4 + 0x84d) = param_2[5];
  *(undefined2 *)((long)param_1 + lVar4 + 0x84e) = *(undefined2 *)(param_2 + 6);
  *(undefined1 *)(param_1 + lVar3 * 4 + 0x214) = 1;
  uVar1 = *(undefined4 *)(param_2 + 8);
  bVar2 = (byte)((uint)uVar1 >> 0x18);
  *(byte *)((long)param_1 + lVar4 + 0x851) = bVar2 & 2 | bVar2 >> 2 & 1 | (bVar2 & 1) << 2;
  *(byte *)((long)param_1 + lVar4 + 0x853) = (byte)((uint)uVar1 >> 0x10) & 0xf;
  *(short *)(param_1 + lVar3 * 4 + 0x215) = (short)uVar1;
  *(undefined1 *)((long)param_1 + lVar4 + 0x852) = param_2[0xd];
  *(undefined2 *)((long)param_1 + lVar4 + 0x856) = *(undefined2 *)(param_2 + 0xe);
  return;
}

