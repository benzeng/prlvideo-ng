
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100886040(double param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [48];
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar7;
  if (param_3 == 0) goto LAB_100886554;
  if (DAT_1011c0938 == '\x01') {
    FUN_10081d470(local_a8);
    FUN_10081d010(5,0x13,"md_rand.c",0xdf);
    iVar5 = FUN_10081d4e0(&DAT_1011c0928,local_a8);
    FUN_10081d010(6,0x13,"md_rand.c",0xe1);
    bVar3 = true;
    if (iVar5 != 0) goto LAB_1008860f1;
  }
  else {
LAB_1008860f1:
    FUN_10081d010(9,0x12,"md_rand.c",0xe6);
    bVar3 = false;
  }
  iVar5 = DAT_1011c0948;
  local_48 = DAT_1011c0950;
  local_40 = DAT_1011c0958;
  local_58 = DAT_1011c0970;
  local_68 = _DAT_1011c0960;
  uStack_64 = uRam00000001011c0964;
  uStack_60 = uRam00000001011c0968;
  uStack_5c = uRam00000001011c096c;
  DAT_1011c0948 = DAT_1011c0948 + param_3;
  if (DAT_1011c0948 < 0x3ff) {
    if ((DAT_1011c094c < 0x3ff) && (DAT_1011c094c < DAT_1011c0948)) {
      DAT_1011c094c = DAT_1011c0948;
    }
  }
  else {
    DAT_1011c0948 = DAT_1011c0948 % 0x3ff;
    DAT_1011c094c = 0x3ff;
  }
  DAT_1011c0958 = (int)((uint)(0 < param_3 % 0x14) + param_3 / 0x14) + DAT_1011c0958;
  if (!bVar3) {
    FUN_10081d010(10,0x12,"md_rand.c");
  }
  FUN_10088a650(local_98);
  if (0 < param_3) {
    iVar12 = param_3 + 0x15;
    iVar14 = 0;
    iVar8 = 0;
    local_b8 = param_2;
    iVar13 = param_3;
    do {
      iVar10 = 0x14;
      if (0x13 < iVar13) {
        iVar10 = iVar13;
      }
      iVar11 = iVar14 * -0x14;
      iVar15 = param_3 + iVar11;
      if (param_3 + iVar11 < 0x14) {
        iVar15 = 0x14;
      }
      iVar2 = param_3 - iVar8;
      if (0x14 < param_3 - iVar8) {
        iVar2 = 0x14;
      }
      uVar6 = FUN_100891760();
      FUN_10088a720(local_98,uVar6,0);
      FUN_10088a910(local_98,&local_68,0x14);
      if (iVar2 + iVar5 < 0x400) {
        FUN_10088a910(local_98,&DAT_1011c0980 + iVar5,(long)iVar2);
      }
      else {
        iVar16 = iVar2 + -0x3ff + iVar5;
        FUN_10088a910(local_98,&DAT_1011c0980 + iVar5,(long)(iVar2 - iVar16));
        FUN_10088a910(local_98,&DAT_1011c0980,(long)iVar16);
      }
      FUN_10088a910(local_98,local_b8);
      FUN_10088a910(local_98,&local_48,0x10);
      FUN_10088a9c0(local_98,&local_68,0);
      local_40 = local_40 + 1;
      if (0 < iVar2) {
        lVar7 = 0;
        if (((param_3 + 0x14 + iVar11) - iVar15 & 1U) != 0) {
          (&DAT_1011c0980)[iVar5] = (&DAT_1011c0980)[iVar5] ^ (byte)local_68;
          bVar1 = 0x3fd < iVar5;
          iVar5 = iVar5 + 1;
          if (bVar1) {
            iVar5 = 0;
          }
          lVar7 = 1;
        }
        if (iVar11 + param_3 + 0x13 != iVar15) {
          pbVar9 = (byte *)((long)&local_68 + lVar7 + 1);
          iVar10 = (iVar12 - iVar10) - ((int)lVar7 + 1);
          do {
            iVar15 = iVar5 + 1;
            (&DAT_1011c0980)[iVar5] = (&DAT_1011c0980)[iVar5] ^ pbVar9[-1];
            if (0x3fd < iVar5) {
              iVar15 = 0;
            }
            (&DAT_1011c0980)[iVar15] = (&DAT_1011c0980)[iVar15] ^ *pbVar9;
            iVar5 = iVar15 + 1;
            if (0x3fd < iVar15) {
              iVar5 = 0;
            }
            pbVar9 = pbVar9 + 2;
            iVar10 = iVar10 + -2;
          } while (iVar10 != 0);
        }
      }
      local_b8 = local_b8 + iVar2;
      iVar8 = iVar8 + 0x14;
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + -0x14;
      iVar13 = iVar13 + -0x14;
    } while (iVar8 < param_3);
  }
  FUN_10088aa50(local_98);
  if (!bVar3) {
    FUN_10081d010(9,0x12,"md_rand.c",0x137);
  }
  uVar4 = DAT_1011c0970;
  _DAT_1011c0960 = _DAT_1011c0960 ^ local_68;
  uRam00000001011c0964 = uRam00000001011c0964 ^ uStack_64;
  uRam00000001011c0968 = uRam00000001011c0968 ^ uStack_60;
  uRam00000001011c096c = uRam00000001011c096c ^ uStack_5c;
  DAT_1011c0970._0_1_ = (byte)DAT_1011c0970 ^ (byte)local_58;
  DAT_1011c0970._1_1_ = SUB41(uVar4,1);
  DAT_1011c0970._1_1_ = DAT_1011c0970._1_1_ ^ local_58._1_1_;
  DAT_1011c0970._2_1_ = SUB41(uVar4,2);
  DAT_1011c0970._3_1_ = SUB41(uVar4,3);
  DAT_1011c0970._2_1_ = DAT_1011c0970._2_1_ ^ local_58._2_1_;
  DAT_1011c0970._3_1_ = DAT_1011c0970._3_1_ ^ local_58._3_1_;
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (DAT_1011c0940 < DAT_100b46198) {
    DAT_1011c0940 = DAT_1011c0940 + param_1;
  }
  if (!bVar3) {
    FUN_10081d010(10,0x12,"md_rand.c",0x144);
  }
LAB_100886554:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

