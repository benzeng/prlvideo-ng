
void FUN_1009d7d90(long param_1,long param_2,int param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  byte bVar7;
  
  bVar4 = true;
  lVar1 = 0;
  if (param_3 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      bVar3 = *(byte *)(param_1 + lVar1);
      bVar7 = bVar3 & 0xf;
      if (((uint)lVar1 < 0xb) && ((0x550U >> ((uint)lVar1 & 0x1f) & 1) != 0)) {
        lVar5 = (long)iVar6;
        iVar6 = iVar6 + 1;
        *(undefined1 *)(param_2 + lVar5) = 0x2d;
      }
      bVar2 = bVar3 >> 4 | 0x30;
      if (0x9f < bVar3) {
        bVar2 = (bVar3 >> 4) + 0x37;
      }
      lVar5 = (long)iVar6;
      *(byte *)(param_2 + lVar5) = bVar2;
      bVar3 = bVar7 | 0x30;
      if (9 < bVar7) {
        bVar3 = bVar7 + 0x37;
      }
      iVar6 = iVar6 + 2;
      *(byte *)(param_2 + 1 + lVar5) = bVar3;
      lVar1 = lVar1 + 1;
    } while ((lVar1 < 0x10) && (iVar6 < param_3));
    bVar4 = param_3 <= iVar6;
  }
  *(undefined1 *)(param_2 + (int)(iVar6 - (uint)bVar4)) = 0;
  return;
}

