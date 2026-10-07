
undefined * FUN_100887e00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 local_290 [16];
  undefined1 local_280 [600];
  
  if (DAT_1011c0db0 == (undefined **)0x0) {
    FUN_10081d010(9,1,"err.c",0x127);
    if (DAT_1011c0db0 == (undefined **)0x0) {
      DAT_1011c0db0 = &PTR_FUN_100bde1a8;
    }
    FUN_10081d010(10,1,"err.c",0x12a);
  }
  FUN_10081d470(local_290);
  FUN_10081d4f0(local_280,local_290);
  puVar1 = (undefined *)(*(code *)DAT_1011c0db0[7])(local_280);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)FUN_10081ddd0(600,"err.c",0x403);
    puVar1 = &DAT_1011c16c0;
    if (puVar2 != (undefined *)0x0) {
      FUN_10081d4f0(puVar2,local_290);
      *(undefined4 *)(puVar2 + 0x250) = 0;
      *(undefined4 *)(puVar2 + 0x254) = 0;
      *(undefined8 *)(puVar2 + 0xd0) = 0;
      *(undefined8 *)(puVar2 + 0xd8) = 0;
      *(undefined8 *)(puVar2 + 0xe0) = 0;
      *(undefined8 *)(puVar2 + 0xe8) = 0;
      *(undefined8 *)(puVar2 + 0x150) = 0;
      *(undefined8 *)(puVar2 + 0x158) = 0;
      *(undefined4 *)(puVar2 + 0x160) = 0;
      *(undefined8 *)(puVar2 + 0xf0) = 0;
      *(undefined8 *)(puVar2 + 0xf8) = 0;
      *(undefined4 *)(puVar2 + 0x164) = 0;
      *(undefined8 *)(puVar2 + 0x100) = 0;
      *(undefined4 *)(puVar2 + 0x168) = 0;
      *(undefined8 *)(puVar2 + 0x108) = 0;
      *(undefined8 *)(puVar2 + 0x110) = 0;
      *(undefined8 *)(puVar2 + 0x118) = 0;
      *(undefined8 *)(puVar2 + 0x120) = 0;
      *(undefined8 *)(puVar2 + 0x16c) = 0;
      *(undefined8 *)(puVar2 + 0x174) = 0;
      *(undefined8 *)(puVar2 + 0x128) = 0;
      *(undefined8 *)(puVar2 + 0x130) = 0;
      *(undefined8 *)(puVar2 + 0x138) = 0;
      *(undefined8 *)(puVar2 + 0x140) = 0;
      *(undefined8 *)(puVar2 + 0x17c) = 0;
      *(undefined8 *)(puVar2 + 0x184) = 0;
      *(undefined8 *)(puVar2 + 0x148) = 0;
      *(undefined4 *)(puVar2 + 0x18c) = 0;
      lVar3 = (*(code *)DAT_1011c0db0[8])(puVar2);
      puVar4 = (undefined *)(*(code *)DAT_1011c0db0[7])(puVar2);
      lVar5 = 0x54;
      if (puVar4 == puVar2) {
        puVar1 = puVar2;
        if (lVar3 != 0) {
          lVar5 = -0x40;
          do {
            if ((*(long *)(lVar3 + 0x150 + lVar5 * 2) != 0) &&
               ((*(byte *)(lVar3 + 400 + lVar5) & 1) != 0)) {
              FUN_10081e1a0();
              *(undefined8 *)(lVar3 + 0x150 + lVar5 * 2) = 0;
            }
            *(undefined4 *)(lVar3 + 400 + lVar5) = 0;
            lVar5 = lVar5 + 4;
          } while (lVar5 != 0);
          FUN_10081e1a0(lVar3);
        }
      }
      else {
        do {
          if ((*(long *)(puVar2 + lVar5 * 8 + -0x1d0) != 0) && ((puVar2[lVar5 * 4] & 1) != 0)) {
            FUN_10081e1a0();
            *(undefined8 *)(puVar2 + lVar5 * 8 + -0x1d0) = 0;
          }
          *(undefined4 *)(puVar2 + lVar5 * 4) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 100);
        FUN_10081e1a0(puVar2);
      }
    }
  }
  return puVar1;
}

