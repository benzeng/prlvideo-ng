
undefined8 FUN_100d69ae0(long param_1,int param_2,int *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  long lVar33;
  uint *puVar34;
  undefined8 uVar35;
  uint uVar36;
  undefined8 *puVar37;
  long *plVar38;
  long lVar39;
  int iVar40;
  uint uVar41;
  uint *puVar42;
  undefined8 *puVar43;
  
  *param_3 = -1;
  puVar37 = *(undefined8 **)(param_1 + 8);
  if (puVar37 == (undefined8 *)0x0) {
    FUN_100df99c0("","WinRegistry",0,"OA00003.06:");
    uVar35 = 0x8158002;
  }
  else {
    puVar43 = (undefined8 *)(param_1 + 8);
    puVar34 = (uint *)*puVar37;
    if ((1 < *puVar34) || (puVar42 = puVar34, *(long *)(puVar34 + 4) != 0x18)) {
      QByteArray::reallocData(puVar37,puVar34[1] + 1,puVar34[2] >> 0x1f);
      puVar42 = (uint *)*puVar37;
      puVar37 = (undefined8 *)*puVar43;
      puVar34 = (uint *)*puVar37;
    }
    iVar40 = 0;
    if ((puVar34[2] & 0x7fffffff) != 0) {
      iVar40 = (puVar34[2] & 0x7fffffff) - 1;
    }
    uVar41 = param_2 + 0x101fU & 0xfffff000;
    if ((int)(puVar34[1] + uVar41) < iVar40) {
      lVar33 = *(long *)(puVar42 + 4);
      QByteArray::resize((int)puVar37);
      plVar38 = (long *)*puVar43;
      puVar34 = (uint *)*plVar38;
      if ((1 < *puVar34) || (*(long *)(puVar34 + 4) != 0x18)) {
        QByteArray::reallocData(plVar38,puVar34[1] + 1,puVar34[2] >> 0x1f);
        puVar34 = (uint *)*plVar38;
        plVar38 = (long *)*puVar43;
      }
      lVar39 = ((long)*(int *)(*plVar38 + 4) - (long)(int)uVar41) + *(long *)(puVar34 + 4);
      ___bzero((long)puVar34 + lVar39);
      *(undefined4 *)((long)puVar34 + lVar39) = 0x6e696268;
      *(undefined4 *)((long)puVar34 + lVar39 + 4) = *(undefined4 *)(lVar33 + 0x28 + (long)puVar42);
      *(uint *)((long)puVar34 + lVar39 + 8) = uVar41;
      *(uint *)((long)puVar34 + lVar39 + 0x1c) = uVar41;
      *(uint *)((long)puVar34 + lVar39 + 0x20) = uVar41 - 0x20;
      *(undefined4 *)((long)puVar34 + lVar39 + 0x24) = 0xffffffff;
      piVar2 = (int *)(lVar33 + 0x28 + (long)puVar42);
      *piVar2 = *piVar2 + uVar41;
      puVar37 = (undefined8 *)*puVar43;
      if (puVar37 == (undefined8 *)0x0) {
        FUN_100df99c0("","WinRegistry",0,"OA00003.01:");
        uVar36 = 0xffffffff;
      }
      else {
        puVar34 = (uint *)*puVar37;
        if ((1 < *puVar34) || (*(long *)(puVar34 + 4) != 0x18)) {
          QByteArray::reallocData(puVar37,puVar34[1] + 1,puVar34[2] >> 0x1f);
          puVar34 = (uint *)*puVar37;
        }
        lVar39 = *(long *)(puVar34 + 4);
        puVar1 = (uint *)((long)puVar34 + lVar39);
        puVar3 = (uint *)((long)puVar34 + lVar39 + 0x10);
        puVar4 = (uint *)((long)puVar34 + lVar39 + 0x20);
        puVar5 = (uint *)((long)puVar34 + lVar39 + 0x30);
        puVar6 = (uint *)((long)puVar34 + lVar39 + 0x40);
        puVar7 = (uint *)((long)puVar34 + lVar39 + 0x50);
        puVar8 = (uint *)((long)puVar34 + lVar39 + 0x60);
        puVar9 = (uint *)((long)puVar34 + lVar39 + 0x70);
        puVar10 = (uint *)((long)puVar34 + lVar39 + 0x80);
        puVar11 = (uint *)((long)puVar34 + lVar39 + 0x90);
        puVar12 = (uint *)((long)puVar34 + lVar39 + 0xa0);
        puVar13 = (uint *)((long)puVar34 + lVar39 + 0xb0);
        puVar14 = (uint *)((long)puVar34 + lVar39 + 0xc0);
        puVar15 = (uint *)((long)puVar34 + lVar39 + 0xd0);
        puVar16 = (uint *)((long)puVar34 + lVar39 + 0xe0);
        puVar17 = (uint *)((long)puVar34 + lVar39 + 0xf0);
        puVar18 = (uint *)((long)puVar34 + lVar39 + 0x100);
        puVar19 = (uint *)((long)puVar34 + lVar39 + 0x110);
        puVar20 = (uint *)((long)puVar34 + lVar39 + 0x120);
        puVar21 = (uint *)((long)puVar34 + lVar39 + 0x130);
        puVar22 = (uint *)((long)puVar34 + lVar39 + 0x140);
        puVar23 = (uint *)((long)puVar34 + lVar39 + 0x150);
        puVar24 = (uint *)((long)puVar34 + lVar39 + 0x160);
        puVar25 = (uint *)((long)puVar34 + lVar39 + 0x170);
        puVar26 = (uint *)((long)puVar34 + lVar39 + 0x180);
        puVar27 = (uint *)((long)puVar34 + lVar39 + 400);
        puVar28 = (uint *)((long)puVar34 + lVar39 + 0x1a0);
        puVar29 = (uint *)((long)puVar34 + lVar39 + 0x1b0);
        puVar30 = (uint *)((long)puVar34 + lVar39 + 0x1c0);
        puVar31 = (uint *)((long)puVar34 + lVar39 + 0x1d0);
        puVar32 = (uint *)((long)puVar34 + lVar39 + 0x1e0);
        uVar36 = puVar32[3] ^
                 puVar31[3] ^
                 puVar30[3] ^
                 puVar29[3] ^
                 puVar28[3] ^
                 puVar27[3] ^
                 puVar26[3] ^
                 puVar25[3] ^
                 puVar24[3] ^
                 puVar23[3] ^
                 puVar22[3] ^
                 puVar21[3] ^
                 puVar20[3] ^
                 puVar19[3] ^
                 puVar18[3] ^
                 puVar17[3] ^
                 puVar16[3] ^
                 puVar15[3] ^
                 puVar14[3] ^
                 puVar13[3] ^
                 puVar12[3] ^
                 puVar11[3] ^
                 puVar10[3] ^
                 puVar9[3] ^
                 puVar8[3] ^ puVar7[3] ^ puVar6[3] ^ puVar3[3] ^ puVar1[3] ^ puVar4[3] ^ puVar5[3] ^
                 puVar32[1] ^
                 puVar31[1] ^
                 puVar30[1] ^
                 puVar29[1] ^
                 puVar28[1] ^
                 puVar27[1] ^
                 puVar26[1] ^
                 puVar25[1] ^
                 puVar24[1] ^
                 puVar23[1] ^
                 puVar22[1] ^
                 puVar21[1] ^
                 puVar20[1] ^
                 puVar19[1] ^
                 puVar18[1] ^
                 puVar17[1] ^
                 puVar16[1] ^
                 puVar15[1] ^
                 puVar14[1] ^
                 puVar13[1] ^
                 puVar12[1] ^
                 puVar11[1] ^
                 puVar10[1] ^
                 puVar9[1] ^
                 puVar8[1] ^ puVar7[1] ^ puVar6[1] ^ puVar3[1] ^ puVar1[1] ^ puVar4[1] ^ puVar5[1] ^
                 puVar32[2] ^
                 puVar31[2] ^
                 puVar30[2] ^
                 puVar29[2] ^
                 puVar28[2] ^
                 puVar27[2] ^
                 puVar26[2] ^
                 puVar25[2] ^
                 puVar24[2] ^
                 puVar23[2] ^
                 puVar22[2] ^
                 puVar21[2] ^
                 puVar20[2] ^
                 puVar19[2] ^
                 puVar18[2] ^
                 puVar17[2] ^
                 puVar16[2] ^
                 puVar15[2] ^
                 puVar14[2] ^
                 puVar13[2] ^
                 puVar12[2] ^
                 puVar11[2] ^
                 puVar10[2] ^
                 puVar9[2] ^
                 puVar8[2] ^ puVar7[2] ^ puVar6[2] ^ puVar3[2] ^ puVar1[2] ^ puVar4[2] ^ puVar5[2] ^
                 *puVar32 ^
                 *puVar31 ^
                 *puVar30 ^
                 *puVar29 ^
                 *puVar28 ^
                 *puVar27 ^
                 *puVar26 ^
                 *puVar25 ^
                 *puVar24 ^
                 *puVar23 ^
                 *puVar22 ^
                 *puVar21 ^
                 *puVar20 ^
                 *puVar19 ^
                 *puVar18 ^
                 *puVar17 ^
                 *puVar16 ^
                 *puVar15 ^
                 *puVar14 ^
                 *puVar13 ^
                 *puVar12 ^
                 *puVar11 ^
                 *puVar10 ^
                 *puVar9 ^ *puVar8 ^ *puVar7 ^ *puVar6 ^ *puVar3 ^ *puVar1 ^ *puVar4 ^ *puVar5 ^
                 *(uint *)((long)puVar34 + lVar39 + 0x1f0) ^ *(uint *)((long)puVar34 + lVar39 + 500)
                 ^ *(uint *)((long)puVar34 + lVar39 + 0x1f8);
      }
      *(uint *)(lVar33 + 0x1fc + (long)puVar42) = uVar36;
      *param_3 = (0x20 - uVar41) + *(int *)(*(long *)*puVar43 + 4);
      uVar35 = 0x8000000;
    }
    else {
      FUN_100df99c0("","WinRegistry",0,"OA00003.11");
      uVar35 = 0x8158019;
    }
  }
  return uVar35;
}

