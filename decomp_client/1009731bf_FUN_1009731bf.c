
int FUN_1009731bf(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  xmlHashTablePtr table;
  xmlGenericErrorFunc pxVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  xmlGenericErrorFunc *ppxVar14;
  void **ppvVar15;
  long local_f0;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined8 local_d0;
  int *local_98;
  int local_88;
  int local_84;
  void *local_80;
  long local_78;
  long local_68;
  xmlChar *local_60;
  xmlChar *local_58;
  long local_48;
  xmlChar *local_40;
  long local_38;
  
  local_e4 = 0;
  local_d0 = 0;
  if (param_2 == (undefined4 *)0x0) {
    FUN_100964522(param_1,7,0,0,0);
    return -1;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  switch(*param_2) {
  case 0:
    FUN_100970881(param_1,local_f0);
    local_e4 = 0;
    break;
  case 1:
    local_e4 = -1;
    break;
  case 2:
  case 6:
    ppxVar14 = ___xmlGenericError();
    pxVar4 = *ppxVar14;
    ppvVar15 = ___xmlGenericErrorContext();
    (*pxVar4)(*ppvVar15,"Unimplemented block at %s:%d\n","relaxng.c",0x285a);
    local_e4 = -1;
    break;
  case 3:
    for (; (local_f0 != 0 &&
           ((((*(int *)(local_f0 + 8) == 3 || (*(int *)(local_f0 + 8) == 8)) ||
             (*(int *)(local_f0 + 8) == 7)) || (*(int *)(local_f0 + 8) == 4))));
        local_f0 = *(long *)(local_f0 + 0x30)) {
    }
    *(long *)(*(long *)(param_1 + 0x60) + 8) = local_f0;
    break;
  case 4:
    iVar7 = *(int *)(param_1 + 0x50);
    lVar13 = FUN_100970881(param_1,local_f0);
    if (lVar13 == 0) {
      FUN_100964522(param_1,0x16,*(undefined8 *)(param_2 + 4),0,0);
      local_e4 = -1;
      if (((*(uint *)(param_1 + 0x38) ^ 1) & 1) != 0) {
        FUN_100964360(param_1);
      }
    }
    else if (*(int *)(lVar13 + 8) == 1) {
      if (*(undefined4 **)(lVar13 + 0x68) == param_2) {
        lVar8 = *(long *)(param_1 + 0x60);
        uVar12 = FUN_100970881(param_1,*(undefined8 *)(lVar13 + 0x30));
        *(undefined8 *)(lVar8 + 8) = uVar12;
        if (iVar7 < *(int *)(param_1 + 0x50)) {
          FUN_100964276(param_1,iVar7);
        }
        if (*(int *)(param_1 + 0x50) != 0) {
          while ((*(long *)(param_1 + 0x48) != 0 &&
                 ((((**(int **)(param_1 + 0x48) == 0xd &&
                    (iVar7 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_1 + 0x48) + 0x20),
                                          *(xmlChar **)(lVar13 + 0x10)), iVar7 != 0)) ||
                   ((**(int **)(param_1 + 0x48) == 0x13 &&
                    (iVar7 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_1 + 0x48) + 0x18),
                                          *(xmlChar **)(lVar13 + 0x10)), iVar7 != 0)))) ||
                  ((**(int **)(param_1 + 0x48) == 0x16 || (**(int **)(param_1 + 0x48) == 0x17)))))))
          {
            FUN_10096334c(param_1);
          }
        }
      }
      else {
        iVar6 = FUN_100972b33(param_1,param_2,lVar13);
        if (iVar6 < 1) {
          local_e4 = -1;
          if (((*(uint *)(param_1 + 0x38) ^ 1) & 1) != 0) {
            FUN_100964360(param_1);
          }
        }
        else {
          local_e4 = 0;
          if (*(int *)(param_1 + 0x50) != 0) {
            if (iVar7 < *(int *)(param_1 + 0x50)) {
              FUN_100964276(param_1,iVar7);
            }
            while ((*(long *)(param_1 + 0x48) != 0 &&
                   ((((**(int **)(param_1 + 0x48) == 0xd &&
                      (iVar7 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_1 + 0x48) + 0x20),
                                            *(xmlChar **)(lVar13 + 0x10)), iVar7 != 0)) ||
                     ((**(int **)(param_1 + 0x48) == 0x13 &&
                      (iVar7 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_1 + 0x48) + 0x18),
                                            *(xmlChar **)(lVar13 + 0x10)), iVar7 != 0)))) ||
                    ((**(int **)(param_1 + 0x48) == 0x16 || (**(int **)(param_1 + 0x48) == 0x17)))))
                   )) {
              FUN_10096334c(param_1);
            }
          }
          iVar7 = *(int *)(param_1 + 0x50);
          uVar1 = *(undefined4 *)(param_1 + 0x38);
          if ((*(uint *)(param_1 + 0x38) >> 2 & 1) != 0) {
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -4;
          }
          lVar8 = FUN_100961e5d(param_1,lVar13);
          if (lVar8 == 0) {
            local_e4 = -1;
            if (((*(uint *)(param_1 + 0x38) ^ 1) & 1) != 0) {
              FUN_100964360(param_1);
            }
          }
          else {
            lVar2 = *(long *)(param_1 + 0x60);
            *(long *)(param_1 + 0x60) = lVar8;
            if ((*(long *)(param_2 + 0x12) != 0) &&
               (iVar6 = FUN_100971de7(param_1,*(undefined8 *)(param_2 + 0x12)), iVar6 != 0)) {
              local_e4 = -1;
              FUN_100964522(param_1,0x18,*(undefined8 *)(lVar13 + 0x10),0,0);
            }
            if (*(long *)(param_2 + 0x1a) == 0) {
              if ((*(long *)(param_2 + 0xc) != 0) &&
                 (iVar6 = FUN_100972a64(param_1,*(undefined8 *)(param_2 + 0xc)), iVar6 != 0)) {
                local_e4 = -1;
                if (*(long *)(param_1 + 0x60) == 0) {
                  *(long *)(param_1 + 0x60) = lVar2;
                  FUN_100964522(param_1,0x19,*(undefined8 *)(lVar13 + 0x10),0,0);
                  *(undefined8 *)(param_1 + 0x60) = 0;
                }
                else {
                  FUN_100964522(param_1,0x19,*(undefined8 *)(lVar13 + 0x10),0,0);
                }
              }
              if (*(long *)(param_1 + 0x68) == 0) {
                uVar12 = *(undefined8 *)(param_1 + 0x60);
                if (local_e4 == 0) {
                  local_e4 = FUN_10097309d(param_1,1);
                }
                FUN_1009625c9(param_1,uVar12);
              }
              else {
                local_dc = -1;
                for (local_e0 = 0; local_e0 < **(int **)(param_1 + 0x68); local_e0 = local_e0 + 1) {
                  *(undefined8 *)(param_1 + 0x60) =
                       *(undefined8 *)
                        (*(long *)(*(long *)(param_1 + 0x68) + 8) + (long)local_e0 * 8);
                  iVar6 = FUN_10097309d(param_1,0);
                  if (iVar6 == 0) {
                    local_dc = 0;
                    break;
                  }
                }
                if (local_dc != 0) {
                  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
                  FUN_10097301a(param_1);
                }
                for (local_e0 = 0; local_e0 < **(int **)(param_1 + 0x68); local_e0 = local_e0 + 1) {
                  FUN_1009625c9(param_1,*(undefined8 *)
                                         (*(long *)(*(long *)(param_1 + 0x68) + 8) +
                                         (long)local_e0 * 8));
                }
                FUN_100961cac(param_1,*(undefined8 *)(param_1 + 0x68));
                *(undefined4 *)(param_1 + 0x38) = uVar1;
                *(undefined8 *)(param_1 + 0x68) = 0;
                if ((local_e4 == 0) && (local_dc == -1)) {
                  local_e4 = -1;
                }
              }
            }
            else {
              uVar12 = *(undefined8 *)(param_1 + 0x60);
              uVar10 = *(undefined8 *)(param_1 + 0x68);
              uVar9 = FUN_100961e5d(param_1,lVar13);
              *(undefined8 *)(param_1 + 0x60) = uVar9;
              *(undefined8 *)(param_1 + 0x68) = 0;
              iVar6 = FUN_10096fa78(param_1,*(undefined8 *)(param_2 + 0x1a),
                                    *(undefined8 *)(*(long *)(param_1 + 0x60) + 8));
              uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 8);
              *(undefined8 *)(param_1 + 0x60) = uVar12;
              *(undefined8 *)(param_1 + 0x68) = uVar10;
              FUN_1009625c9(param_1,uVar9);
              if (iVar6 != 0) {
                local_e4 = -1;
              }
              if (*(long *)(param_1 + 0x68) == 0) {
                uVar12 = *(undefined8 *)(param_1 + 0x60);
                *(undefined8 *)(*(long *)(param_1 + 0x60) + 8) = uVar3;
                if (local_e4 == 0) {
                  local_e4 = FUN_10097309d(param_1,1);
                }
                FUN_1009625c9(param_1,uVar12);
              }
              else {
                local_dc = -1;
                for (local_e0 = 0; local_e0 < **(int **)(param_1 + 0x68); local_e0 = local_e0 + 1) {
                  *(undefined8 *)(param_1 + 0x60) =
                       *(undefined8 *)
                        (*(long *)(*(long *)(param_1 + 0x68) + 8) + (long)local_e0 * 8);
                  *(undefined8 *)(*(long *)(param_1 + 0x60) + 8) = uVar3;
                  iVar6 = FUN_10097309d(param_1,0);
                  if (iVar6 == 0) {
                    local_dc = 0;
                    break;
                  }
                }
                if (local_dc != 0) {
                  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
                  FUN_10097301a(param_1);
                }
                for (local_e0 = 0; local_e0 < **(int **)(param_1 + 0x68); local_e0 = local_e0 + 1) {
                  FUN_1009625c9(param_1,*(undefined8 *)
                                         (*(long *)(*(long *)(param_1 + 0x68) + 8) +
                                         (long)local_e0 * 8));
                }
                FUN_100961cac(param_1,*(undefined8 *)(param_1 + 0x68));
                *(undefined4 *)(param_1 + 0x38) = uVar1;
                *(undefined8 *)(param_1 + 0x68) = 0;
                if ((local_e4 == 0) && (local_dc == -1)) {
                  local_e4 = -1;
                }
              }
            }
            if (local_e4 == 0) {
              *(undefined4 **)(lVar13 + 0x68) = param_2;
            }
            *(undefined4 *)(param_1 + 0x38) = uVar1;
            *(long *)(param_1 + 0x60) = lVar2;
            if (lVar2 != 0) {
              uVar12 = FUN_100970881(param_1,*(undefined8 *)(lVar13 + 0x30));
              *(undefined8 *)(lVar2 + 8) = uVar12;
            }
            if (local_e4 == 0) {
              if (iVar7 < *(int *)(param_1 + 0x50)) {
                FUN_100964276(param_1,iVar7);
              }
            }
            else if (((*(uint *)(param_1 + 0x38) ^ 1) & 1) == 0) {
              local_e4 = -2;
            }
            else {
              FUN_100964360(param_1);
              local_e4 = 0;
            }
          }
        }
      }
    }
    else {
      FUN_100964522(param_1,0x17,0,0,0);
      local_e4 = -1;
      if (((*(uint *)(param_1 + 0x38) ^ 1) & 1) != 0) {
        FUN_100964360(param_1);
      }
    }
    break;
  case 5:
    local_60 = (xmlChar *)0x0;
    for (local_68 = local_f0; local_68 != 0; local_68 = *(long *)(local_68 + 0x30)) {
      if (*(int *)(local_68 + 8) == 1) {
        FUN_100964522(param_1,0x1c,*(undefined8 *)(*(long *)(local_f0 + 0x28) + 0x10),0,0);
        local_e4 = -1;
        break;
      }
      if ((*(int *)(local_68 + 8) == 3) || (*(int *)(local_68 + 8) == 4)) {
        local_60 = _xmlStrcat(local_60,*(xmlChar **)(local_68 + 0x50));
      }
    }
    if (local_e4 == -1) {
      if (local_60 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_60);
      }
    }
    else if ((local_60 == (xmlChar *)0x0) &&
            (local_60 = _xmlStrdup((xmlChar *)""), local_60 == (xmlChar *)0x0)) {
      FUN_100960d45(param_1,"validating\n");
      local_e4 = -1;
    }
    else {
      local_e4 = FUN_100970a9d(param_1,local_60,param_2,
                               *(undefined8 *)(*(long *)(param_1 + 0x60) + 8));
      if (local_e4 == -1) {
        FUN_100964522(param_1,0x1f,*(undefined8 *)(param_2 + 4),0,0);
      }
      else if (local_e4 == 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 8) = 0;
      }
      if (local_60 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_60);
      }
    }
    break;
  case 7:
    local_58 = (xmlChar *)0x0;
    for (local_48 = local_f0; local_48 != 0; local_48 = *(long *)(local_48 + 0x30)) {
      if (*(int *)(local_48 + 8) == 1) {
        FUN_100964522(param_1,0x1d,*(undefined8 *)(*(long *)(local_f0 + 0x28) + 0x10),0,0);
        local_e4 = -1;
        break;
      }
      if ((*(int *)(local_48 + 8) == 3) || (*(int *)(local_48 + 8) == 4)) {
        local_58 = _xmlStrcat(local_58,*(xmlChar **)(local_48 + 0x50));
      }
    }
    if (local_e4 == -1) {
      if (local_58 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_58);
      }
    }
    else if ((local_58 == (xmlChar *)0x0) &&
            (local_58 = _xmlStrdup((xmlChar *)""), local_58 == (xmlChar *)0x0)) {
      FUN_100960d45(param_1,"validating\n");
      local_e4 = -1;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20);
      *(xmlChar **)(*(long *)(param_1 + 0x60) + 0x20) = local_58;
      local_e4 = FUN_100970eaf(param_1,param_2);
      *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20) = uVar12;
      if (local_e4 == -1) {
        FUN_100964522(param_1,0x20,*(undefined8 *)(param_2 + 4),0,0);
      }
      else if (local_e4 == 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 8) = 0;
      }
      if (local_58 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_58);
      }
    }
    break;
  case 8:
    local_40 = (xmlChar *)0x0;
    for (local_38 = local_f0; local_38 != 0; local_38 = *(long *)(local_38 + 0x30)) {
      if (*(int *)(local_38 + 8) == 1) {
        FUN_100964522(param_1,0x1e,*(undefined8 *)(*(long *)(local_f0 + 0x28) + 0x10),0,0);
        local_e4 = -1;
        break;
      }
      if ((*(int *)(local_38 + 8) == 3) || (*(int *)(local_38 + 8) == 4)) {
        local_40 = _xmlStrcat(local_40,*(xmlChar **)(local_38 + 0x50));
      }
    }
    if (local_e4 == -1) {
      if (local_40 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_40);
      }
    }
    else if ((local_40 == (xmlChar *)0x0) &&
            (local_40 = _xmlStrdup((xmlChar *)""), local_40 == (xmlChar *)0x0)) {
      FUN_100960d45(param_1,"validating\n");
      local_e4 = -1;
    }
    else {
      iVar7 = _xmlStrlen(local_40);
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20);
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28);
      *(xmlChar **)(*(long *)(param_1 + 0x60) + 0x20) = local_40;
      *(xmlChar **)(*(long *)(param_1 + 0x60) + 0x28) = local_40 + iVar7;
      local_e4 = FUN_100970eaf(param_1,param_2);
      *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20) = uVar12;
      *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28) = uVar10;
      if (local_e4 == -1) {
        FUN_100964522(param_1,0x21,0,0,0);
      }
      else if ((local_e4 == 0) && (local_f0 != 0)) {
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 8) = *(undefined8 *)(local_f0 + 0x30);
      }
      if (local_40 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_40);
      }
    }
    break;
  case 9:
    local_e4 = FUN_100971a24(param_1,param_2);
    break;
  case 10:
  case 0x12:
    local_e4 = FUN_100972a64(param_1,*(undefined8 *)(param_2 + 0xc));
    break;
  case 0xe:
    iVar7 = *(int *)(param_1 + 0x50);
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
    uVar12 = FUN_1009621d5(param_1,*(undefined8 *)(param_1 + 0x60));
    iVar6 = FUN_100972a64(param_1,*(undefined8 *)(param_2 + 0xc));
    if (iVar6 == 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar10 = FUN_100961967(param_1,1);
        *(undefined8 *)(param_1 + 0x68) = uVar10;
        if (*(long *)(param_1 + 0x68) == 0) {
          FUN_1009625c9(param_1,uVar12);
          *(undefined4 *)(param_1 + 0x38) = uVar1;
          local_e4 = -1;
          if (iVar7 < *(int *)(param_1 + 0x50)) {
            FUN_100964276(param_1,iVar7);
          }
          break;
        }
        FUN_100961b7d(param_1,*(undefined8 *)(param_1 + 0x68),uVar12);
        FUN_100961b7d(param_1,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x60));
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
      else {
        FUN_100961b7d(param_1,*(undefined8 *)(param_1 + 0x68),uVar12);
      }
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      local_e4 = 0;
      if (iVar7 < *(int *)(param_1 + 0x50)) {
        FUN_100964276(param_1,iVar7);
      }
    }
    else {
      if (*(long *)(param_1 + 0x60) != 0) {
        FUN_1009625c9(param_1,*(undefined8 *)(param_1 + 0x60));
      }
      *(undefined8 *)(param_1 + 0x60) = uVar12;
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      local_e4 = 0;
      if (iVar7 < *(int *)(param_1 + 0x50)) {
        FUN_100964276(param_1,iVar7);
      }
    }
    break;
  case 0x10:
    iVar7 = *(int *)(param_1 + 0x50);
    local_e4 = FUN_100972a64(param_1,*(undefined8 *)(param_2 + 0xc));
    if (local_e4 != 0) break;
    if (iVar7 < *(int *)(param_1 + 0x50)) {
      FUN_100964276(param_1,iVar7);
    }
  case 0xf:
    local_98 = (int *)0x0;
    piVar11 = (int *)FUN_100961967(param_1,1);
    if (piVar11 == (int *)0x0) {
      local_e4 = -1;
    }
    else {
      if (*(long *)(param_1 + 0x60) == 0) {
        for (local_84 = 0; local_84 < **(int **)(param_1 + 0x68); local_84 = local_84 + 1) {
          uVar12 = FUN_1009621d5(param_1,*(undefined8 *)
                                          (*(long *)(*(long *)(param_1 + 0x68) + 8) +
                                          (long)local_84 * 8));
          FUN_100961b7d(param_1,piVar11,uVar12);
        }
      }
      else {
        uVar12 = FUN_1009621d5(param_1,*(undefined8 *)(param_1 + 0x60));
        FUN_100961b7d(param_1,piVar11,uVar12);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
      do {
        bVar5 = false;
        local_88 = *piVar11;
        if (*(long *)(param_1 + 0x68) == 0) {
          iVar7 = FUN_100972a64(param_1,*(undefined8 *)(param_2 + 0xc));
          if (iVar7 == 0) {
            local_88 = *piVar11;
            if (*(long *)(param_1 + 0x60) == 0) {
              if (*(long *)(param_1 + 0x68) != 0) {
                for (local_84 = 0; local_84 < **(int **)(param_1 + 0x68); local_84 = local_84 + 1) {
                  iVar7 = FUN_100961b7d(param_1,piVar11,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(param_1 + 0x68) + 8) +
                                         (long)local_84 * 8));
                  if (iVar7 == 1) {
                    bVar5 = true;
                  }
                }
                if (local_98 == (int *)0x0) {
                  local_98 = *(int **)(param_1 + 0x68);
                }
                else {
                  FUN_100961cac(param_1,*(undefined8 *)(param_1 + 0x68));
                }
                *(undefined8 *)(param_1 + 0x68) = 0;
              }
            }
            else {
              iVar7 = FUN_100961b7d(param_1,piVar11,*(undefined8 *)(param_1 + 0x60));
              *(undefined8 *)(param_1 + 0x60) = 0;
              if (iVar7 == 1) {
                bVar5 = true;
              }
            }
          }
          else {
            FUN_1009625c9(param_1,*(undefined8 *)(param_1 + 0x60));
            *(undefined8 *)(param_1 + 0x60) = 0;
          }
        }
        else {
          local_98 = *(int **)(param_1 + 0x68);
          for (local_e0 = 0; local_e0 < *local_98; local_e0 = local_e0 + 1) {
            *(undefined8 *)(param_1 + 0x60) =
                 *(undefined8 *)(*(long *)(local_98 + 2) + (long)local_e0 * 8);
            *(undefined8 *)(param_1 + 0x68) = 0;
            iVar7 = FUN_100972a64(param_1,*(undefined8 *)(param_2 + 0xc));
            if (iVar7 == 0) {
              if (*(long *)(param_1 + 0x60) == 0) {
                if (*(long *)(param_1 + 0x68) != 0) {
                  for (local_84 = 0; local_84 < **(int **)(param_1 + 0x68); local_84 = local_84 + 1)
                  {
                    iVar7 = FUN_100961b7d(param_1,piVar11,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(param_1 + 0x68) + 8) +
                                           (long)local_84 * 8));
                    if (iVar7 == 1) {
                      bVar5 = true;
                    }
                  }
                  FUN_100961cac(param_1,*(undefined8 *)(param_1 + 0x68));
                  *(undefined8 *)(param_1 + 0x68) = 0;
                }
              }
              else {
                iVar7 = FUN_100961b7d(param_1,piVar11,*(undefined8 *)(param_1 + 0x60));
                *(undefined8 *)(param_1 + 0x60) = 0;
                if (iVar7 == 1) {
                  bVar5 = true;
                }
              }
            }
            else if (*(long *)(param_1 + 0x60) != 0) {
              FUN_1009625c9(param_1,*(undefined8 *)(param_1 + 0x60));
              *(undefined8 *)(param_1 + 0x60) = 0;
            }
          }
        }
        if (bVar5) {
          if (*piVar11 - local_88 == 1) {
            uVar12 = FUN_1009621d5(param_1,*(undefined8 *)
                                            (*(long *)(piVar11 + 2) + (long)local_88 * 8));
            *(undefined8 *)(param_1 + 0x60) = uVar12;
          }
          else {
            if (local_98 == (int *)0x0) {
              FUN_100961967(param_1,*piVar11 - local_88);
            }
            *local_98 = 0;
            for (local_e0 = local_88; local_e0 < *piVar11; local_e0 = local_e0 + 1) {
              uVar12 = FUN_1009621d5(param_1,*(undefined8 *)
                                              (*(long *)(piVar11 + 2) + (long)local_e0 * 8));
              FUN_100961b7d(param_1,local_98,uVar12);
            }
            *(int **)(param_1 + 0x68) = local_98;
          }
        }
      } while (bVar5);
      if (local_98 != (int *)0x0) {
        FUN_100961cac(param_1,local_98);
      }
      *(int **)(param_1 + 0x68) = piVar11;
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      local_e4 = 0;
    }
    break;
  case 0x11:
    local_80 = (void *)0x0;
    local_78 = 0;
    lVar13 = FUN_100970881(param_1,local_f0);
    iVar7 = *(int *)(param_1 + 0x50);
    if (((((uint)(int)*(short *)((long)param_2 + 0x62) >> 4 & 1) == 0) ||
        (*(long *)(param_2 + 10) == 0)) || (lVar13 == 0)) {
      local_80 = *(void **)(param_2 + 0xc);
      uVar1 = *(undefined4 *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
      for (; local_80 != (void *)0x0; local_80 = *(void **)((long)local_80 + 0x40)) {
        local_d0 = FUN_1009621d5(param_1,*(undefined8 *)(param_1 + 0x60));
        local_e4 = FUN_10097521d(param_1,local_80);
        if (local_e4 == 0) {
          if (local_78 == 0) {
            local_78 = FUN_100961967(param_1,1);
          }
          if (*(long *)(param_1 + 0x60) == 0) {
            if (*(long *)(param_1 + 0x68) != 0) {
              for (local_e0 = 0; local_e0 < **(int **)(param_1 + 0x68); local_e0 = local_e0 + 1) {
                FUN_100961b7d(param_1,local_78,
                              *(undefined8 *)
                               (*(long *)(*(long *)(param_1 + 0x68) + 8) + (long)local_e0 * 8));
              }
              FUN_100961cac(param_1,*(undefined8 *)(param_1 + 0x68));
              *(undefined8 *)(param_1 + 0x68) = 0;
            }
          }
          else {
            FUN_100961b7d(param_1,local_78,*(undefined8 *)(param_1 + 0x60));
          }
        }
        else {
          FUN_1009625c9(param_1,*(undefined8 *)(param_1 + 0x60));
        }
        *(undefined8 *)(param_1 + 0x60) = local_d0;
      }
      if (local_78 == 0) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      else {
        FUN_1009625c9(param_1,local_d0);
        *(long *)(param_1 + 0x68) = local_78;
        *(undefined8 *)(param_1 + 0x60) = 0;
        local_e4 = 0;
      }
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      if (local_e4 == 0) {
        if (iVar7 < *(int *)(param_1 + 0x50)) {
          FUN_100964276(param_1,iVar7);
        }
      }
      else if (((*(uint *)(param_1 + 0x38) ^ 1) & 1) != 0) {
        FUN_100964360(param_1);
      }
    }
    else {
      table = *(xmlHashTablePtr *)(param_2 + 10);
      if ((*(int *)(lVar13 + 8) == 3) || (*(int *)(lVar13 + 8) == 4)) {
        local_80 = _xmlHashLookup2(table,(xmlChar *)"#text",(xmlChar *)0x0);
      }
      else if (*(int *)(lVar13 + 8) == 1) {
        if (*(long *)(lVar13 + 0x48) == 0) {
          local_80 = _xmlHashLookup2(table,*(xmlChar **)(lVar13 + 0x10),(xmlChar *)0x0);
        }
        else {
          local_80 = _xmlHashLookup2(table,*(xmlChar **)(lVar13 + 0x10),
                                     *(xmlChar **)(*(long *)(lVar13 + 0x48) + 0x10));
          if (local_80 == (void *)0x0) {
            local_80 = _xmlHashLookup2(table,(xmlChar *)"#any",
                                       *(xmlChar **)(*(long *)(lVar13 + 0x48) + 0x10));
          }
        }
        if (local_80 == (void *)0x0) {
          local_80 = _xmlHashLookup2(table,(xmlChar *)"#any",(xmlChar *)0x0);
        }
      }
      if (local_80 == (void *)0x0) {
        local_e4 = -1;
        FUN_100964522(param_1,0x26,*(undefined8 *)(lVar13 + 0x10),0,0);
      }
      else {
        local_e4 = FUN_10097521d(param_1,local_80);
      }
    }
    break;
  case 0x13:
    local_e4 = FUN_100971fe4(param_1,param_2);
    break;
  case 0xffffffff:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x14:
    local_e4 = FUN_10097521d(param_1,*(undefined8 *)(param_2 + 0xc));
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  return local_e4;
}

