
void FUN_10083ae50(byte *param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar14;
  ulong uVar15;
  char cVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  
  bVar13 = *param_1;
  bVar18 = param_1[1];
  if ((((uint)param_4 | (uint)param_3) & 7) == 0) {
    bVar14 = bVar13;
    if (7 < param_2) {
      uVar22 = param_2 - 8;
      uVar10 = uVar22 & 0xfffffffffffffff8;
      puVar1 = (ulong *)((long)param_4 + uVar10 + 8);
      cVar16 = ((byte)uVar22 & 0xf8) + bVar13;
      puVar20 = param_3;
      do {
        uVar11 = *puVar20;
        uVar12 = (ulong)(bVar13 + 1 & 0xff);
        bVar14 = param_1[uVar12 + 2];
        bVar18 = bVar18 + bVar14;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar14;
        param_1[uVar12 + 2] = bVar2;
        bVar14 = param_1[(ulong)(byte)(bVar2 + bVar14) + 2];
        uVar12 = (ulong)(bVar13 + 2 & 0xff);
        bVar2 = param_1[uVar12 + 2];
        bVar18 = bVar18 + bVar2;
        bVar9 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar2;
        param_1[uVar12 + 2] = bVar9;
        bVar2 = param_1[(ulong)(byte)(bVar9 + bVar2) + 2];
        uVar12 = (ulong)(bVar13 + 3 & 0xff);
        bVar9 = param_1[uVar12 + 2];
        bVar18 = bVar18 + bVar9;
        bVar3 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar9;
        param_1[uVar12 + 2] = bVar3;
        bVar9 = param_1[(ulong)(byte)(bVar3 + bVar9) + 2];
        uVar12 = (ulong)(bVar13 + 4 & 0xff);
        bVar3 = param_1[uVar12 + 2];
        bVar18 = bVar18 + bVar3;
        bVar4 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar3;
        param_1[uVar12 + 2] = bVar4;
        bVar3 = param_1[(ulong)(byte)(bVar4 + bVar3) + 2];
        uVar12 = (ulong)(bVar13 + 5 & 0xff);
        bVar4 = param_1[uVar12 + 2];
        bVar18 = bVar18 + bVar4;
        bVar5 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar4;
        param_1[uVar12 + 2] = bVar5;
        bVar4 = param_1[(ulong)(byte)(bVar5 + bVar4) + 2];
        uVar12 = (ulong)(bVar13 + 6 & 0xff);
        bVar5 = param_1[uVar12 + 2];
        bVar18 = bVar18 + bVar5;
        bVar6 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar5;
        param_1[uVar12 + 2] = bVar6;
        bVar5 = param_1[(ulong)(byte)(bVar6 + bVar5) + 2];
        uVar12 = (ulong)(bVar13 + 7 & 0xff);
        bVar6 = param_1[uVar12 + 2];
        bVar18 = bVar18 + bVar6;
        bVar7 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar6;
        param_1[uVar12 + 2] = bVar7;
        bVar6 = param_1[(ulong)(byte)(bVar7 + bVar6) + 2];
        uVar12 = (ulong)(bVar13 + 8 & 0xff);
        bVar7 = param_1[uVar12 + 2];
        bVar18 = bVar18 + bVar7;
        bVar8 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar7;
        param_1[uVar12 + 2] = bVar8;
        *param_4 = CONCAT17(param_1[(ulong)(byte)(bVar8 + bVar7) + 2],
                            CONCAT16(bVar6,CONCAT15(bVar5,CONCAT14(bVar4,CONCAT13(bVar3,CONCAT12(
                                                  bVar9,CONCAT11(bVar2,bVar14))))))) ^ uVar11;
        puVar20 = puVar20 + 1;
        param_4 = param_4 + 1;
        param_2 = param_2 - 8;
        bVar13 = bVar13 + 8;
      } while (7 < param_2);
      param_2 = uVar22 - uVar10;
      param_3 = (ulong *)((long)param_3 + uVar10 + 8);
      param_4 = puVar1;
      bVar14 = cVar16 + 8;
    }
    if (param_2 != 0) {
      uVar22 = *param_3;
      uVar10 = *param_4;
      uVar25 = 0xffffffffffffffff >> (('\b' - (char)param_2) * '\b' & 0x3fU);
      uVar12 = 0;
      uVar11 = 0;
      uVar19 = 0;
      uVar21 = 0;
      uVar15 = 0;
      uVar17 = 0;
      uVar24 = 0;
      bVar13 = bVar14;
      switch(param_2 & 7) {
      case 7:
        bVar14 = bVar14 + 1;
        bVar13 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar13;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar13;
        param_1[(ulong)bVar14 + 2] = bVar2;
        uVar11 = (ulong)param_1[(ulong)(byte)(bVar2 + bVar13) + 2];
        uVar12 = 8;
      case 6:
        bVar14 = bVar14 + 1;
        bVar13 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar13;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar13;
        param_1[(ulong)bVar14 + 2] = bVar2;
        uVar19 = (ulong)param_1[(ulong)(byte)(bVar2 + bVar13) + 2] << (sbyte)uVar12 | uVar11;
        uVar12 = uVar12 + 8;
      case 5:
        bVar14 = bVar14 + 1;
        bVar13 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar13;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar13;
        param_1[(ulong)bVar14 + 2] = bVar2;
        uVar21 = (ulong)param_1[(ulong)(byte)(bVar2 + bVar13) + 2] << (sbyte)uVar12 | uVar19;
        uVar12 = uVar12 + 8;
      case 4:
        bVar14 = bVar14 + 1;
        bVar13 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar13;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar13;
        param_1[(ulong)bVar14 + 2] = bVar2;
        uVar15 = (ulong)param_1[(ulong)(byte)(bVar2 + bVar13) + 2] << (sbyte)uVar12 | uVar21;
        uVar12 = uVar12 + 8;
      case 3:
        bVar14 = bVar14 + 1;
        bVar13 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar13;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar13;
        param_1[(ulong)bVar14 + 2] = bVar2;
        uVar17 = (ulong)param_1[(ulong)(byte)(bVar2 + bVar13) + 2] << ((byte)uVar12 & 0x3f) | uVar15
        ;
        uVar12 = uVar12 + 8;
      case 2:
        bVar13 = bVar14 + 1;
        bVar2 = param_1[(ulong)(byte)(bVar14 + 1) + 2];
        bVar18 = bVar18 + bVar2;
        bVar9 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar2;
        param_1[(ulong)(byte)(bVar14 + 1) + 2] = bVar9;
        uVar24 = (ulong)param_1[(ulong)(byte)(bVar9 + bVar2) + 2] << ((byte)uVar12 & 0x3f) | uVar17;
        uVar12 = uVar12 + 8;
      case 1:
        bVar14 = bVar13 + 1;
        bVar13 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar13;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar18 + 2] = bVar13;
        param_1[(ulong)bVar14 + 2] = bVar2;
        uVar12 = (ulong)param_1[(ulong)(byte)(bVar2 + bVar13) + 2] << ((byte)uVar12 & 0x3f) | uVar24
        ;
      default:
        *param_4 = (uVar12 ^ uVar22) & uVar25 | uVar10 & ~uVar25;
      }
    }
  }
  else {
    uVar22 = param_2 >> 3;
    if (uVar22 != 0) {
      puVar1 = param_4 + uVar22;
      cVar16 = ((char)uVar22 + '\x1f') * '\b' + bVar13;
      lVar23 = -uVar22;
      puVar20 = param_3;
      do {
        uVar10 = (ulong)(bVar13 + 1 & 0xff);
        bVar14 = param_1[uVar10 + 2];
        bVar18 = bVar18 + bVar14;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[uVar10 + 2] = bVar2;
        param_1[(ulong)bVar18 + 2] = bVar14;
        *(byte *)param_4 = (byte)*puVar20 ^ param_1[(ulong)(byte)(bVar2 + bVar14) + 2];
        uVar10 = (ulong)(bVar13 + 2 & 0xff);
        bVar14 = param_1[uVar10 + 2];
        bVar18 = bVar18 + bVar14;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[uVar10 + 2] = bVar2;
        param_1[(ulong)bVar18 + 2] = bVar14;
        *(byte *)((long)param_4 + 1) =
             *(byte *)((long)puVar20 + 1) ^ param_1[(ulong)(byte)(bVar2 + bVar14) + 2];
        uVar10 = (ulong)(bVar13 + 3 & 0xff);
        bVar14 = param_1[uVar10 + 2];
        bVar18 = bVar18 + bVar14;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[uVar10 + 2] = bVar2;
        param_1[(ulong)bVar18 + 2] = bVar14;
        *(byte *)((long)param_4 + 2) =
             *(byte *)((long)puVar20 + 2) ^ param_1[(ulong)(byte)(bVar2 + bVar14) + 2];
        uVar10 = (ulong)(bVar13 + 4 & 0xff);
        bVar14 = param_1[uVar10 + 2];
        bVar18 = bVar18 + bVar14;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[uVar10 + 2] = bVar2;
        param_1[(ulong)bVar18 + 2] = bVar14;
        *(byte *)((long)param_4 + 3) =
             *(byte *)((long)puVar20 + 3) ^ param_1[(ulong)(byte)(bVar2 + bVar14) + 2];
        uVar10 = (ulong)(bVar13 + 5 & 0xff);
        bVar14 = param_1[uVar10 + 2];
        bVar18 = bVar18 + bVar14;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[uVar10 + 2] = bVar2;
        param_1[(ulong)bVar18 + 2] = bVar14;
        *(byte *)((long)param_4 + 4) =
             *(byte *)((long)puVar20 + 4) ^ param_1[(ulong)(byte)(bVar2 + bVar14) + 2];
        uVar10 = (ulong)(bVar13 + 6 & 0xff);
        bVar14 = param_1[uVar10 + 2];
        bVar18 = bVar18 + bVar14;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[uVar10 + 2] = bVar2;
        param_1[(ulong)bVar18 + 2] = bVar14;
        *(byte *)((long)param_4 + 5) =
             *(byte *)((long)puVar20 + 5) ^ param_1[(ulong)(byte)(bVar2 + bVar14) + 2];
        uVar10 = (ulong)(bVar13 + 7 & 0xff);
        bVar14 = param_1[uVar10 + 2];
        bVar18 = bVar18 + bVar14;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[uVar10 + 2] = bVar2;
        param_1[(ulong)bVar18 + 2] = bVar14;
        *(byte *)((long)param_4 + 6) =
             *(byte *)((long)puVar20 + 6) ^ param_1[(ulong)(byte)(bVar2 + bVar14) + 2];
        uVar10 = (ulong)(bVar13 + 8 & 0xff);
        bVar14 = param_1[uVar10 + 2];
        bVar18 = bVar18 + bVar14;
        bVar2 = param_1[(ulong)bVar18 + 2];
        param_1[uVar10 + 2] = bVar2;
        param_1[(ulong)bVar18 + 2] = bVar14;
        *(byte *)((long)param_4 + 7) =
             *(byte *)((long)puVar20 + 7) ^ param_1[(ulong)(byte)(bVar2 + bVar14) + 2];
        bVar13 = bVar13 + 8;
        puVar20 = puVar20 + 1;
        param_4 = param_4 + 1;
        lVar23 = lVar23 + 1;
      } while (lVar23 != 0);
      param_3 = param_3 + uVar22;
      bVar13 = cVar16 + 8;
      param_4 = puVar1;
    }
    bVar14 = bVar13;
    if ((param_2 & 7) != 0) {
      param_2 = param_2 & 7;
      uVar22 = 0;
      do {
        cVar16 = bVar13 + (char)uVar22;
        bVar14 = cVar16 + 1;
        bVar2 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar2;
        bVar9 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar14 + 2] = bVar9;
        param_1[(ulong)bVar18 + 2] = bVar2;
        *(byte *)((long)param_4 + uVar22) =
             *(byte *)((long)param_3 + uVar22) ^ param_1[(ulong)(byte)(bVar9 + bVar2) + 2];
        if (param_2 - 1 == uVar22) break;
        bVar14 = cVar16 + 2;
        bVar2 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar2;
        bVar9 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar14 + 2] = bVar9;
        param_1[(ulong)bVar18 + 2] = bVar2;
        *(byte *)((long)param_4 + uVar22 + 1) =
             *(byte *)((long)param_3 + uVar22 + 1) ^ param_1[(ulong)(byte)(bVar9 + bVar2) + 2];
        if (param_2 - 2 == uVar22) break;
        bVar14 = cVar16 + 3;
        bVar2 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar2;
        bVar9 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar14 + 2] = bVar9;
        param_1[(ulong)bVar18 + 2] = bVar2;
        *(byte *)((long)param_4 + uVar22 + 2) =
             *(byte *)((long)param_3 + uVar22 + 2) ^ param_1[(ulong)(byte)(bVar9 + bVar2) + 2];
        if (param_2 - 3 == uVar22) break;
        bVar14 = cVar16 + 4;
        bVar2 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar2;
        bVar9 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar14 + 2] = bVar9;
        param_1[(ulong)bVar18 + 2] = bVar2;
        *(byte *)((long)param_4 + uVar22 + 3) =
             *(byte *)((long)param_3 + uVar22 + 3) ^ param_1[(ulong)(byte)(bVar9 + bVar2) + 2];
        if (param_2 - 4 == uVar22) break;
        bVar14 = cVar16 + 5;
        bVar2 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar2;
        bVar9 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar14 + 2] = bVar9;
        param_1[(ulong)bVar18 + 2] = bVar2;
        *(byte *)((long)param_4 + uVar22 + 4) =
             *(byte *)((long)param_3 + uVar22 + 4) ^ param_1[(ulong)(byte)(bVar9 + bVar2) + 2];
        if (param_2 - 5 == uVar22) break;
        bVar14 = cVar16 + 6;
        bVar2 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar2;
        bVar9 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar14 + 2] = bVar9;
        param_1[(ulong)bVar18 + 2] = bVar2;
        *(byte *)((long)param_4 + uVar22 + 5) =
             *(byte *)((long)param_3 + uVar22 + 5) ^ param_1[(ulong)(byte)(bVar9 + bVar2) + 2];
        if (param_2 - 6 == uVar22) break;
        bVar14 = cVar16 + 7;
        bVar2 = param_1[(ulong)bVar14 + 2];
        bVar18 = bVar18 + bVar2;
        bVar9 = param_1[(ulong)bVar18 + 2];
        param_1[(ulong)bVar14 + 2] = bVar9;
        param_1[(ulong)bVar18 + 2] = bVar2;
        *(byte *)((long)param_4 + uVar22 + 6) =
             *(byte *)((long)param_3 + uVar22 + 6) ^ param_1[(ulong)(byte)(bVar9 + bVar2) + 2];
        uVar22 = uVar22 + 7;
      } while (param_2 != uVar22);
    }
  }
  *param_1 = bVar14;
  param_1[1] = bVar18;
  return;
}

