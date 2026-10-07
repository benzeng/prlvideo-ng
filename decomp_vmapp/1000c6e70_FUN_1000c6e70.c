
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1000c6e70(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  char cVar9;
  undefined4 uVar10;
  byte *pbVar11;
  void *pvVar12;
  byte *pbVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar22 [16];
  
  iVar19 = *(int *)(*(long *)(param_1 + 0x48) + 0x14);
  if (iVar19 < 0x220) {
    if (0x20f < iVar19) {
      if (iVar19 != 0x210) {
        return 0;
      }
      lVar20 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x1918);
      iVar19 = -1;
      if ((lVar20 != 0) && (iVar19 = *(int *)(lVar20 + 4), iVar19 == 0)) {
        FUN_10008f910(param_1,0);
        uVar16 = 2;
        goto LAB_1000c740d;
      }
      FUN_1008e3970("","vm",0,"Disconnected monitor with error at line number %u",iVar19);
      uVar14 = *(uint *)(param_1 + 0x1f0);
      uVar10 = 0x80020020;
LAB_1000c71f2:
      if ((uVar14 & 0x1000000) != 0) {
        uVar10 = 0x80020005;
      }
      *(undefined4 *)(param_1 + 500) = uVar10;
      goto LAB_1000c73ea;
    }
    if (0x11f < iVar19) {
      if (iVar19 == 0x120) {
        cVar9 = FUN_1000d0320(param_1);
        if (cVar9 == '\0') {
          *(undefined1 *)(param_1 + 0x1f8) = 1;
        }
      }
      else {
        if (iVar19 != 0x202) {
          return 0;
        }
        FUN_1008e3970("","vm",0,"Monitor data saving finished.");
        if (*(int *)(param_1 + 0x204) != 4) {
          FUN_1000bea50(*(undefined8 *)(param_1 + 0x2b0),4);
          *(undefined4 *)(param_1 + 0x204) = 4;
        }
        FUN_1008e3970("","vm",0,"Saving application data...");
        _memcpy(*(void **)(param_1 + 0x348),*(void **)(*(long *)(param_1 + 0x2b0) + 0x1928),
                (ulong)*(uint *)(param_1 + 0x338));
        cVar9 = FUN_1000cd5b0(param_1);
        if (cVar9 == '\0') {
          FUN_1008e3970("","vm",0,"SaveRoutineHelper failed");
          uVar14 = *(uint *)(param_1 + 0x1f0);
          uVar10 = 0x80000053;
          goto LAB_1000c71f2;
        }
        FUN_1008e3970("","vm",0,"Saving application data...OK");
        if (*(int *)(param_1 + 0x204) != 6) {
          FUN_1000bea50(*(undefined8 *)(param_1 + 0x2b0),6);
          *(undefined4 *)(param_1 + 0x204) = 6;
        }
      }
      goto LAB_1000c73ea;
    }
    if (iVar19 == 0x101) {
      iVar19 = *(int *)(*(long *)(param_1 + 0x2b0) + 0x1920);
      lVar20 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x1918);
      lVar18 = lVar20;
      if ((iVar19 == 0) || (lVar18 = 0, lVar20 == 0)) {
        FUN_1008e3970("","vm",0,"Failed to allocate SaRe buffer(0x%p, 0x%x)",lVar18);
        *(undefined4 *)(param_1 + 500) = 0x80020000;
      }
      else if ((*(byte *)(param_1 + 499) & 5) == 0) {
        lVar20 = FUN_1000d6cc0(param_1 + 0x2b8);
        uVar14 = *(int *)(lVar20 + 0x18) + *(int *)(lVar20 + 0x1c);
        if (*(uint *)(*(long *)(param_1 + 0x2b0) + 0x1920) < uVar14) {
          FUN_1008e3970("","vm",0,"Monitor data overhead (0x%x, 0x%x)",uVar14);
          *(undefined4 *)(param_1 + 500) = 0x80020000;
        }
        else {
          lVar20 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x1918);
          pvVar12 = (void *)FUN_1000d6cc0(param_1 + 0x2b8);
          _memcpy((void *)(lVar20 + 8),pvVar12,(ulong)uVar14);
        }
      }
      else {
        ___bzero(lVar20 + 8,iVar19);
        _memcpy(*(void **)(param_1 + 0x340),*(void **)(*(long *)(param_1 + 0x2b0) + 0x1928),
                (ulong)*(uint *)(param_1 + 0x338));
        auVar8 = _DAT_100b2ddb0;
        uVar7 = _UNK_100b2ddac;
        uVar6 = _UNK_100b2dda8;
        uVar5 = _UNK_100b2dda4;
        uVar14 = _DAT_100b2dda0;
        iVar4 = _UNK_100b2dd9c;
        iVar3 = _UNK_100b2dd98;
        iVar2 = PTR___mh_execute_header_100b2dd90._4_4_;
        iVar19 = (int)PTR___mh_execute_header_100b2dd90;
        lVar20 = 0;
        if ((ulong)*(uint *)(param_1 + 0x338) != 0) {
          pbVar13 = *(byte **)(param_1 + 0x340);
          pbVar11 = pbVar13 + *(uint *)(param_1 + 0x338);
          lVar20 = 0;
          puVar15 = DAT_1011b6b00;
          do {
            bVar1 = *pbVar13;
            lVar18 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              do {
                iVar17 = (int)lVar18;
                uVar21 = iVar17 + iVar19;
                uVar23 = iVar17 + iVar2;
                uVar24 = iVar17 + iVar3;
                uVar25 = iVar17 + iVar4;
                auVar22._0_4_ =
                     (uVar21 >> 7 & uVar14) +
                     (uVar21 >> 6 & uVar14) +
                     (uVar21 >> 5 & uVar14) +
                     (uVar21 >> 4 & uVar14) +
                     (uVar21 >> 3 & uVar14) +
                     (uVar21 >> 2 & uVar14) + (uVar21 >> 1 & uVar14) + (uVar21 & uVar14);
                auVar22._4_4_ =
                     (uVar23 >> 7 & uVar5) +
                     (uVar23 >> 6 & uVar5) +
                     (uVar23 >> 5 & uVar5) +
                     (uVar23 >> 4 & uVar5) +
                     (uVar23 >> 3 & uVar5) +
                     (uVar23 >> 2 & uVar5) + (uVar23 >> 1 & uVar5) + (uVar23 & uVar5);
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
                *(int *)((long)&DAT_1011b6a00 + lVar18) = auVar22._0_4_;
                lVar18 = lVar18 + 4;
              } while (lVar18 != 0x100);
              DAT_1011b6b00 = &DAT_1011b6a00;
              puVar15 = &DAT_1011b6a00;
            }
            lVar20 = lVar20 + (ulong)*(byte *)((long)puVar15 + (ulong)bVar1);
            pbVar13 = pbVar13 + 1;
          } while (pbVar13 < pbVar11);
        }
        FUN_1008e3970("","vm",0,"Created WS bitmap with %llu pages",lVar20);
        lVar20 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x1a30);
        if (lVar20 != 0) {
          if (*(long *)(param_1 + 0x350) != 0) {
            FUN_10008c0a0(*(undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x1940),
                          *(long *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x340));
            lVar20 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x1a30);
          }
          FUN_100533970(lVar20,0);
        }
      }
      goto LAB_1000c73ea;
    }
    if (iVar19 != 0x102) {
      return 0;
    }
    FUN_1008e3970("","vm",0,"Monitor tuning after restore is finished");
    FUN_10008f910(param_1,0);
    if ((*(byte *)(param_1 + 499) & 2) == 0) {
      FUN_10008ec80(param_1,3);
      if (*(int *)(*(long *)(param_1 + 0x2b0) + 0x109e0) == 1) {
        FUN_10008fdb0(*(long *)(param_1 + 0x2b0),0x4e45,0);
        *(undefined1 *)(param_1 + 0x449) = 1;
        return 1;
      }
      return 1;
    }
  }
  else {
    if (iVar19 != 0x220) {
      return 0;
    }
    FUN_1008e3970("","vm",0,"Monitor data loading finished.");
    FUN_1008e3970("","vm",0,"Loading application data...");
    uVar16 = FUN_1000d6cc0(param_1 + 0x2b8);
    uVar10 = FUN_1000d6cd0(param_1 + 0x2b8);
    cVar9 = FUN_1000ecfb0(&DAT_100bfbab0,uVar16,uVar10,*(uint *)(param_1 + 0x1f0) | 2,0);
    if (cVar9 == '\0') {
      FUN_1008e3970("","vm",0,"SaReLoadMain failed");
      *(undefined4 *)(param_1 + 500) = 0x80020000;
    }
    else {
      FUN_1008e3970("","vm",0,"Loading application data...OK");
      if (((*(byte *)(param_1 + 499) & 2) != 0) && (*(int *)(param_1 + 0x204) != 0x62)) {
        FUN_1000bea50(*(undefined8 *)(param_1 + 0x2b0),0x62);
        *(undefined4 *)(param_1 + 0x204) = 0x62;
      }
    }
LAB_1000c73ea:
    FUN_10008f910(param_1,*(undefined4 *)(param_1 + 500));
    if (*(int *)(param_1 + 500) == 0) {
      FUN_10008fa70(*(undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x1810),2);
      return 1;
    }
  }
  FUN_1000cee20(param_1);
  uVar16 = 0;
LAB_1000c740d:
  FUN_10008ec80(param_1,uVar16);
  return 1;
}

