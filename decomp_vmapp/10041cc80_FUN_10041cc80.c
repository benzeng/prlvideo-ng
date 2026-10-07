
long * FUN_10041cc80(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  char cVar12;
  byte bVar13;
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
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  
  lVar4 = *param_3;
  uVar3 = *(uint *)(lVar4 + 4);
  if (uVar3 == 0) {
    bVar13 = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x10);
    uVar1 = uVar3 - 1;
    uVar2 = (ulong)uVar1 + 1;
    uVar9 = uVar2 & 0x1ffffffe0;
    cVar12 = '\0';
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
    cVar41 = '\0';
    cVar42 = '\0';
    cVar43 = '\0';
    cVar44 = '\0';
    uVar8 = 0;
    if (uVar9 != 0) {
      pcVar7 = (char *)(lVar5 + 0x10 + lVar4);
      uVar11 = (ulong)uVar1 + 1 & 0xffffffffffffffe0;
      cVar12 = '\0';
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
      cVar41 = '\0';
      cVar42 = '\0';
      cVar43 = '\0';
      cVar44 = '\0';
      do {
        cVar12 = pcVar7[-0x10] + cVar12;
        cVar14 = pcVar7[-0xf] + cVar14;
        cVar15 = pcVar7[-0xe] + cVar15;
        cVar16 = pcVar7[-0xd] + cVar16;
        cVar17 = pcVar7[-0xc] + cVar17;
        cVar18 = pcVar7[-0xb] + cVar18;
        cVar19 = pcVar7[-10] + cVar19;
        cVar20 = pcVar7[-9] + cVar20;
        cVar21 = pcVar7[-8] + cVar21;
        cVar22 = pcVar7[-7] + cVar22;
        cVar23 = pcVar7[-6] + cVar23;
        cVar24 = pcVar7[-5] + cVar24;
        cVar25 = pcVar7[-4] + cVar25;
        cVar26 = pcVar7[-3] + cVar26;
        cVar27 = pcVar7[-2] + cVar27;
        cVar28 = pcVar7[-1] + cVar28;
        cVar29 = *pcVar7 + cVar29;
        cVar30 = pcVar7[1] + cVar30;
        cVar31 = pcVar7[2] + cVar31;
        cVar32 = pcVar7[3] + cVar32;
        cVar33 = pcVar7[4] + cVar33;
        cVar34 = pcVar7[5] + cVar34;
        cVar35 = pcVar7[6] + cVar35;
        cVar36 = pcVar7[7] + cVar36;
        cVar37 = pcVar7[8] + cVar37;
        cVar38 = pcVar7[9] + cVar38;
        cVar39 = pcVar7[10] + cVar39;
        cVar40 = pcVar7[0xb] + cVar40;
        cVar41 = pcVar7[0xc] + cVar41;
        cVar42 = pcVar7[0xd] + cVar42;
        cVar43 = pcVar7[0xe] + cVar43;
        cVar44 = pcVar7[0xf] + cVar44;
        pcVar7 = pcVar7 + 0x20;
        uVar11 = uVar11 - 0x20;
        uVar8 = uVar9;
      } while (uVar11 != 0);
    }
    bVar13 = cVar28 + cVar44 + cVar20 + cVar36 + cVar24 + cVar40 + cVar16 + cVar32 +
             cVar26 + cVar42 + cVar18 + cVar34 + cVar22 + cVar38 + cVar14 + cVar30 +
             cVar27 + cVar43 + cVar19 + cVar35 + cVar23 + cVar39 + cVar15 + cVar31 +
             cVar25 + cVar41 + cVar17 + cVar33 + cVar21 + cVar37 + cVar12 + cVar29;
    if (uVar2 != uVar8) {
      iVar6 = (int)uVar8;
      if ((uVar3 & 3) != 0) {
        iVar10 = -(uVar3 & 3);
        do {
          bVar13 = bVar13 + *(char *)(lVar4 + lVar5 + uVar8);
          uVar8 = uVar8 + 1;
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0);
      }
      if (2 < uVar1 - iVar6) {
        pcVar7 = (char *)(lVar4 + 3 + lVar5 + uVar8);
        iVar6 = (uVar3 + 3) - ((int)uVar8 + 3);
        do {
          bVar13 = bVar13 + pcVar7[-3] + pcVar7[-2] + pcVar7[-1] + *pcVar7;
          pcVar7 = pcVar7 + 4;
          iVar6 = iVar6 + -4;
        } while (iVar6 != 0);
      }
    }
  }
  *param_1 = (long)PTR_shared_null_100ba20d0;
  cVar12 = (char)param_1;
  QByteArray::append(cVar12);
  QByteArray::append((QByteArray *)param_1);
  QByteArray::append(cVar12);
  FUN_10041fb70(bVar13 >> 4);
  QByteArray::append(cVar12);
  FUN_10041fb70(bVar13 & 0xf);
  QByteArray::append(cVar12);
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","gdbstub",1,"Send: \'%s\'",*param_1 + *(long *)(*param_1 + 0x10));
  }
  return param_1;
}

