
char FUN_100416b90(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  
  if (param_3 == 0) {
    cVar9 = '\0';
  }
  else {
    uVar1 = param_3 - 1;
    uVar2 = (ulong)uVar1 + 1;
    uVar8 = uVar2 & 0x1ffffffe0;
    cVar9 = '\0';
    cVar10 = '\0';
    cVar11 = '\0';
    cVar12 = '\0';
    cVar13 = '\0';
    cVar14 = '\0';
    cVar15 = '\0';
    cVar16 = '\0';
    cVar17 = '\0';
    cVar18 = '\0';
    cVar19 = '\0';
    cVar20 = '\0';
    cVar21 = '\0';
    cVar22 = '\0';
    cVar23 = '\0';
    cVar24 = '\0';
    cVar25 = '\0';
    cVar26 = '\0';
    cVar27 = '\0';
    cVar28 = '\0';
    cVar29 = '\0';
    cVar30 = '\0';
    cVar31 = '\0';
    cVar32 = '\0';
    cVar33 = '\0';
    cVar34 = '\0';
    cVar35 = '\0';
    cVar36 = '\0';
    cVar37 = '\0';
    cVar38 = '\0';
    cVar39 = '\0';
    cVar40 = '\0';
    uVar4 = 0;
    if (uVar8 != 0) {
      pcVar3 = (char *)(param_2 + 0x10);
      uVar6 = (ulong)uVar1 + 1 & 0xffffffffffffffe0;
      cVar9 = '\0';
      cVar10 = '\0';
      cVar11 = '\0';
      cVar12 = '\0';
      cVar13 = '\0';
      cVar14 = '\0';
      cVar15 = '\0';
      cVar16 = '\0';
      cVar17 = '\0';
      cVar18 = '\0';
      cVar19 = '\0';
      cVar20 = '\0';
      cVar21 = '\0';
      cVar22 = '\0';
      cVar23 = '\0';
      cVar24 = '\0';
      cVar25 = '\0';
      cVar26 = '\0';
      cVar27 = '\0';
      cVar28 = '\0';
      cVar29 = '\0';
      cVar30 = '\0';
      cVar31 = '\0';
      cVar32 = '\0';
      cVar33 = '\0';
      cVar34 = '\0';
      cVar35 = '\0';
      cVar36 = '\0';
      cVar37 = '\0';
      cVar38 = '\0';
      cVar39 = '\0';
      cVar40 = '\0';
      do {
        cVar9 = pcVar3[-0x10] + cVar9;
        cVar10 = pcVar3[-0xf] + cVar10;
        cVar11 = pcVar3[-0xe] + cVar11;
        cVar12 = pcVar3[-0xd] + cVar12;
        cVar13 = pcVar3[-0xc] + cVar13;
        cVar14 = pcVar3[-0xb] + cVar14;
        cVar15 = pcVar3[-10] + cVar15;
        cVar16 = pcVar3[-9] + cVar16;
        cVar17 = pcVar3[-8] + cVar17;
        cVar18 = pcVar3[-7] + cVar18;
        cVar19 = pcVar3[-6] + cVar19;
        cVar20 = pcVar3[-5] + cVar20;
        cVar21 = pcVar3[-4] + cVar21;
        cVar22 = pcVar3[-3] + cVar22;
        cVar23 = pcVar3[-2] + cVar23;
        cVar24 = pcVar3[-1] + cVar24;
        cVar25 = *pcVar3 + cVar25;
        cVar26 = pcVar3[1] + cVar26;
        cVar27 = pcVar3[2] + cVar27;
        cVar28 = pcVar3[3] + cVar28;
        cVar29 = pcVar3[4] + cVar29;
        cVar30 = pcVar3[5] + cVar30;
        cVar31 = pcVar3[6] + cVar31;
        cVar32 = pcVar3[7] + cVar32;
        cVar33 = pcVar3[8] + cVar33;
        cVar34 = pcVar3[9] + cVar34;
        cVar35 = pcVar3[10] + cVar35;
        cVar36 = pcVar3[0xb] + cVar36;
        cVar37 = pcVar3[0xc] + cVar37;
        cVar38 = pcVar3[0xd] + cVar38;
        cVar39 = pcVar3[0xe] + cVar39;
        cVar40 = pcVar3[0xf] + cVar40;
        pcVar3 = pcVar3 + 0x20;
        uVar6 = uVar6 - 0x20;
        uVar4 = uVar8;
      } while (uVar6 != 0);
    }
    cVar9 = cVar24 + cVar40 + cVar16 + cVar32 + cVar20 + cVar36 + cVar12 + cVar28 +
            cVar22 + cVar38 + cVar14 + cVar30 + cVar18 + cVar34 + cVar10 + cVar26 +
            cVar23 + cVar39 + cVar15 + cVar31 + cVar19 + cVar35 + cVar11 + cVar27 +
            cVar21 + cVar37 + cVar13 + cVar29 + cVar17 + cVar33 + cVar9 + cVar25;
    if (uVar2 != uVar4) {
      iVar7 = (int)uVar4;
      if ((param_3 & 3) != 0) {
        iVar5 = -(param_3 & 3);
        do {
          cVar9 = cVar9 + *(char *)(param_2 + uVar4);
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0);
      }
      if (2 < uVar1 - iVar7) {
        pcVar3 = (char *)(param_2 + 3 + uVar4);
        iVar7 = (param_3 + 3) - ((int)uVar4 + 3);
        do {
          cVar9 = cVar9 + pcVar3[-3] + pcVar3[-2] + pcVar3[-1] + *pcVar3;
          pcVar3 = pcVar3 + 4;
          iVar7 = iVar7 + -4;
        } while (iVar7 != 0);
      }
    }
  }
  return cVar9;
}

