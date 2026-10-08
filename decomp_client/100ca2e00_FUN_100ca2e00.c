
long FUN_100ca2e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  lVar11 = FUN_100c60010();
  if (lVar11 == 0) {
    FUN_100c62ee0(0x22,0x82,0x41,"v3_cpols.c",0x93);
  }
  else {
    lVar12 = FUN_100c9f650(param_3);
    if (lVar12 != 0) {
      iVar5 = FUN_100c60800(lVar12);
      if (iVar5 < 1) {
LAB_100ca33c8:
        FUN_100c60790(lVar12,FUN_100c9f0c0);
        return lVar11;
      }
      bVar1 = false;
      local_88 = (long *)0x0;
      iVar5 = 0;
LAB_100ca2e68:
      puVar13 = (undefined8 *)FUN_100c60820(lVar12,iVar5);
      if ((puVar13[2] == 0) && (pcVar23 = (char *)puVar13[1], pcVar23 != (char *)0x0)) {
        iVar6 = _strcmp(pcVar23,"ia5org");
        bVar4 = true;
        if (iVar6 == 0) {
LAB_100ca33ac:
          bVar1 = bVar4;
          iVar5 = iVar5 + 1;
          iVar6 = FUN_100c60800(lVar12);
          if (iVar6 <= iVar5) goto LAB_100ca33c8;
          goto LAB_100ca2e68;
        }
        if (*pcVar23 != '@') {
          lVar14 = FUN_100bf7360(pcVar23,0);
          if (lVar14 == 0) {
            uVar25 = 0x6e;
            uVar22 = 0xb8;
            goto LAB_100ca344b;
          }
          local_50 = (long *)FUN_100c7fb90(&DAT_102254880);
          if (local_50 == (long *)0x0) {
            uVar25 = 0xbe;
          }
          else {
            *local_50 = lVar14;
LAB_100ca3391:
            iVar6 = FUN_100c604e0(lVar11,local_50);
            bVar4 = bVar1;
            if (iVar6 != 0) goto LAB_100ca33ac;
            FUN_100c801c0(local_50,&DAT_102254880);
            uVar25 = 0xc5;
          }
          FUN_100c62ee0(0x22,0x82,0x41,"v3_cpols.c",uVar25);
          goto LAB_100ca394d;
        }
        lVar14 = FUN_100c9d950(param_2,pcVar23 + 1);
        if (lVar14 != 0) {
          local_50 = (long *)FUN_100c7fb90(&DAT_102254880);
          plVar3 = local_88;
          if (local_50 == (long *)0x0) {
LAB_100ca3867:
            local_88 = plVar3;
            FUN_100c62ee0(0x22,0x83,0x41,"v3_cpols.c",0x11c);
            local_50 = local_88;
          }
          else {
            iVar6 = FUN_100c60800(lVar14);
            if (0 < iVar6) {
              iVar6 = 0;
              do {
                puVar13 = (undefined8 *)FUN_100c60820(lVar14,iVar6);
                pcVar23 = (char *)puVar13[1];
                iVar7 = _strcmp(pcVar23,"policyIdentifier");
                if (iVar7 == 0) {
                  lVar15 = FUN_100bf7360(puVar13[2],0);
                  if (lVar15 == 0) {
                    uVar25 = 0x6e;
                    uVar22 = 0xe0;
LAB_100ca36b3:
                    FUN_100c62ee0(0x22,0x83,uVar25,"v3_cpols.c",uVar22);
                    FUN_100c642a0(6,"section:",*puVar13,",name:",puVar13[1],",value:",puVar13[2]);
                    goto LAB_100ca3931;
                  }
                  *local_50 = lVar15;
                }
                else {
                  iVar7 = FUN_100c9fe80(pcVar23,"CPS");
                  plVar3 = local_50;
                  if (iVar7 != 0) {
                    iVar7 = FUN_100c9fe80(puVar13[1],"userNotice");
                    if (iVar7 != 0) {
                      uVar25 = 0x8a;
                      uVar22 = 0x10e;
                      goto LAB_100ca36b3;
                    }
                    if (*(char *)puVar13[2] == '@') {
                      lVar15 = FUN_100c9d950(param_2,(char *)puVar13[2] + 1);
                      if (lVar15 == 0) {
                        FUN_100c62ee0(0x22,0x83,0x87,"v3_cpols.c",0x100);
                        FUN_100c642a0(6,"section:",*puVar13,",name:",puVar13[1],",value:",puVar13[2]
                                     );
                      }
                      else {
                        plVar16 = (long *)FUN_100c7fb90(&DAT_102254910);
                        plVar2 = local_88;
                        if (plVar16 == (long *)0x0) {
LAB_100ca38ee:
                          local_88 = plVar2;
                          FUN_100c62ee0(0x22,0x84,0x41,"v3_cpols.c",0x16f);
                          plVar16 = local_88;
                        }
                        else {
                          lVar17 = FUN_100bf6fe0(0xa5);
                          *plVar16 = lVar17;
                          if (lVar17 == 0) {
                            FUN_100c62ee0(0x22,0x84,0x44,"v3_cpols.c",0x12e);
                          }
                          else {
                            plVar18 = (long *)FUN_100c7fb90(&DAT_1022549a0);
                            plVar2 = plVar16;
                            if (plVar18 == (long *)0x0) goto LAB_100ca38ee;
                            plVar16[1] = (long)plVar18;
                            iVar7 = FUN_100c60800(lVar15);
                            if (0 < iVar7) {
                              iVar7 = 0;
                              do {
                                puVar13 = (undefined8 *)FUN_100c60820(lVar15,iVar7);
                                pcVar23 = (char *)puVar13[1];
                                iVar8 = _strcmp(pcVar23,"explicitText");
                                if (iVar8 == 0) {
                                  lVar17 = FUN_100c8b370(0x1a);
                                  plVar18[1] = lVar17;
                                  if (lVar17 == 0) goto LAB_100ca38ee;
                                  pcVar23 = (char *)puVar13[2];
                                  sVar21 = _strlen(pcVar23);
                                  uVar10 = (undefined4)sVar21;
LAB_100ca31b9:
                                  iVar8 = FUN_100c8b0b0(lVar17,pcVar23,uVar10);
                                  if (iVar8 == 0) goto LAB_100ca38ee;
                                }
                                else {
                                  iVar8 = _strcmp(pcVar23,"organization");
                                  if (iVar8 == 0) {
                                    plVar20 = (long *)*plVar18;
                                    if (plVar20 == (long *)0x0) {
                                      plVar20 = (long *)FUN_100c7fb90(&DAT_102254a30);
                                      if (plVar20 == (long *)0x0) goto LAB_100ca38ee;
                                      *plVar18 = (long)plVar20;
                                    }
                                    lVar17 = *plVar20;
                                    *(uint *)(lVar17 + 4) = (uint)!bVar1 * 4 + 0x16;
                                    pcVar23 = (char *)puVar13[2];
                                    sVar21 = _strlen(pcVar23);
                                    uVar10 = (undefined4)sVar21;
                                    goto LAB_100ca31b9;
                                  }
                                  iVar8 = _strcmp(pcVar23,"noticeNumbers");
                                  if (iVar8 != 0) {
                                    FUN_100c62ee0(0x22,0x84,0x8a,"v3_cpols.c",0x15f);
                                    FUN_100c642a0(6,"section:",*puVar13,",name:",puVar13[1],
                                                  ",value:",puVar13[2]);
                                    goto LAB_100ca391a;
                                  }
                                  lVar17 = *plVar18;
                                  if (lVar17 == 0) {
                                    lVar17 = FUN_100c7fb90(&DAT_102254a30);
                                    if (lVar17 == 0) goto LAB_100ca38ee;
                                    *plVar18 = lVar17;
                                  }
                                  lVar19 = FUN_100c9f650(puVar13[2]);
                                  if ((lVar19 == 0) || (iVar8 = FUN_100c60800(lVar19), iVar8 == 0))
                                  {
                                    FUN_100c62ee0(0x22,0x84,0x8d,"v3_cpols.c",0x156);
                                    FUN_100c642a0(6,"section:",*puVar13,",name:",puVar13[1],
                                                  ",value:",puVar13[2]);
                                    goto LAB_100ca391a;
                                  }
                                  uVar25 = *(undefined8 *)(lVar17 + 8);
                                  iVar8 = FUN_100c60800(lVar19);
                                  if (0 < iVar8) {
                                    iVar8 = 0;
                                    do {
                                      lVar17 = FUN_100c60820(lVar19,iVar8);
                                      lVar17 = FUN_100c9f240(0,*(undefined8 *)(lVar17 + 8));
                                      if (lVar17 == 0) {
                                        uVar22 = 0x8c;
                                        uVar24 = 0x180;
LAB_100ca34bf:
                                        FUN_100c62ee0(0x22,0x85,uVar22,"v3_cpols.c",uVar24);
                                        FUN_100c60790(uVar25,FUN_100c8b2f0);
                                        FUN_100c60790(lVar19,FUN_100c9f0c0);
                                        goto LAB_100ca391a;
                                      }
                                      iVar9 = FUN_100c604e0(uVar25,lVar17);
                                      if (iVar9 == 0) {
                                        uVar22 = 0x41;
                                        uVar24 = 0x189;
                                        goto LAB_100ca34bf;
                                      }
                                      iVar8 = iVar8 + 1;
                                      iVar9 = FUN_100c60800(lVar19);
                                    } while (iVar8 < iVar9);
                                  }
                                  FUN_100c60790(lVar19,FUN_100c9f0c0);
                                }
                                iVar7 = iVar7 + 1;
                                iVar8 = FUN_100c60800(lVar15);
                              } while (iVar7 < iVar8);
                            }
                            plVar18 = (long *)*plVar18;
                            if ((plVar18 == (long *)0x0) || ((plVar18[1] != 0 && (*plVar18 != 0))))
                            {
                              FUN_100c9d9c0(param_2,lVar15);
                              lVar15 = local_50[1];
                              if (lVar15 == 0) {
                                lVar15 = FUN_100c60010();
                                local_50[1] = lVar15;
                              }
                              iVar7 = FUN_100c604e0(lVar15,plVar16);
                              goto LAB_100ca3314;
                            }
                            FUN_100c62ee0(0x22,0x84,0x8e,"v3_cpols.c",0x168);
                          }
                        }
LAB_100ca391a:
                        FUN_100c801c0(plVar16,&DAT_102254910);
                        FUN_100c9d9c0(param_2,lVar15);
                      }
                    }
                    else {
                      FUN_100c62ee0(0x22,0x83,0x89,"v3_cpols.c",0xfa);
                      FUN_100c642a0(6,"section:",*puVar13,",name:",puVar13[1],",value:",puVar13[2]);
                    }
                    goto LAB_100ca3931;
                  }
                  if (local_50[1] == 0) {
                    lVar15 = FUN_100c60010();
                    local_50[1] = lVar15;
                  }
                  plVar16 = (long *)FUN_100c7fb90(&DAT_102254910);
                  if ((plVar16 == (long *)0x0) ||
                     (iVar7 = FUN_100c604e0(local_50[1],plVar16), iVar7 == 0)) goto LAB_100ca3867;
                  lVar15 = FUN_100bf6fe0(0xa4);
                  *plVar16 = lVar15;
                  if (lVar15 == 0) {
                    FUN_100c62ee0(0x22,0x83,0x44,"v3_cpols.c",0xee);
                    goto LAB_100ca3931;
                  }
                  lVar15 = FUN_100c8b370(0x16);
                  plVar16[1] = lVar15;
                  if (lVar15 == 0) goto LAB_100ca3867;
                  pcVar23 = (char *)puVar13[2];
                  sVar21 = _strlen(pcVar23);
                  iVar7 = FUN_100c8b0b0(lVar15,pcVar23,sVar21 & 0xffffffff);
LAB_100ca3314:
                  if (iVar7 == 0) goto LAB_100ca3867;
                }
                iVar6 = iVar6 + 1;
                iVar7 = FUN_100c60800(lVar14);
              } while (iVar6 < iVar7);
            }
            if (*local_50 != 0) {
              FUN_100c9d9c0(param_2,lVar14);
              goto LAB_100ca3391;
            }
            FUN_100c62ee0(0x22,0x83,0x8b,"v3_cpols.c",0x115);
          }
LAB_100ca3931:
          FUN_100c801c0(local_50,&DAT_102254880);
          FUN_100c9d9c0(param_2,lVar14);
          goto LAB_100ca394d;
        }
        uVar25 = 0x87;
        uVar22 = 0xac;
      }
      else {
        uVar25 = 0x86;
        uVar22 = 0xa0;
      }
LAB_100ca344b:
      FUN_100c62ee0(0x22,0x82,uVar25,"v3_cpols.c",uVar22);
      FUN_100c642a0(6,"section:",*puVar13,",name:",puVar13[1],",value:",puVar13[2]);
      goto LAB_100ca394d;
    }
    FUN_100c62ee0(0x22,0x82,0x22,"v3_cpols.c",0x98);
    lVar12 = 0;
LAB_100ca394d:
    FUN_100c60790(lVar12,FUN_100c9f0c0);
    FUN_100c60790(lVar11,FUN_100ca3a60);
  }
  return 0;
}

