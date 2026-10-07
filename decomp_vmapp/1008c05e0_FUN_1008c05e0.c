
undefined8 FUN_1008c05e0(long param_1,int param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined1 local_208 [144];
  undefined8 local_178 [2];
  int local_168 [2];
  undefined1 **local_160;
  undefined1 *local_158 [15];
  undefined1 local_e0 [16];
  long local_d0;
  undefined1 local_a0 [40];
  long local_78;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar13 = 0;
  local_38 = lVar7;
  if (param_3 != 0) {
    local_168[0] = param_2;
    if (param_2 == 1) {
      local_158[0] = local_a0;
      pcVar6 = "";
      local_78 = param_3;
    }
    else {
      if (param_2 != 2) {
        FUN_100887ce0(0xb,0x67,0x70,"by_dir.c",0x122);
        goto LAB_1008c0bc1;
      }
      local_158[0] = local_e0;
      pcVar6 = "r";
      local_d0 = param_3;
    }
    local_160 = local_158;
    lVar7 = FUN_10087ccc0();
    if (lVar7 == 0) {
      FUN_100887ce0(0xb,0x67,7,"by_dir.c",0x127);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10);
      uVar8 = FUN_1008b6f90(param_3);
      iVar2 = FUN_100885600(*(undefined8 *)(lVar1 + 8));
      uVar13 = 0;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          puVar9 = (undefined8 *)FUN_100885620(*(undefined8 *)(lVar1 + 8),iVar2);
          sVar10 = _strlen((char *)*puVar9);
          iVar3 = FUN_10087cd60(lVar7,(long)((sVar10 << 0x20) + 0x1100000000) >> 0x20);
          if (iVar3 == 0) {
            FUN_100887ce0(0xb,0x67,0x41,"by_dir.c",0x135);
            uVar13 = 0;
            break;
          }
          iVar3 = 0;
          lVar12 = 0;
          if (param_2 == 2) {
            iVar3 = 0;
            lVar12 = 0;
            if (puVar9[2] != 0) {
              local_178[0] = uVar8;
              FUN_10081d010(5,0xb,"by_dir.c",0x13a);
              iVar4 = FUN_100885160(puVar9[2],local_178);
              iVar3 = 0;
              lVar12 = 0;
              if (-1 < iVar4) {
                lVar12 = FUN_100885620(puVar9[2],iVar4);
                iVar3 = *(int *)(lVar12 + 8);
              }
              FUN_10081d010(6,0xb,"by_dir.c",0x143);
            }
          }
          if (param_2 == 1) {
            while( true ) {
              FUN_1008823b0(*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),
                            "%s%c%08lx.%s%d",*puVar9,0x2f,uVar8,pcVar6,iVar3);
              iVar4 = _stat_INODE64(*(undefined8 *)(lVar7 + 8),local_208);
              if ((iVar4 < 0) ||
                 (iVar4 = FUN_1008bffe0(param_1,*(undefined8 *)(lVar7 + 8),
                                        *(undefined4 *)(puVar9 + 1)), iVar4 == 0)) break;
              iVar3 = iVar3 + 1;
            }
          }
          else {
            iVar4 = iVar3;
            if (param_2 == 2) {
              while( true ) {
                FUN_1008823b0(*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),
                              "%s%c%08lx.%s%d",*puVar9,0x2f,uVar8,pcVar6,iVar3);
                iVar4 = _stat_INODE64(*(undefined8 *)(lVar7 + 8),local_208);
                if ((iVar4 < 0) ||
                   (iVar4 = FUN_1008c01b0(param_1,*(undefined8 *)(lVar7 + 8),
                                          *(undefined4 *)(puVar9 + 1)), iVar4 == 0)) break;
                iVar3 = iVar3 + 1;
              }
            }
            else {
              do {
                iVar3 = iVar4;
                FUN_1008823b0(*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),
                              "%s%c%08lx.%s%d",*puVar9,0x2f,uVar8,pcVar6,iVar3);
                iVar5 = _stat_INODE64(*(undefined8 *)(lVar7 + 8),local_208);
                iVar4 = iVar3 + 1;
              } while (-1 < iVar5);
            }
          }
          FUN_10081d010(9,0xb,"by_dir.c",0x17c);
          iVar4 = FUN_100885160(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8),local_168);
          puVar14 = (undefined4 *)0x0;
          if (iVar4 != -1) {
            puVar14 = (undefined4 *)
                      FUN_100885620(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8),iVar4);
          }
          FUN_10081d010(10,0xb,"by_dir.c",0x182);
          if (param_2 == 2) {
            FUN_10081d010(9,0xb,"by_dir.c",0x187);
            if ((lVar12 == 0) &&
               ((local_178[0] = uVar8, iVar4 = FUN_100885160(puVar9[2],local_178), iVar4 < 0 ||
                (lVar12 = FUN_100885620(puVar9[2],iVar4), lVar12 == 0)))) {
              puVar11 = (undefined8 *)FUN_10081ddd0(0x10,"by_dir.c",0x193);
              *puVar11 = uVar8;
              *(int *)(puVar11 + 1) = iVar3;
              iVar3 = FUN_1008852e0(puVar9[2],puVar11);
              if (iVar3 == 0) {
                FUN_10081d010(10,0xb,"by_dir.c",0x197);
                FUN_10081e1a0(puVar11);
                uVar13 = 0;
                break;
              }
            }
            else if (*(int *)(lVar12 + 8) < iVar3) {
              *(int *)(lVar12 + 8) = iVar3;
            }
            FUN_10081d010(10,0xb,"by_dir.c",0x19f);
          }
          if (puVar14 != (undefined4 *)0x0) {
            *param_4 = *puVar14;
            *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar14 + 2);
            uVar13 = 1;
            break;
          }
          iVar2 = iVar2 + 1;
          iVar3 = FUN_100885600(*(undefined8 *)(lVar1 + 8));
          uVar13 = 0;
        } while (iVar2 < iVar3);
      }
      FUN_10087cd20(lVar7);
    }
    lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
LAB_1008c0bc1:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

