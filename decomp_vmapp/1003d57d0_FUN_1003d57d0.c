
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d57d0(uint *param_1,undefined4 param_2,undefined1 (*param_3) [16],uint param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint *puVar24;
  float *pfVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  ushort *puVar32;
  byte *pbVar33;
  uint uVar34;
  ulong uVar35;
  int iVar36;
  bool bVar37;
  float fVar38;
  uint uVar43;
  uint uVar44;
  undefined1 in_XMM0 [16];
  undefined1 auVar39 [16];
  uint uVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar46;
  float fVar47;
  undefined1 in_XMM2 [16];
  float fVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  ulong uVar55;
  undefined1 auVar56 [16];
  
  uVar18 = _UNK_100b4addc;
  uVar5 = _UNK_100b4add8;
  uVar4 = _UNK_100b4add4;
  uVar3 = _DAT_100b4add0;
  fVar38 = DAT_100b44ca0;
  fVar17 = DAT_100b3f708;
  fVar16 = DAT_100b3f704;
  fVar15 = DAT_100b3f700;
  fVar14 = DAT_100b3f6fc;
  fVar13 = DAT_100b3f6f0;
  uVar26 = _UNK_100b3f6bc;
  uVar22 = _UNK_100b3f6b8;
  uVar19 = _UNK_100b3f6b4;
  uVar30 = _DAT_100b3f6b0;
  auVar42 = _DAT_100b3f6a0;
  fVar12 = DAT_100b39678;
  fVar11 = _UNK_100b3797c;
  fVar10 = _UNK_100b37978;
  fVar9 = _UNK_100b37974;
  fVar8 = _DAT_100b37970;
  fVar7 = _UNK_100b3796c;
  fVar52 = _UNK_100b37968;
  fVar46 = _UNK_100b37964;
  fVar47 = _DAT_100b37960;
  uVar29 = _UNK_100b3795c;
  uVar20 = _UNK_100b37958;
  uVar27 = _UNK_100b37954;
  uVar34 = _DAT_100b37950;
  switch(param_2) {
  case 0:
  case 1:
    for (; param_4 != 0; param_4 = param_4 - 1) {
      uVar30 = *param_1;
      auVar53._0_4_ = fVar47 + fVar8 + (float)(uVar30 & 0xff & uVar3 | uVar34);
      auVar53._4_4_ = fVar46 + fVar9 + (float)(uVar30 >> 8 & 0xff & uVar4 | uVar27);
      auVar53._8_4_ = fVar52 + fVar10 + (float)(uVar30 >> 0x10 & 0xff & uVar5 | uVar20);
      auVar53._12_4_ = fVar7 + fVar11 + (float)(uVar30 >> 0x18 & uVar18 | uVar29);
      auVar40 = divps(auVar53,auVar42);
      *param_3 = auVar40;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    }
    break;
  case 2:
  case 3:
    for (; param_4 != 0; param_4 = param_4 - 1) {
      uVar30 = *param_1;
      auVar56._0_4_ = fVar47 + fVar8 + (float)(uVar30 >> 0x10 & 0xff & uVar3 | uVar34);
      auVar56._4_4_ = fVar46 + fVar9 + (float)(uVar30 >> 8 & 0xff & uVar4 | uVar27);
      auVar56._8_4_ = fVar52 + fVar10 + (float)(uVar30 & 0xff & uVar5 | uVar20);
      auVar56._12_4_ = fVar7 + fVar11 + (float)(uVar30 >> 0x18 & uVar18 | uVar29);
      auVar40 = divps(auVar56,auVar42);
      *param_3 = auVar40;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    }
    break;
  case 5:
    for (; param_4 != 0; param_4 = param_4 - 1) {
      uVar28 = *param_1;
      auVar39._0_4_ =
           (float)(uVar30 >> 0x10 | (uint)fVar47) + fVar8 +
           (float)((uVar28 >> 0x10 & 0xff ^ uVar30) & uVar3 | uVar34);
      auVar39._4_4_ =
           (float)(uVar19 >> 0x10 | (uint)fVar46) + fVar9 +
           (float)((uVar28 >> 8 & 0xff ^ uVar19) & uVar4 | uVar27);
      auVar39._8_4_ =
           (float)(uVar22 >> 0x10 | (uint)fVar52) + fVar10 +
           (float)((uVar28 & 0xff ^ uVar22) & uVar5 | uVar20);
      auVar39._12_4_ =
           (float)(uVar26 >> 0x10 | (uint)fVar7) + fVar11 +
           (float)((uVar28 >> 0x18 ^ uVar26) & uVar18 | uVar29);
      auVar40 = divps(auVar39,auVar42);
      *param_3 = auVar40;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    }
    break;
  case 7:
  case 8:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        uVar34 = *param_1;
        *puVar23 = 0x3f800000;
        puVar23[-1] = (float)(uVar34 >> 0x10 & 0xff) / fVar38;
        puVar23[-2] = (float)(uVar34 >> 8 & 0xff) / fVar38;
        puVar23[-3] = (float)(uVar34 & 0xff) / fVar38;
        param_1 = param_1 + 1;
        puVar23 = puVar23 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 9:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        uVar34 = *param_1;
        *puVar23 = 0x3f800000;
        puVar23[-1] = (float)(uVar34 & 0xff) / fVar38;
        puVar23[-2] = (float)(uVar34 >> 8 & 0xff) / fVar38;
        puVar23[-3] = (float)(uVar34 >> 0x10 & 0xff) / fVar38;
        param_1 = param_1 + 1;
        puVar23 = puVar23 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 10:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        uVar34 = *param_1;
        *puVar23 = 0x3f800000;
        puVar23[-1] = (float)(uVar34 >> 0x10 & 0xff) / fVar38;
        puVar23[-2] = (float)(uVar34 >> 8 & 0xff) / fVar38;
        puVar23[-3] = (float)(uVar34 & 0xff) / fVar38;
        param_1 = (uint *)((long)param_1 + 3);
        puVar23 = puVar23 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0xb:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        uVar34 = *param_1;
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        fVar47 = DAT_100b44ca0;
        *(float *)(*param_3 + 8) = (float)(byte)(ushort)uVar34 / DAT_100b44ca0;
        *(float *)(*param_3 + 4) = (float)(ushort)((ushort)uVar34 >> 8) / fVar47;
        *(undefined4 *)*param_3 = 0x3f800000;
        param_3 = param_3 + 1;
        param_1 = (uint *)((long)param_1 + 2);
      }
      fVar47 = DAT_100b44ca0;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        do {
          uVar34 = *param_1;
          puVar23[-4] = 0x3f800000;
          puVar23[-5] = (float)(byte)(ushort)uVar34 / fVar47;
          puVar23[-6] = (float)(ushort)((ushort)uVar34 >> 8) / fVar47;
          puVar23[-7] = 0x3f800000;
          uVar2 = *(ushort *)((long)param_1 + 2);
          *puVar23 = 0x3f800000;
          puVar23[-1] = (float)(byte)uVar2 / fVar47;
          puVar23[-2] = (float)(uVar2 >> 8) / fVar47;
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          param_1 = param_1 + 1;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0xd:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        uVar34 = *param_1;
        *puVar23 = 0x3f800000;
        puVar23[-1] = (float)(byte)((byte)(ushort)uVar34 ^ 0x80) / fVar38;
        puVar23[-2] = (float)(ushort)((ushort)uVar34 >> 8 ^ 0x80) / fVar38;
        puVar23[-3] = 0x3f800000;
        param_1 = (uint *)((long)param_1 + 2);
        puVar23 = puVar23 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x10:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        uVar2 = (ushort)*param_1;
        *puVar23 = 0x3f800000;
        puVar23[-1] = (float)(((uint)(uVar2 >> 0xb) * 0xff + 0xf) / 0x1f) / fVar38;
        uVar34 = (uVar2 >> 5 & 0x3f) * 0xff + 0x1f;
        uVar27 = uVar34 / 0x3f;
        puVar23[-2] = (float)((uVar34 - uVar27 >> 1) + uVar27 >> 5) / fVar38;
        uVar34 = (uVar2 & 0x1f) * 0xff + 0xf;
        uVar27 = uVar34 / 0x1f;
        puVar23[-3] = (float)((uVar34 - uVar27 >> 1) + uVar27 >> 4) / fVar38;
        param_1 = (uint *)((long)param_1 + 2);
        puVar23 = puVar23 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x11:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        uVar2 = (ushort)*param_1;
        *puVar23 = 0x3f800000;
        puVar23[-1] = (float)(((uVar2 >> 8 & 0xf) * 0xff + 7) / 0xf) / fVar38;
        puVar23[-2] = (float)(((uVar2 >> 4 & 0xf) * 0xff + 7) / 0xf) / fVar38;
        puVar23[-3] = (float)(((uVar2 & 0xf) * 0xff + 7) / 0xf) / fVar38;
        param_1 = (uint *)((long)param_1 + 2);
        puVar23 = puVar23 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x12:
    if (param_4 != 0) {
      pfVar25 = (float *)(*param_3 + 0xc);
      do {
        uVar2 = (ushort)*param_1;
        *pfVar25 = (float)(((uint)(uVar2 >> 0xc) * 0xff + 7) / 0xf) / fVar38;
        pfVar25[-1] = (float)(((uVar2 >> 8 & 0xf) * 0xff + 7) / 0xf) / fVar38;
        pfVar25[-2] = (float)(((uVar2 >> 4 & 0xf) * 0xff + 7) / 0xf) / fVar38;
        *(float *)*(undefined1 (*) [16])(pfVar25 + -3) =
             (float)(((uVar2 & 0xf) * 0xff + 7) / 0xf) / fVar38;
        param_1 = (uint *)((long)param_1 + 2);
        pfVar25 = pfVar25 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x13:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        uVar2 = (ushort)*param_1;
        *puVar23 = 0x3f800000;
        uVar34 = (uVar2 >> 10 & 0x1f) * 0xff + 0xf;
        uVar27 = uVar34 / 0x1f;
        puVar23[-1] = (float)((uVar34 - uVar27 >> 1) + uVar27 >> 4) / fVar38;
        uVar34 = (uVar2 >> 5 & 0x1f) * 0xff + 0xf;
        uVar27 = uVar34 / 0x1f;
        puVar23[-2] = (float)((uVar34 - uVar27 >> 1) + uVar27 >> 4) / fVar38;
        uVar34 = (uVar2 & 0x1f) * 0xff + 0xf;
        uVar27 = uVar34 / 0x1f;
        puVar23[-3] = (float)((uVar34 - uVar27 >> 1) + uVar27 >> 4) / fVar38;
        param_1 = (uint *)((long)param_1 + 2);
        puVar23 = puVar23 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x14:
    for (; param_4 != 0; param_4 = param_4 - 1) {
      uVar2 = (ushort)*param_1;
      uVar30 = (uVar2 >> 10 & 0x1f) * 0xff + 0xf;
      uVar19 = uVar30 / 0x1f;
      uVar19 = (uVar30 - uVar19 >> 1) + uVar19;
      uVar26 = (uVar2 >> 5 & 0x1f) * 0xff + 0xf;
      uVar28 = uVar26 / 0x1f;
      uVar30 = (uVar2 & 0x1f) * 0xff + 0xf;
      uVar22 = uVar30 / 0x1f;
      uVar22 = (uVar30 - uVar22 >> 1) + uVar22;
      uVar55 = CONCAT44(-(uint)(uVar2 >> 0xf),(uVar26 - uVar28 >> 1) + uVar28 >> 4) & 0xffffffffff;
      uVar30 = (uint)uVar55;
      auVar54._0_4_ =
           (float)(uVar22 >> 0x14 | (uint)fVar47) + fVar8 + (float)(uVar22 >> 4 & uVar3 | uVar34);
      auVar54._4_4_ =
           (float)(uVar30 >> 0x10 | (uint)fVar46) + fVar9 + (float)(uVar30 & uVar4 | uVar27);
      auVar54._8_4_ =
           (float)(uVar19 >> 0x14 | (uint)fVar52) + fVar10 + (float)(uVar19 >> 4 & uVar5 | uVar20);
      auVar54._12_4_ = fVar7 + fVar11 + (float)((uint)(uVar55 >> 0x20) & uVar18 | uVar29);
      auVar40 = divps(auVar54,auVar42);
      *param_3 = auVar40;
      param_3 = param_3 + 1;
      param_1 = (uint *)((long)param_1 + 2);
    }
    break;
  case 0x15:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        bVar1 = (byte)*param_1;
        *puVar23 = 0x3f800000;
        puVar23[-1] = (float)(((uint)(bVar1 >> 5) * 0xff + 3) / 7) / fVar38;
        uVar27 = (bVar1 >> 2 & 7) * 0xff + 3;
        uVar34 = uVar27 / 7;
        puVar23[-2] = (float)((uVar27 - uVar34 >> 1) + uVar34 >> 2) / fVar38;
        puVar23[-3] = (float)(((bVar1 & 3) * 0xff + 1) / 3) / fVar38;
        param_1 = (uint *)((long)param_1 + 1);
        puVar23 = puVar23 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x16:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        uVar34 = *param_1;
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        *(float *)(*param_3 + 8) = (float)(byte)uVar34 / DAT_100b44ca0;
        *(undefined8 *)*param_3 = 0x3f8000003f800000;
        param_3 = param_3 + 1;
        param_1 = (uint *)((long)param_1 + 1);
      }
      fVar47 = DAT_100b44ca0;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        do {
          uVar34 = *param_1;
          puVar23[-4] = 0x3f800000;
          puVar23[-5] = (float)(byte)uVar34 / fVar47;
          *(undefined8 *)(puVar23 + -7) = 0x3f8000003f800000;
          bVar1 = *(byte *)((long)param_1 + 1);
          *puVar23 = 0x3f800000;
          puVar23[-1] = (float)bVar1 / fVar47;
          *(undefined8 *)(puVar23 + -3) = 0x3f8000003f800000;
          puVar23 = puVar23 + 8;
          param_1 = (uint *)((long)param_1 + 2);
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x18:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        uVar34 = *param_1;
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        *(float *)(*param_3 + 8) = (float)(byte)((byte)uVar34 ^ 0x80) / DAT_100b44ca0;
        *(undefined8 *)*param_3 = 0x3f8000003f800000;
        param_3 = param_3 + 1;
        param_1 = (uint *)((long)param_1 + 1);
      }
      fVar47 = DAT_100b44ca0;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        do {
          uVar34 = *param_1;
          puVar23[-4] = 0x3f800000;
          puVar23[-5] = (float)(byte)((byte)uVar34 ^ 0x80) / fVar47;
          *(undefined8 *)(puVar23 + -7) = 0x3f8000003f800000;
          bVar1 = *(byte *)((long)param_1 + 1);
          *puVar23 = 0x3f800000;
          puVar23[-1] = (float)(bVar1 ^ 0x80) / fVar47;
          *(undefined8 *)(puVar23 + -3) = 0x3f8000003f800000;
          puVar23 = puVar23 + 8;
          param_1 = (uint *)((long)param_1 + 2);
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x1a:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        *(float *)(*param_3 + 0xc) = (float)(byte)*param_1 / DAT_100b44ca0;
        *(undefined4 *)(*param_3 + 8) = 0;
        *(undefined8 *)*param_3 = 0;
        param_3 = param_3 + 1;
        param_1 = (uint *)((long)param_1 + 1);
      }
      fVar47 = DAT_100b44ca0;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        pfVar25 = (float *)(param_3[1] + 0xc);
        do {
          pfVar25[-4] = (float)(byte)*param_1 / fVar47;
          pfVar25[-5] = 0.0;
          pfVar25[-7] = 0.0;
          pfVar25[-6] = 0.0;
          *pfVar25 = (float)*(byte *)((long)param_1 + 1) / fVar47;
          pfVar25[-1] = 0.0;
          *(undefined8 *)*(undefined1 (*) [16])(pfVar25 + -3) = 0;
          pfVar25 = pfVar25 + 8;
          param_1 = (uint *)((long)param_1 + 2);
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x1c:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        uVar34 = *param_1;
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        fVar47 = (float)(byte)uVar34 / DAT_100b44ca0;
        *(float *)(*param_3 + 8) = fVar47;
        *(float *)(*param_3 + 4) = fVar47;
        *(float *)*param_3 = fVar47;
        param_3 = param_3 + 1;
        param_1 = (uint *)((long)param_1 + 1);
      }
      fVar47 = DAT_100b44ca0;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        do {
          uVar34 = *param_1;
          puVar23[-4] = 0x3f800000;
          fVar46 = (float)(byte)uVar34 / fVar47;
          puVar23[-5] = fVar46;
          puVar23[-6] = fVar46;
          puVar23[-7] = fVar46;
          bVar1 = *(byte *)((long)param_1 + 1);
          *puVar23 = 0x3f800000;
          fVar46 = (float)bVar1 / fVar47;
          puVar23[-1] = fVar46;
          puVar23[-2] = fVar46;
          puVar23[-3] = fVar46;
          puVar23 = puVar23 + 8;
          param_1 = (uint *)((long)param_1 + 2);
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x1d:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        uVar34 = *param_1;
        *(float *)(*param_3 + 0xc) = (float)(ushort)((ushort)uVar34 >> 8) / DAT_100b44ca0;
        fVar38 = (float)(byte)(ushort)uVar34 / fVar38;
        *(float *)(*param_3 + 8) = fVar38;
        *(float *)(*param_3 + 4) = fVar38;
        *(float *)*param_3 = fVar38;
        param_3 = param_3 + 1;
        param_1 = (uint *)((long)param_1 + 2);
      }
      fVar47 = DAT_100b44ca0;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        pfVar25 = (float *)(param_3[1] + 0xc);
        do {
          uVar34 = *param_1;
          pfVar25[-4] = (float)(ushort)((ushort)uVar34 >> 8) / fVar47;
          fVar46 = (float)(byte)(ushort)uVar34 / fVar47;
          pfVar25[-5] = fVar46;
          pfVar25[-6] = fVar46;
          pfVar25[-7] = fVar46;
          uVar2 = *(ushort *)((long)param_1 + 2);
          *pfVar25 = (float)(uVar2 >> 8) / fVar47;
          fVar46 = (float)(byte)uVar2 / fVar47;
          pfVar25[-1] = fVar46;
          pfVar25[-2] = fVar46;
          *(float *)*(undefined1 (*) [16])(pfVar25 + -3) = fVar46;
          pfVar25 = pfVar25 + 8;
          param_1 = param_1 + 1;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x1e:
    if (param_4 != 0) {
      pfVar25 = (float *)(*param_3 + 0xc);
      do {
        uVar34 = *param_1;
        *pfVar25 = (float)(((uint)(byte)((byte)uVar34 >> 4) * 0xff + 7) / 0xf) / fVar38;
        fVar47 = (float)((((byte)uVar34 & 0xf) * 0xff + 7) / 0xf) / fVar38;
        pfVar25[-1] = fVar47;
        pfVar25[-2] = fVar47;
        *(float *)*(undefined1 (*) [16])(pfVar25 + -3) = fVar47;
        param_1 = (uint *)((long)param_1 + 1);
        pfVar25 = pfVar25 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x20:
    if (param_4 != 0) {
      uVar27 = param_4 - 1;
      uVar55 = (ulong)uVar27 + 1;
      uVar34 = 0;
      uVar35 = uVar55 & 0x1fffffffe;
      if (uVar35 == 0) {
        uVar35 = 0;
      }
      else {
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        puVar24 = param_1 + 1;
        uVar21 = (ulong)uVar27 + 1 & 0xfffffffffffffffe;
        do {
          puVar23[-4] = 0x3f800000;
          *puVar23 = 0x3f800000;
          uVar34 = *puVar24;
          puVar23[-5] = (float)(puVar24[-1] & 0xffffff) * fVar16;
          puVar23[-1] = (float)(uVar34 & 0xffffff) * fVar16;
          puVar23[-6] = 0x3f800000;
          puVar23[-2] = 0x3f800000;
          puVar23[-7] = 0x3f800000;
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          puVar24 = puVar24 + 2;
          uVar21 = uVar21 - 2;
        } while (uVar21 != 0);
        uVar34 = (uint)uVar55 & 0xfffffffe;
        param_3 = param_3 + (uVar55 & 0x1fffffffe);
        param_1 = param_1 + uVar35;
      }
      if (uVar55 != uVar35) {
        uVar20 = uVar34;
        if ((param_4 & 1) != 0) {
          *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
          *(float *)(*param_3 + 8) = (float)(*param_1 & 0xffffff) * DAT_100b3f704;
          *(undefined8 *)*param_3 = 0x3f8000003f800000;
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
          uVar20 = uVar34 + 1;
        }
        fVar47 = DAT_100b3f704;
        if (uVar27 != uVar34) {
          iVar36 = param_4 - uVar20;
          puVar23 = (undefined4 *)(param_3[1] + 0xc);
          do {
            puVar23[-4] = 0x3f800000;
            puVar23[-5] = (float)(*param_1 & 0xffffff) * fVar47;
            puVar23[-6] = 0x3f800000;
            puVar23[-7] = 0x3f800000;
            *puVar23 = 0x3f800000;
            puVar23[-1] = (float)(param_1[1] & 0xffffff) * fVar47;
            *(undefined8 *)(puVar23 + -3) = 0x3f8000003f800000;
            puVar23 = puVar23 + 8;
            param_1 = param_1 + 2;
            iVar36 = iVar36 + -2;
          } while (iVar36 != 0);
        }
      }
    }
    break;
  case 0x2d:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        uVar2 = (ushort)*param_1;
        *puVar23 = 0x3f800000;
        uVar34 = (uVar2 & 0x1f ^ 0x10) * 0xff + 3;
        uVar27 = uVar34 / 0x1f;
        puVar23[-1] = (float)((uVar34 - uVar27 >> 1) + uVar27 >> 4) / fVar38;
        uVar34 = (uVar2 >> 5 & 0x1f ^ 0x10) * 0xff + 3;
        uVar27 = uVar34 / 0x1f;
        puVar23[-2] = (float)((uVar34 - uVar27 >> 1) + uVar27 >> 4) / fVar38;
        puVar23[-3] = (float)(((uint)(uVar2 >> 10) * 0xff + 7) / 0x3f) / fVar38;
        param_1 = (uint *)((long)param_1 + 2);
        puVar23 = puVar23 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x2e:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        uVar34 = *param_1;
        *puVar23 = 0x3f800000;
        puVar23[-1] = (float)(uVar34 & 0xff ^ 0x80) / fVar38;
        puVar23[-2] = (float)(uVar34 >> 8 & 0xff ^ 0x80) / fVar38;
        puVar23[-3] = (float)(uVar34 >> 0x10 & 0xff) / fVar38;
        param_1 = param_1 + 1;
        puVar23 = puVar23 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x30:
    if (param_4 != 0) {
      lVar31 = 0;
      puVar24 = param_1;
      if ((param_4 & 3) != 0) {
        lVar31 = 0;
        do {
          *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
          *(uint *)(*param_3 + 8) = param_1[lVar31];
          *(undefined4 *)(*param_3 + 4) = 0x3f800000;
          *(undefined4 *)*param_3 = 0x3f800000;
          param_3 = param_3 + 1;
          puVar24 = puVar24 + 1;
          lVar31 = lVar31 + 1;
        } while ((param_4 & 3) != (uint)lVar31);
      }
      if (2 < param_4 - 1) {
        iVar36 = param_4 - (int)lVar31;
        puVar23 = (undefined4 *)(param_3[3] + 0xc);
        do {
          puVar23[-0xc] = 0x3f800000;
          puVar23[-0xd] = *puVar24;
          puVar23[-0xe] = 0x3f800000;
          puVar23[-0xf] = 0x3f800000;
          puVar23[-8] = 0x3f800000;
          puVar23[-9] = puVar24[1];
          puVar23[-10] = 0x3f800000;
          puVar23[-0xb] = 0x3f800000;
          puVar23[-4] = 0x3f800000;
          puVar23[-5] = puVar24[2];
          puVar23[-6] = 0x3f800000;
          puVar23[-7] = 0x3f800000;
          *puVar23 = 0x3f800000;
          puVar23[-1] = puVar24[3];
          puVar23[-2] = 0x3f800000;
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 0x10;
          puVar24 = puVar24 + 4;
          iVar36 = iVar36 + -4;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x31:
    if (param_4 != 0) {
      uVar27 = param_4 - 1;
      uVar55 = (ulong)uVar27 + 1;
      uVar34 = 0;
      uVar35 = uVar55 & 0x1fffffffe;
      if (uVar35 == 0) {
        uVar35 = 0;
      }
      else {
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        puVar24 = param_1 + 1;
        uVar21 = (ulong)uVar27 + 1 & 0xfffffffffffffffe;
        do {
          puVar23[-4] = 0x3f800000;
          *puVar23 = 0x3f800000;
          uVar34 = *puVar24;
          puVar23[-5] = (float)puVar24[-1] * fVar17;
          puVar23[-1] = (float)uVar34 * fVar17;
          puVar23[-6] = 0x3f800000;
          puVar23[-2] = 0x3f800000;
          puVar23[-7] = 0x3f800000;
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          puVar24 = puVar24 + 2;
          uVar21 = uVar21 - 2;
        } while (uVar21 != 0);
        uVar34 = (uint)uVar55 & 0xfffffffe;
        param_3 = param_3 + (uVar55 & 0x1fffffffe);
        param_1 = param_1 + uVar35;
      }
      if (uVar55 != uVar35) {
        uVar20 = uVar34;
        if ((param_4 & 1) != 0) {
          *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
          *(float *)(*param_3 + 8) = (float)*param_1 * DAT_100b3f708;
          *(undefined8 *)*param_3 = 0x3f8000003f800000;
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
          uVar20 = uVar34 + 1;
        }
        fVar47 = DAT_100b3f708;
        if (uVar27 != uVar34) {
          iVar36 = param_4 - uVar20;
          puVar23 = (undefined4 *)(param_3[1] + 0xc);
          do {
            puVar23[-4] = 0x3f800000;
            puVar23[-5] = (float)*param_1 * fVar47;
            puVar23[-6] = 0x3f800000;
            puVar23[-7] = 0x3f800000;
            *puVar23 = 0x3f800000;
            puVar23[-1] = (float)param_1[1] * fVar47;
            *(undefined8 *)(puVar23 + -3) = 0x3f8000003f800000;
            puVar23 = puVar23 + 8;
            param_1 = param_1 + 2;
            iVar36 = iVar36 + -2;
          } while (iVar36 != 0);
        }
      }
    }
    break;
  case 0x32:
    if (param_4 != 0) {
      uVar27 = param_4 - 1;
      uVar55 = (ulong)uVar27 + 1;
      uVar34 = 0;
      uVar35 = uVar55 & 0x1fffffffe;
      if (uVar35 == 0) {
        uVar35 = 0;
      }
      else {
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        puVar24 = param_1 + 1;
        uVar21 = (ulong)uVar27 + 1 & 0xfffffffffffffffe;
        do {
          puVar23[-4] = 0x3f800000;
          *puVar23 = 0x3f800000;
          uVar34 = *puVar24;
          puVar23[-5] = (float)(puVar24[-1] ^ 0x80000000) * fVar17;
          puVar23[-1] = (float)(uVar34 ^ 0x80000000) * fVar17;
          puVar23[-6] = 0x3f800000;
          puVar23[-2] = 0x3f800000;
          puVar23[-7] = 0x3f800000;
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          puVar24 = puVar24 + 2;
          uVar21 = uVar21 - 2;
        } while (uVar21 != 0);
        uVar34 = (uint)uVar55 & 0xfffffffe;
        param_3 = param_3 + (uVar55 & 0x1fffffffe);
        param_1 = param_1 + uVar35;
      }
      if (uVar55 != uVar35) {
        uVar20 = uVar34;
        if ((param_4 & 1) != 0) {
          *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
          *(float *)(*param_3 + 8) = (float)(*param_1 ^ 0x80000000) * DAT_100b3f708;
          *(undefined8 *)*param_3 = 0x3f8000003f800000;
          param_3 = param_3 + 1;
          param_1 = param_1 + 1;
          uVar20 = uVar34 + 1;
        }
        fVar47 = DAT_100b3f708;
        if (uVar27 != uVar34) {
          iVar36 = param_4 - uVar20;
          puVar23 = (undefined4 *)(param_3[1] + 0xc);
          do {
            puVar23[-4] = 0x3f800000;
            puVar23[-5] = (float)(*param_1 ^ 0x80000000) * fVar47;
            puVar23[-6] = 0x3f800000;
            puVar23[-7] = 0x3f800000;
            *puVar23 = 0x3f800000;
            puVar23[-1] = (float)(param_1[1] ^ 0x80000000) * fVar47;
            *(undefined8 *)(puVar23 + -3) = 0x3f8000003f800000;
            puVar23 = puVar23 + 8;
            param_1 = param_1 + 2;
            iVar36 = iVar36 + -2;
          } while (iVar36 != 0);
        }
      }
    }
    break;
  case 0x33:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        *(uint *)(*param_3 + 8) = *param_1;
        *(uint *)(*param_3 + 4) = param_1[1];
        *(undefined4 *)*param_3 = 0x3f800000;
        param_3 = param_3 + 1;
        param_1 = param_1 + 2;
      }
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        do {
          puVar23[-4] = 0x3f800000;
          puVar23[-5] = *param_1;
          puVar23[-6] = param_1[1];
          puVar23[-7] = 0x3f800000;
          *puVar23 = 0x3f800000;
          puVar23[-1] = param_1[2];
          puVar23[-2] = param_1[3];
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          param_1 = param_1 + 4;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x34:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        fVar47 = DAT_100b3f708;
        *(float *)(*param_3 + 8) = (float)*param_1 * DAT_100b3f708;
        *(float *)(*param_3 + 4) = (float)param_1[1] * fVar47;
        *(undefined4 *)*param_3 = 0x3f800000;
        param_3 = param_3 + 1;
        param_1 = param_1 + 2;
      }
      fVar47 = DAT_100b3f708;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        do {
          puVar23[-4] = 0x3f800000;
          puVar23[-5] = (float)*param_1 * fVar47;
          puVar23[-6] = (float)param_1[1] * fVar47;
          puVar23[-7] = 0x3f800000;
          *puVar23 = 0x3f800000;
          puVar23[-1] = (float)param_1[2] * fVar47;
          puVar23[-2] = (float)param_1[3] * fVar47;
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          param_1 = param_1 + 4;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x35:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        fVar47 = DAT_100b3f708;
        *(float *)(*param_3 + 8) = (float)(*param_1 ^ 0x80000000) * DAT_100b3f708;
        *(float *)(*param_3 + 4) = (float)(param_1[1] ^ 0x80000000) * fVar47;
        *(undefined4 *)*param_3 = 0x3f800000;
        param_3 = param_3 + 1;
        param_1 = param_1 + 2;
      }
      fVar47 = DAT_100b3f708;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        do {
          puVar23[-4] = 0x3f800000;
          puVar23[-5] = (float)(*param_1 ^ 0x80000000) * fVar47;
          puVar23[-6] = (float)(param_1[1] ^ 0x80000000) * fVar47;
          puVar23[-7] = 0x3f800000;
          *puVar23 = 0x3f800000;
          puVar23[-1] = (float)(param_1[2] ^ 0x80000000) * fVar47;
          puVar23[-2] = (float)(param_1[3] ^ 0x80000000) * fVar47;
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          param_1 = param_1 + 4;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x36:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        *(uint *)(*param_3 + 8) = *param_1;
        *(uint *)(*param_3 + 4) = param_1[1];
        *(uint *)*param_3 = param_1[2];
        param_3 = param_3 + 1;
        param_1 = param_1 + 3;
      }
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        do {
          puVar23[-4] = 0x3f800000;
          puVar23[-5] = *param_1;
          puVar23[-6] = param_1[1];
          puVar23[-7] = param_1[2];
          *puVar23 = 0x3f800000;
          puVar23[-1] = param_1[3];
          puVar23[-2] = param_1[4];
          puVar23[-3] = param_1[5];
          puVar23 = puVar23 + 8;
          param_1 = param_1 + 6;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x37:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        *puVar23 = 0x3f800000;
        puVar23[-1] = (float)*param_1 * fVar17;
        puVar23[-2] = (float)param_1[1] * fVar17;
        puVar23[-3] = (float)param_1[2] * fVar17;
        puVar23 = puVar23 + 4;
        param_1 = param_1 + 3;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x38:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        *puVar23 = 0x3f800000;
        puVar23[-1] = (float)(*param_1 ^ 0x80000000) * fVar17;
        puVar23[-2] = (float)(param_1[1] ^ 0x80000000) * fVar17;
        puVar23[-3] = (float)(param_1[2] ^ 0x80000000) * fVar17;
        puVar23 = puVar23 + 4;
        param_1 = param_1 + 3;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x39:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        *(uint *)(*param_3 + 0xc) = param_1[3];
        *(uint *)(*param_3 + 8) = *param_1;
        *(uint *)(*param_3 + 4) = param_1[1];
        *(uint *)*param_3 = param_1[2];
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        param_1 = param_1 + 7;
        puVar24 = (uint *)(param_3[1] + 0xc);
        do {
          puVar24[-4] = param_1[-4];
          puVar24[-5] = param_1[-7];
          puVar24[-6] = param_1[-6];
          puVar24[-7] = param_1[-5];
          *puVar24 = *param_1;
          puVar24[-1] = param_1[-3];
          puVar24[-2] = param_1[-2];
          puVar24[-3] = param_1[-1];
          param_1 = param_1 + 8;
          puVar24 = puVar24 + 8;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x3a:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        fVar47 = ((float)(param_1[1] >> 0x10 | (uint)_UNK_100b37964) + _UNK_100b37974 +
                 (float)(_UNK_100b4add4 & param_1[1] | _UNK_100b37954)) * _UNK_100b3f6d4;
        fVar46 = ((float)(*param_1 >> 0x10 | (uint)_UNK_100b37968) + _UNK_100b37978 +
                 (float)(_UNK_100b4add8 & *param_1 | _UNK_100b37958)) * _UNK_100b3f6d8;
        fVar52 = ((float)(param_1[3] >> 0x10 | (uint)_UNK_100b3796c) + _UNK_100b3797c +
                 (float)(_UNK_100b4addc & param_1[3] | _UNK_100b3795c)) * _UNK_100b3f6dc;
        *(float *)*param_3 =
             ((float)(param_1[2] >> 0x10 | (uint)_DAT_100b37960) + _DAT_100b37970 +
             (float)(_DAT_100b4add0 & param_1[2] | _DAT_100b37950)) * _DAT_100b3f6d0;
        *(float *)(*param_3 + 4) = fVar47;
        *(float *)(*param_3 + 8) = fVar46;
        *(float *)(*param_3 + 0xc) = fVar52;
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
      }
      uVar26 = _UNK_100b4addc;
      uVar22 = _UNK_100b4add8;
      uVar19 = _UNK_100b4add4;
      uVar30 = _DAT_100b4add0;
      fVar15 = _UNK_100b3f6dc;
      fVar14 = _UNK_100b3f6d8;
      fVar13 = _UNK_100b3f6d4;
      fVar12 = _DAT_100b3f6d0;
      fVar11 = _UNK_100b3797c;
      fVar10 = _UNK_100b37978;
      fVar9 = _UNK_100b37974;
      fVar8 = _DAT_100b37970;
      fVar7 = _UNK_100b3796c;
      fVar52 = _UNK_100b37968;
      fVar46 = _UNK_100b37964;
      fVar47 = _DAT_100b37960;
      uVar29 = _UNK_100b3795c;
      uVar20 = _UNK_100b37958;
      uVar27 = _UNK_100b37954;
      uVar34 = _DAT_100b37950;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        param_1 = param_1 + 7;
        do {
          uVar3 = param_1[-4];
          uVar4 = param_1[-6];
          uVar5 = param_1[-7];
          *(float *)*param_3 =
               ((float)(param_1[-5] >> 0x10 | (uint)fVar47) + fVar8 +
               (float)(param_1[-5] & uVar30 | uVar34)) * fVar12;
          *(float *)(*param_3 + 4) =
               ((float)(uVar4 >> 0x10 | (uint)fVar46) + fVar9 + (float)(uVar4 & uVar19 | uVar27)) *
               fVar13;
          *(float *)(*param_3 + 8) =
               ((float)(uVar5 >> 0x10 | (uint)fVar52) + fVar10 + (float)(uVar5 & uVar22 | uVar20)) *
               fVar14;
          *(float *)(*param_3 + 0xc) =
               ((float)(uVar3 >> 0x10 | (uint)fVar7) + fVar11 + (float)(uVar3 & uVar26 | uVar29)) *
               fVar15;
          uVar3 = *param_1;
          uVar4 = param_1[-2];
          uVar5 = param_1[-3];
          *(float *)param_3[1] =
               ((float)(param_1[-1] >> 0x10 | (uint)fVar47) + fVar8 +
               (float)(param_1[-1] & uVar30 | uVar34)) * fVar12;
          *(float *)(param_3[1] + 4) =
               ((float)(uVar4 >> 0x10 | (uint)fVar46) + fVar9 + (float)(uVar4 & uVar19 | uVar27)) *
               fVar13;
          *(float *)(param_3[1] + 8) =
               ((float)(uVar5 >> 0x10 | (uint)fVar52) + fVar10 + (float)(uVar5 & uVar22 | uVar20)) *
               fVar14;
          *(float *)(param_3[1] + 0xc) =
               ((float)(uVar3 >> 0x10 | (uint)fVar7) + fVar11 + (float)(uVar3 & uVar26 | uVar29)) *
               fVar15;
          param_1 = param_1 + 8;
          param_3 = param_3 + 2;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x3b:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        fVar47 = ((float)((param_1[1] ^ _UNK_100b3f6c4) >> 0x10 | (uint)_UNK_100b37964) +
                  _UNK_100b37974 +
                 (float)(_UNK_100b4add4 & (param_1[1] ^ _UNK_100b3f6c4) | _UNK_100b37954)) *
                 _UNK_100b3f6d4;
        fVar46 = ((float)((*param_1 ^ _UNK_100b3f6c8) >> 0x10 | (uint)_UNK_100b37968) +
                  _UNK_100b37978 +
                 (float)(_UNK_100b4add8 & (*param_1 ^ _UNK_100b3f6c8) | _UNK_100b37958)) *
                 _UNK_100b3f6d8;
        fVar52 = ((float)((param_1[3] ^ _UNK_100b3f6cc) >> 0x10 | (uint)_UNK_100b3796c) +
                  _UNK_100b3797c +
                 (float)(_UNK_100b4addc & (param_1[3] ^ _UNK_100b3f6cc) | _UNK_100b3795c)) *
                 _UNK_100b3f6dc;
        *(float *)*param_3 =
             ((float)((param_1[2] ^ DAT_100b3f6c0) >> 0x10 | (uint)_DAT_100b37960) + _DAT_100b37970
             + (float)(_DAT_100b4add0 & (param_1[2] ^ DAT_100b3f6c0) | _DAT_100b37950)) *
             _DAT_100b3f6d0;
        *(float *)(*param_3 + 4) = fVar47;
        *(float *)(*param_3 + 8) = fVar46;
        *(float *)(*param_3 + 0xc) = fVar52;
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
      }
      uVar18 = _UNK_100b4addc;
      uVar5 = _UNK_100b4add8;
      uVar4 = _UNK_100b4add4;
      uVar3 = _DAT_100b4add0;
      fVar15 = _UNK_100b3f6dc;
      fVar14 = _UNK_100b3f6d8;
      fVar13 = _UNK_100b3f6d4;
      fVar12 = _DAT_100b3f6d0;
      uVar26 = _UNK_100b3f6cc;
      uVar22 = _UNK_100b3f6c8;
      uVar19 = _UNK_100b3f6c4;
      uVar30 = DAT_100b3f6c0;
      fVar11 = _UNK_100b3797c;
      fVar10 = _UNK_100b37978;
      fVar9 = _UNK_100b37974;
      fVar8 = _DAT_100b37970;
      fVar7 = _UNK_100b3796c;
      fVar52 = _UNK_100b37968;
      fVar46 = _UNK_100b37964;
      fVar47 = _DAT_100b37960;
      uVar29 = _UNK_100b3795c;
      uVar20 = _UNK_100b37958;
      uVar27 = _UNK_100b37954;
      uVar34 = _DAT_100b37950;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        param_1 = param_1 + 7;
        do {
          uVar28 = param_1[-5] ^ uVar30;
          uVar43 = param_1[-6] ^ uVar19;
          uVar44 = param_1[-7] ^ uVar22;
          uVar45 = param_1[-4] ^ uVar26;
          *(float *)*param_3 =
               ((float)(uVar28 >> 0x10 | (uint)fVar47) + fVar8 + (float)(uVar28 & uVar3 | uVar34)) *
               fVar12;
          *(float *)(*param_3 + 4) =
               ((float)(uVar43 >> 0x10 | (uint)fVar46) + fVar9 + (float)(uVar43 & uVar4 | uVar27)) *
               fVar13;
          *(float *)(*param_3 + 8) =
               ((float)(uVar44 >> 0x10 | (uint)fVar52) + fVar10 + (float)(uVar44 & uVar5 | uVar20))
               * fVar14;
          *(float *)(*param_3 + 0xc) =
               ((float)(uVar45 >> 0x10 | (uint)fVar7) + fVar11 + (float)(uVar45 & uVar18 | uVar29))
               * fVar15;
          uVar28 = param_1[-1] ^ uVar30;
          uVar43 = param_1[-2] ^ uVar19;
          uVar44 = param_1[-3] ^ uVar22;
          uVar45 = *param_1 ^ uVar26;
          *(float *)param_3[1] =
               ((float)(uVar28 >> 0x10 | (uint)fVar47) + fVar8 + (float)(uVar28 & uVar3 | uVar34)) *
               fVar12;
          *(float *)(param_3[1] + 4) =
               ((float)(uVar43 >> 0x10 | (uint)fVar46) + fVar9 + (float)(uVar43 & uVar4 | uVar27)) *
               fVar13;
          *(float *)(param_3[1] + 8) =
               ((float)(uVar44 >> 0x10 | (uint)fVar52) + fVar10 + (float)(uVar44 & uVar5 | uVar20))
               * fVar14;
          *(float *)(param_3[1] + 0xc) =
               ((float)(uVar45 >> 0x10 | (uint)fVar7) + fVar11 + (float)(uVar45 & uVar18 | uVar29))
               * fVar15;
          param_1 = param_1 + 8;
          param_3 = param_3 + 2;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x3c:
    if (param_4 != 0) {
      uVar34 = 0;
      do {
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        uVar2 = (ushort)*param_1;
        uVar29 = (uint)(uVar2 >> 0xf);
        uVar20 = uVar2 >> 10 & 0x1f;
        uVar27 = uVar2 & 0x3ff;
        if (uVar20 == 0x1f) {
          uVar29 = uVar29 << 0x1f | 0x7f800000;
          if ((uVar2 & 0x3ff) != 0) {
            uVar29 = uVar29 | uVar27 << 0xd;
          }
        }
        else {
          if ((uVar2 >> 10 & 0x1f) == 0) {
            uVar20 = 1;
            if ((uVar2 & 0x3ff) == 0) {
              uVar29 = uVar29 << 0x1f;
              goto LAB_1003d70c8;
            }
            do {
              uVar27 = uVar27 * 2;
              uVar20 = uVar20 - 1;
            } while ((uVar27 & 0x400) == 0);
            uVar27 = uVar27 & 0xfffffbfe;
          }
          uVar29 = uVar20 * 0x800000 + 0x38000000 | uVar29 << 0x1f | uVar27 << 0xd;
        }
LAB_1003d70c8:
        *(uint *)(*param_3 + 8) = uVar29;
        *(undefined8 *)*param_3 = 0x3f8000003f800000;
        param_3 = param_3 + 1;
        param_1 = (uint *)((long)param_1 + 2);
        uVar34 = uVar34 + 1;
      } while (uVar34 != param_4);
    }
    break;
  case 0x3e:
    if (param_4 != 0) {
      uVar27 = param_4 - 1;
      uVar55 = (ulong)uVar27 + 1;
      uVar34 = 0;
      uVar35 = uVar55 & 0x1fffffffe;
      if (uVar35 == 0) {
        uVar35 = 0;
      }
      else {
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        puVar32 = (ushort *)((long)param_1 + 2);
        uVar21 = (ulong)uVar27 + 1 & 0xfffffffffffffffe;
        do {
          puVar23[-4] = 0x3f800000;
          *puVar23 = 0x3f800000;
          uVar2 = *puVar32;
          puVar23[-5] = (float)puVar32[-1] / fVar15;
          puVar23[-1] = (float)uVar2 / fVar15;
          puVar23[-6] = 0x3f800000;
          puVar23[-2] = 0x3f800000;
          puVar23[-7] = 0x3f800000;
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          puVar32 = puVar32 + 2;
          uVar21 = uVar21 - 2;
        } while (uVar21 != 0);
        uVar34 = (uint)uVar55 & 0xfffffffe;
        param_3 = param_3 + (uVar55 & 0x1fffffffe);
        param_1 = (uint *)((long)param_1 + uVar35 * 2);
      }
      if (uVar55 != uVar35) {
        uVar20 = uVar34;
        if ((param_4 & 1) != 0) {
          *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
          *(float *)(*param_3 + 8) = (float)(ushort)*param_1 / DAT_100b3f700;
          *(undefined8 *)*param_3 = 0x3f8000003f800000;
          param_3 = param_3 + 1;
          param_1 = (uint *)((long)param_1 + 2);
          uVar20 = uVar34 + 1;
        }
        fVar47 = DAT_100b3f700;
        if (uVar27 != uVar34) {
          iVar36 = param_4 - uVar20;
          puVar23 = (undefined4 *)(param_3[1] + 0xc);
          do {
            puVar23[-4] = 0x3f800000;
            puVar23[-5] = (float)(ushort)*param_1 / fVar47;
            puVar23[-6] = 0x3f800000;
            puVar23[-7] = 0x3f800000;
            *puVar23 = 0x3f800000;
            puVar23[-1] = (float)*(ushort *)((long)param_1 + 2) / fVar47;
            *(undefined8 *)(puVar23 + -3) = 0x3f8000003f800000;
            puVar23 = puVar23 + 8;
            param_1 = param_1 + 1;
            iVar36 = iVar36 + -2;
          } while (iVar36 != 0);
        }
      }
    }
    break;
  case 0x3f:
    if (param_4 != 0) {
      uVar34 = param_4 - 1;
      uVar55 = (ulong)uVar34 + 1;
      uVar27 = 0;
      uVar35 = uVar55 & 0x1fffffffe;
      if (uVar35 == 0) {
        uVar35 = 0;
      }
      else {
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        puVar32 = (ushort *)((long)param_1 + 2);
        uVar21 = (ulong)uVar34 + 1 & 0xfffffffffffffffe;
        do {
          puVar23[-4] = 0x3f800000;
          *puVar23 = 0x3f800000;
          uVar2 = *puVar32;
          puVar23[-5] = (float)puVar32[-1];
          puVar23[-1] = (float)uVar2;
          puVar23[-6] = 0x3f800000;
          puVar23[-2] = 0x3f800000;
          puVar23[-7] = 0x3f800000;
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          puVar32 = puVar32 + 2;
          uVar21 = uVar21 - 2;
        } while (uVar21 != 0);
        uVar27 = (uint)uVar55 & 0xfffffffe;
        param_3 = param_3 + (uVar55 & 0x1fffffffe);
        param_1 = (uint *)((long)param_1 + uVar35 * 2);
      }
      if (uVar55 != uVar35) {
        uVar20 = uVar27;
        if ((param_4 & 1) != 0) {
          *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
          *(float *)(*param_3 + 8) = (float)(ushort)*param_1;
          *(undefined8 *)*param_3 = 0x3f8000003f800000;
          param_3 = param_3 + 1;
          param_1 = (uint *)((long)param_1 + 2);
          uVar20 = uVar27 + 1;
        }
        if (uVar34 != uVar27) {
          iVar36 = param_4 - uVar20;
          puVar23 = (undefined4 *)(param_3[1] + 0xc);
          do {
            puVar23[-4] = 0x3f800000;
            puVar23[-5] = (float)(ushort)*param_1;
            puVar23[-6] = 0x3f800000;
            puVar23[-7] = 0x3f800000;
            *puVar23 = 0x3f800000;
            puVar23[-1] = (float)*(ushort *)((long)param_1 + 2);
            *(undefined8 *)(puVar23 + -3) = 0x3f8000003f800000;
            puVar23 = puVar23 + 8;
            param_1 = param_1 + 1;
            iVar36 = iVar36 + -2;
          } while (iVar36 != 0);
        }
      }
    }
    break;
  case 0x40:
    if (param_4 != 0) {
      uVar27 = param_4 - 1;
      uVar55 = (ulong)uVar27 + 1;
      uVar34 = 0;
      uVar35 = uVar55 & 0x1fffffffe;
      if (uVar35 == 0) {
        uVar35 = 0;
      }
      else {
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        puVar32 = (ushort *)((long)param_1 + 2);
        uVar21 = (ulong)uVar27 + 1 & 0xfffffffffffffffe;
        do {
          puVar23[-4] = 0x3f800000;
          *puVar23 = 0x3f800000;
          uVar2 = *puVar32;
          puVar23[-5] = (float)(puVar32[-1] ^ 0x8000) / fVar15;
          puVar23[-1] = (float)(uVar2 ^ 0x8000) / fVar15;
          puVar23[-6] = 0x3f800000;
          puVar23[-2] = 0x3f800000;
          puVar23[-7] = 0x3f800000;
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          puVar32 = puVar32 + 2;
          uVar21 = uVar21 - 2;
        } while (uVar21 != 0);
        uVar34 = (uint)uVar55 & 0xfffffffe;
        param_3 = param_3 + (uVar55 & 0x1fffffffe);
        param_1 = (uint *)((long)param_1 + uVar35 * 2);
      }
      if (uVar55 != uVar35) {
        uVar20 = uVar34;
        if ((param_4 & 1) != 0) {
          *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
          *(float *)(*param_3 + 8) = (float)(ushort)((ushort)*param_1 ^ 0x8000) / DAT_100b3f700;
          *(undefined8 *)*param_3 = 0x3f8000003f800000;
          param_3 = param_3 + 1;
          param_1 = (uint *)((long)param_1 + 2);
          uVar20 = uVar34 + 1;
        }
        fVar47 = DAT_100b3f700;
        if (uVar27 != uVar34) {
          iVar36 = param_4 - uVar20;
          puVar23 = (undefined4 *)(param_3[1] + 0xc);
          do {
            puVar23[-4] = 0x3f800000;
            puVar23[-5] = (float)(ushort)((ushort)*param_1 ^ 0x8000) / fVar47;
            puVar23[-6] = 0x3f800000;
            puVar23[-7] = 0x3f800000;
            *puVar23 = 0x3f800000;
            puVar23[-1] = (float)(*(ushort *)((long)param_1 + 2) ^ 0x8000) / fVar47;
            *(undefined8 *)(puVar23 + -3) = 0x3f8000003f800000;
            puVar23 = puVar23 + 8;
            param_1 = param_1 + 1;
            iVar36 = iVar36 + -2;
          } while (iVar36 != 0);
        }
      }
    }
    break;
  case 0x41:
    if (param_4 != 0) {
      uVar34 = param_4 - 1;
      uVar55 = (ulong)uVar34 + 1;
      uVar27 = 0;
      uVar35 = uVar55 & 0x1fffffffe;
      if (uVar35 == 0) {
        uVar35 = 0;
      }
      else {
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        puVar32 = (ushort *)((long)param_1 + 2);
        uVar21 = (ulong)uVar34 + 1 & 0xfffffffffffffffe;
        do {
          puVar23[-4] = 0x3f800000;
          *puVar23 = 0x3f800000;
          uVar2 = *puVar32;
          puVar23[-5] = (float)puVar32[-1];
          puVar23[-1] = (float)uVar2;
          puVar23[-6] = 0x3f800000;
          puVar23[-2] = 0x3f800000;
          puVar23[-7] = 0x3f800000;
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          puVar32 = puVar32 + 2;
          uVar21 = uVar21 - 2;
        } while (uVar21 != 0);
        uVar27 = (uint)uVar55 & 0xfffffffe;
        param_3 = param_3 + (uVar55 & 0x1fffffffe);
        param_1 = (uint *)((long)param_1 + uVar35 * 2);
      }
      if (uVar55 != uVar35) {
        uVar20 = uVar27;
        if ((param_4 & 1) != 0) {
          *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
          *(float *)(*param_3 + 8) = (float)(ushort)*param_1;
          *(undefined8 *)*param_3 = 0x3f8000003f800000;
          param_3 = param_3 + 1;
          param_1 = (uint *)((long)param_1 + 2);
          uVar20 = uVar27 + 1;
        }
        if (uVar34 != uVar27) {
          iVar36 = param_4 - uVar20;
          puVar23 = (undefined4 *)(param_3[1] + 0xc);
          do {
            puVar23[-4] = 0x3f800000;
            puVar23[-5] = (float)(ushort)*param_1;
            puVar23[-6] = 0x3f800000;
            puVar23[-7] = 0x3f800000;
            *puVar23 = 0x3f800000;
            puVar23[-1] = (float)*(ushort *)((long)param_1 + 2);
            *(undefined8 *)(puVar23 + -3) = 0x3f8000003f800000;
            puVar23 = puVar23 + 8;
            param_1 = param_1 + 1;
            iVar36 = iVar36 + -2;
          } while (iVar36 != 0);
        }
      }
    }
    break;
  case 0x42:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        fVar47 = (float)(ushort)*param_1 / DAT_100b3f700;
        *(float *)(*param_3 + 8) = fVar47;
        *(float *)(*param_3 + 4) = fVar47;
        *(float *)*param_3 = fVar47;
        param_3 = param_3 + 1;
        param_1 = (uint *)((long)param_1 + 2);
      }
      fVar47 = DAT_100b3f700;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        do {
          puVar23[-4] = 0x3f800000;
          fVar46 = (float)(ushort)*param_1 / fVar47;
          puVar23[-5] = fVar46;
          puVar23[-6] = fVar46;
          puVar23[-7] = fVar46;
          *puVar23 = 0x3f800000;
          fVar46 = (float)*(ushort *)((long)param_1 + 2) / fVar47;
          puVar23[-1] = fVar46;
          puVar23[-2] = fVar46;
          puVar23[-3] = fVar46;
          puVar23 = puVar23 + 8;
          param_1 = param_1 + 1;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x43:
    if (param_4 != 0) {
      uVar34 = 0;
      do {
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        uVar2 = (ushort)*param_1;
        uVar29 = (uint)(uVar2 >> 0xf);
        uVar20 = uVar2 >> 10 & 0x1f;
        uVar27 = uVar2 & 0x3ff;
        if (uVar20 == 0x1f) {
          uVar29 = uVar29 << 0x1f | 0x7f800000;
          if ((uVar2 & 0x3ff) != 0) {
            uVar29 = uVar29 | uVar27 << 0xd;
          }
        }
        else {
          if ((uVar2 >> 10 & 0x1f) == 0) {
            uVar20 = 1;
            if ((uVar2 & 0x3ff) == 0) {
              uVar29 = uVar29 << 0x1f;
              goto LAB_1003d74a8;
            }
            do {
              uVar27 = uVar27 * 2;
              uVar20 = uVar20 - 1;
            } while ((uVar27 & 0x400) == 0);
            uVar27 = uVar27 & 0xfffffbfe;
          }
          uVar29 = uVar20 * 0x800000 + 0x38000000 | uVar29 << 0x1f | uVar27 << 0xd;
        }
LAB_1003d74a8:
        *(uint *)(*param_3 + 8) = uVar29;
        uVar2 = *(ushort *)((long)param_1 + 2);
        uVar29 = (uint)(uVar2 >> 0xf);
        uVar20 = uVar2 >> 10 & 0x1f;
        uVar27 = uVar2 & 0x3ff;
        if (uVar20 == 0x1f) {
          uVar29 = uVar29 << 0x1f | 0x7f800000;
          if ((uVar2 & 0x3ff) != 0) {
            uVar29 = uVar29 | uVar27 << 0xd;
          }
        }
        else {
          if ((uVar2 >> 10 & 0x1f) == 0) {
            uVar20 = 1;
            if ((uVar2 & 0x3ff) == 0) {
              uVar29 = uVar29 << 0x1f;
              goto LAB_1003d7518;
            }
            do {
              uVar27 = uVar27 * 2;
              uVar20 = uVar20 - 1;
            } while ((uVar27 & 0x400) == 0);
            uVar27 = uVar27 & 0xfffffbfe;
          }
          uVar29 = uVar20 * 0x800000 + 0x38000000 | uVar29 << 0x1f | uVar27 << 0xd;
        }
LAB_1003d7518:
        *(uint *)(*param_3 + 4) = uVar29;
        *(undefined4 *)*param_3 = 0x3f800000;
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
        uVar34 = uVar34 + 1;
      } while (uVar34 != param_4);
    }
    break;
  case 0x44:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        fVar47 = DAT_100b3f700;
        *(float *)(*param_3 + 8) = (float)(ushort)*param_1 / DAT_100b3f700;
        *(float *)(*param_3 + 4) = (float)*(ushort *)((long)param_1 + 2) / fVar47;
        *(undefined4 *)*param_3 = 0x3f800000;
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
      }
      fVar47 = DAT_100b3f700;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        do {
          puVar23[-4] = 0x3f800000;
          puVar23[-5] = (float)(ushort)*param_1 / fVar47;
          puVar23[-6] = (float)*(ushort *)((long)param_1 + 2) / fVar47;
          puVar23[-7] = 0x3f800000;
          *puVar23 = 0x3f800000;
          puVar23[-1] = (float)(ushort)param_1[1] / fVar47;
          puVar23[-2] = (float)*(ushort *)((long)param_1 + 6) / fVar47;
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          param_1 = param_1 + 2;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x45:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        *(float *)(*param_3 + 8) = (float)(ushort)*param_1;
        *(float *)(*param_3 + 4) = (float)*(ushort *)((long)param_1 + 2);
        *(undefined4 *)*param_3 = 0x3f800000;
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
      }
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        do {
          puVar23[-4] = 0x3f800000;
          puVar23[-5] = (float)(ushort)*param_1;
          puVar23[-6] = (float)*(ushort *)((long)param_1 + 2);
          puVar23[-7] = 0x3f800000;
          *puVar23 = 0x3f800000;
          puVar23[-1] = (float)(ushort)param_1[1];
          puVar23[-2] = (float)*(ushort *)((long)param_1 + 6);
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          param_1 = param_1 + 2;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x46:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        *puVar23 = 0x3f800000;
        puVar23[-1] = (float)(ushort)((ushort)*param_1 ^ 0x8000) / fVar15;
        puVar23[-2] = (float)(*(ushort *)((long)param_1 + 2) ^ 0x8000) / fVar15;
        puVar23[-3] = 0x3f800000;
        puVar23 = puVar23 + 4;
        param_1 = param_1 + 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x47:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        *(float *)(*param_3 + 8) = (float)(ushort)*param_1;
        *(float *)(*param_3 + 4) = (float)(*(ushort *)((long)param_1 + 2) ^ 0x8000);
        *(undefined4 *)*param_3 = 0x3f800000;
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
      }
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar23 = (undefined4 *)(param_3[1] + 0xc);
        do {
          puVar23[-4] = 0x3f800000;
          puVar23[-5] = (float)(ushort)*param_1;
          puVar23[-6] = (float)(*(ushort *)((long)param_1 + 2) ^ 0x8000);
          puVar23[-7] = 0x3f800000;
          *puVar23 = 0x3f800000;
          puVar23[-1] = (float)(ushort)param_1[1];
          puVar23[-2] = (float)(*(ushort *)((long)param_1 + 6) ^ 0x8000);
          puVar23[-3] = 0x3f800000;
          puVar23 = puVar23 + 8;
          param_1 = param_1 + 2;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x48:
    if (param_4 != 0) {
      uVar34 = 0;
      do {
        uVar2 = *(ushort *)((long)param_1 + 6);
        uVar29 = (uint)(uVar2 >> 0xf);
        uVar20 = uVar2 >> 10 & 0x1f;
        uVar27 = uVar2 & 0x3ff;
        if (uVar20 == 0x1f) {
          uVar29 = uVar29 << 0x1f | 0x7f800000;
          if ((uVar2 & 0x3ff) != 0) {
            uVar29 = uVar29 | uVar27 << 0xd;
          }
        }
        else {
          if ((uVar2 >> 10 & 0x1f) == 0) {
            uVar20 = 1;
            if ((uVar2 & 0x3ff) == 0) {
              uVar29 = uVar29 << 0x1f;
              goto LAB_1003d78a8;
            }
            do {
              uVar27 = uVar27 * 2;
              uVar20 = uVar20 - 1;
            } while ((uVar27 & 0x400) == 0);
            uVar27 = uVar27 & 0xfffffbfe;
          }
          uVar29 = uVar20 * 0x800000 + 0x38000000 | uVar29 << 0x1f | uVar27 << 0xd;
        }
LAB_1003d78a8:
        *(uint *)(*param_3 + 0xc) = uVar29;
        uVar2 = (ushort)*param_1;
        uVar29 = (uint)(uVar2 >> 0xf);
        uVar20 = uVar2 >> 10 & 0x1f;
        uVar27 = uVar2 & 0x3ff;
        if (uVar20 == 0x1f) {
          uVar29 = uVar29 << 0x1f | 0x7f800000;
          if ((uVar2 & 0x3ff) != 0) {
            uVar29 = uVar29 | uVar27 << 0xd;
          }
        }
        else {
          if ((uVar2 >> 10 & 0x1f) == 0) {
            uVar20 = 1;
            if ((uVar2 & 0x3ff) == 0) {
              uVar29 = uVar29 << 0x1f;
              goto LAB_1003d7918;
            }
            do {
              uVar27 = uVar27 * 2;
              uVar20 = uVar20 - 1;
            } while ((uVar27 & 0x400) == 0);
            uVar27 = uVar27 & 0xfffffbfe;
          }
          uVar29 = uVar20 * 0x800000 + 0x38000000 | uVar29 << 0x1f | uVar27 << 0xd;
        }
LAB_1003d7918:
        *(uint *)(*param_3 + 8) = uVar29;
        uVar2 = *(ushort *)((long)param_1 + 2);
        uVar29 = (uint)(uVar2 >> 0xf);
        uVar20 = uVar2 >> 10 & 0x1f;
        uVar27 = uVar2 & 0x3ff;
        if (uVar20 == 0x1f) {
          uVar29 = uVar29 << 0x1f | 0x7f800000;
          if ((uVar2 & 0x3ff) != 0) {
            uVar29 = uVar29 | uVar27 << 0xd;
          }
        }
        else {
          if ((uVar2 >> 10 & 0x1f) == 0) {
            uVar20 = 1;
            if ((uVar2 & 0x3ff) == 0) {
              uVar29 = uVar29 << 0x1f;
              goto LAB_1003d7988;
            }
            do {
              uVar27 = uVar27 * 2;
              uVar20 = uVar20 - 1;
            } while ((uVar27 & 0x400) == 0);
            uVar27 = uVar27 & 0xfffffbfe;
          }
          uVar29 = uVar20 * 0x800000 + 0x38000000 | uVar29 << 0x1f | uVar27 << 0xd;
        }
LAB_1003d7988:
        *(uint *)(*param_3 + 4) = uVar29;
        uVar2 = (ushort)param_1[1];
        uVar29 = (uint)(uVar2 >> 0xf);
        uVar20 = uVar2 >> 10 & 0x1f;
        uVar27 = uVar2 & 0x3ff;
        if (uVar20 == 0x1f) {
          uVar29 = uVar29 << 0x1f | 0x7f800000;
          if ((uVar2 & 0x3ff) != 0) {
            uVar29 = uVar29 | uVar27 << 0xd;
          }
        }
        else {
          if ((uVar2 >> 10 & 0x1f) == 0) {
            uVar20 = 1;
            if ((uVar2 & 0x3ff) == 0) {
              uVar29 = uVar29 << 0x1f;
              goto LAB_1003d79f8;
            }
            do {
              uVar27 = uVar27 * 2;
              uVar20 = uVar20 - 1;
            } while ((uVar27 & 0x400) == 0);
            uVar27 = uVar27 & 0xfffffbfe;
          }
          uVar29 = uVar20 * 0x800000 + 0x38000000 | uVar29 << 0x1f | uVar27 << 0xd;
        }
LAB_1003d79f8:
        *(uint *)*param_3 = uVar29;
        param_3 = param_3 + 1;
        param_1 = param_1 + 2;
        uVar34 = uVar34 + 1;
      } while (uVar34 != param_4);
    }
    break;
  case 0x49:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        auVar40._8_8_ =
             in_XMM0._8_8_ & 0xffff0000ffff0000 | (ulong)(ushort)*param_1 |
             (ulong)*(ushort *)((long)param_1 + 6) << 0x20;
        auVar40._0_8_ =
             in_XMM0._0_8_ & 0xffff0000ffff0000 | (ulong)(ushort)param_1[1] |
             (ulong)*(ushort *)((long)param_1 + 2) << 0x20;
        auVar42._4_4_ = _UNK_100b4add4;
        auVar42._0_4_ = _DAT_100b4add0;
        auVar42._8_4_ = _UNK_100b4add8;
        auVar42._12_4_ = _UNK_100b4addc;
        auVar40 = auVar40 & auVar42;
        auVar41._0_4_ = (float)auVar40._0_4_;
        auVar41._4_4_ = (float)auVar40._4_4_;
        auVar41._8_4_ = (float)auVar40._8_4_;
        auVar41._12_4_ = (float)auVar40._12_4_;
        auVar42 = divps(auVar41,_DAT_100b3f6e0);
        *param_3 = auVar42;
        param_3 = param_3 + 1;
        param_1 = param_1 + 2;
      }
      auVar42 = _DAT_100b3f6e0;
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar32 = (ushort *)((long)param_1 + 0xe);
        auVar6._4_4_ = _UNK_100b4add4;
        auVar6._0_4_ = _DAT_100b4add0;
        auVar6._8_4_ = _UNK_100b4add8;
        auVar6._12_4_ = _UNK_100b4addc;
        do {
          auVar48._8_8_ =
               in_XMM2._8_8_ & 0xffff0000ffff0000 | (ulong)puVar32[-7] | (ulong)puVar32[-4] << 0x20;
          auVar48._0_8_ =
               in_XMM2._0_8_ & 0xffff0000ffff0000 | (ulong)puVar32[-5] | (ulong)puVar32[-6] << 0x20;
          auVar48 = auVar48 & auVar6;
          auVar49._0_4_ = (float)auVar48._0_4_;
          auVar49._4_4_ = (float)auVar48._4_4_;
          auVar49._8_4_ = (float)auVar48._8_4_;
          auVar49._12_4_ = (float)auVar48._12_4_;
          auVar40 = divps(auVar49,auVar42);
          *param_3 = auVar40;
          auVar50._8_8_ =
               auVar40._8_8_ & 0xffff0000ffff0000 | (ulong)puVar32[-3] | (ulong)*puVar32 << 0x20;
          auVar50._0_8_ =
               auVar40._0_8_ & 0xffff0000ffff0000 | (ulong)puVar32[-1] | (ulong)puVar32[-2] << 0x20;
          auVar50 = auVar50 & auVar6;
          auVar51._0_4_ = (float)auVar50._0_4_;
          auVar51._4_4_ = (float)auVar50._4_4_;
          auVar51._8_4_ = (float)auVar50._8_4_;
          auVar51._12_4_ = (float)auVar50._12_4_;
          in_XMM2 = divps(auVar51,auVar42);
          param_3[1] = in_XMM2;
          puVar32 = puVar32 + 8;
          param_3 = param_3 + 2;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x4a:
    if (param_4 != 0) {
      bVar37 = (param_4 & 1) != 0;
      if (bVar37) {
        *(float *)(*param_3 + 0xc) = (float)*(ushort *)((long)param_1 + 6);
        *(float *)(*param_3 + 8) = (float)(ushort)*param_1;
        *(float *)(*param_3 + 4) = (float)*(ushort *)((long)param_1 + 2);
        *(float *)*param_3 = (float)(ushort)param_1[1];
        param_3 = param_3 + 1;
        param_1 = param_1 + 2;
      }
      if (param_4 != 1) {
        iVar36 = param_4 - bVar37;
        puVar32 = (ushort *)((long)param_1 + 0xe);
        pfVar25 = (float *)(param_3[1] + 0xc);
        do {
          pfVar25[-4] = (float)puVar32[-4];
          pfVar25[-5] = (float)puVar32[-7];
          pfVar25[-6] = (float)puVar32[-6];
          pfVar25[-7] = (float)puVar32[-5];
          *pfVar25 = (float)*puVar32;
          pfVar25[-1] = (float)puVar32[-3];
          pfVar25[-2] = (float)puVar32[-2];
          pfVar25[-3] = (float)puVar32[-1];
          puVar32 = puVar32 + 8;
          pfVar25 = pfVar25 + 8;
          iVar36 = iVar36 + -2;
        } while (iVar36 != 0);
      }
    }
    break;
  case 0x4b:
    if (param_4 != 0) {
      puVar32 = (ushort *)((long)param_1 + 6);
      pfVar25 = (float *)(*param_3 + 0xc);
      do {
        *pfVar25 = (float)(*puVar32 ^ 0x8000) / fVar15;
        pfVar25[-1] = (float)(puVar32[-3] ^ 0x8000) / fVar15;
        pfVar25[-2] = (float)(puVar32[-2] ^ 0x8000) / fVar15;
        *(float *)*(undefined1 (*) [16])(pfVar25 + -3) = (float)(puVar32[-1] ^ 0x8000) / fVar15;
        puVar32 = puVar32 + 4;
        pfVar25 = pfVar25 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x4c:
    if (param_4 != 0) {
      puVar32 = (ushort *)((long)param_1 + 6);
      pfVar25 = (float *)(*param_3 + 0xc);
      do {
        *pfVar25 = (float)(*puVar32 ^ 0x8000);
        pfVar25[-1] = (float)puVar32[-3];
        pfVar25[-2] = (float)(puVar32[-2] ^ 0x8000);
        pfVar25[-3] = (float)(puVar32[-1] ^ 0x8000);
        puVar32 = puVar32 + 4;
        pfVar25 = pfVar25 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x4d:
    if (param_4 != 0) {
      pbVar33 = (byte *)((long)param_1 + 3);
      pfVar25 = (float *)(*param_3 + 0xc);
      do {
        *pfVar25 = (float)(*pbVar33 >> 6) / fVar13;
        pfVar25[-1] = (float)(*(ushort *)(pbVar33 + -3) & 0x3ff) / fVar14;
        pfVar25[-2] = (float)(*(ushort *)(pbVar33 + -2) >> 2 & 0x3ff) / fVar14;
        *(float *)*(undefined1 (*) [16])(pfVar25 + -3) =
             (float)(*(ushort *)(pbVar33 + -1) >> 4 & 0x3ff) / fVar14;
        pbVar33 = pbVar33 + 4;
        pfVar25 = pfVar25 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x4e:
    if (param_4 != 0) {
      pbVar33 = (byte *)((long)param_1 + 3);
      pfVar25 = (float *)(*param_3 + 0xc);
      do {
        *pfVar25 = (float)(*pbVar33 >> 6);
        pfVar25[-1] = (float)(*(ushort *)(pbVar33 + -3) & 0x3ff);
        pfVar25[-2] = (float)(*(ushort *)(pbVar33 + -2) >> 2 & 0x3ff);
        pfVar25[-3] = (float)(*(ushort *)(pbVar33 + -1) >> 4 & 0x3ff);
        pbVar33 = pbVar33 + 4;
        pfVar25 = pfVar25 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x51:
    if (param_4 != 0) {
      uVar34 = 0;
      do {
        *(undefined4 *)(*param_3 + 0xc) = 0x3f800000;
        uVar27 = (uint)(ushort)*param_1 << 5;
        uVar29 = uVar27 & 0x7fe0;
        uVar20 = uVar29 >> 10;
        uVar27 = uVar27 & 0x3e0;
        if (uVar20 == 0x1f) {
          uVar30 = 0x7f800000;
          if (uVar27 != 0) {
            uVar30 = uVar29 << 0xd | 0x7f800000;
          }
        }
        else {
          if (uVar29 >> 10 == 0) {
            uVar20 = 1;
            uVar30 = 0;
            if (uVar27 == 0) goto LAB_1003d7e6e;
            do {
              uVar27 = uVar27 * 2;
              uVar20 = uVar20 - 1;
            } while ((uVar27 & 0x400) == 0);
            uVar27 = uVar27 & 0xfffffbfc;
          }
          uVar30 = uVar20 * 0x800000 + 0x38000000 | uVar27 << 0xd;
        }
LAB_1003d7e6e:
        *(uint *)(*param_3 + 8) = uVar30;
        uVar27 = (uint)*(ushort *)((long)param_1 + 1) << 2;
        uVar29 = uVar27 & 0x7fe0;
        uVar20 = uVar29 >> 10;
        uVar27 = uVar27 & 0x3e0;
        if (uVar20 == 0x1f) {
          uVar30 = 0x7f800000;
          if (uVar27 != 0) {
            uVar30 = uVar29 << 0xd | 0x7f800000;
          }
        }
        else {
          if (uVar29 >> 10 == 0) {
            uVar20 = 1;
            uVar30 = 0;
            if (uVar27 == 0) goto LAB_1003d7ede;
            do {
              uVar27 = uVar27 * 2;
              uVar20 = uVar20 - 1;
            } while ((uVar27 & 0x400) == 0);
            uVar27 = uVar27 & 0xfffffbfc;
          }
          uVar30 = uVar20 * 0x800000 + 0x38000000 | uVar27 << 0xd;
        }
LAB_1003d7ede:
        *(uint *)(*param_3 + 4) = uVar30;
        uVar2 = *(ushort *)((long)param_1 + 2);
        uVar29 = uVar2 & 0x7fc0;
        uVar20 = uVar29 >> 10;
        uVar27 = uVar2 & 0x3c0;
        if (uVar20 == 0x1f) {
          uVar30 = 0x7f800000;
          if ((uVar2 & 0x3c0) != 0) {
            uVar30 = uVar29 << 0xd | 0x7f800000;
          }
        }
        else {
          if (uVar29 >> 10 == 0) {
            uVar20 = 1;
            uVar30 = 0;
            if ((uVar2 & 0x3c0) == 0) goto LAB_1003d7f4e;
            do {
              uVar27 = uVar27 * 2;
              uVar20 = uVar20 - 1;
            } while ((uVar27 & 0x400) == 0);
            uVar27 = uVar27 & 0xfffffbfc;
          }
          uVar30 = uVar20 * 0x800000 + 0x38000000 | uVar27 << 0xd;
        }
LAB_1003d7f4e:
        *(uint *)*param_3 = uVar30;
        param_3 = param_3 + 1;
        param_1 = param_1 + 1;
        uVar34 = uVar34 + 1;
      } while (uVar34 != param_4);
    }
    break;
  case 0x52:
    if (param_4 != 0) {
      puVar23 = (undefined4 *)(*param_3 + 0xc);
      do {
        uVar34 = *param_1;
        bVar1 = (byte)(uVar34 >> 0x18);
        if (uVar34 < 0xc8000000) {
          fVar47 = fVar12 / (float)(1 << (0x18 - (bVar1 >> 3) & 0x1f));
        }
        else {
          fVar47 = (float)(1 << ((bVar1 >> 3) - 0x18 & 0x1f));
        }
        puVar23[-1] = (float)(uVar34 & 0x1ff) * fVar47;
        puVar23[-2] = (float)(uVar34 >> 9 & 0x1ff) * fVar47;
        puVar23[-3] = (float)(uVar34 >> 0x12 & 0x1ff) * fVar47;
        *puVar23 = 0x3f800000;
        param_1 = param_1 + 1;
        puVar23 = puVar23 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
  }
  return;
}

