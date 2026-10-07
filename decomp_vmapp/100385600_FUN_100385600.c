
void FUN_100385600(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  
  puVar7 = *(uint **)(param_1 + 0x28);
  if (*puVar7 != 0) {
    uVar5 = 0;
    do {
      lVar1 = *(long *)(*(long *)(puVar7 + 2) + uVar5 * 0x10);
      if (lVar1 != 0) {
        uVar6 = (ulong)(*(int *)(lVar1 + 8) == 0x23);
        lVar3 = 0;
        if (uVar6 < (ulong)(*(long *)(lVar1 + 0x48) - *(long *)(lVar1 + 0x40) >> 3)) {
          lVar3 = *(long *)(*(long *)(lVar1 + 0x40) + uVar6 * 8);
        }
        if (*(char *)(lVar3 + 0xa0) == '\0') {
          uVar6 = (ulong)(*(long *)(lVar3 + 0x90) - *(long *)(lVar3 + 0x88)) >> 2;
          if ((int)uVar6 != 0) {
            uVar2 = 0;
            do {
              if (*(int *)(*(long *)(lVar3 + 0x88) + uVar2 * 4) !=
                  (1 << (*(byte *)(lVar3 + 0x10) & 0x1f)) + -1) {
                (*DAT_1011c56a0)((int)uVar5 + 0x84c0);
                FUN_1003846f0(param_1,lVar1,*(int *)(lVar1 + 8) == 0x23);
                puVar7 = *(uint **)(param_1 + 0x28);
                goto LAB_1003856f0;
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < (uVar6 & 0xffffffff));
          }
          *(undefined1 *)(lVar3 + 0xa0) = 1;
        }
      }
LAB_1003856f0:
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
    } while (uVar4 < *puVar7);
  }
  return;
}

