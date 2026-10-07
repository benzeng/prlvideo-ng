
undefined8 FUN_1002e1f10(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  
  uVar5 = FUN_1002dc1f0();
  if (-1 < (int)uVar5) {
    iVar3 = FUN_1002d6ce0(*(undefined8 *)(param_1 + 8));
    if (iVar3 == 2) {
      plVar1 = *(long **)(param_1 + 0x28);
      lVar2 = *plVar1;
      *(undefined2 *)(lVar2 + 2) = 0x200;
      *(undefined1 *)(lVar2 + 7) = 0x40;
      puVar6 = _malloc(10);
      plVar1[4] = (long)puVar6;
      if (puVar6 == (undefined2 *)0x0) {
        FUN_1008e3970("","USB",0,"[CUsbDevPrinter] Not enough memory (qual desc)");
        return 0x80000002;
      }
      *puVar6 = 0x60a;
      lVar2 = *plVar1;
      puVar6[1] = *(undefined2 *)(lVar2 + 2);
      *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(lVar2 + 4);
      *(undefined1 *)((long)puVar6 + 5) = *(undefined1 *)(lVar2 + 5);
      *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(lVar2 + 6);
      *(undefined1 *)((long)puVar6 + 7) = *(undefined1 *)(lVar2 + 7);
      *(undefined1 *)(puVar6 + 4) = *(undefined1 *)(lVar2 + 0x11);
      *(undefined1 *)((long)puVar6 + 9) = 0;
      *(undefined2 *)(plVar1[2] + 0x16) = 0x200;
    }
    uVar4 = FUN_1007da300("devices.printer.timeout",2000);
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    uVar5 = 0;
  }
  return uVar5;
}

