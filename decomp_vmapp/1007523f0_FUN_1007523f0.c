
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1007523f0(long param_1,undefined8 param_2,void *param_3,uint param_4,uint *param_5,ulong param_6
             ,long param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  long lVar12;
  char *pcVar13;
  int iVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  undefined4 *puVar17;
  char *pcVar18;
  uint uVar19;
  byte *pbVar20;
  undefined *puVar21;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar22 [16];
  uint uVar26;
  uint local_34;
  
  local_34 = *param_5;
  if (param_7 == 0) {
    uVar9 = *(int *)(param_1 + 0x58) - 1;
    if (uVar9 < 5) {
      pcVar18 = (&PTR_s_lzrw1_100bcec20)[(int)uVar9];
    }
    else {
      pcVar18 = "invalid";
    }
    pcVar13 = "CCompressionEngineLZRW::do_compress(%s) zero context";
LAB_100752624:
    uVar16 = 0;
    uVar15 = 0;
LAB_100752628:
    FUN_1008e3970("","Compression",uVar15,pcVar13,pcVar18);
  }
  else {
    if ((param_4 == 0) || (local_34 == 0)) {
      FUN_1008e3970("","Compression",0,
                    "CCompressionEngineLZRW::do_compress(%u,%u) incorrect arguments!",param_4);
      return 0;
    }
    if (*(long *)(param_1 + 0x60) == 0) {
      iVar2 = *(int *)(param_1 + 0x58);
      if (iVar2 == 5) {
LAB_100752684:
        local_34 = FUN_10074e770(param_7,param_2,param_3,param_4);
        uVar9 = (uint)(local_34 == 0);
      }
      else if (iVar2 == 4) {
        uVar9 = FUN_100744220(param_2,param_4,param_3,&local_34);
      }
      else {
        uVar9 = 1;
        if (iVar2 == 1) {
          lVar12 = 0;
LAB_1007526d6:
          uVar9 = FUN_100742ea0(param_2,param_4,param_3,&local_34,param_7,lVar12);
        }
      }
    }
    else {
      pbVar10 = (byte *)(*(long *)(param_1 + 0x60) + (param_6 >> 0x11) * 4);
      *(byte **)(param_7 + 0x8000) = pbVar10;
      auVar8 = _DAT_100b2ddb0;
      uVar7 = _UNK_100b2ddac;
      uVar6 = _UNK_100b2dda8;
      uVar26 = _UNK_100b2dda4;
      uVar9 = _DAT_100b2dda0;
      iVar5 = _UNK_100b2dd9c;
      iVar4 = _UNK_100b2dd98;
      iVar3 = PTR___mh_execute_header_100b2dd90._4_4_;
      iVar2 = (int)PTR___mh_execute_header_100b2dd90;
      iVar14 = 0;
      uVar19 = (param_4 >> 0xc) + 7 >> 3;
      if (uVar19 != 0) {
        pbVar20 = pbVar10 + uVar19;
        puVar17 = DAT_1011bf8a0;
        iVar14 = 0;
        do {
          bVar1 = *pbVar10;
          lVar12 = 0;
          if (puVar17 == (undefined4 *)0x0) {
            do {
              iVar11 = (int)lVar12;
              uVar19 = iVar11 + iVar2;
              uVar23 = iVar11 + iVar3;
              uVar24 = iVar11 + iVar4;
              uVar25 = iVar11 + iVar5;
              auVar22._0_4_ =
                   (uVar19 >> 7 & uVar9) +
                   (uVar19 >> 6 & uVar9) +
                   (uVar19 >> 5 & uVar9) +
                   (uVar19 >> 4 & uVar9) +
                   (uVar19 >> 3 & uVar9) +
                   (uVar19 >> 2 & uVar9) + (uVar19 >> 1 & uVar9) + (uVar19 & uVar9);
              auVar22._4_4_ =
                   (uVar23 >> 7 & uVar26) +
                   (uVar23 >> 6 & uVar26) +
                   (uVar23 >> 5 & uVar26) +
                   (uVar23 >> 4 & uVar26) +
                   (uVar23 >> 3 & uVar26) +
                   (uVar23 >> 2 & uVar26) + (uVar23 >> 1 & uVar26) + (uVar23 & uVar26);
              auVar22._8_4_ =
                   (uVar24 >> 7 & uVar6) +
                   (uVar24 >> 6 & uVar6) +
                   (uVar24 >> 5 & uVar6) +
                   (uVar24 >> 4 & uVar6) +
                   (uVar24 >> 3 & uVar6) +
                   (uVar24 >> 2 & uVar6) + (uVar24 >> 1 & uVar6) + (uVar24 & uVar6);
              auVar22._12_4_ =
                   (uVar25 >> 7 & uVar7) +
                   (uVar25 >> 6 & uVar7) +
                   (uVar25 >> 5 & uVar7) +
                   (uVar25 >> 4 & uVar7) +
                   (uVar25 >> 3 & uVar7) +
                   (uVar25 >> 2 & uVar7) + (uVar25 >> 1 & uVar7) + (uVar25 & uVar7);
              auVar22 = pshufb(auVar22,auVar8);
              *(int *)((long)&DAT_1011bf7a0 + lVar12) = auVar22._0_4_;
              lVar12 = lVar12 + 4;
            } while (lVar12 != 0x100);
            DAT_1011bf8a0 = &DAT_1011bf7a0;
            puVar17 = &DAT_1011bf7a0;
          }
          iVar14 = iVar14 + (uint)*(byte *)((long)puVar17 + (ulong)bVar1);
          pbVar10 = pbVar10 + 1;
        } while (pbVar10 < pbVar20);
      }
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar14;
      iVar2 = *(int *)(param_1 + 0x58);
      if ((param_4 == 0x100000) && (iVar14 == 0x100)) {
        uVar9 = 0xc5b;
        if (iVar2 != 1) {
          if (iVar2 == 5) {
            uVar9 = 0x101a;
          }
          else if (iVar2 == 4) {
            uVar9 = 0xbf1;
          }
          else {
            if (iVar2 - 1U < 5) {
              pcVar18 = (&PTR_s_lzrw1_100bcec20)[(int)(iVar2 - 1U)];
            }
            else {
              pcVar18 = "invalid";
            }
            uVar9 = 0;
            FUN_1008e3970("","Compression",0,"CCompressionEngineLZRW::get_1mz_comp_siz(%s)",pcVar18)
            ;
          }
        }
        if (*param_5 < uVar9) {
          uVar9 = *(int *)(param_1 + 0x58) - 1;
          if (uVar9 < 5) {
            pcVar18 = (&PTR_s_lzrw1_100bcec20)[(int)uVar9];
          }
          else {
            pcVar18 = "invalid";
          }
          pcVar13 = "CCompressionEngineLZRW::do_compress(%s) invalid buffer";
          goto LAB_100752624;
        }
        *param_5 = uVar9;
        iVar2 = *(int *)(param_1 + 0x58);
        if (iVar2 == 1) {
          puVar21 = &DAT_10119ea80;
        }
        else if (iVar2 == 5) {
          puVar21 = &DAT_1011a02e0;
        }
        else if (iVar2 == 4) {
          puVar21 = &DAT_10119f6e0;
        }
        else {
          if (iVar2 - 1U < 5) {
            pcVar18 = (&PTR_s_lzrw1_100bcec20)[(int)(iVar2 - 1U)];
          }
          else {
            pcVar18 = "invalid";
          }
          puVar21 = (undefined *)0x0;
          FUN_1008e3970("","Compression",0,"CCompressionEngineLZRW::get_1mz_comp_stream(%s)",pcVar18
                       );
        }
        _memcpy(param_3,puVar21,(ulong)uVar9);
        uVar16 = 1;
        if (DAT_1011b55f8 < 4) {
          return 1;
        }
        uVar9 = *(int *)(param_1 + 0x58) - 1;
        if (uVar9 < 5) {
          pcVar18 = (&PTR_s_lzrw1_100bcec20)[(int)uVar9];
        }
        else {
          pcVar18 = "invalid";
        }
        pcVar13 = "CCompressionEngineLZRW::do_compress(%s) skip entire block";
        uVar15 = 4;
        goto LAB_100752628;
      }
      if (iVar2 == 5) goto LAB_100752684;
      lVar12 = param_7 + 0x8000;
      if (iVar2 == 4) {
        uVar9 = FUN_100744980(param_2,param_4,param_3,&local_34);
      }
      else {
        uVar9 = 1;
        if (iVar2 == 1) goto LAB_1007526d6;
      }
    }
    uVar26 = *param_5;
    if (uVar26 < local_34) {
      uVar9 = *(int *)(param_1 + 0x58) - 1;
      if (uVar9 < 5) {
        pcVar18 = (&PTR_s_lzrw1_100bcec20)[(int)uVar9];
      }
      else {
        pcVar18 = "invalid";
      }
      pcVar13 = "CCompressionEngineLZRW::do_compress(%s,%llu,%u,%u,%u) buffer overflow!";
    }
    else if (local_34 == 0) {
      uVar9 = *(int *)(param_1 + 0x58) - 1;
      if (uVar9 < 5) {
        pcVar18 = (&PTR_s_lzrw1_100bcec20)[(int)uVar9];
      }
      else {
        pcVar18 = "invalid";
      }
      pcVar13 = "CCompressionEngineLZRW::do_compress(%s,%llu,%u,%u) comp size = zero!";
    }
    else {
      *param_5 = local_34;
      if (uVar9 == 0) {
        if (DAT_1011b55f8 < 4) {
          return 1;
        }
        uVar9 = *(int *)(param_1 + 0x58) - 1;
        if (uVar9 < 5) {
          pcVar18 = (&PTR_s_lzrw1_100bcec20)[(int)uVar9];
        }
        else {
          pcVar18 = "invalid";
        }
        FUN_1008e3970("","Compression",4,"CCompressionEngineLZRW::do_compress(%s) %u -> %u",pcVar18,
                      param_4,local_34);
        return 1;
      }
      uVar9 = *(int *)(param_1 + 0x58) - 1;
      if (uVar9 < 5) {
        pcVar18 = (&PTR_s_lzrw1_100bcec20)[(int)uVar9];
      }
      else {
        pcVar18 = "invalid";
      }
      pcVar13 = "CCompressionEngineLZRW::do_compress(%s,%llu,%u->%u) failed (%d)";
      uVar26 = local_34;
    }
    uVar16 = 0;
    FUN_1008e3970("","Compression",0,pcVar13,pcVar18,param_6,param_4,uVar26);
  }
  return uVar16;
}

