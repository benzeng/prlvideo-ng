
int FUN_1002df780(long param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  
  iVar4 = FUN_1002dc1f0();
  if (-1 < iVar4) {
    iVar5 = FUN_1002d6ce0(*(undefined8 *)(param_1 + 8));
    iVar4 = 0;
    if (iVar5 == 2) {
      plVar2 = *(long **)(param_1 + 0x28);
      lVar3 = *plVar2;
      *(undefined2 *)(lVar3 + 2) = 0x200;
      *(undefined1 *)(lVar3 + 7) = 0x40;
      puVar6 = _malloc(10);
      plVar2[4] = (long)puVar6;
      if (puVar6 == (undefined2 *)0x0) {
        FUN_1008e3970("","USB",0,"[CUsbDevHID] Not enough memory (qual desc)");
        iVar4 = -0x7ffffffe;
      }
      else {
        *puVar6 = 0x60a;
        lVar3 = *plVar2;
        puVar6[1] = *(undefined2 *)(lVar3 + 2);
        *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(lVar3 + 4);
        *(undefined1 *)((long)puVar6 + 5) = *(undefined1 *)(lVar3 + 5);
        *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(lVar3 + 6);
        *(undefined1 *)((long)puVar6 + 7) = *(undefined1 *)(lVar3 + 7);
        *(undefined1 *)(puVar6 + 4) = *(undefined1 *)(lVar3 + 0x11);
        *(undefined1 *)((long)puVar6 + 9) = 0;
        lVar3 = plVar2[2];
        if (*(char *)(lVar3 + 4) != '\0') {
          bVar1 = *(byte *)(lVar3 + 4);
          puVar7 = (undefined1 *)(lVar3 + 0x21);
          iVar4 = 0;
          uVar8 = 0;
          do {
            *puVar7 = 8;
            *(undefined2 *)(puVar7 + -2) = 0x40;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 0x19;
          } while (uVar8 < bVar1);
        }
      }
    }
  }
  return iVar4;
}

