
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006bead0(long param_1,long param_2,char *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  ushort *puVar7;
  ushort uVar8;
  ulong *puVar9;
  ushort *puVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  char *pcVar18;
  int iVar23;
  int iVar24;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  int iVar25;
  int iVar26;
  int iVar33;
  int iVar34;
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  int iVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar20 [16];
  undefined2 uVar22;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  if ((((param_3[1] == '\x01') && (param_3[2] == '\x06')) && (*param_3 == '\x02')) &&
     ((*(int *)(param_3 + 0x1c) == *(int *)(param_1 + 0x4f) &&
      (*(short *)(param_3 + 0x20) == *(short *)(param_1 + 0x53))))) {
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x49);
    *(undefined2 *)(param_3 + 0x20) = *(undefined2 *)(param_1 + 0x4d);
    pcVar18 = param_3 + param_4;
    param_3 = param_3 + 0xf0;
    while( true ) {
      while( true ) {
        if ((pcVar18 <= param_3) || (cVar5 = *param_3, cVar5 == -1)) goto LAB_1006bebb1;
        if (cVar5 != '\0') break;
        param_3 = param_3 + 1;
      }
      if ((long)pcVar18 - (long)param_3 < 2) goto LAB_1006bebb1;
      bVar6 = param_3[1];
      if ((long)pcVar18 - (long)(param_3 + 2) < (long)(ulong)bVar6) goto LAB_1006bebb1;
      if (cVar5 == '=') break;
      param_3 = param_3 + (ulong)bVar6 + 2;
    }
    if ((((bVar6 == 7) && (param_3[2] == '\x01')) &&
        (*(int *)(param_3 + 3) == *(int *)(param_1 + 0x4f))) &&
       (*(short *)(param_3 + 7) == *(short *)(param_1 + 0x53))) {
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x49);
      *(undefined2 *)(param_3 + 7) = *(undefined2 *)(param_1 + 0x4d);
    }
LAB_1006bebb1:
    lVar13 = *(long *)(param_2 + 0x20);
    puVar7 = *(ushort **)(param_2 + 0x28);
    uVar8 = puVar7[2] >> 8;
    uVar11 = puVar7[2] << 8 | uVar8;
    uVar12 = (uint)*(byte *)(lVar13 + 9) + (uint)uVar11;
    lVar13 = (ulong)((uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 * 0x1000000) +
             (ulong)*(uint *)(lVar13 + 0x10) + (ulong)*(uint *)(lVar13 + 0xc);
    iVar15 = ((uint)lVar13 & 0xffff) + (int)((ulong)lVar13 >> 0x20);
    uVar12 = (iVar15 + (int)((ulong)lVar13 >> 0x10) & 0xffffU) +
             ((uint)(ushort)((ulong)lVar13 >> 0x10) + iVar15 >> 0x10);
    puVar7[3] = (ushort)((uVar12 * 0x10000 | uVar12 >> 0x10) + uVar12 >> 0x10);
    uVar16 = (uint)(uVar11 >> 1);
    uVar12 = 0;
    puVar10 = puVar7;
    if (uVar11 >> 1 != 0) {
      uVar1 = uVar16 - 1;
      uVar3 = (ulong)uVar1 + 1;
      uVar14 = uVar3 & 0x1fffffff8;
      if (uVar14 == 0) {
        iVar15 = 0;
        iVar23 = 0;
        iVar24 = 0;
        iVar25 = 0;
        iVar26 = 0;
        iVar33 = 0;
        iVar34 = 0;
        iVar35 = 0;
        uVar14 = 0;
      }
      else {
        uVar16 = uVar16 - ((uint)uVar3 & 0xfffffff8);
        puVar10 = puVar7 + uVar14;
        puVar9 = (ulong *)(puVar7 + 4);
        uVar17 = (ulong)((uVar11 >> 1) - 1) + 1 & 0xfffffffffffffff8;
        iVar15 = 0;
        iVar23 = 0;
        iVar24 = 0;
        iVar25 = 0;
        iVar26 = 0;
        iVar33 = 0;
        iVar34 = 0;
        iVar35 = 0;
        do {
          uVar4 = puVar9[-1];
          uVar22 = (undefined2)(uVar4 >> 0x30);
          auVar20._8_4_ = 0;
          auVar20._0_8_ = uVar4;
          auVar20._12_2_ = uVar22;
          auVar20._14_2_ = uVar22;
          uVar22 = (undefined2)(uVar4 >> 0x20);
          auVar19._12_4_ = auVar20._12_4_;
          auVar19._8_2_ = 0;
          auVar19._0_8_ = uVar4;
          auVar19._10_2_ = uVar22;
          auVar32._10_6_ = auVar19._10_6_;
          auVar32._8_2_ = uVar22;
          auVar32._0_8_ = uVar4;
          uVar22 = (undefined2)(uVar4 >> 0x10);
          auVar21._8_8_ = auVar32._8_8_;
          auVar21._6_2_ = uVar22;
          auVar21._4_2_ = uVar22;
          auVar21._0_2_ = (undefined2)uVar4;
          auVar21._2_2_ = auVar21._0_2_;
          uVar4 = *puVar9;
          auVar29._8_4_ = 0;
          auVar29._0_8_ = uVar4;
          auVar29._12_2_ = (short)(uVar4 >> 0x30);
          auVar29._14_2_ = uVar22;
          auVar28._12_4_ = auVar29._12_4_;
          auVar28._8_2_ = 0;
          auVar28._0_8_ = uVar4;
          auVar28._10_2_ = uVar22;
          auVar27._10_6_ = auVar28._10_6_;
          auVar27._8_2_ = (short)(uVar4 >> 0x20);
          auVar27._0_8_ = uVar4;
          auVar30._8_8_ = auVar27._8_8_;
          auVar30._6_2_ = auVar21._0_2_;
          auVar30._4_2_ = (short)(uVar4 >> 0x10);
          auVar30._0_2_ = (undefined2)uVar4;
          auVar30._2_2_ = auVar21._0_2_;
          auVar21 = auVar21 & _DAT_100b4add0;
          auVar30 = auVar30 & _DAT_100b4add0;
          iVar15 = auVar21._0_4_ + iVar15;
          iVar23 = auVar21._4_4_ + iVar23;
          iVar24 = auVar21._8_4_ + iVar24;
          iVar25 = auVar21._12_4_ + iVar25;
          iVar26 = auVar30._0_4_ + iVar26;
          iVar33 = auVar30._4_4_ + iVar33;
          iVar34 = auVar30._8_4_ + iVar34;
          iVar35 = auVar30._12_4_ + iVar35;
          puVar9 = puVar9 + 2;
          uVar17 = uVar17 - 8;
        } while (uVar17 != 0);
      }
      auVar31._0_4_ = iVar24 + iVar34 + iVar15 + iVar26;
      auVar31._4_4_ = iVar25 + iVar35 + iVar23 + iVar33;
      auVar31._8_4_ = iVar15 + iVar26 + iVar24 + iVar34;
      auVar31._12_4_ = iVar23 + iVar33 + iVar25 + iVar35;
      auVar32 = phaddd(auVar31,auVar31);
      uVar12 = auVar32._0_4_;
      if (uVar3 != uVar14) {
        uVar2 = uVar16 - 1;
        if ((uVar16 & 3) != 0) {
          iVar15 = -(uVar16 & 3);
          do {
            uVar16 = uVar16 - 1;
            uVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            uVar12 = uVar12 + uVar11;
            iVar15 = iVar15 + 1;
          } while (iVar15 != 0);
        }
        if (2 < uVar2) {
          do {
            uVar12 = (uint)puVar10[3] + (uint)puVar10[2] + (uint)puVar10[1] + *puVar10 + uVar12;
            puVar10 = puVar10 + 4;
            uVar16 = uVar16 - 4;
          } while (uVar16 != 0);
        }
      }
      puVar10 = puVar7 + (ulong)uVar1 + 1;
    }
    if ((uVar8 & 1) != 0) {
      uVar12 = uVar12 + (byte)*puVar10;
    }
    puVar7[3] = ~(ushort)((uVar12 << 0x10 | uVar12 >> 0x10) + uVar12 >> 0x10);
  }
  return;
}

