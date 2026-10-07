
void FUN_100387380(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)(param_1 + 0x28);
  if (*puVar6 != 0) {
    uVar4 = 0;
    do {
      lVar1 = *(long *)(*(long *)(puVar6 + 4) + 8 + (ulong)uVar4 * 0x18);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x24) != 1)) {
        uVar5 = (ulong)*(uint *)(*(long *)(puVar6 + 4) + 0x10 + (ulong)uVar4 * 0x18);
        lVar3 = 0;
        if (uVar5 < (ulong)(*(long *)(lVar1 + 0x48) - *(long *)(lVar1 + 0x40) >> 3)) {
          lVar3 = *(long *)(*(long *)(lVar1 + 0x40) + uVar5 * 8);
        }
        if (*(char *)(lVar3 + 0xa0) == '\0') {
          uVar5 = (ulong)(*(long *)(lVar3 + 0x90) - *(long *)(lVar3 + 0x88)) >> 2;
          if ((int)uVar5 != 0) {
            uVar2 = 0;
            do {
              if (*(int *)(*(long *)(lVar3 + 0x88) + uVar2 * 4) !=
                  (1 << (*(byte *)(lVar3 + 0x10) & 0x1f)) + -1) {
                (*DAT_1011c56a0)(uVar4 + 0x84c0);
                FUN_1003846f0(param_1,lVar1,0);
                puVar6 = *(uint **)(param_1 + 0x28);
                goto LAB_100387470;
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < (uVar5 & 0xffffffff));
          }
          *(undefined1 *)(lVar3 + 0xa0) = 1;
        }
      }
LAB_100387470:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar6);
  }
  return;
}

