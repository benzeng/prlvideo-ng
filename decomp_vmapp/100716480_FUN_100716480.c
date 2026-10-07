
ulong FUN_100716480(uint *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined1 local_78 [64];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  iVar3 = FUN_100714a30();
  puVar2 = PTR_s_ka_parallels_com_10116db28;
  pcVar15 = "pkp13.reportUsage";
  switch(*param_1) {
  case 1:
    pcVar15 = "pkp13.getKey";
    break;
  case 2:
    pcVar15 = "pkp13.getKey";
    if (iVar3 == 1) {
      pcVar15 = "pkp13.activateVirtuozzoKey";
    }
    break;
  case 3:
    pcVar15 = "pkp13.transferKey";
    if (iVar3 == 1) {
      pcVar15 = "pkp13.transferVirtuozzoKey";
    }
    break;
  case 4:
    pcVar15 = "pkp13.isUpgradeAvailable";
    break;
  case 5:
    break;
  case 6:
    pcVar15 = "pkp13.resetKey";
    break;
  default:
    if (lVar1 == local_38) {
      uVar16 = 0xfffffffd;
      goto LAB_100716624;
    }
    goto LAB_100716a05;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    uVar4 = FUN_100714a10();
    uVar5 = FUN_100716060(param_1,puVar2,uVar4);
    uVar10 = (ulong)uVar5;
    if (uVar5 == 0) {
      lVar8 = *(long *)(param_1 + 0x10);
      goto LAB_100716562;
    }
    FUN_100716110(param_1);
  }
  else {
LAB_100716562:
    lVar8 = FUN_100723ea0(pcVar15,lVar8,1);
    if (lVar8 == 0) {
      if (lVar1 == local_38) {
        uVar16 = 0xfffffffe;
LAB_100716624:
        uVar10 = FUN_10071e690(uVar16,0);
        return uVar10;
      }
      goto LAB_100716a05;
    }
    *(long *)(*(long *)(param_1 + 0x12) + 0x20) = lVar8;
    uVar5 = *param_1;
    if (uVar5 < 7) {
      if ((0x52U >> (uVar5 & 0x1f) & 1) == 0) {
        if ((0xcU >> (uVar5 & 0x1f) & 1) == 0) {
          if (uVar5 != 5) goto LAB_10071684a;
          iVar3 = FUN_100717500(param_1);
          if ((iVar3 != 0) ||
             (lVar9 = FUN_100725de0("ss","keyNumber",
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_1 + 0x12) + 0x28) + 0x10),
                                    "updatePassword",
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_1 + 0x12) + 0x28) + 0x18)),
             lVar9 == 0)) goto LAB_10071681b;
          iVar3 = FUN_100724000(lVar8,lVar9);
LAB_1007167c4:
          if (iVar3 != 0) goto LAB_100716824;
          goto LAB_100716811;
        }
        iVar3 = FUN_100714a30();
        iVar6 = FUN_100717500(param_1);
        if (iVar6 != 0) goto LAB_10071681b;
        if (iVar3 - 4U < 6) {
          if (*param_1 == 3) {
            if (*(long *)(param_1 + 6) != 0) {
              uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x20);
              lVar9 = FUN_100725de0("s","activationCode");
              goto LAB_100716783;
            }
            iVar3 = -0xb;
          }
          else {
            if (*param_1 == 2) {
              iVar3 = FUN_100717760(param_1);
              goto LAB_1007167c4;
            }
            iVar3 = -0xd;
          }
        }
        else {
          uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x20);
          lVar9 = FUN_100725aa0(*(undefined8 *)(param_1 + 6));
LAB_100716783:
          if (lVar9 == 0) goto LAB_10071681b;
          iVar3 = FUN_100724000(uVar16,lVar9);
          if (iVar3 == 0) goto LAB_100716811;
          FUN_100724b70(lVar9);
        }
LAB_100716824:
        uVar5 = FUN_10071e690(iVar3,0);
LAB_100716829:
        uVar10 = (ulong)uVar5;
        if (uVar5 == 0) goto LAB_10071684a;
      }
      else {
        iVar3 = FUN_100714a30();
        iVar6 = FUN_100717500(param_1);
        if (iVar6 != 0) {
LAB_10071681b:
          iVar3 = -2;
          goto LAB_100716824;
        }
        uVar5 = *param_1;
        if (uVar5 == 1) {
          uVar5 = FUN_100717760(param_1);
LAB_100716709:
          uVar10 = (ulong)uVar5;
          if (uVar5 != 0) goto LAB_100716831;
LAB_100716747:
          if (5 < iVar3 - 4U) {
            iVar3 = *(int *)(*(long *)(param_1 + 0x12) + 8);
            iVar6 = *(int *)(*(long *)(param_1 + 0x12) + 0xc);
            if (iVar6 + iVar3 == 0) {
              puVar11 = (undefined1 *)FUN_100715ba0();
            }
            else {
              puVar11 = local_78;
              ___snprintf_chk(puVar11,0x40,0,0x40,"%d.%d.0 for Unix/Linux",iVar6,iVar3);
            }
            lVar9 = FUN_100725aa0(puVar11);
            if (lVar9 == 0) goto LAB_10071681b;
            FUN_100724000(lVar8,lVar9);
          }
LAB_100716811:
          uVar5 = FUN_100717980(param_1);
          goto LAB_100716829;
        }
        if (uVar5 == 6) {
          uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x20);
          lVar9 = *(long *)(*(long *)(param_1 + 0x12) + 0x28);
          lVar9 = FUN_100725de0("ss","keyNumber",*(undefined8 *)(lVar9 + 0x10),"updatePassword",
                                *(undefined8 *)(lVar9 + 0x18));
          uVar10 = 0xfffffffe;
          if (lVar9 != 0) {
LAB_10071673f:
            FUN_100724000(uVar16,lVar9);
            goto LAB_100716747;
          }
        }
        else {
          uVar10 = 0xfffffffd;
          if (uVar5 == 4) {
            uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x20);
            lVar9 = FUN_100724e40();
            if (lVar9 == 0) {
              uVar5 = FUN_10071e690(0xfffffffe,0);
              goto LAB_100716709;
            }
            goto LAB_10071673f;
          }
        }
      }
LAB_100716831:
      FUN_100723f60(lVar8);
      *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x20) = 0;
    }
    else {
LAB_10071684a:
      uVar5 = FUN_100724010(lVar8);
      uVar10 = (ulong)uVar5;
      if (uVar5 == 0) {
        param_1[1] = 2;
        pbVar12 = *(byte **)(param_1 + 0x12);
        if (*(code **)(pbVar12 + 0x10) != (code *)0x0) {
          (**(code **)(pbVar12 + 0x10))(param_1);
          pbVar12 = *(byte **)(param_1 + 0x12);
        }
        if ((*pbVar12 & 2) == 0) {
          uVar10 = 0;
        }
        else {
          lVar8 = FUN_100719100();
          uVar5 = param_1[1];
          if (uVar5 == 6) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(int *)(*(long *)(param_1 + 0x12) + 4) + lVar8;
            do {
              uVar7 = FUN_1007170b0(param_1);
              if (uVar7 != 0) {
LAB_10071691e:
                uVar10 = (ulong)uVar7;
                if (uVar7 == 0xfffffff6) {
                  pcVar15 = *(char **)(param_1 + 4);
                  pcVar14 = "";
                  if (pcVar15 == (char *)0x0) {
                    pcVar15 = "";
                  }
                  if (*param_1 - 1 < 6) {
                    pcVar14 = (&PTR_s_update_100bce320)[(int)(*param_1 - 1)];
                  }
                  uVar10 = 0xfffffff6;
                  if (0 < (int)param_1[2]) {
                    uVar10 = 0xfffffff6;
                    FUN_10071e690(0xfffffff6,"KA server can\'t %s this license: %s",pcVar14,pcVar15)
                    ;
                  }
                }
                else if ((uVar7 == 1) && (param_1[1] == 5)) {
                  pcVar15 = (char *)FUN_10071e790();
                  pcVar14 = _strdup(pcVar15);
                  pcVar15 = "";
                  if (pcVar14 != (char *)0x0) {
                    pcVar15 = pcVar14;
                  }
                  uVar10 = 1;
                  FUN_10071e690(1,"Can\'t install updated license: %s",pcVar15);
                  if (pcVar14 != (char *)0x0) {
                    _free(pcVar14);
                  }
                }
                goto LAB_1007169c6;
              }
              if (0 < *(int *)(*(long *)(param_1 + 0x12) + 4)) {
                uVar7 = param_1[1];
                uVar13 = FUN_100719100();
                if (uVar5 == uVar7) {
                  if (uVar10 < uVar13) {
                    param_1[1] = 0xfffffffe;
                    uVar7 = FUN_10071e690(0xffffffee,0);
                    goto LAB_10071691e;
                  }
                }
                else {
                  uVar10 = (long)*(int *)(*(long *)(param_1 + 0x12) + 4) + uVar13;
                }
              }
              _usleep(200000);
              uVar5 = param_1[1];
            } while (uVar5 != 6);
            uVar10 = 0;
          }
        }
      }
    }
  }
LAB_1007169c6:
  if (lVar1 == local_38) {
    return uVar10;
  }
LAB_100716a05:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

