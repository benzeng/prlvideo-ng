
void FUN_1003806d0(undefined8 *param_1,uint param_2,int param_3,int param_4,uint param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,byte param_9)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  *param_1 = &PTR_FUN_100bbcf70;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(int *)(param_1 + 2) = param_3;
  *(int *)((long)param_1 + 0x14) = param_4;
  *(uint *)((long)param_1 + 0x1c) = param_5;
  uVar5 = FUN_10038e450(param_5);
  *(undefined4 *)(param_1 + 4) = uVar5;
  FUN_1003dc9f0((long)param_1 + 0x24);
  FUN_1003dcac0(param_1 + 6);
  *(undefined4 *)(param_1 + 0xf) = param_6;
  *(undefined4 *)((long)param_1 + 0x7c) = param_7;
  *(undefined4 *)(param_1 + 0x10) = param_8;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  uVar5 = FUN_100398aa0(param_5);
  *(undefined4 *)((long)param_1 + 0xa4) = uVar5;
  uVar5 = FUN_1003981c0(param_4,param_9,param_5);
  *(undefined4 *)(param_1 + 0x15) = uVar5;
  uVar2 = *(uint *)(&DAT_100b3e3b4 + (ulong)param_5 * 8);
  *(byte *)((long)param_1 + 0xac) =
       *(byte *)((long)param_1 + 0xac) & 0xf8 | param_9 | (byte)(uVar2 >> 6) & 2;
  cVar4 = FUN_10038e350(param_5);
  *(byte *)((long)param_1 + 0xac) = *(byte *)((long)param_1 + 0xac) & 0xf7 | cVar4 << 3;
  if ((param_4 == 0x806f) && ((uVar2 & 4) != 0)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  uVar5 = FUN_10038e1b0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 3) = uVar5;
  cVar4 = FUN_10038e0e0(*(undefined4 *)(param_1 + 4));
  *(byte *)((long)param_1 + 0xac) = *(byte *)((long)param_1 + 0xac) & 0xef | cVar4 << 4;
  uVar6 = (ulong)param_2;
  lVar3 = param_1[0x12];
  uVar7 = lVar3 - param_1[0x11] >> 2;
  if (uVar7 < uVar6) {
    FUN_10032f560(param_1 + 0x11);
  }
  else if ((uVar6 < uVar7) && (lVar1 = param_1[0x11] + uVar6 * 4, lVar3 != lVar1)) {
    param_1[0x12] = (~((lVar3 + -4) - lVar1) & 0xfffffffffffffffcU) + lVar3;
  }
  if (*(int *)(param_1 + 5) != param_3 + -1) {
    *(int *)(param_1 + 5) = param_3 + -1;
    *(byte *)((long)param_1 + 0x2c) = *(byte *)((long)param_1 + 0x2c) | 2;
  }
  (*DAT_1011c5e90)(1,(long)param_1 + 0xc);
  return;
}

