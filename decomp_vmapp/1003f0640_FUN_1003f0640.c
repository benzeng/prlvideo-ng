
undefined4 FUN_1003f0640(long param_1)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  undefined4 uVar12;
  
  lVar6 = *(long *)(param_1 + 0x1fe0);
  uVar12 = 0xfffffff1;
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x30) != 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar10 = 1;
    if (*(long *)(lVar6 + 0x38) == 0) {
      cVar7 = '\x01';
      bVar4 = 1;
    }
    else {
      bVar4 = 1;
      lVar2 = *(long *)(lVar6 + 0x38);
      do {
        lVar11 = lVar2;
        uVar8 = *(uint *)(lVar6 + 0x14);
        bVar3 = (byte)uVar8;
        if (bVar4 <= uVar8) {
          bVar3 = bVar4;
        }
        bVar4 = bVar3;
        if (uVar8 <= uVar10) {
          uVar8 = uVar10;
        }
        lVar2 = *(long *)(lVar11 + 0x38);
        cVar7 = (char)uVar8;
        uVar10 = uVar8 & 0xff;
        lVar6 = lVar11;
      } while (lVar2 != 0);
    }
    iVar5 = 0;
    uVar12 = 0;
    if (0x62 < (byte)(cVar7 - 1U)) {
      uVar12 = 0xfffffff1;
    }
    if (bVar4 == 0) {
      uVar12 = 0xfffffff1;
    }
    *(byte *)(param_1 + 0x18f8) = bVar4;
    *(char *)(param_1 + 0x18f9) = cVar7;
    *(undefined4 *)(param_1 + 0x18f4) = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    lVar6 = (ulong)(iVar1 - 1) * 0x40;
    *(uint *)(param_1 + 0x18ec) =
         (*(byte *)(param_1 + 0x5b + lVar6) - 0x96) +
         (uint)*(byte *)(param_1 + 0x5a + lVar6) * 0x4b +
         (uint)*(byte *)(param_1 + 0x59 + lVar6) * 0x1194;
    *(undefined4 *)(param_1 + 0x18f0) = 0;
    if (0 < (long)iVar1) {
      puVar9 = (uint *)(param_1 + 0x38);
      lVar6 = 0;
      do {
        iVar5 = (int)(*(ulong *)(puVar9 + -2) / (ulong)*puVar9) + iVar5;
        *(int *)(param_1 + 0x18f0) = iVar5;
        lVar6 = lVar6 + 1;
        puVar9 = puVar9 + 0x10;
      } while (lVar6 < iVar1);
    }
    *(undefined4 *)(param_1 + 0x18e8) = 0;
    *(int *)(param_1 + 0x18e4) = *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x18e0) = *(int *)(param_1 + 0x1c) + 3;
  }
  return uVar12;
}

