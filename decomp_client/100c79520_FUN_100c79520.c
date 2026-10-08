
uint FUN_100c79520(undefined8 *param_1,byte *param_2,size_t param_3,uint param_4,ulong param_5,
                  long param_6,long param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  code *pcVar15;
  int iVar16;
  byte *pbVar17;
  long lVar18;
  long local_70;
  ulong local_68;
  ulong local_60;
  undefined1 local_58 [32];
  long local_38;
  
  lVar18 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_68 = param_5;
  local_38 = lVar18;
  if ((int)param_3 == -1) {
    param_3 = _strlen((char *)param_2);
  }
  if (param_5 == 0) {
    local_68 = 0x2806;
  }
  iVar9 = (int)param_3;
  iVar16 = iVar9;
  switch(param_4) {
  case 0x1000:
    iVar6 = 0;
    iVar16 = 0;
    if (iVar9 != 0) {
      uVar14 = param_3 & 0xffffffff;
      pbVar17 = param_2;
      do {
        iVar16 = FUN_100c78290(pbVar17,uVar14,&local_60);
        if (iVar16 < 0) {
          FUN_100c62ee0(0xd,0x7a,0x86,"a_mbstr.c",0x88);
          uVar13 = 0xffffffff;
          goto LAB_100c79ae0;
        }
        pbVar17 = pbVar17 + iVar16;
        iVar6 = iVar6 + 1;
        uVar13 = (int)uVar14 - iVar16;
        uVar14 = (ulong)uVar13;
        iVar16 = iVar6;
      } while (uVar13 != 0);
    }
    lVar18 = *(long *)PTR____stack_chk_guard_1021e1840;
  case 0x1001:
switchD_100c79590_caseD_1001:
    if ((param_6 < 1) || (param_6 <= iVar16)) {
      if ((param_7 < 1) || (iVar16 <= param_7)) {
        iVar6 = FUN_100c79b70(param_2,param_3 & 0xffffffff,param_4,FUN_100c79cd0,&local_68);
        if (iVar6 < 0) {
          uVar10 = 0x7c;
          uVar12 = 0xa6;
        }
        else {
          uVar7 = 0x1001;
          uVar13 = 0x13;
          if ((((local_68 & 2) == 0) && (uVar13 = 0x16, (local_68 & 0x10) == 0)) &&
             (uVar13 = 0x14, (local_68 & 4) == 0)) {
            if ((local_68 & 0x800) == 0) {
              uVar7 = (uint)local_68 & 0x100;
              uVar13 = uVar7 >> 4 | 0xc;
              uVar7 = uVar7 >> 6 | 0x1000;
            }
            else {
              uVar7 = 0x1002;
              uVar13 = 0x1e;
            }
          }
          if (param_1 == (undefined8 *)0x0) goto LAB_100c79aea;
          piVar8 = (int *)*param_1;
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)FUN_100c8b370(uVar13);
            if (piVar8 == (int *)0x0) {
              uVar10 = 0x41;
              uVar12 = 0xcb;
              break;
            }
            *param_1 = piVar8;
            bVar5 = true;
          }
          else {
            if (*(long *)(piVar8 + 2) != 0) {
              *piVar8 = 0;
              FUN_100bf3910();
              piVar8[2] = 0;
              piVar8[3] = 0;
            }
            piVar8[1] = uVar13;
            bVar5 = false;
          }
          if (uVar7 == param_4) {
            iVar16 = FUN_100c8b0b0(piVar8,param_2,param_3);
            if (iVar16 != 0) goto LAB_100c79aea;
            uVar10 = 0x41;
            uVar12 = 0xd3;
          }
          else {
            pcVar15 = (code *)0x0;
            iVar6 = 0;
            switch(uVar7) {
            case 0x1000:
              iVar6 = 0;
              if (iVar9 != 0) {
                iVar6 = 0;
                if (param_4 == 0x1001) {
                  uVar14 = param_3 & 0xffffffff;
                  pbVar17 = param_2;
                  do {
                    local_60 = (ulong)*pbVar17;
                    pbVar17 = pbVar17 + 1;
                    iVar16 = FUN_100c78620(0,0xffffffff);
                    iVar6 = iVar6 + iVar16;
                    uVar7 = (int)uVar14 - 1;
                    uVar14 = (ulong)uVar7;
                  } while (uVar7 != 0);
                }
                else if (param_4 == 0x1002) {
                  uVar14 = param_3 & 0xffffffff;
                  pbVar17 = param_2;
                  do {
                    local_60 = (ulong)CONCAT11(*pbVar17,pbVar17[1]);
                    iVar16 = FUN_100c78620(0,0xffffffff);
                    iVar6 = iVar6 + iVar16;
                    pbVar17 = pbVar17 + 2;
                    uVar7 = (int)uVar14 - 2;
                    uVar14 = (ulong)uVar7;
                  } while (uVar7 != 0);
                }
                else {
                  iVar6 = 0;
                  uVar14 = param_3 & 0xffffffff;
                  pbVar17 = param_2;
                  do {
                    if (param_4 == 0x1004) {
                      bVar4 = *pbVar17;
                      pbVar1 = pbVar17 + 1;
                      pbVar2 = pbVar17 + 2;
                      pbVar3 = pbVar17 + 3;
                      pbVar17 = pbVar17 + 4;
                      local_60 = (ulong)*pbVar3 |
                                 (ulong)*pbVar2 << 8 | (ulong)*pbVar1 << 0x10 | (ulong)bVar4 << 0x18
                      ;
                      uVar7 = (int)uVar14 - 4;
                    }
                    else {
                      iVar16 = FUN_100c78290(pbVar17,uVar14,&local_60);
                      if (iVar16 < 0) break;
                      uVar7 = (int)uVar14 - iVar16;
                      pbVar17 = pbVar17 + iVar16;
                    }
                    uVar14 = (ulong)uVar7;
                    iVar16 = FUN_100c78620(0,0xffffffff,local_60);
                    iVar6 = iVar6 + iVar16;
                  } while (uVar7 != 0);
                }
              }
              pcVar15 = FUN_100c79e30;
              break;
            case 0x1001:
              pcVar15 = FUN_100c79dc0;
              iVar6 = iVar16;
              break;
            case 0x1002:
              pcVar15 = FUN_100c79de0;
              iVar6 = iVar16 * 2;
              break;
            case 0x1004:
              pcVar15 = FUN_100c79e00;
              iVar6 = iVar16 << 2;
            }
            local_70 = FUN_100bf3540(iVar6 + 1,"a_mbstr.c",0xf0);
            if (local_70 != 0) {
              *piVar8 = iVar6;
              *(long *)(piVar8 + 2) = local_70;
              *(undefined1 *)(local_70 + iVar6) = 0;
              FUN_100c79b70(param_2,param_3,param_4,pcVar15,&local_70);
LAB_100c79ae0:
              lVar18 = *(long *)PTR____stack_chk_guard_1021e1840;
              goto LAB_100c79aea;
            }
            lVar18 = *(long *)PTR____stack_chk_guard_1021e1840;
            if (bVar5) {
              FUN_100c8b2f0(piVar8);
            }
            uVar10 = 0x41;
            uVar12 = 0xf3;
          }
        }
        break;
      }
      FUN_100c62ee0(0xd,0x7a,0x97,"a_mbstr.c",0x9e);
      FUN_100c5d5b0(local_58,0x20,"%ld",param_7);
      pcVar11 = "maxsize=";
    }
    else {
      FUN_100c62ee0(0xd,0x7a,0x98,"a_mbstr.c",0x97);
      FUN_100c5d5b0(local_58,0x20,"%ld",param_6);
      pcVar11 = "minsize=";
    }
    FUN_100c642a0(2,pcVar11,local_58);
    uVar13 = 0xffffffff;
    goto LAB_100c79aea;
  case 0x1002:
    if ((param_3 & 1) == 0) {
      iVar16 = iVar9 >> 1;
      goto switchD_100c79590_caseD_1001;
    }
    uVar10 = 0x81;
    uVar12 = 0x74;
    break;
  default:
    uVar10 = 0xa0;
    uVar12 = 0x92;
    break;
  case 0x1004:
    if ((param_3 & 3) == 0) {
      iVar16 = iVar9 >> 2;
      goto switchD_100c79590_caseD_1001;
    }
    uVar10 = 0x85;
    uVar12 = 0x7d;
  }
  FUN_100c62ee0(0xd,0x7a,uVar10,"a_mbstr.c",uVar12);
  uVar13 = 0xffffffff;
LAB_100c79aea:
  if (lVar18 == local_38) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

