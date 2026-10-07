
int FUN_1002eac30(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  
  iVar3 = FUN_1002dc1f0();
  if (-1 < iVar3) {
    iVar4 = FUN_1002d6ce0(*(undefined8 *)(param_1 + 8));
    iVar3 = 0;
    if (iVar4 == 2) {
      plVar1 = *(long **)(param_1 + 0x28);
      lVar2 = *plVar1;
      *(undefined2 *)(lVar2 + 2) = 0x200;
      *(undefined1 *)(lVar2 + 7) = 0x40;
      puVar5 = _malloc(10);
      plVar1[4] = (long)puVar5;
      if (puVar5 == (undefined2 *)0x0) {
        FUN_1008e3970(&DAT_100b392f0,"USB",0,"[CUsbDevBT] Not enough memory (qual desc)");
        iVar3 = -0x7ffffffe;
      }
      else {
        *puVar5 = 0x60a;
        lVar2 = *plVar1;
        puVar5[1] = *(undefined2 *)(lVar2 + 2);
        *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(lVar2 + 4);
        *(undefined1 *)((long)puVar5 + 5) = *(undefined1 *)(lVar2 + 5);
        *(undefined1 *)(puVar5 + 3) = *(undefined1 *)(lVar2 + 6);
        *(undefined1 *)((long)puVar5 + 7) = *(undefined1 *)(lVar2 + 7);
        *(undefined1 *)(puVar5 + 4) = *(undefined1 *)(lVar2 + 0x11);
        *(undefined1 *)((long)puVar5 + 9) = 0;
        lVar2 = plVar1[2];
        *(undefined2 *)(lVar2 + 0x1d) = 0x200;
        *(undefined2 *)(lVar2 + 0x24) = 0x200;
        *(undefined1 *)(lVar2 + 0x18) = 4;
        *(char *)(lVar2 + 0x36) = *(char *)(lVar2 + 0x36) << 3;
        *(char *)(lVar2 + 0x3d) = *(char *)(lVar2 + 0x3d) << 3;
        *(char *)(lVar2 + 0x4d) = *(char *)(lVar2 + 0x4d) << 3;
        *(char *)(lVar2 + 0x54) = *(char *)(lVar2 + 0x54) << 3;
        *(char *)(lVar2 + 100) = *(char *)(lVar2 + 100) << 3;
        *(char *)(lVar2 + 0x6b) = *(char *)(lVar2 + 0x6b) << 3;
        *(char *)(lVar2 + 0x7b) = *(char *)(lVar2 + 0x7b) << 3;
        *(char *)(lVar2 + 0x82) = *(char *)(lVar2 + 0x82) << 3;
        *(char *)(lVar2 + 0x92) = *(char *)(lVar2 + 0x92) << 3;
        *(char *)(lVar2 + 0x99) = *(char *)(lVar2 + 0x99) << 3;
        *(char *)(lVar2 + 0xa9) = *(char *)(lVar2 + 0xa9) << 3;
        *(char *)(lVar2 + 0xb0) = *(char *)(lVar2 + 0xb0) << 3;
      }
    }
  }
  return iVar3;
}

