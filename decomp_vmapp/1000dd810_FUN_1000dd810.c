
void FUN_1000dd810(undefined1 *param_1)

{
  short *psVar1;
  long lVar2;
  undefined2 *puVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  if (DAT_100bfbec0 < 0) {
    if ((*(byte *)(DAT_1011c3698 + 0xb5c) & 8) == 0) {
      DAT_100bfbec0 = 0;
    }
    else {
      DAT_100bfbec0 = 1;
    }
  }
  if (DAT_100bfbba0 != -1) {
    puVar3 = &DAT_100bfbba0;
    do {
      uVar4 = 0;
      while( true ) {
        if (*(char *)((long)puVar3 + 5) == -1) {
          bVar5 = *(char *)(puVar3 + 3) == -1;
        }
        else {
          bVar5 = false;
        }
        if (*(char *)(puVar3 + 4) == -1) {
          bVar6 = *(char *)((long)puVar3 + 9) == -1;
        }
        else {
          bVar6 = false;
        }
        if (*(char *)((long)puVar3 + 0xb) == -1) {
          bVar7 = *(char *)(puVar3 + 6) == -1;
        }
        else {
          bVar7 = false;
        }
        if (*(char *)(puVar3 + 7) == -1) {
          bVar8 = *(char *)((long)puVar3 + 0xf) == -1;
        }
        else {
          bVar8 = false;
        }
        if ((bVar6 ^ 1) + (bVar5 ^ 1) + (bVar7 ^ 1) + (bVar8 ^ 1) <= uVar4) break;
        if ((*(char *)((long)puVar3 + (long)(int)uVar4 * 3 + 5) != -1) ||
           (*(char *)((long)puVar3 + (long)(int)uVar4 * 3 + 6) != -1)) {
          *param_1 = 3;
          param_1[1] = 0;
          *(undefined2 *)(param_1 + 2) = 0xc;
          param_1[4] = *(undefined1 *)puVar3;
          param_1[5] = (char)puVar3[1] << 2 | (byte)uVar4;
          param_1[6] = 0;
          if (DAT_100bfbec0 == 0) {
            lVar2 = (ulong)uVar4 * 3 + 5;
          }
          else {
            lVar2 = (ulong)uVar4 * 3 + 6;
          }
          param_1[7] = *(undefined1 *)((long)puVar3 + lVar2);
          param_1 = param_1 + 8;
        }
        uVar4 = uVar4 + 1;
      }
      psVar1 = puVar3 + 8;
      puVar3 = puVar3 + 8;
    } while (*psVar1 != -1);
  }
  return;
}

