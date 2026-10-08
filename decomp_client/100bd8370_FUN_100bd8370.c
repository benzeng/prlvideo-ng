
undefined8 FUN_100bd8370(int *param_1,undefined8 *param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  size_t sVar12;
  byte *pbVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  bool bVar19;
  byte *local_68;
  byte *local_38;
  
  local_68 = (byte *)*param_2;
  param_1[0x7a] = 0;
  param_1[0x7b] = -1;
  lVar9 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar9 + 0x4a8) = 0;
  *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) & 0xfc;
  if ((((local_68 < param_3 + -2) && ((*(ulong *)(param_1 + 0x6a) & 0x40) != 0)) &&
      (local_68 + 2 <= param_3 + -4)) && (CONCAT11(local_68[2],local_68[3]) == 0)) {
    uVar8 = (ulong)CONCAT11(local_68[4],local_68[5]);
    pbVar13 = local_68 + uVar8 + 6;
    if (pbVar13 <= param_3) {
      if ((param_1[0x71] < 0x303) || ((param_1[0x71] & 0xffffff00U) != 0x300)) {
        if (local_68 + uVar8 + 0x18 == param_3) {
          puVar14 = &DAT_101da2930;
          sVar12 = 0x12;
          goto LAB_100bd8497;
        }
      }
      else if ((local_68 + uVar8 + 0x28 == param_3) &&
              (iVar7 = _memcmp(pbVar13,&DAT_101da2930,0x12), iVar7 == 0)) {
        puVar14 = &DAT_101da2950;
        sVar12 = 0x10;
        pbVar13 = local_68 + uVar8 + 0x18;
LAB_100bd8497:
        iVar7 = _memcmp(pbVar13,puVar14,sVar12);
        if (iVar7 == 0) {
          *(undefined1 *)(lVar9 + 0x4ac) = 1;
        }
      }
    }
  }
  if (*(long *)(param_1 + 0xb2) != 0) {
    FUN_100bf3910();
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
  }
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  if (local_68 == param_3) {
LAB_100bd8df3:
    if (param_1[0xa9] == 0) {
      return 1;
    }
    if ((*(byte *)((long)param_1 + 0x1aa) & 4) != 0) {
      return 1;
    }
    *param_4 = 0x28;
    FUN_100c62ee0(0x14,0x12e,0x152,"t1_lib.c",0x584);
  }
  else {
    if ((local_68 <= param_3 + -2) &&
       (local_68 + (ulong)CONCAT11(*local_68,local_68[1]) + 2 == param_3)) {
      local_68 = local_68 + 2;
      if (param_3 + -4 < local_68) {
        bVar6 = false;
      }
      else {
        bVar6 = false;
        bVar5 = false;
        do {
          uVar4 = CONCAT11(local_68[2],local_68[3]);
          uVar18 = (uint)uVar4;
          uVar8 = (ulong)uVar18;
          if (param_3 < local_68 + uVar8 + 4) goto LAB_100bd8e55;
          bVar1 = *local_68;
          bVar2 = local_68[1];
          pbVar13 = local_68 + 4;
          uVar15 = (uint)CONCAT11(local_68[2],local_68[3]);
          if (*(code **)(param_1 + 0x74) != (code *)0x0) {
            (**(code **)(param_1 + 0x74))
                      (param_1,0,CONCAT11(bVar1,bVar2),pbVar13,uVar15,
                       *(undefined8 *)(param_1 + 0x76));
          }
          if (CONCAT11(bVar1,bVar2) < 0x3374) {
            if ((char)bVar1 < '\0') {
              if (CONCAT11(bVar1,bVar2) != -0xff) goto switchD_100bd8694_caseD_1;
              iVar7 = FUN_100bf2110(param_1,pbVar13,uVar15,param_4);
              bVar6 = true;
              if (iVar7 == 0) {
                return 0;
              }
            }
            else if (CONCAT11(bVar1,bVar2) < 0x23) {
              switch(CONCAT11(bVar1,bVar2)) {
              case 0:
                if (uVar15 < 2) goto LAB_100bd8e55;
                uVar15 = (uint)CONCAT11(local_68[4],local_68[5]);
                uVar8 = (ulong)(uVar18 - 2);
                if ((uVar18 - 2 & 0xffff) < uVar15) goto LAB_100bd8e55;
                if (3 < uVar15) {
                  pbVar13 = local_68 + 9;
                  do {
                    bVar1 = pbVar13[-2];
                    bVar2 = pbVar13[-1];
                    iVar7 = uVar15 - 3;
                    uVar17 = (ulong)CONCAT11(bVar1,bVar2);
                    uVar15 = iVar7 - (uint)CONCAT11(bVar1,bVar2);
                    if (iVar7 < (int)(uint)CONCAT11(bVar1,bVar2)) goto LAB_100bd8e55;
                    if ((pbVar13[-3] == 0) && (param_1[0x7a] == 0)) {
                      pcVar3 = *(char **)(*(long *)(param_1 + 0x4c) + 0x118);
                      if (param_1[0x2a] == 0) {
                        if (pcVar3 != (char *)0x0) goto LAB_100bd8e55;
                        if (0xff < CONCAT11(bVar1,bVar2)) {
LAB_100bd8e96:
                          *param_4 = 0x70;
                          return 0;
                        }
                        pvVar10 = (void *)FUN_100bf3540(CONCAT11(bVar1,bVar2) + 1,"t1_lib.c",1099);
                        *(void **)(*(long *)(param_1 + 0x4c) + 0x118) = pvVar10;
                        if (pvVar10 == (void *)0x0) goto LAB_100bd8e41;
                        _memcpy(pvVar10,pbVar13,uVar17);
                        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x4c) + 0x118) + uVar17) = 0;
                        pcVar3 = *(char **)(*(long *)(param_1 + 0x4c) + 0x118);
                        sVar12 = _strlen(pcVar3);
                        if (sVar12 != uVar17) {
                          FUN_100bf3910(pcVar3);
                          *(undefined8 *)(*(long *)(param_1 + 0x4c) + 0x118) = 0;
                          goto LAB_100bd8e96;
                        }
                        param_1[0x7a] = 1;
                      }
                      else {
                        if (pcVar3 == (char *)0x0) {
                          bVar19 = false;
                        }
                        else {
                          sVar12 = _strlen(pcVar3);
                          if (sVar12 == uVar17) {
                            iVar7 = _strncmp(pcVar3,(char *)pbVar13,sVar12);
                            bVar19 = iVar7 == 0;
                          }
                          else {
                            bVar19 = false;
                          }
                        }
                        param_1[0x7a] = (uint)bVar19;
                      }
                    }
                    pbVar13 = pbVar13 + 3;
                  } while (3 < (int)uVar15);
                }
                if (uVar15 != 0) goto LAB_100bd8e55;
                pbVar13 = local_68 + 6;
                break;
              default:
switchD_100bd8694_caseD_1:
                if ((**(int **)(param_1 + 2) == 0xfeff) &&
                   (((lVar9 = FUN_100be2650(), CONCAT11(bVar1,bVar2) == 0xe && (lVar9 != 0)) &&
                    (iVar7 = FUN_100be27d0(param_1,pbVar13,uVar15,param_4), iVar7 != 0)))) {
                  return 0;
                }
                break;
              case 5:
                if (*param_1 == 0xfeff) goto switchD_100bd8694_caseD_1;
                if (uVar15 < 5) goto LAB_100bd8e55;
                bVar1 = local_68[4];
                param_1[0x7b] = (uint)bVar1;
                if (bVar1 == 1) {
                  uVar15 = (uint)CONCAT11(local_68[5],local_68[6]);
                  uVar18 = uVar18 - 3;
                  if ((uVar18 & 0xffff) < uVar15) goto LAB_100bd8e55;
                  local_68 = local_68 + 7;
LAB_100bd8c3d:
                  if (0 < (int)uVar15) {
                    if (3 < (int)uVar15) {
                      uVar16 = (uint)CONCAT11(*local_68,local_68[1]);
                      uVar15 = uVar15 - (uVar16 + 2);
                      if (-1 < (int)uVar15) {
                        local_38 = local_68 + 2;
                        lVar9 = FUN_100cb47a0(0,&local_38,(ulong)uVar16);
                        if (lVar9 != 0) {
                          local_68 = local_68 + (ulong)uVar16 + 2;
                          if (local_68 == local_38) {
                            lVar11 = *(long *)(param_1 + 0x7e);
                            if (lVar11 != 0) goto LAB_100bd8ce5;
                            lVar11 = FUN_100c60010();
                            *(long *)(param_1 + 0x7e) = lVar11;
                            if (lVar11 != 0) goto LAB_100bd8ce5;
                            goto LAB_100bd8e39;
                          }
                          FUN_100cb4800(lVar9);
                        }
                      }
                    }
                    goto LAB_100bd8e55;
                  }
                  if ((uVar18 & 0xffff) < 2) goto LAB_100bd8e55;
                  uVar15 = (uint)CONCAT11(*local_68,local_68[1]);
                  uVar8 = (ulong)(uVar18 - 2);
                  if (uVar15 != (uVar18 - 2 & 0xffff)) goto LAB_100bd8e55;
                  pbVar13 = local_68 + 2;
                  local_38 = pbVar13;
                  if (uVar15 != 0) {
                    if (*(long *)(param_1 + 0x80) != 0) {
                      FUN_100c60790(*(long *)(param_1 + 0x80),FUN_100c86400);
                    }
                    lVar9 = FUN_100c86420(0,&local_38,(ulong)uVar15);
                    *(long *)(param_1 + 0x80) = lVar9;
                    if ((lVar9 == 0) || (local_68 + (ulong)uVar15 + 2 != local_38))
                    goto LAB_100bd8e55;
                  }
                }
                else {
                  pbVar13 = local_68 + 5;
                  uVar8 = (ulong)(uVar18 - 1);
                  param_1[0x7b] = -1;
                }
                break;
              case 10:
                if ((local_68[5] & 1) != 0) goto LAB_100bd8e55;
                uVar18 = (uint)CONCAT11(local_68[4],local_68[5]);
                sVar12 = (size_t)uVar18;
                if ((uVar18 == 0) || (uVar18 != uVar15 - 2)) goto LAB_100bd8e55;
                if (param_1[0x2a] == 0) {
                  if (*(long *)(*(long *)(param_1 + 0x4c) + 0x138) != 0) goto LAB_100bd8e55;
                  *(undefined8 *)(*(long *)(param_1 + 0x4c) + 0x130) = 0;
                  pvVar10 = (void *)FUN_100bf3540(uVar18,"t1_lib.c",0x4ac);
                  lVar9 = *(long *)(param_1 + 0x4c);
                  *(void **)(lVar9 + 0x138) = pvVar10;
                  if (pvVar10 == (void *)0x0) {
LAB_100bd8e41:
                    *param_4 = 0x50;
                    return 0;
                  }
                  local_68 = local_68 + 6;
                  *(size_t *)(lVar9 + 0x130) = sVar12;
LAB_100bd8a85:
                  _memcpy(pvVar10,local_68,sVar12);
                }
                break;
              case 0xb:
                bVar1 = local_68[4];
                sVar12 = (size_t)bVar1;
                if ((uint)bVar1 != uVar15 - 1) goto LAB_100bd8e55;
                if (param_1[0x2a] == 0) {
                  lVar9 = *(long *)(param_1 + 0x4c);
                  if (*(long *)(lVar9 + 0x128) != 0) {
                    FUN_100bf3910();
                    lVar9 = *(long *)(param_1 + 0x4c);
                    *(undefined8 *)(lVar9 + 0x128) = 0;
                  }
                  *(undefined8 *)(lVar9 + 0x120) = 0;
                  pvVar10 = (void *)FUN_100bf3540((uint)bVar1,"t1_lib.c",0x489);
                  lVar9 = *(long *)(param_1 + 0x4c);
                  *(void **)(lVar9 + 0x128) = pvVar10;
                  if (pvVar10 == (void *)0x0) goto LAB_100bd8e41;
                  local_68 = local_68 + 5;
                  *(size_t *)(lVar9 + 0x120) = sVar12;
                  goto LAB_100bd8a85;
                }
                break;
              case 0xc:
                if (((uVar4 == 0) || (uVar17 = (ulong)*pbVar13, (uint)*pbVar13 != uVar15 - 1)) ||
                   (*(long *)(param_1 + 0xb2) != 0)) goto LAB_100bd8e55;
                pvVar10 = (void *)FUN_100bf3540(uVar15,"t1_lib.c",0x471);
                *(void **)(param_1 + 0xb2) = pvVar10;
                if (pvVar10 == (void *)0x0) {
                  return 0xffffffff;
                }
                _memcpy(pvVar10,local_68 + 5,uVar17);
                *(undefined1 *)(*(long *)(param_1 + 0xb2) + uVar17) = 0;
                sVar12 = _strlen(*(char **)(param_1 + 0xb2));
                if (sVar12 != uVar17) goto LAB_100bd8e55;
                break;
              case 0xd:
                if ((bVar5) || (uVar15 < 2)) goto LAB_100bd8e55;
                uVar8 = (ulong)(uVar18 - 2);
                if (((uint)CONCAT11(local_68[4],local_68[5]) != (uVar18 - 2 & 0xffff)) ||
                   ((local_68[5] & 1) != 0)) goto LAB_100bd8e55;
                pbVar13 = local_68 + 6;
                iVar7 = FUN_100bd8ef0(param_1,pbVar13);
                bVar5 = true;
                if (iVar7 == 0) goto LAB_100bd8e55;
                break;
              case 0xf:
                if (*pbVar13 == 2) {
                  *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) | 3;
                }
                else {
                  if (*pbVar13 != 1) {
                    *param_4 = 0x2f;
                    return 0;
                  }
                  *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) | 1;
                }
              }
            }
            else {
              if (CONCAT11(bVar1,bVar2) != 0x23) goto switchD_100bd8694_caseD_1;
              if ((*(code **)(param_1 + 0x94) != (code *)0x0) &&
                 (iVar7 = (**(code **)(param_1 + 0x94))
                                    (param_1,pbVar13,uVar15,*(undefined8 *)(param_1 + 0x96)),
                 iVar7 == 0)) goto LAB_100bd8e41;
            }
          }
          else {
            if ((CONCAT11(bVar1,bVar2) != 0x3374) ||
               (*(int *)(*(long *)(param_1 + 0x20) + 0x310) != 0)) goto switchD_100bd8694_caseD_1;
            *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x4a8) = 1;
          }
          local_68 = pbVar13 + (uVar8 & 0xffff);
        } while (local_68 <= param_3 + -4);
      }
      if (local_68 == param_3) {
        *param_2 = param_3;
        if (bVar6) {
          return 1;
        }
        goto LAB_100bd8df3;
      }
    }
LAB_100bd8e55:
    *param_4 = 0x32;
  }
  return 0;
LAB_100bd8ce5:
  uVar18 = uVar18 - (uVar16 + 2);
  iVar7 = FUN_100c604e0(lVar11,lVar9);
  if (iVar7 == 0) {
LAB_100bd8e39:
    FUN_100cb4800(lVar9);
    goto LAB_100bd8e41;
  }
  goto LAB_100bd8c3d;
}

