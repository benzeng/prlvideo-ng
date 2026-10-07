
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ce230(byte *param_1,undefined4 param_2,undefined1 (*param_3) [16],uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [14];
  undefined1 auVar14 [12];
  unkbyte10 Var15;
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  int iVar32;
  ushort *puVar33;
  undefined1 (*pauVar34) [16];
  uint uVar35;
  byte *pbVar36;
  byte *pbVar37;
  long lVar38;
  uint uVar39;
  ulong uVar40;
  uint uVar41;
  ulong uVar42;
  ulong uVar43;
  bool bVar44;
  undefined1 auVar45 [16];
  undefined1 auVar52 [16];
  undefined1 auVar60 [16];
  undefined1 auVar68 [16];
  undefined1 auVar76 [16];
  undefined1 auVar84 [16];
  undefined1 auVar91 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar61 [16];
  undefined1 auVar69 [16];
  undefined1 auVar54 [16];
  undefined1 auVar62 [16];
  undefined1 auVar70 [16];
  undefined1 auVar55 [16];
  undefined1 auVar63 [16];
  undefined1 auVar71 [16];
  undefined1 auVar56 [16];
  undefined1 auVar64 [16];
  undefined1 auVar72 [16];
  undefined1 auVar57 [16];
  undefined1 auVar65 [16];
  undefined1 auVar73 [16];
  undefined1 auVar58 [16];
  undefined1 auVar66 [16];
  undefined1 auVar74 [16];
  undefined1 auVar59 [16];
  undefined1 auVar67 [16];
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  
  auVar74 = _DAT_100b3f690;
  auVar75 = _DAT_100b3f680;
  auVar49 = _DAT_100b3f670;
  switch(param_2) {
  case 0:
  case 1:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      do {
        *(uint *)*param_3 =
             (uint)param_1[-3] |
             (uint)param_1[-2] << 8 | (uint)param_1[-1] << 0x10 | (uint)*param_1 << 0x18;
        param_3 = (undefined1 (*) [16])(*param_3 + 4);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 2:
  case 3:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      do {
        *(uint *)*param_3 =
             (uint)param_1[-3] << 0x10 |
             (uint)param_1[-2] << 8 | (uint)param_1[-1] | (uint)*param_1 << 0x18;
        param_3 = (undefined1 (*) [16])(*param_3 + 4);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 5:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      do {
        *(uint *)*param_3 =
             ((uint)param_1[-3] << 0x10 |
             (uint)param_1[-2] << 8 | (uint)param_1[-1] | (uint)*param_1 << 0x18) ^ 0x80808080;
        param_3 = (undefined1 (*) [16])(*param_3 + 4);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 7:
  case 8:
    if (param_4 != 0) {
      bVar44 = (param_4 & 1) != 0;
      if (bVar44) {
        *(uint *)*param_3 =
             (uint)param_1[1] << 8 | (uint)param_1[2] << 0x10 | (uint)*param_1 | 0xff000000;
        param_3 = (undefined1 (*) [16])(*param_3 + 4);
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar32 = param_4 - bVar44;
        param_1 = param_1 + 6;
        do {
          *(uint *)*param_3 =
               (uint)param_1[-5] << 8 | (uint)param_1[-4] << 0x10 | (uint)param_1[-6] | 0xff000000;
          *(uint *)(*param_3 + 4) =
               (uint)param_1[-1] << 8 | (uint)*param_1 << 0x10 | (uint)param_1[-2] | 0xff000000;
          param_1 = param_1 + 8;
          param_3 = (undefined1 (*) [16])(*param_3 + 8);
          iVar32 = iVar32 + -2;
        } while (iVar32 != 0);
      }
    }
    break;
  case 9:
    if (param_4 != 0) {
      bVar44 = (param_4 & 1) != 0;
      if (bVar44) {
        *(uint *)*param_3 = CONCAT12(*param_1,CONCAT11(param_1[1],param_1[2])) | 0xff000000;
        param_3 = (undefined1 (*) [16])(*param_3 + 4);
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar32 = param_4 - bVar44;
        param_1 = param_1 + 6;
        do {
          *(uint *)*param_3 = CONCAT12(param_1[-6],CONCAT11(param_1[-5],param_1[-4])) | 0xff000000;
          *(uint *)(*param_3 + 4) =
               CONCAT12(param_1[-2],CONCAT11(param_1[-1],*param_1)) | 0xff000000;
          param_1 = param_1 + 8;
          param_3 = (undefined1 (*) [16])(*param_3 + 8);
          iVar32 = iVar32 + -2;
        } while (iVar32 != 0);
      }
    }
    break;
  case 10:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        *(uint *)*param_3 =
             *(uint *)*param_3 & 0xff000000 |
             (uint)param_1[-2] | (uint)param_1[-1] << 8 | (uint)*param_1 << 0x10;
        param_3 = (undefined1 (*) [16])(*param_3 + 3);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0xb:
    if (param_4 != 0) {
      uVar39 = param_4 - 1;
      uVar40 = (ulong)uVar39 + 1;
      uVar41 = 0;
      uVar42 = uVar40 & 0x1fffffffe;
      if (uVar42 == 0) {
        uVar42 = 0;
      }
      else {
        pbVar37 = *param_3 + 2;
        pbVar36 = param_1 + 6;
        uVar43 = (ulong)uVar39 + 1 & 0xfffffffffffffffe;
        do {
          bVar1 = *pbVar36;
          bVar2 = pbVar36[-1];
          *(ushort *)(pbVar37 + -2) = CONCAT11(pbVar36[-5],pbVar36[-4]);
          *(ushort *)pbVar37 = CONCAT11(bVar2,bVar1);
          pbVar37 = pbVar37 + 4;
          pbVar36 = pbVar36 + 8;
          uVar43 = uVar43 - 2;
        } while (uVar43 != 0);
        uVar41 = (uint)uVar40 & 0xfffffffe;
        param_3 = (undefined1 (*) [16])(*param_3 + uVar42 * 2);
        param_1 = param_1 + uVar42 * 4;
      }
      if (uVar40 != uVar42) {
        uVar35 = uVar41;
        if ((param_4 & 1) != 0) {
          *(ushort *)*param_3 = CONCAT11(param_1[1],param_1[2]);
          param_3 = (undefined1 (*) [16])(*param_3 + 2);
          param_1 = param_1 + 4;
          uVar35 = uVar41 + 1;
        }
        if (uVar39 != uVar41) {
          iVar32 = param_4 - uVar35;
          param_1 = param_1 + 6;
          do {
            *(ushort *)*param_3 = CONCAT11(param_1[-5],param_1[-4]);
            *(ushort *)(*param_3 + 2) = CONCAT11(param_1[-1],*param_1);
            param_1 = param_1 + 8;
            param_3 = (undefined1 (*) [16])(*param_3 + 4);
            iVar32 = iVar32 + -2;
          } while (iVar32 != 0);
        }
      }
    }
    break;
  case 0xd:
    if (param_4 != 0) {
      uVar39 = param_4 - 1;
      uVar40 = (ulong)uVar39 + 1;
      uVar41 = 0;
      uVar42 = uVar40 & 0x1fffffffe;
      if (uVar42 == 0) {
        uVar42 = 0;
      }
      else {
        puVar33 = (ushort *)(*param_3 + 2);
        pbVar37 = param_1 + 6;
        uVar43 = (ulong)uVar39 + 1 & 0xfffffffffffffffe;
        do {
          bVar1 = *pbVar37;
          bVar2 = pbVar37[-1];
          puVar33[-1] = CONCAT11(pbVar37[-5],pbVar37[-4]) ^ 0x8080;
          *puVar33 = CONCAT11(bVar2,bVar1) ^ 0x8080;
          puVar33 = puVar33 + 2;
          pbVar37 = pbVar37 + 8;
          uVar43 = uVar43 - 2;
        } while (uVar43 != 0);
        uVar41 = (uint)uVar40 & 0xfffffffe;
        param_3 = (undefined1 (*) [16])(*param_3 + uVar42 * 2);
        param_1 = param_1 + uVar42 * 4;
      }
      if (uVar40 != uVar42) {
        uVar35 = uVar41;
        if ((param_4 & 1) != 0) {
          *(ushort *)*param_3 = CONCAT11(param_1[1],param_1[2]) ^ 0x8080;
          param_3 = (undefined1 (*) [16])(*param_3 + 2);
          param_1 = param_1 + 4;
          uVar35 = uVar41 + 1;
        }
        if (uVar39 != uVar41) {
          iVar32 = param_4 - uVar35;
          param_1 = param_1 + 6;
          do {
            *(ushort *)*param_3 = CONCAT11(param_1[-5],param_1[-4]) ^ 0x8080;
            *(ushort *)(*param_3 + 2) = CONCAT11(param_1[-1],*param_1) ^ 0x8080;
            param_1 = param_1 + 8;
            param_3 = (undefined1 (*) [16])(*param_3 + 4);
            iVar32 = iVar32 + -2;
          } while (iVar32 != 0);
        }
      }
    }
    break;
  case 0x10:
    if (param_4 != 0) {
      uVar40 = (ulong)(param_4 - 1) + 1;
      uVar39 = 0;
      uVar42 = uVar40 & 0x1fffffffe;
      if (uVar42 == 0) {
        uVar42 = 0;
      }
      else {
        puVar33 = (ushort *)(*param_3 + 2);
        pbVar37 = param_1 + 6;
        uVar43 = (ulong)(param_4 - 1) + 1 & 0xfffffffffffffffe;
        do {
          bVar1 = *pbVar37;
          bVar2 = pbVar37[-1];
          bVar3 = pbVar37[-2];
          puVar33[-1] = (ushort)(pbVar37[-6] >> 3) |
                        (pbVar37[-5] & 0xfc) << 3 | (pbVar37[-4] & 0xfff8) << 8;
          *puVar33 = (ushort)(bVar3 >> 3) | (bVar2 & 0xfc) << 3 | (bVar1 & 0xfff8) << 8;
          puVar33 = puVar33 + 2;
          pbVar37 = pbVar37 + 8;
          uVar43 = uVar43 - 2;
        } while (uVar43 != 0);
        uVar39 = (uint)uVar40 & 0xfffffffe;
        param_3 = (undefined1 (*) [16])(*param_3 + uVar42 * 2);
        param_1 = param_1 + uVar42 * 4;
      }
      if (uVar40 != uVar42) {
        iVar32 = param_4 - uVar39;
        param_1 = param_1 + 2;
        do {
          *(ushort *)*param_3 =
               (ushort)(param_1[-2] >> 3) | (param_1[-1] & 0xfc) << 3 | (*param_1 & 0xfff8) << 8;
          param_3 = (undefined1 (*) [16])(*param_3 + 2);
          param_1 = param_1 + 4;
          iVar32 = iVar32 + -1;
        } while (iVar32 != 0);
      }
    }
    break;
  case 0x11:
    if (param_4 != 0) {
      uVar40 = (ulong)(param_4 - 1) + 1;
      uVar39 = 0;
      uVar42 = uVar40 & 0x1fffffffe;
      if (uVar42 == 0) {
        uVar42 = 0;
      }
      else {
        puVar33 = (ushort *)(*param_3 + 2);
        pbVar37 = param_1 + 6;
        uVar43 = (ulong)(param_4 - 1) + 1 & 0xfffffffffffffffe;
        do {
          bVar1 = *pbVar37;
          bVar2 = pbVar37[-1];
          bVar3 = pbVar37[-2];
          puVar33[-1] = pbVar37[-5] & 0xf0 | (pbVar37[-4] & 0xf0) << 4 | (ushort)(pbVar37[-6] >> 4)
                        | 0xf000;
          *puVar33 = bVar2 & 0xf0 | (bVar1 & 0xf0) << 4 | (ushort)(bVar3 >> 4) | 0xf000;
          puVar33 = puVar33 + 2;
          pbVar37 = pbVar37 + 8;
          uVar43 = uVar43 - 2;
        } while (uVar43 != 0);
        uVar39 = (uint)uVar40 & 0xfffffffe;
        param_3 = (undefined1 (*) [16])(*param_3 + uVar42 * 2);
        param_1 = param_1 + uVar42 * 4;
      }
      if (uVar40 != uVar42) {
        iVar32 = param_4 - uVar39;
        param_1 = param_1 + 2;
        do {
          *(ushort *)*param_3 =
               param_1[-1] & 0xf0 | (*param_1 & 0xf0) << 4 | (ushort)(param_1[-2] >> 4) | 0xf000;
          param_3 = (undefined1 (*) [16])(*param_3 + 2);
          param_1 = param_1 + 4;
          iVar32 = iVar32 + -1;
        } while (iVar32 != 0);
      }
    }
    break;
  case 0x12:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      do {
        *(ushort *)*param_3 =
             (ushort)(param_1[-3] >> 4) |
             param_1[-2] & 0xf0 | (param_1[-1] & 0xf0) << 4 | (*param_1 & 0xfff0) << 8;
        param_3 = (undefined1 (*) [16])(*param_3 + 2);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x13:
    if (param_4 != 0) {
      uVar40 = (ulong)(param_4 - 1) + 1;
      uVar39 = 0;
      uVar42 = uVar40 & 0x1fffffffe;
      if (uVar42 == 0) {
        uVar42 = 0;
      }
      else {
        puVar33 = (ushort *)(*param_3 + 2);
        pbVar37 = param_1 + 6;
        uVar43 = (ulong)(param_4 - 1) + 1 & 0xfffffffffffffffe;
        do {
          bVar1 = *pbVar37;
          bVar2 = pbVar37[-1];
          bVar3 = pbVar37[-2];
          puVar33[-1] = (ushort)(pbVar37[-6] >> 3) |
                        (pbVar37[-5] & 0xf8) << 2 | (pbVar37[-4] & 0xf8) << 7;
          *puVar33 = (ushort)(bVar3 >> 3) | (bVar2 & 0xf8) << 2 | (bVar1 & 0xf8) << 7;
          puVar33 = puVar33 + 2;
          pbVar37 = pbVar37 + 8;
          uVar43 = uVar43 - 2;
        } while (uVar43 != 0);
        uVar39 = (uint)uVar40 & 0xfffffffe;
        param_3 = (undefined1 (*) [16])(*param_3 + uVar42 * 2);
        param_1 = param_1 + uVar42 * 4;
      }
      if (uVar40 != uVar42) {
        iVar32 = param_4 - uVar39;
        param_1 = param_1 + 2;
        do {
          *(ushort *)*param_3 =
               (ushort)(param_1[-2] >> 3) | (param_1[-1] & 0xf8) << 2 | (*param_1 & 0xf8) << 7;
          param_3 = (undefined1 (*) [16])(*param_3 + 2);
          param_1 = param_1 + 4;
          iVar32 = iVar32 + -1;
        } while (iVar32 != 0);
      }
    }
    break;
  case 0x14:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      do {
        *(ushort *)*param_3 =
             (ushort)(param_1[-3] >> 3) |
             (param_1[-2] & 0xf8) << 2 | (param_1[-1] & 0xf8) << 7 | (*param_1 & 0xff80) << 8;
        param_3 = (undefined1 (*) [16])(*param_3 + 2);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x15:
    if (param_4 != 0) {
      bVar44 = (param_4 & 1) != 0;
      if (bVar44) {
        (*param_3)[0] = *param_1 >> 6 | param_1[1] >> 3 & 0x1c | param_1[2] & 0xe0;
        param_3 = (undefined1 (*) [16])(*param_3 + 1);
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar32 = param_4 - bVar44;
        param_1 = param_1 + 6;
        do {
          (*param_3)[0] = param_1[-6] >> 6 | param_1[-5] >> 3 & 0x1c | param_1[-4] & 0xe0;
          (*param_3)[1] = param_1[-2] >> 6 | param_1[-1] >> 3 & 0x1c | *param_1 & 0xe0;
          param_1 = param_1 + 8;
          param_3 = (undefined1 (*) [16])(*param_3 + 2);
          iVar32 = iVar32 + -2;
        } while (iVar32 != 0);
      }
    }
    break;
  case 0x16:
    if (param_4 != 0) {
      uVar42 = (ulong)(param_4 - 1);
      uVar40 = uVar42 + 1;
      uVar43 = uVar40 & 0x1fffffff0;
      if ((uVar43 == 0) ||
         ((param_3 <= (undefined1 (*) [16])(param_1 + uVar42 * 4 + 2) &&
          (param_1 + 2 <= *param_3 + uVar42)))) {
        uVar39 = 0;
        uVar43 = 0;
        pauVar34 = param_3;
        pbVar37 = param_1;
      }
      else {
        pbVar37 = param_1 + uVar43 * 4;
        pauVar34 = (undefined1 (*) [16])(*param_3 + uVar43);
        param_1 = param_1 + 0x3e;
        uVar42 = uVar42 + 1 & 0xfffffffffffffff0;
        do {
          auVar16._9_6_ = 0;
          auVar16._0_9_ = SUB159(ZEXT115(param_1[-4]) << 0x38,6);
          auVar17._10_5_ = 0;
          auVar17._0_10_ = SUB1510(auVar16 << 0x30,5);
          auVar18._11_4_ = 0;
          auVar18._0_11_ = SUB1511(auVar17 << 0x28,4);
          auVar19._12_3_ = 0;
          auVar19._0_12_ = SUB1512(auVar18 << 0x20,3);
          auVar5._13_2_ = 0;
          auVar5._0_13_ = SUB1513(auVar19 << 0x18,2);
          auVar5 = auVar5 << 0x10;
          auVar59._0_14_ = auVar5._0_14_;
          auVar59[0xe] = param_1[-4];
          auVar59[0xf] = *param_1;
          auVar58._14_2_ = auVar59._14_2_;
          auVar58._0_13_ = auVar5._0_13_;
          auVar58[0xd] = param_1[-8];
          auVar57._13_3_ = auVar58._13_3_;
          auVar57._0_12_ = auVar5._0_12_;
          auVar57[0xc] = param_1[-0xc];
          auVar56._12_4_ = auVar57._12_4_;
          auVar56._0_11_ = auVar5._0_11_;
          auVar56[0xb] = param_1[-0x10];
          auVar55._11_5_ = auVar56._11_5_;
          auVar55._0_10_ = auVar5._0_10_;
          auVar55[10] = param_1[-0x14];
          auVar54._10_6_ = auVar55._10_6_;
          auVar54._0_9_ = auVar5._0_9_;
          auVar54[9] = param_1[-0x18];
          auVar53._9_7_ = auVar54._9_7_;
          auVar53._0_8_ = auVar5._0_8_;
          auVar53[8] = param_1[-0x1c];
          auVar52._8_8_ = auVar53._8_8_;
          auVar52[7] = param_1[-0x20];
          auVar52[6] = param_1[-0x24];
          auVar52[5] = param_1[-0x28];
          auVar52[4] = param_1[-0x2c];
          auVar52[3] = param_1[-0x30];
          auVar52[2] = param_1[-0x34];
          auVar52[1] = param_1[-0x38];
          auVar52[0] = param_1[-0x3c];
          *param_3 = auVar52;
          param_3 = param_3 + 1;
          param_1 = param_1 + 0x40;
          uVar42 = uVar42 - 0x10;
        } while (uVar42 != 0);
        uVar39 = (uint)uVar40 & 0xfffffff0;
      }
      if (uVar40 != uVar43) {
        uVar41 = (param_4 - 1) - uVar39;
        if ((param_4 & 7) != 0) {
          lVar38 = 0;
          pbVar36 = pbVar37;
          do {
            (*pauVar34)[lVar38] = pbVar37[lVar38 * 4 + 2];
            pbVar36 = pbVar36 + 4;
            lVar38 = lVar38 + 1;
          } while ((param_4 & 7) != (uint)lVar38);
          uVar39 = uVar39 + (uint)lVar38;
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + lVar38);
          pbVar37 = pbVar36;
        }
        if (6 < uVar41) {
          iVar32 = param_4 - uVar39;
          pbVar37 = pbVar37 + 0x1e;
          do {
            (*pauVar34)[0] = pbVar37[-0x1c];
            (*pauVar34)[1] = pbVar37[-0x18];
            (*pauVar34)[2] = pbVar37[-0x14];
            (*pauVar34)[3] = pbVar37[-0x10];
            (*pauVar34)[4] = pbVar37[-0xc];
            (*pauVar34)[5] = pbVar37[-8];
            (*pauVar34)[6] = pbVar37[-4];
            (*pauVar34)[7] = *pbVar37;
            pbVar37 = pbVar37 + 0x20;
            pauVar34 = (undefined1 (*) [16])(*pauVar34 + 8);
            iVar32 = iVar32 + -8;
          } while (iVar32 != 0);
        }
      }
    }
    break;
  case 0x18:
    if (param_4 != 0) {
      uVar42 = (ulong)(param_4 - 1);
      uVar40 = uVar42 + 1;
      uVar43 = uVar40 & 0x1fffffff0;
      if ((uVar43 == 0) ||
         ((param_3 <= (undefined1 (*) [16])(param_1 + uVar42 * 4 + 2) &&
          (param_1 + 2 <= *param_3 + uVar42)))) {
        uVar39 = 0;
        uVar43 = 0;
        pauVar34 = param_3;
        pbVar37 = param_1;
      }
      else {
        pbVar37 = param_1 + uVar43 * 4;
        pauVar34 = (undefined1 (*) [16])(*param_3 + uVar43);
        param_1 = param_1 + 0x3e;
        uVar42 = uVar42 + 1 & 0xfffffffffffffff0;
        do {
          auVar20._9_6_ = 0;
          auVar20._0_9_ = SUB159(ZEXT115(param_1[-4]) << 0x38,6);
          auVar21._10_5_ = 0;
          auVar21._0_10_ = SUB1510(auVar20 << 0x30,5);
          auVar22._11_4_ = 0;
          auVar22._0_11_ = SUB1511(auVar21 << 0x28,4);
          auVar23._12_3_ = 0;
          auVar23._0_12_ = SUB1512(auVar22 << 0x20,3);
          auVar6._13_2_ = 0;
          auVar6._0_13_ = SUB1513(auVar23 << 0x18,2);
          auVar6 = auVar6 << 0x10;
          auVar83._0_14_ = auVar6._0_14_;
          auVar83[0xe] = param_1[-4];
          auVar83[0xf] = *param_1;
          auVar82._14_2_ = auVar83._14_2_;
          auVar82._0_13_ = auVar6._0_13_;
          auVar82[0xd] = param_1[-8];
          auVar81._13_3_ = auVar82._13_3_;
          auVar81._0_12_ = auVar6._0_12_;
          auVar81[0xc] = param_1[-0xc];
          auVar80._12_4_ = auVar81._12_4_;
          auVar80._0_11_ = auVar6._0_11_;
          auVar80[0xb] = param_1[-0x10];
          auVar79._11_5_ = auVar80._11_5_;
          auVar79._0_10_ = auVar6._0_10_;
          auVar79[10] = param_1[-0x14];
          auVar78._10_6_ = auVar79._10_6_;
          auVar78._0_9_ = auVar6._0_9_;
          auVar78[9] = param_1[-0x18];
          auVar77._9_7_ = auVar78._9_7_;
          auVar77._0_8_ = auVar6._0_8_;
          auVar77[8] = param_1[-0x1c];
          auVar76._8_8_ = auVar77._8_8_;
          auVar76[7] = param_1[-0x20];
          auVar76[6] = param_1[-0x24];
          auVar76[5] = param_1[-0x28];
          auVar76[4] = param_1[-0x2c];
          auVar76[3] = param_1[-0x30];
          auVar76[2] = param_1[-0x34];
          auVar76[1] = param_1[-0x38];
          auVar76[0] = param_1[-0x3c];
          *param_3 = auVar76 ^ auVar49;
          param_3 = param_3 + 1;
          param_1 = param_1 + 0x40;
          uVar42 = uVar42 - 0x10;
        } while (uVar42 != 0);
        uVar39 = (uint)uVar40 & 0xfffffff0;
      }
      if (uVar40 != uVar43) {
        uVar41 = (param_4 - 1) - uVar39;
        if ((param_4 & 3) != 0) {
          lVar38 = 0;
          pbVar36 = pbVar37;
          do {
            (*pauVar34)[lVar38] = pbVar37[lVar38 * 4 + 2] ^ 0x80;
            pbVar36 = pbVar36 + 4;
            lVar38 = lVar38 + 1;
          } while ((param_4 & 3) != (uint)lVar38);
          uVar39 = uVar39 + (uint)lVar38;
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + lVar38);
          pbVar37 = pbVar36;
        }
        if (2 < uVar41) {
          iVar32 = param_4 - uVar39;
          pbVar37 = pbVar37 + 0xe;
          do {
            (*pauVar34)[0] = pbVar37[-0xc] ^ 0x80;
            (*pauVar34)[1] = pbVar37[-8] ^ 0x80;
            (*pauVar34)[2] = pbVar37[-4] ^ 0x80;
            (*pauVar34)[3] = *pbVar37 ^ 0x80;
            pbVar37 = pbVar37 + 0x10;
            pauVar34 = (undefined1 (*) [16])(*pauVar34 + 4);
            iVar32 = iVar32 + -4;
          } while (iVar32 != 0);
        }
      }
    }
    break;
  case 0x1a:
    if (param_4 != 0) {
      uVar42 = (ulong)(param_4 - 1);
      uVar40 = uVar42 + 1;
      uVar43 = uVar40 & 0x1fffffff0;
      if ((uVar43 == 0) ||
         ((param_3 <= (undefined1 (*) [16])(param_1 + uVar42 * 4 + 3) &&
          (param_1 + 3 <= *param_3 + uVar42)))) {
        uVar39 = 0;
        uVar43 = 0;
        pauVar34 = param_3;
        pbVar37 = param_1;
      }
      else {
        pbVar37 = param_1 + uVar43 * 4;
        pauVar34 = (undefined1 (*) [16])(*param_3 + uVar43);
        param_1 = param_1 + 0x3f;
        uVar42 = uVar42 + 1 & 0xfffffffffffffff0;
        do {
          auVar24._9_6_ = 0;
          auVar24._0_9_ = SUB159(ZEXT115(param_1[-4]) << 0x38,6);
          auVar25._10_5_ = 0;
          auVar25._0_10_ = SUB1510(auVar24 << 0x30,5);
          auVar26._11_4_ = 0;
          auVar26._0_11_ = SUB1511(auVar25 << 0x28,4);
          auVar27._12_3_ = 0;
          auVar27._0_12_ = SUB1512(auVar26 << 0x20,3);
          auVar7._13_2_ = 0;
          auVar7._0_13_ = SUB1513(auVar27 << 0x18,2);
          auVar7 = auVar7 << 0x10;
          auVar67._0_14_ = auVar7._0_14_;
          auVar67[0xe] = param_1[-4];
          auVar67[0xf] = *param_1;
          auVar66._14_2_ = auVar67._14_2_;
          auVar66._0_13_ = auVar7._0_13_;
          auVar66[0xd] = param_1[-8];
          auVar65._13_3_ = auVar66._13_3_;
          auVar65._0_12_ = auVar7._0_12_;
          auVar65[0xc] = param_1[-0xc];
          auVar64._12_4_ = auVar65._12_4_;
          auVar64._0_11_ = auVar7._0_11_;
          auVar64[0xb] = param_1[-0x10];
          auVar63._11_5_ = auVar64._11_5_;
          auVar63._0_10_ = auVar7._0_10_;
          auVar63[10] = param_1[-0x14];
          auVar62._10_6_ = auVar63._10_6_;
          auVar62._0_9_ = auVar7._0_9_;
          auVar62[9] = param_1[-0x18];
          auVar61._9_7_ = auVar62._9_7_;
          auVar61._0_8_ = auVar7._0_8_;
          auVar61[8] = param_1[-0x1c];
          auVar60._8_8_ = auVar61._8_8_;
          auVar60[7] = param_1[-0x20];
          auVar60[6] = param_1[-0x24];
          auVar60[5] = param_1[-0x28];
          auVar60[4] = param_1[-0x2c];
          auVar60[3] = param_1[-0x30];
          auVar60[2] = param_1[-0x34];
          auVar60[1] = param_1[-0x38];
          auVar60[0] = param_1[-0x3c];
          *param_3 = auVar60;
          param_3 = param_3 + 1;
          param_1 = param_1 + 0x40;
          uVar42 = uVar42 - 0x10;
        } while (uVar42 != 0);
        uVar39 = (uint)uVar40 & 0xfffffff0;
      }
      if (uVar40 != uVar43) {
        uVar41 = (param_4 - 1) - uVar39;
        if ((param_4 & 7) != 0) {
          lVar38 = 0;
          pbVar36 = pbVar37;
          do {
            (*pauVar34)[lVar38] = pbVar37[lVar38 * 4 + 3];
            pbVar36 = pbVar36 + 4;
            lVar38 = lVar38 + 1;
          } while ((param_4 & 7) != (uint)lVar38);
          uVar39 = uVar39 + (uint)lVar38;
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + lVar38);
          pbVar37 = pbVar36;
        }
        if (6 < uVar41) {
          iVar32 = param_4 - uVar39;
          pbVar37 = pbVar37 + 0x1f;
          do {
            (*pauVar34)[0] = pbVar37[-0x1c];
            (*pauVar34)[1] = pbVar37[-0x18];
            (*pauVar34)[2] = pbVar37[-0x14];
            (*pauVar34)[3] = pbVar37[-0x10];
            (*pauVar34)[4] = pbVar37[-0xc];
            (*pauVar34)[5] = pbVar37[-8];
            (*pauVar34)[6] = pbVar37[-4];
            (*pauVar34)[7] = *pbVar37;
            pbVar37 = pbVar37 + 0x20;
            pauVar34 = (undefined1 (*) [16])(*pauVar34 + 8);
            iVar32 = iVar32 + -8;
          } while (iVar32 != 0);
        }
      }
    }
    break;
  case 0x1c:
    if (param_4 != 0) {
      uVar42 = (ulong)(param_4 - 1);
      uVar40 = uVar42 + 1;
      uVar43 = uVar40 & 0x1fffffff0;
      if ((uVar43 == 0) ||
         ((param_3 <= (undefined1 (*) [16])(param_1 + uVar42 * 4 + 2) &&
          (param_1 + 2 <= *param_3 + uVar42)))) {
        uVar39 = 0;
        uVar43 = 0;
        pauVar34 = param_3;
        pbVar37 = param_1;
      }
      else {
        pbVar37 = param_1 + uVar43 * 4;
        pauVar34 = (undefined1 (*) [16])(*param_3 + uVar43);
        param_1 = param_1 + 0x3e;
        uVar42 = uVar42 + 1 & 0xfffffffffffffff0;
        do {
          auVar28._9_6_ = 0;
          auVar28._0_9_ = SUB159(ZEXT115(param_1[-4]) << 0x38,6);
          auVar29._10_5_ = 0;
          auVar29._0_10_ = SUB1510(auVar28 << 0x30,5);
          auVar30._11_4_ = 0;
          auVar30._0_11_ = SUB1511(auVar29 << 0x28,4);
          auVar31._12_3_ = 0;
          auVar31._0_12_ = SUB1512(auVar30 << 0x20,3);
          auVar8._13_2_ = 0;
          auVar8._0_13_ = SUB1513(auVar31 << 0x18,2);
          auVar8 = auVar8 << 0x10;
          auVar75._0_14_ = auVar8._0_14_;
          auVar75[0xe] = param_1[-4];
          auVar75[0xf] = *param_1;
          auVar74._14_2_ = auVar75._14_2_;
          auVar74._0_13_ = auVar8._0_13_;
          auVar74[0xd] = param_1[-8];
          auVar73._13_3_ = auVar74._13_3_;
          auVar73._0_12_ = auVar8._0_12_;
          auVar73[0xc] = param_1[-0xc];
          auVar72._12_4_ = auVar73._12_4_;
          auVar72._0_11_ = auVar8._0_11_;
          auVar72[0xb] = param_1[-0x10];
          auVar71._11_5_ = auVar72._11_5_;
          auVar71._0_10_ = auVar8._0_10_;
          auVar71[10] = param_1[-0x14];
          auVar70._10_6_ = auVar71._10_6_;
          auVar70._0_9_ = auVar8._0_9_;
          auVar70[9] = param_1[-0x18];
          auVar69._9_7_ = auVar70._9_7_;
          auVar69._0_8_ = auVar8._0_8_;
          auVar69[8] = param_1[-0x1c];
          auVar68._8_8_ = auVar69._8_8_;
          auVar68[7] = param_1[-0x20];
          auVar68[6] = param_1[-0x24];
          auVar68[5] = param_1[-0x28];
          auVar68[4] = param_1[-0x2c];
          auVar68[3] = param_1[-0x30];
          auVar68[2] = param_1[-0x34];
          auVar68[1] = param_1[-0x38];
          auVar68[0] = param_1[-0x3c];
          *param_3 = auVar68;
          param_3 = param_3 + 1;
          param_1 = param_1 + 0x40;
          uVar42 = uVar42 - 0x10;
        } while (uVar42 != 0);
        uVar39 = (uint)uVar40 & 0xfffffff0;
      }
      if (uVar40 != uVar43) {
        uVar41 = (param_4 - 1) - uVar39;
        if ((param_4 & 7) != 0) {
          lVar38 = 0;
          pbVar36 = pbVar37;
          do {
            (*pauVar34)[lVar38] = pbVar37[lVar38 * 4 + 2];
            pbVar36 = pbVar36 + 4;
            lVar38 = lVar38 + 1;
          } while ((param_4 & 7) != (uint)lVar38);
          uVar39 = uVar39 + (uint)lVar38;
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + lVar38);
          pbVar37 = pbVar36;
        }
        if (6 < uVar41) {
          iVar32 = param_4 - uVar39;
          pbVar37 = pbVar37 + 0x1e;
          do {
            (*pauVar34)[0] = pbVar37[-0x1c];
            (*pauVar34)[1] = pbVar37[-0x18];
            (*pauVar34)[2] = pbVar37[-0x14];
            (*pauVar34)[3] = pbVar37[-0x10];
            (*pauVar34)[4] = pbVar37[-0xc];
            (*pauVar34)[5] = pbVar37[-8];
            (*pauVar34)[6] = pbVar37[-4];
            (*pauVar34)[7] = *pbVar37;
            pbVar37 = pbVar37 + 0x20;
            pauVar34 = (undefined1 (*) [16])(*pauVar34 + 8);
            iVar32 = iVar32 + -8;
          } while (iVar32 != 0);
        }
      }
    }
    break;
  case 0x1d:
    if (param_4 != 0) {
      uVar39 = param_4 - 1;
      uVar40 = (ulong)uVar39 + 1;
      uVar41 = 0;
      uVar42 = uVar40 & 0x1fffffffe;
      if (uVar42 == 0) {
        uVar42 = 0;
      }
      else {
        pbVar37 = *param_3 + 2;
        pbVar36 = param_1 + 7;
        uVar43 = (ulong)uVar39 + 1 & 0xfffffffffffffffe;
        do {
          bVar1 = *pbVar36;
          bVar2 = pbVar36[-1];
          *(undefined2 *)(pbVar37 + -2) = *(undefined2 *)(pbVar36 + -5);
          *(ushort *)pbVar37 = CONCAT11(bVar1,bVar2);
          pbVar37 = pbVar37 + 4;
          pbVar36 = pbVar36 + 8;
          uVar43 = uVar43 - 2;
        } while (uVar43 != 0);
        uVar41 = (uint)uVar40 & 0xfffffffe;
        param_3 = (undefined1 (*) [16])(*param_3 + uVar42 * 2);
        param_1 = param_1 + uVar42 * 4;
      }
      if (uVar40 != uVar42) {
        uVar35 = uVar41;
        if ((param_4 & 1) != 0) {
          *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + 2);
          param_3 = (undefined1 (*) [16])(*param_3 + 2);
          param_1 = param_1 + 4;
          uVar35 = uVar41 + 1;
        }
        if (uVar39 != uVar41) {
          iVar32 = param_4 - uVar35;
          param_1 = param_1 + 7;
          do {
            *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + -5);
            *(ushort *)(*param_3 + 2) = CONCAT11(*param_1,param_1[-1]);
            param_1 = param_1 + 8;
            param_3 = (undefined1 (*) [16])(*param_3 + 4);
            iVar32 = iVar32 + -2;
          } while (iVar32 != 0);
        }
      }
    }
    break;
  case 0x1e:
    if (param_4 != 0) {
      uVar40 = (ulong)(param_4 - 1);
      uVar42 = uVar40 + 1 & 0x1fffffff0;
      pauVar34 = param_3;
      pbVar37 = param_1;
      if (uVar42 == 0) {
        uVar42 = 0;
      }
      else if (*param_3 + uVar40 < param_1 + 3 ||
               (undefined1 (*) [16])(param_1 + uVar40 * 4 + 3) < param_3) {
        if ((undefined1 (*) [16])(param_1 + uVar40 * 4 + 2) < param_3 ||
            *param_3 + uVar40 < param_1 + 2) {
          pbVar37 = param_1 + uVar42 * 4;
          pauVar34 = (undefined1 (*) [16])(*param_3 + uVar42);
          param_1 = param_1 + 0x3f;
          uVar43 = uVar40 + 1 & 0xfffffffffffffff0;
          do {
            bVar1 = param_1[-4];
            auVar51._0_14_ = ZEXT114(bVar1) << 0x38;
            auVar51[0xe] = bVar1;
            auVar51[0xf] = *param_1;
            auVar50._14_2_ = auVar51._14_2_;
            auVar50._0_13_ = ZEXT113(bVar1) << 0x38;
            auVar50[0xd] = param_1[-8];
            auVar49._13_3_ = auVar50._13_3_;
            auVar49._0_12_ = ZEXT112(bVar1) << 0x38;
            auVar49[0xc] = param_1[-0xc];
            auVar48._12_4_ = auVar49._12_4_;
            auVar48._0_11_ = ZEXT111(bVar1) << 0x38;
            auVar48[0xb] = param_1[-0x10];
            auVar47._11_5_ = auVar48._11_5_;
            auVar47._0_10_ = (unkuint10)bVar1 << 0x38;
            auVar47[10] = param_1[-0x14];
            auVar46._10_6_ = auVar47._10_6_;
            auVar46._0_9_ = (unkuint9)bVar1 << 0x38;
            auVar46[9] = param_1[-0x18];
            auVar45._8_8_ =
                 (undefined8)(CONCAT72(auVar46._9_7_,CONCAT11(param_1[-0x1c],bVar1)) >> 8);
            auVar45[7] = param_1[-0x20];
            auVar45[6] = param_1[-0x24];
            auVar45[5] = param_1[-0x28];
            auVar45[4] = param_1[-0x2c];
            auVar45[3] = param_1[-0x30];
            auVar45[2] = param_1[-0x34];
            auVar45[1] = param_1[-0x38];
            auVar45[0] = param_1[-0x3c];
            auVar9._9_6_ = 0;
            auVar9._0_9_ = SUB159(ZEXT115(param_1[-5]) << 0x38,6);
            auVar10._10_5_ = 0;
            auVar10._0_10_ = SUB1510(auVar9 << 0x30,5);
            auVar11._11_4_ = 0;
            auVar11._0_11_ = SUB1511(auVar10 << 0x28,4);
            auVar12._12_3_ = 0;
            auVar12._0_12_ = SUB1512(auVar11 << 0x20,3);
            auVar4._13_2_ = 0;
            auVar4._0_13_ = SUB1513(auVar12 << 0x18,2);
            auVar4 = auVar4 << 0x10;
            auVar90._0_14_ = auVar4._0_14_;
            auVar90[0xe] = param_1[-5];
            auVar90[0xf] = param_1[-1];
            auVar89._14_2_ = auVar90._14_2_;
            auVar89._0_13_ = auVar4._0_13_;
            auVar89[0xd] = param_1[-9];
            auVar88._13_3_ = auVar89._13_3_;
            auVar88._0_12_ = auVar4._0_12_;
            auVar88[0xc] = param_1[-0xd];
            auVar87._12_4_ = auVar88._12_4_;
            auVar87._0_11_ = auVar4._0_11_;
            auVar87[0xb] = param_1[-0x11];
            auVar86._11_5_ = auVar87._11_5_;
            auVar86._0_10_ = auVar4._0_10_;
            auVar86[10] = param_1[-0x15];
            auVar85._10_6_ = auVar86._10_6_;
            auVar85._0_9_ = auVar4._0_9_;
            auVar85[9] = param_1[-0x19];
            auVar84._9_7_ = auVar85._9_7_;
            auVar84._0_8_ = auVar4._0_8_;
            auVar84[8] = param_1[-0x1d];
            Var15 = CONCAT91(CONCAT81(auVar84._8_8_,param_1[-0x21]),param_1[-0x25]);
            auVar14._2_10_ = Var15;
            auVar14[1] = param_1[-0x29];
            auVar14[0] = param_1[-0x2d];
            auVar13._2_12_ = auVar14;
            auVar13[1] = param_1[-0x31];
            auVar13[0] = param_1[-0x35];
            auVar91._0_2_ = CONCAT11(param_1[-0x39],param_1[-0x3d]) >> 4;
            auVar91._2_2_ = auVar13._0_2_ >> 4;
            auVar91._4_2_ = auVar14._0_2_ >> 4;
            auVar91._6_2_ = (ushort)Var15 >> 4;
            auVar91._8_2_ = auVar84._8_2_ >> 4;
            auVar91._10_2_ = auVar86._10_2_ >> 4;
            auVar91._12_2_ = auVar88._12_2_ >> 4;
            auVar91._14_2_ = auVar89._14_2_ >> 4;
            *param_3 = auVar91 & auVar74 | auVar45 & auVar75;
            param_3 = param_3 + 1;
            param_1 = param_1 + 0x40;
            uVar43 = uVar43 - 0x10;
          } while (uVar43 != 0);
        }
        else {
          uVar42 = 0;
        }
      }
      else {
        uVar42 = 0;
      }
      uVar39 = (uint)uVar42;
      if (uVar40 + 1 != uVar42) {
        uVar41 = uVar39;
        if ((param_4 & 1) != 0) {
          (*pauVar34)[0] = pbVar37[2] >> 4 | pbVar37[3] & 0xf0;
          pauVar34 = (undefined1 (*) [16])(*pauVar34 + 1);
          pbVar37 = pbVar37 + 4;
          uVar41 = uVar39 + 1;
        }
        if (param_4 - 1 != uVar39) {
          iVar32 = param_4 - uVar41;
          pbVar37 = pbVar37 + 7;
          do {
            (*pauVar34)[0] = pbVar37[-5] >> 4 | pbVar37[-4] & 0xf0;
            (*pauVar34)[1] = pbVar37[-1] >> 4 | *pbVar37 & 0xf0;
            pbVar37 = pbVar37 + 8;
            pauVar34 = (undefined1 (*) [16])(*pauVar34 + 2);
            iVar32 = iVar32 + -2;
          } while (iVar32 != 0);
        }
      }
    }
    break;
  case 0x2d:
    if (param_4 != 0) {
      uVar40 = (ulong)(param_4 - 1) + 1;
      uVar39 = 0;
      uVar42 = uVar40 & 0x1fffffffe;
      if (uVar42 == 0) {
        uVar42 = 0;
      }
      else {
        puVar33 = (ushort *)(*param_3 + 2);
        pbVar37 = param_1 + 6;
        uVar43 = (ulong)(param_4 - 1) + 1 & 0xfffffffffffffffe;
        do {
          bVar1 = *pbVar37;
          bVar2 = pbVar37[-1];
          bVar3 = pbVar37[-2];
          puVar33[-1] = ((pbVar37[-6] & 0xf8) << 7 |
                        (pbVar37[-5] & 0xf8) << 2 | (ushort)(pbVar37[-4] >> 3)) ^ 0x210;
          *puVar33 = ((bVar3 & 0xf8) << 7 | (bVar2 & 0xf8) << 2 | (ushort)(bVar1 >> 3)) ^ 0x210;
          puVar33 = puVar33 + 2;
          pbVar37 = pbVar37 + 8;
          uVar43 = uVar43 - 2;
        } while (uVar43 != 0);
        uVar39 = (uint)uVar40 & 0xfffffffe;
        param_3 = (undefined1 (*) [16])(*param_3 + uVar42 * 2);
        param_1 = param_1 + uVar42 * 4;
      }
      if (uVar40 != uVar42) {
        iVar32 = param_4 - uVar39;
        param_1 = param_1 + 2;
        do {
          *(ushort *)*param_3 =
               ((param_1[-2] & 0xf8) << 7 | (param_1[-1] & 0xf8) << 2 | (ushort)(*param_1 >> 3)) ^
               0x210;
          param_3 = (undefined1 (*) [16])(*param_3 + 2);
          param_1 = param_1 + 4;
          iVar32 = iVar32 + -1;
        } while (iVar32 != 0);
      }
    }
    break;
  case 0x2e:
    if (param_4 != 0) {
      bVar44 = (param_4 & 1) != 0;
      if (bVar44) {
        *(uint *)*param_3 = CONCAT12(*param_1,CONCAT11(param_1[1],param_1[2])) ^ 0xff008080;
        param_3 = (undefined1 (*) [16])(*param_3 + 4);
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar32 = param_4 - bVar44;
        param_1 = param_1 + 6;
        do {
          *(uint *)*param_3 = CONCAT12(param_1[-6],CONCAT11(param_1[-5],param_1[-4])) ^ 0xff008080;
          *(uint *)(*param_3 + 4) =
               CONCAT12(param_1[-2],CONCAT11(param_1[-1],*param_1)) ^ 0xff008080;
          param_1 = param_1 + 8;
          param_3 = (undefined1 (*) [16])(*param_3 + 8);
          iVar32 = iVar32 + -2;
        } while (iVar32 != 0);
      }
    }
  }
  return;
}

