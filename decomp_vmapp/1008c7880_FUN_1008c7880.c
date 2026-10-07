
long FUN_1008c7880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long *local_88;
  long *local_50;
  size_t sVar21;
  
  lVar11 = FUN_100884e10();
  if (lVar11 == 0) {
    FUN_100887ce0(0x22,0x82,0x41,"v3_cpols.c",0x93);
  }
  else {
    lVar12 = FUN_1008c40d0(param_3);
    if (lVar12 != 0) {
      iVar5 = FUN_100885600(lVar12);
      if (iVar5 < 1) {
LAB_1008c7e48:
        FUN_100885590(lVar12,FUN_1008c3b40);
        return lVar11;
      }
      bVar1 = false;
      local_88 = (long *)0x0;
      iVar5 = 0;
LAB_1008c78e8:
      puVar13 = (undefined8 *)FUN_100885620(lVar12,iVar5);
      if ((puVar13[2] == 0) && (pcVar23 = (char *)puVar13[1], pcVar23 != (char *)0x0)) {
        iVar6 = _strcmp(pcVar23,"ia5org");
        bVar4 = true;
        if (iVar6 == 0) {
LAB_1008c7e2c:
          bVar1 = bVar4;
          iVar5 = iVar5 + 1;
          iVar6 = FUN_100885600(lVar12);
          if (iVar6 <= iVar5) goto LAB_1008c7e48;
          goto LAB_1008c78e8;
        }
        if (*pcVar23 != '@') {
          lVar14 = FUN_100821bf0(pcVar23,0);
          if (lVar14 == 0) {
            uVar25 = 0x6e;
            uVar22 = 0xb8;
            goto LAB_1008c7ecb;
          }
          local_50 = (long *)FUN_1008a4610(&DAT_100be4270);
          if (local_50 == (long *)0x0) {
            uVar25 = 0xbe;
          }
          else {
            *local_50 = lVar14;
LAB_1008c7e11:
            iVar6 = FUN_1008852e0(lVar11,local_50);
            bVar4 = bVar1;
            if (iVar6 != 0) goto LAB_1008c7e2c;
            FUN_1008a4c40(local_50,&DAT_100be4270);
            uVar25 = 0xc5;
          }
          FUN_100887ce0(0x22,0x82,0x41,"v3_cpols.c",uVar25);
          goto LAB_1008c83cd;
        }
        lVar14 = FUN_1008c23d0(param_2,pcVar23 + 1);
        if (lVar14 != 0) {
          local_50 = (long *)FUN_1008a4610(&DAT_100be4270);
          plVar3 = local_88;
          if (local_50 == (long *)0x0) {
LAB_1008c82e7:
            local_88 = plVar3;
            FUN_100887ce0(0x22,0x83,0x41,"v3_cpols.c",0x11c);
            local_50 = local_88;
          }
          else {
            iVar6 = FUN_100885600(lVar14);
            if (0 < iVar6) {
              iVar6 = 0;
              do {
                puVar13 = (undefined8 *)FUN_100885620(lVar14,iVar6);
                pcVar23 = (char *)puVar13[1];
                iVar7 = _strcmp(pcVar23,"policyIdentifier");
                if (iVar7 == 0) {
                  lVar15 = FUN_100821bf0(puVar13[2],0);
                  if (lVar15 == 0) {
                    uVar25 = 0x6e;
                    uVar22 = 0xe0;
LAB_1008c8133:
                    FUN_100887ce0(0x22,0x83,uVar25,"v3_cpols.c",uVar22);
                    FUN_1008890a0(6,"section:",*puVar13,",name:",puVar13[1],",value:",puVar13[2]);
                    goto LAB_1008c83b1;
                  }
                  *local_50 = lVar15;
                }
                else {
                  iVar7 = FUN_1008c4900(pcVar23,"CPS");
                  plVar3 = local_50;
                  if (iVar7 != 0) {
                    iVar7 = FUN_1008c4900(puVar13[1],"userNotice");
                    if (iVar7 != 0) {
                      uVar25 = 0x8a;
                      uVar22 = 0x10e;
                      goto LAB_1008c8133;
                    }
                    if (*(char *)puVar13[2] == '@') {
                      lVar15 = FUN_1008c23d0(param_2,(char *)puVar13[2] + 1);
                      if (lVar15 == 0) {
                        FUN_100887ce0(0x22,0x83,0x87,"v3_cpols.c",0x100);
                        FUN_1008890a0(6,"section:",*puVar13,",name:",puVar13[1],",value:",puVar13[2]
                                     );
                      }
                      else {
                        plVar16 = (long *)FUN_1008a4610(&DAT_100be4300);
                        plVar2 = local_88;
                        if (plVar16 == (long *)0x0) {
LAB_1008c836e:
                          local_88 = plVar2;
                          FUN_100887ce0(0x22,0x84,0x41,"v3_cpols.c",0x16f);
                          plVar16 = local_88;
                        }
                        else {
                          lVar17 = FUN_100821870(0xa5);
                          *plVar16 = lVar17;
                          if (lVar17 == 0) {
                            FUN_100887ce0(0x22,0x84,0x44,"v3_cpols.c",0x12e);
                          }
                          else {
                            plVar18 = (long *)FUN_1008a4610(&DAT_100be4390);
                            plVar2 = plVar16;
                            if (plVar18 == (long *)0x0) goto LAB_1008c836e;
                            plVar16[1] = (long)plVar18;
                            iVar7 = FUN_100885600(lVar15);
                            if (0 < iVar7) {
                              iVar7 = 0;
                              do {
                                puVar13 = (undefined8 *)FUN_100885620(lVar15,iVar7);
                                pcVar23 = (char *)puVar13[1];
                                iVar8 = _strcmp(pcVar23,"explicitText");
                                if (iVar8 == 0) {
                                  lVar17 = FUN_1008afdf0(0x1a);
                                  plVar18[1] = lVar17;
                                  if (lVar17 == 0) goto LAB_1008c836e;
                                  pcVar23 = (char *)puVar13[2];
                                  sVar21 = _strlen(pcVar23);
                                  uVar10 = (undefined4)sVar21;
LAB_1008c7c39:
                                  iVar8 = FUN_1008afb30(lVar17,pcVar23,uVar10);
                                  if (iVar8 == 0) goto LAB_1008c836e;
                                }
                                else {
                                  iVar8 = _strcmp(pcVar23,"organization");
                                  if (iVar8 == 0) {
                                    plVar20 = (long *)*plVar18;
                                    if (plVar20 == (long *)0x0) {
                                      plVar20 = (long *)FUN_1008a4610(&DAT_100be4420);
                                      if (plVar20 == (long *)0x0) goto LAB_1008c836e;
                                      *plVar18 = (long)plVar20;
                                    }
                                    lVar17 = *plVar20;
                                    *(uint *)(lVar17 + 4) = (uint)!bVar1 * 4 + 0x16;
                                    pcVar23 = (char *)puVar13[2];
                                    sVar21 = _strlen(pcVar23);
                                    uVar10 = (undefined4)sVar21;
                                    goto LAB_1008c7c39;
                                  }
                                  iVar8 = _strcmp(pcVar23,"noticeNumbers");
                                  if (iVar8 != 0) {
                                    FUN_100887ce0(0x22,0x84,0x8a,"v3_cpols.c",0x15f);
                                    FUN_1008890a0(6,"section:",*puVar13,",name:",puVar13[1],
                                                  ",value:",puVar13[2]);
                                    goto LAB_1008c839a;
                                  }
                                  lVar17 = *plVar18;
                                  if (lVar17 == 0) {
                                    lVar17 = FUN_1008a4610(&DAT_100be4420);
                                    if (lVar17 == 0) goto LAB_1008c836e;
                                    *plVar18 = lVar17;
                                  }
                                  lVar19 = FUN_1008c40d0(puVar13[2]);
                                  if ((lVar19 == 0) || (iVar8 = FUN_100885600(lVar19), iVar8 == 0))
                                  {
                                    FUN_100887ce0(0x22,0x84,0x8d,"v3_cpols.c",0x156);
                                    FUN_1008890a0(6,"section:",*puVar13,",name:",puVar13[1],
                                                  ",value:",puVar13[2]);
                                    goto LAB_1008c839a;
                                  }
                                  uVar25 = *(undefined8 *)(lVar17 + 8);
                                  iVar8 = FUN_100885600(lVar19);
                                  if (0 < iVar8) {
                                    iVar8 = 0;
                                    do {
                                      lVar17 = FUN_100885620(lVar19,iVar8);
                                      lVar17 = FUN_1008c3cc0(0,*(undefined8 *)(lVar17 + 8));
                                      if (lVar17 == 0) {
                                        uVar22 = 0x8c;
                                        uVar24 = 0x180;
LAB_1008c7f3f:
                                        FUN_100887ce0(0x22,0x85,uVar22,"v3_cpols.c",uVar24);
                                        FUN_100885590(uVar25,FUN_1008afd70);
                                        FUN_100885590(lVar19,FUN_1008c3b40);
                                        goto LAB_1008c839a;
                                      }
                                      iVar9 = FUN_1008852e0(uVar25,lVar17);
                                      if (iVar9 == 0) {
                                        uVar22 = 0x41;
                                        uVar24 = 0x189;
                                        goto LAB_1008c7f3f;
                                      }
                                      iVar8 = iVar8 + 1;
                                      iVar9 = FUN_100885600(lVar19);
                                    } while (iVar8 < iVar9);
                                  }
                                  FUN_100885590(lVar19,FUN_1008c3b40);
                                }
                                iVar7 = iVar7 + 1;
                                iVar8 = FUN_100885600(lVar15);
                              } while (iVar7 < iVar8);
                            }
                            plVar18 = (long *)*plVar18;
                            if ((plVar18 == (long *)0x0) || ((plVar18[1] != 0 && (*plVar18 != 0))))
                            {
                              FUN_1008c2440(param_2,lVar15);
                              lVar15 = local_50[1];
                              if (lVar15 == 0) {
                                lVar15 = FUN_100884e10();
                                local_50[1] = lVar15;
                              }
                              iVar7 = FUN_1008852e0(lVar15,plVar16);
                              goto LAB_1008c7d94;
                            }
                            FUN_100887ce0(0x22,0x84,0x8e,"v3_cpols.c",0x168);
                          }
                        }
LAB_1008c839a:
                        FUN_1008a4c40(plVar16,&DAT_100be4300);
                        FUN_1008c2440(param_2,lVar15);
                      }
                    }
                    else {
                      FUN_100887ce0(0x22,0x83,0x89,"v3_cpols.c",0xfa);
                      FUN_1008890a0(6,"section:",*puVar13,",name:",puVar13[1],",value:",puVar13[2]);
                    }
                    goto LAB_1008c83b1;
                  }
                  if (local_50[1] == 0) {
                    lVar15 = FUN_100884e10();
                    local_50[1] = lVar15;
                  }
                  plVar16 = (long *)FUN_1008a4610(&DAT_100be4300);
                  if ((plVar16 == (long *)0x0) ||
                     (iVar7 = FUN_1008852e0(local_50[1],plVar16), iVar7 == 0)) goto LAB_1008c82e7;
                  lVar15 = FUN_100821870(0xa4);
                  *plVar16 = lVar15;
                  if (lVar15 == 0) {
                    FUN_100887ce0(0x22,0x83,0x44,"v3_cpols.c",0xee);
                    goto LAB_1008c83b1;
                  }
                  lVar15 = FUN_1008afdf0(0x16);
                  plVar16[1] = lVar15;
                  if (lVar15 == 0) goto LAB_1008c82e7;
                  pcVar23 = (char *)puVar13[2];
                  sVar21 = _strlen(pcVar23);
                  iVar7 = FUN_1008afb30(lVar15,pcVar23,sVar21 & 0xffffffff);
LAB_1008c7d94:
                  if (iVar7 == 0) goto LAB_1008c82e7;
                }
                iVar6 = iVar6 + 1;
                iVar7 = FUN_100885600(lVar14);
              } while (iVar6 < iVar7);
            }
            if (*local_50 != 0) {
              FUN_1008c2440(param_2,lVar14);
              goto LAB_1008c7e11;
            }
            FUN_100887ce0(0x22,0x83,0x8b,"v3_cpols.c",0x115);
          }
LAB_1008c83b1:
          FUN_1008a4c40(local_50,&DAT_100be4270);
          FUN_1008c2440(param_2,lVar14);
          goto LAB_1008c83cd;
        }
        uVar25 = 0x87;
        uVar22 = 0xac;
      }
      else {
        uVar25 = 0x86;
        uVar22 = 0xa0;
      }
LAB_1008c7ecb:
      FUN_100887ce0(0x22,0x82,uVar25,"v3_cpols.c",uVar22);
      FUN_1008890a0(6,"section:",*puVar13,",name:",puVar13[1],",value:",puVar13[2]);
      goto LAB_1008c83cd;
    }
    FUN_100887ce0(0x22,0x82,0x22,"v3_cpols.c",0x98);
    lVar12 = 0;
LAB_1008c83cd:
    FUN_100885590(lVar12,FUN_1008c3b40);
    FUN_100885590(lVar11,FUN_1008c84e0);
  }
  return 0;
}

