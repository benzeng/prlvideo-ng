
undefined8 FUN_1006a0df0(undefined8 param_1,QString *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  QArrayData *pQVar4;
  undefined *puVar5;
  Data *pDVar6;
  char cVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 *puVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  undefined8 uVar13;
  long lVar14;
  Data *pDVar15;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  Data *local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  Data *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  Data *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  Data *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  Data *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  Data *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  Data *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QFileInfo local_188 [8];
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  Data *local_150;
  QFileInfo local_148 [8];
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  Data *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  Data *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  Data *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  Data *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  Data *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  Data *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  pvVar8 = _valloc(0x4000);
  plVar9 = operator_new(0x20);
  *(undefined4 *)(plVar9 + 1) = 1;
  plVar9[2] = (long)pvVar8;
  *plVar9 = (long)&PTR_FUN_10116d3e0;
  plVar9[3] = (long)FUN_1006a6000;
  LOCK();
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  UNLOCK();
  plVar3 = (long *)*param_3;
  *param_3 = (long)plVar9;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar14 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  LOCK();
  plVar3 = plVar9 + 1;
  lVar14 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar14 == 1) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((*param_3 == 0) || (lVar14 = *(long *)(*param_3 + 0x10), lVar14 == 0)) {
    FUN_1008e3970("","dimg",0,"Error: memory allocation failed");
    return 0x80021020;
  }
  ___bzero(lVar14,0x4000);
  FUN_10069e530(&local_40);
  puVar5 = PTR_shared_null_100ba20d0;
  if ((local_40 == (long *)0x0) || (local_40[2] == 0)) {
    uVar13 = 0x80021020;
    FUN_1008e3970("","dimg",0,"Error: VMDK monolithic parser creation failed");
    goto LAB_1006a315b;
  }
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_58 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_10069f960(&local_48,&local_50,&local_58);
  local_68 = (QArrayData *)puVar5;
  puVar10 = (undefined8 *)QString::sprintf((char *)&local_68,"%08x",0xffffffff);
  pQVar4 = (QArrayData *)*puVar10;
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_60 = pQVar4;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a0f74;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006a0f74:
  FUN_1006849d0(param_1,&local_78);
  lVar14 = local_40[2];
  local_80 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
  local_88 = (QArrayData *)QString::fromAscii_helper("version",7);
  local_90 = (Data *)PTR_shared_null_100ba2188;
  local_a0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_98,&local_a0,1,0,10,0x20);
  FUN_10000c490(&local_90,&local_98);
  cVar7 = FUN_1006ad450(lVar14,&local_80,&local_88,&local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a1068;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1006a1068:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a109e;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1006a109e:
  pDVar6 = local_90;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a1198;
    }
    iVar2 = *(int *)(local_90 + 0xc);
    if (iVar2 != *(int *)(local_90 + 8)) {
      lVar14 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar2 * -8;
      pDVar15 = local_90 + (long)iVar2 * 8 + 8;
      do {
        pQVar11 = *(QArrayData **)pDVar15;
        if (*(int *)pQVar11 == 0) {
LAB_1006a1170:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar15;
            goto LAB_1006a1170;
          }
        }
        pDVar15 = pDVar15 + -8;
        lVar14 = lVar14 + 8;
      } while (lVar14 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1006a1198:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a11c8;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1006a11c8:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a11f8;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006a11f8:
  if (cVar7 == '\0') {
    uVar13 = 0x80021011;
    FUN_1008e3970("","dimg",0,"Error: can\'t insert %s into embedded descriptor!","version");
  }
  else {
    lVar14 = local_40[2];
    local_a8 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
    local_b0 = (QArrayData *)QString::fromAscii_helper("encoding",8);
    local_b8 = (Data *)PTR_shared_null_100ba2188;
    pQVar11 = (QArrayData *)QString::fromAscii_helper("UTF-8",5);
    local_c0 = pQVar11;
    FUN_10000c490(&local_b8,&local_c0);
    cVar7 = FUN_1006ad450(lVar14,&local_a8,&local_b0,&local_b8);
    if (*(int *)pQVar11 != -1) {
      if (*(int *)pQVar11 != 0) {
        LOCK();
        *(int *)pQVar11 = *(int *)pQVar11 + -1;
        local_31 = *(int *)pQVar11 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a12c3;
      }
      QArrayData::deallocate(pQVar11,2,8);
    }
LAB_1006a12c3:
    pDVar6 = local_b8;
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a1361;
      }
      iVar2 = *(int *)(local_b8 + 0xc);
      if (iVar2 != *(int *)(local_b8 + 8)) {
        lVar14 = (long)*(int *)(local_b8 + 8) * 8 + (long)iVar2 * -8;
        pDVar15 = local_b8 + (long)iVar2 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar15;
          if (*(int *)pQVar11 == 0) {
LAB_1006a1340:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar15;
              goto LAB_1006a1340;
            }
          }
          pDVar15 = pDVar15 + -8;
          lVar14 = lVar14 + 8;
        } while (lVar14 != 0);
      }
      QListData::dispose(pDVar6);
    }
LAB_1006a1361:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a139e;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1006a139e:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a13d4;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1006a13d4:
    if (cVar7 == '\0') {
      uVar13 = 0x80021011;
      FUN_1008e3970("","dimg",0,"Error: can\'t insert %s into embedded descriptor!","encoding");
    }
    else {
      lVar14 = local_40[2];
      local_c8 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
      local_d0 = (QArrayData *)QString::fromAscii_helper("CID",3);
      local_d8 = (Data *)PTR_shared_null_100ba2188;
      FUN_10000c490(&local_d8,&local_48);
      cVar7 = FUN_1006ad450(lVar14,&local_c8,&local_d0,&local_d8);
      pDVar6 = local_d8;
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006a14e0;
        }
        iVar2 = *(int *)(local_d8 + 0xc);
        if (iVar2 != *(int *)(local_d8 + 8)) {
          lVar14 = (long)*(int *)(local_d8 + 8) * 8 + (long)iVar2 * -8;
          pDVar15 = local_d8 + (long)iVar2 * 8 + 8;
          do {
            pQVar11 = *(QArrayData **)pDVar15;
            if (*(int *)pQVar11 == 0) {
LAB_1006a14bf:
              QArrayData::deallocate(pQVar11,2,8);
            }
            else if (*(int *)pQVar11 != -1) {
              LOCK();
              *(int *)pQVar11 = *(int *)pQVar11 + -1;
              local_31 = *(int *)pQVar11 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar11 = *(QArrayData **)pDVar15;
                goto LAB_1006a14bf;
              }
            }
            pDVar15 = pDVar15 + -8;
            lVar14 = lVar14 + 8;
          } while (lVar14 != 0);
        }
        QListData::dispose(pDVar6);
      }
LAB_1006a14e0:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006a151d;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1006a151d:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006a1553;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1006a1553:
      if (cVar7 == '\0') {
        uVar13 = 0x80021011;
        FUN_1008e3970("","dimg",0,"Error: can\'t insert %s into embedded descriptor!","CID");
      }
      else {
        lVar14 = local_40[2];
        local_e0 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
        local_e8 = (QArrayData *)QString::fromAscii_helper("parentCID",9);
        local_f0 = (Data *)PTR_shared_null_100ba2188;
        FUN_10000c490(&local_f0,&local_60);
        cVar7 = FUN_1006ad450(lVar14,&local_e0,&local_e8,&local_f0);
        pDVar6 = local_f0;
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006a165a;
          }
          iVar2 = *(int *)(local_f0 + 0xc);
          if (iVar2 != *(int *)(local_f0 + 8)) {
            lVar14 = (long)*(int *)(local_f0 + 8) * 8 + (long)iVar2 * -8;
            pDVar15 = local_f0 + (long)iVar2 * 8 + 8;
            do {
              pQVar11 = *(QArrayData **)pDVar15;
              if (*(int *)pQVar11 == 0) {
LAB_1006a1639:
                QArrayData::deallocate(pQVar11,2,8);
              }
              else if (*(int *)pQVar11 != -1) {
                LOCK();
                *(int *)pQVar11 = *(int *)pQVar11 + -1;
                local_31 = *(int *)pQVar11 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar11 = *(QArrayData **)pDVar15;
                  goto LAB_1006a1639;
                }
              }
              pDVar15 = pDVar15 + -8;
              lVar14 = lVar14 + 8;
            } while (lVar14 != 0);
          }
          QListData::dispose(pDVar6);
        }
LAB_1006a165a:
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006a1697;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_1006a1697:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006a16cd;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_1006a16cd:
        if (cVar7 == '\0') {
          uVar13 = 0x80021011;
          FUN_1008e3970("","dimg",0,"Error: can\'t insert %s into embedded descriptor!","parentCID")
          ;
        }
        else {
          lVar14 = local_40[2];
          local_f8 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
          local_100 = (QArrayData *)QString::fromAscii_helper("isNativeSnapshot",0x10);
          local_108 = (Data *)PTR_shared_null_100ba2188;
          pQVar11 = (QArrayData *)QString::fromAscii_helper("no",2);
          local_110 = pQVar11;
          FUN_10000c490(&local_108,&local_110);
          cVar7 = FUN_1006ad450(lVar14,&local_f8,&local_100,&local_108);
          if (*(int *)pQVar11 != -1) {
            if (*(int *)pQVar11 != 0) {
              LOCK();
              *(int *)pQVar11 = *(int *)pQVar11 + -1;
              local_31 = *(int *)pQVar11 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006a1791;
            }
            QArrayData::deallocate(pQVar11,2,8);
          }
LAB_1006a1791:
          pDVar6 = local_108;
          if (*(int *)local_108 != -1) {
            if (*(int *)local_108 != 0) {
              LOCK();
              *(int *)local_108 = *(int *)local_108 + -1;
              local_31 = *(int *)local_108 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006a181d;
            }
            iVar2 = *(int *)(local_108 + 0xc);
            if (iVar2 != *(int *)(local_108 + 8)) {
              lVar14 = (long)*(int *)(local_108 + 8) * 8 + (long)iVar2 * -8;
              pDVar15 = local_108 + (long)iVar2 * 8 + 8;
              do {
                pQVar11 = *(QArrayData **)pDVar15;
                if (*(int *)pQVar11 == 0) {
LAB_1006a17fc:
                  QArrayData::deallocate(pQVar11,2,8);
                }
                else if (*(int *)pQVar11 != -1) {
                  LOCK();
                  *(int *)pQVar11 = *(int *)pQVar11 + -1;
                  local_31 = *(int *)pQVar11 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar11 = *(QArrayData **)pDVar15;
                    goto LAB_1006a17fc;
                  }
                }
                pDVar15 = pDVar15 + -8;
                lVar14 = lVar14 + 8;
              } while (lVar14 != 0);
            }
            QListData::dispose(pDVar6);
          }
LAB_1006a181d:
          if (*(int *)local_100 != -1) {
            if (*(int *)local_100 != 0) {
              LOCK();
              *(int *)local_100 = *(int *)local_100 + -1;
              local_31 = *(int *)local_100 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006a185a;
            }
            QArrayData::deallocate(local_100,2,8);
          }
LAB_1006a185a:
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              local_31 = *(int *)local_f8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006a1890;
            }
            QArrayData::deallocate(local_f8,2,8);
          }
LAB_1006a1890:
          if (cVar7 == '\0') {
            uVar13 = 0x80021011;
            FUN_1008e3970("","dimg",0,"Error: can\'t insert %s into embedded descriptor!",
                          "isNativeSnapshot");
          }
          else {
            lVar14 = local_40[2];
            local_118 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
            local_120 = (QArrayData *)QString::fromAscii_helper("createType",10);
            local_128 = (Data *)PTR_shared_null_100ba2188;
            pQVar11 = (QArrayData *)QString::fromAscii_helper("monolithicSparse",0x10);
            local_130 = pQVar11;
            FUN_10000c490(&local_128,&local_130);
            cVar7 = FUN_1006ad450(lVar14,&local_118,&local_120,&local_128);
            if (*(int *)pQVar11 != -1) {
              if (*(int *)pQVar11 != 0) {
                LOCK();
                *(int *)pQVar11 = *(int *)pQVar11 + -1;
                local_31 = *(int *)pQVar11 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006a1954;
              }
              QArrayData::deallocate(pQVar11,2,8);
            }
LAB_1006a1954:
            pDVar6 = local_128;
            if (*(int *)local_128 != -1) {
              if (*(int *)local_128 != 0) {
                LOCK();
                *(int *)local_128 = *(int *)local_128 + -1;
                local_31 = *(int *)local_128 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006a19e0;
              }
              iVar2 = *(int *)(local_128 + 0xc);
              if (iVar2 != *(int *)(local_128 + 8)) {
                lVar14 = (long)*(int *)(local_128 + 8) * 8 + (long)iVar2 * -8;
                pDVar15 = local_128 + (long)iVar2 * 8 + 8;
                do {
                  pQVar11 = *(QArrayData **)pDVar15;
                  if (*(int *)pQVar11 == 0) {
LAB_1006a19bf:
                    QArrayData::deallocate(pQVar11,2,8);
                  }
                  else if (*(int *)pQVar11 != -1) {
                    LOCK();
                    *(int *)pQVar11 = *(int *)pQVar11 + -1;
                    local_31 = *(int *)pQVar11 != 0;
                    UNLOCK();
                    if (!(bool)local_31) {
                      pQVar11 = *(QArrayData **)pDVar15;
                      goto LAB_1006a19bf;
                    }
                  }
                  pDVar15 = pDVar15 + -8;
                  lVar14 = lVar14 + 8;
                } while (lVar14 != 0);
              }
              QListData::dispose(pDVar6);
            }
LAB_1006a19e0:
            if (*(int *)local_120 != -1) {
              if (*(int *)local_120 != 0) {
                LOCK();
                *(int *)local_120 = *(int *)local_120 + -1;
                local_31 = *(int *)local_120 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006a1a1d;
              }
              QArrayData::deallocate(local_120,2,8);
            }
LAB_1006a1a1d:
            if (*(int *)local_118 != -1) {
              if (*(int *)local_118 != 0) {
                LOCK();
                *(int *)local_118 = *(int *)local_118 + -1;
                local_31 = *(int *)local_118 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006a1a53;
              }
              QArrayData::deallocate(local_118,2,8);
            }
LAB_1006a1a53:
            if (cVar7 == '\0') {
              uVar13 = 0x80021011;
              FUN_1008e3970("","dimg",0,"Error: can\'t insert %s into embedded descriptor!",
                            "createType");
            }
            else {
              lVar14 = local_40[2];
              local_138 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
              QFileInfo::QFileInfo(local_148,param_2);
              QFileInfo::fileName();
              local_150 = (Data *)PTR_shared_null_100ba2188;
              pQVar11 = (QArrayData *)QString::fromAscii_helper("RW",2);
              local_158 = pQVar11;
              FUN_10000c490(&local_150,&local_158);
              local_168 = (QArrayData *)QString::fromAscii_helper("%1",2);
              QString::arg(&local_160,&local_168,param_1,0,10,0x20);
              FUN_10000c490(&local_150,&local_160);
              pQVar12 = (QArrayData *)QString::fromAscii_helper("SPARSE",6);
              local_170 = pQVar12;
              FUN_10000c490(&local_150,&local_170);
              cVar7 = FUN_1006ad450(lVar14,&local_138,&local_140,&local_150);
              if (*(int *)pQVar12 != -1) {
                if (*(int *)pQVar12 != 0) {
                  LOCK();
                  *(int *)pQVar12 = *(int *)pQVar12 + -1;
                  local_31 = *(int *)pQVar12 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006a1baa;
                }
                QArrayData::deallocate(pQVar12,2,8);
              }
LAB_1006a1baa:
              if (*(int *)local_160 != -1) {
                if (*(int *)local_160 != 0) {
                  LOCK();
                  *(int *)local_160 = *(int *)local_160 + -1;
                  local_31 = *(int *)local_160 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006a1be0;
                }
                QArrayData::deallocate(local_160,2,8);
              }
LAB_1006a1be0:
              if (*(int *)local_168 != -1) {
                if (*(int *)local_168 != 0) {
                  LOCK();
                  *(int *)local_168 = *(int *)local_168 + -1;
                  local_31 = *(int *)local_168 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006a1c16;
                }
                QArrayData::deallocate(local_168,2,8);
              }
LAB_1006a1c16:
              if (*(int *)pQVar11 != -1) {
                if (*(int *)pQVar11 != 0) {
                  LOCK();
                  *(int *)pQVar11 = *(int *)pQVar11 + -1;
                  local_31 = *(int *)pQVar11 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006a1c45;
                }
                QArrayData::deallocate(pQVar11,2,8);
              }
LAB_1006a1c45:
              pDVar6 = local_150;
              if (*(int *)local_150 != -1) {
                if (*(int *)local_150 != 0) {
                  LOCK();
                  *(int *)local_150 = *(int *)local_150 + -1;
                  local_31 = *(int *)local_150 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006a1cda;
                }
                iVar2 = *(int *)(local_150 + 0xc);
                if (iVar2 != *(int *)(local_150 + 8)) {
                  lVar14 = (long)*(int *)(local_150 + 8) * 8 + (long)iVar2 * -8;
                  pDVar15 = local_150 + (long)iVar2 * 8 + 8;
                  do {
                    pQVar11 = *(QArrayData **)pDVar15;
                    if (*(int *)pQVar11 == 0) {
LAB_1006a1cb2:
                      QArrayData::deallocate(pQVar11,2,8);
                    }
                    else if (*(int *)pQVar11 != -1) {
                      LOCK();
                      *(int *)pQVar11 = *(int *)pQVar11 + -1;
                      local_31 = *(int *)pQVar11 != 0;
                      UNLOCK();
                      if (!(bool)local_31) {
                        pQVar11 = *(QArrayData **)pDVar15;
                        goto LAB_1006a1cb2;
                      }
                    }
                    pDVar15 = pDVar15 + -8;
                    lVar14 = lVar14 + 8;
                  } while (lVar14 != 0);
                }
                QListData::dispose(pDVar6);
              }
LAB_1006a1cda:
              if (*(int *)local_140 != -1) {
                if (*(int *)local_140 != 0) {
                  LOCK();
                  *(int *)local_140 = *(int *)local_140 + -1;
                  local_31 = *(int *)local_140 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006a1d10;
                }
                QArrayData::deallocate(local_140,2,8);
              }
LAB_1006a1d10:
              QFileInfo::~QFileInfo(local_148);
              if (*(int *)local_138 != -1) {
                if (*(int *)local_138 != 0) {
                  LOCK();
                  *(int *)local_138 = *(int *)local_138 + -1;
                  local_31 = *(int *)local_138 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006a1d52;
                }
                QArrayData::deallocate(local_138,2,8);
              }
LAB_1006a1d52:
              if (cVar7 == '\0') {
                QFileInfo::QFileInfo(local_188,param_2);
                QFileInfo::fileName();
                QString::toUtf8();
                FUN_1008e3970("","dimg",0,"Error: can\'t insert %s into embedded descriptor!",
                              local_178 + *(long *)(local_178 + 0x10));
                if (*(int *)local_178 != -1) {
                  if (*(int *)local_178 != 0) {
                    LOCK();
                    *(int *)local_178 = *(int *)local_178 + -1;
                    local_31 = *(int *)local_178 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006a2053;
                  }
                  QArrayData::deallocate(local_178,1,8);
                }
LAB_1006a2053:
                if (*(int *)local_180 != -1) {
                  if (*(int *)local_180 != 0) {
                    LOCK();
                    *(int *)local_180 = *(int *)local_180 + -1;
                    local_31 = *(int *)local_180 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006a2089;
                  }
                  QArrayData::deallocate(local_180,2,8);
                }
LAB_1006a2089:
                uVar13 = 0x80021011;
                QFileInfo::~QFileInfo(local_188);
              }
              else {
                lVar14 = local_40[2];
                local_190 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                local_198 = (QArrayData *)QString::fromAscii_helper("ddb.virtualHWVersion",0x14);
                local_1a0 = (Data *)PTR_shared_null_100ba2188;
                local_1b0 = (QArrayData *)QString::fromAscii_helper("%1",2);
                QString::arg(&local_1a8,&local_1b0,8,0,10,0x20);
                FUN_10000c490(&local_1a0,&local_1a8);
                cVar7 = FUN_1006ad450(lVar14,&local_190,&local_198,&local_1a0);
                if (*(int *)local_1a8 != -1) {
                  if (*(int *)local_1a8 != 0) {
                    LOCK();
                    *(int *)local_1a8 = *(int *)local_1a8 + -1;
                    local_31 = *(int *)local_1a8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006a1e44;
                  }
                  QArrayData::deallocate(local_1a8,2,8);
                }
LAB_1006a1e44:
                if (*(int *)local_1b0 != -1) {
                  if (*(int *)local_1b0 != 0) {
                    LOCK();
                    *(int *)local_1b0 = *(int *)local_1b0 + -1;
                    local_31 = *(int *)local_1b0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006a1e7a;
                  }
                  QArrayData::deallocate(local_1b0,2,8);
                }
LAB_1006a1e7a:
                pDVar6 = local_1a0;
                if (*(int *)local_1a0 != -1) {
                  if (*(int *)local_1a0 != 0) {
                    LOCK();
                    *(int *)local_1a0 = *(int *)local_1a0 + -1;
                    local_31 = *(int *)local_1a0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006a2124;
                  }
                  iVar2 = *(int *)(local_1a0 + 0xc);
                  if (iVar2 != *(int *)(local_1a0 + 8)) {
                    lVar14 = (long)*(int *)(local_1a0 + 8) * 8 + (long)iVar2 * -8;
                    pDVar15 = local_1a0 + (long)iVar2 * 8 + 8;
                    do {
                      pQVar11 = *(QArrayData **)pDVar15;
                      if (*(int *)pQVar11 == 0) {
LAB_1006a20fc:
                        QArrayData::deallocate(pQVar11,2,8);
                      }
                      else if (*(int *)pQVar11 != -1) {
                        LOCK();
                        *(int *)pQVar11 = *(int *)pQVar11 + -1;
                        local_31 = *(int *)pQVar11 != 0;
                        UNLOCK();
                        if (!(bool)local_31) {
                          pQVar11 = *(QArrayData **)pDVar15;
                          goto LAB_1006a20fc;
                        }
                      }
                      pDVar15 = pDVar15 + -8;
                      lVar14 = lVar14 + 8;
                    } while (lVar14 != 0);
                  }
                  QListData::dispose(pDVar6);
                }
LAB_1006a2124:
                if (*(int *)local_198 != -1) {
                  if (*(int *)local_198 != 0) {
                    LOCK();
                    *(int *)local_198 = *(int *)local_198 + -1;
                    local_31 = *(int *)local_198 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006a215a;
                  }
                  QArrayData::deallocate(local_198,2,8);
                }
LAB_1006a215a:
                if (*(int *)local_190 != -1) {
                  if (*(int *)local_190 != 0) {
                    LOCK();
                    *(int *)local_190 = *(int *)local_190 + -1;
                    local_31 = *(int *)local_190 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1006a2190;
                  }
                  QArrayData::deallocate(local_190,2,8);
                }
LAB_1006a2190:
                if (cVar7 == '\0') {
                  uVar13 = 0x80021011;
                  FUN_1008e3970("","dimg",0,"Error: can\'t insert %s into embedded descriptor!",
                                "ddb.virtualHWVersion");
                }
                else {
                  lVar14 = local_40[2];
                  local_1b8 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                  local_1c0 = (QArrayData *)QString::fromAscii_helper("ddb.longContentID",0x11);
                  local_1c8 = (Data *)PTR_shared_null_100ba2188;
                  local_1d8 = (QArrayData *)QString::fromAscii_helper("%1",2);
                  QString::arg(&local_1d0,&local_1d8,&local_50,0,0x20);
                  FUN_10000c490(&local_1c8,&local_1d0);
                  cVar7 = FUN_1006ad450(lVar14,&local_1b8,&local_1c0,&local_1c8);
                  if (*(int *)local_1d0 != -1) {
                    if (*(int *)local_1d0 != 0) {
                      LOCK();
                      *(int *)local_1d0 = *(int *)local_1d0 + -1;
                      local_31 = *(int *)local_1d0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006a227b;
                    }
                    QArrayData::deallocate(local_1d0,2,8);
                  }
LAB_1006a227b:
                  if (*(int *)local_1d8 != -1) {
                    if (*(int *)local_1d8 != 0) {
                      LOCK();
                      *(int *)local_1d8 = *(int *)local_1d8 + -1;
                      local_31 = *(int *)local_1d8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006a22b1;
                    }
                    QArrayData::deallocate(local_1d8,2,8);
                  }
LAB_1006a22b1:
                  pDVar6 = local_1c8;
                  if (*(int *)local_1c8 != -1) {
                    if (*(int *)local_1c8 != 0) {
                      LOCK();
                      *(int *)local_1c8 = *(int *)local_1c8 + -1;
                      local_31 = *(int *)local_1c8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006a2385;
                    }
                    iVar2 = *(int *)(local_1c8 + 0xc);
                    if (iVar2 != *(int *)(local_1c8 + 8)) {
                      lVar14 = (long)*(int *)(local_1c8 + 8) * 8 + (long)iVar2 * -8;
                      pDVar15 = local_1c8 + (long)iVar2 * 8 + 8;
                      do {
                        pQVar11 = *(QArrayData **)pDVar15;
                        if (*(int *)pQVar11 == 0) {
LAB_1006a235d:
                          QArrayData::deallocate(pQVar11,2,8);
                        }
                        else if (*(int *)pQVar11 != -1) {
                          LOCK();
                          *(int *)pQVar11 = *(int *)pQVar11 + -1;
                          local_31 = *(int *)pQVar11 != 0;
                          UNLOCK();
                          if (!(bool)local_31) {
                            pQVar11 = *(QArrayData **)pDVar15;
                            goto LAB_1006a235d;
                          }
                        }
                        pDVar15 = pDVar15 + -8;
                        lVar14 = lVar14 + 8;
                      } while (lVar14 != 0);
                    }
                    QListData::dispose(pDVar6);
                  }
LAB_1006a2385:
                  if (*(int *)local_1c0 != -1) {
                    if (*(int *)local_1c0 != 0) {
                      LOCK();
                      *(int *)local_1c0 = *(int *)local_1c0 + -1;
                      local_31 = *(int *)local_1c0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006a23bb;
                    }
                    QArrayData::deallocate(local_1c0,2,8);
                  }
LAB_1006a23bb:
                  if (*(int *)local_1b8 != -1) {
                    if (*(int *)local_1b8 != 0) {
                      LOCK();
                      *(int *)local_1b8 = *(int *)local_1b8 + -1;
                      local_31 = *(int *)local_1b8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1006a23f1;
                    }
                    QArrayData::deallocate(local_1b8,2,8);
                  }
LAB_1006a23f1:
                  if (cVar7 == '\0') {
                    uVar13 = 0x80021011;
                    FUN_1008e3970("","dimg",0,"Error: can\'t insert %s into embedded descriptor!",
                                  "ddb.longContentID");
                  }
                  else {
                    lVar14 = local_40[2];
                    local_1e0 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                    local_1e8 = (QArrayData *)QString::fromAscii_helper("ddb.uuid",8);
                    local_1f0 = (Data *)PTR_shared_null_100ba2188;
                    local_200 = (QArrayData *)QString::fromAscii_helper("%1",2);
                    QString::arg(&local_1f8,&local_200,&local_58,0,0x20);
                    FUN_10000c490(&local_1f0,&local_1f8);
                    cVar7 = FUN_1006ad450(lVar14,&local_1e0,&local_1e8,&local_1f0);
                    if (*(int *)local_1f8 != -1) {
                      if (*(int *)local_1f8 != 0) {
                        LOCK();
                        *(int *)local_1f8 = *(int *)local_1f8 + -1;
                        local_31 = *(int *)local_1f8 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1006a24dc;
                      }
                      QArrayData::deallocate(local_1f8,2,8);
                    }
LAB_1006a24dc:
                    if (*(int *)local_200 != -1) {
                      if (*(int *)local_200 != 0) {
                        LOCK();
                        *(int *)local_200 = *(int *)local_200 + -1;
                        local_31 = *(int *)local_200 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1006a2512;
                      }
                      QArrayData::deallocate(local_200,2,8);
                    }
LAB_1006a2512:
                    pDVar6 = local_1f0;
                    if (*(int *)local_1f0 != -1) {
                      if (*(int *)local_1f0 != 0) {
                        LOCK();
                        *(int *)local_1f0 = *(int *)local_1f0 + -1;
                        local_31 = *(int *)local_1f0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1006a25e6;
                      }
                      iVar2 = *(int *)(local_1f0 + 0xc);
                      if (iVar2 != *(int *)(local_1f0 + 8)) {
                        lVar14 = (long)*(int *)(local_1f0 + 8) * 8 + (long)iVar2 * -8;
                        pDVar15 = local_1f0 + (long)iVar2 * 8 + 8;
                        do {
                          pQVar11 = *(QArrayData **)pDVar15;
                          if (*(int *)pQVar11 == 0) {
LAB_1006a25be:
                            QArrayData::deallocate(pQVar11,2,8);
                          }
                          else if (*(int *)pQVar11 != -1) {
                            LOCK();
                            *(int *)pQVar11 = *(int *)pQVar11 + -1;
                            local_31 = *(int *)pQVar11 != 0;
                            UNLOCK();
                            if (!(bool)local_31) {
                              pQVar11 = *(QArrayData **)pDVar15;
                              goto LAB_1006a25be;
                            }
                          }
                          pDVar15 = pDVar15 + -8;
                          lVar14 = lVar14 + 8;
                        } while (lVar14 != 0);
                      }
                      QListData::dispose(pDVar6);
                    }
LAB_1006a25e6:
                    if (*(int *)local_1e8 != -1) {
                      if (*(int *)local_1e8 != 0) {
                        LOCK();
                        *(int *)local_1e8 = *(int *)local_1e8 + -1;
                        local_31 = *(int *)local_1e8 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1006a261c;
                      }
                      QArrayData::deallocate(local_1e8,2,8);
                    }
LAB_1006a261c:
                    if (*(int *)local_1e0 != -1) {
                      if (*(int *)local_1e0 != 0) {
                        LOCK();
                        *(int *)local_1e0 = *(int *)local_1e0 + -1;
                        local_31 = *(int *)local_1e0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1006a2652;
                      }
                      QArrayData::deallocate(local_1e0,2,8);
                    }
LAB_1006a2652:
                    if (cVar7 == '\0') {
                      uVar13 = 0x80021011;
                      FUN_1008e3970("","dimg",0,"Error: can\'t insert %s into embedded descriptor!",
                                    "ddb.uuid");
                    }
                    else {
                      lVar14 = local_40[2];
                      local_208 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                      local_210 = (QArrayData *)
                                  QString::fromAscii_helper("ddb.geometry.cylinders",0x16);
                      local_218 = (Data *)PTR_shared_null_100ba2188;
                      local_228 = (QArrayData *)QString::fromAscii_helper("%1",2);
                      QString::arg(&local_220,&local_228,local_70,0,10,0x20);
                      FUN_10000c490(&local_218,&local_220);
                      cVar7 = FUN_1006ad450(lVar14,&local_208,&local_210,&local_218);
                      if (*(int *)local_220 != -1) {
                        if (*(int *)local_220 != 0) {
                          LOCK();
                          *(int *)local_220 = *(int *)local_220 + -1;
                          local_31 = *(int *)local_220 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1006a2742;
                        }
                        QArrayData::deallocate(local_220,2,8);
                      }
LAB_1006a2742:
                      if (*(int *)local_228 != -1) {
                        if (*(int *)local_228 != 0) {
                          LOCK();
                          *(int *)local_228 = *(int *)local_228 + -1;
                          local_31 = *(int *)local_228 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1006a2778;
                        }
                        QArrayData::deallocate(local_228,2,8);
                      }
LAB_1006a2778:
                      pDVar6 = local_218;
                      if (*(int *)local_218 != -1) {
                        if (*(int *)local_218 != 0) {
                          LOCK();
                          *(int *)local_218 = *(int *)local_218 + -1;
                          local_31 = *(int *)local_218 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1006a281b;
                        }
                        iVar2 = *(int *)(local_218 + 0xc);
                        if (iVar2 != *(int *)(local_218 + 8)) {
                          lVar14 = (long)*(int *)(local_218 + 8) * 8 + (long)iVar2 * -8;
                          pDVar15 = local_218 + (long)iVar2 * 8 + 8;
                          do {
                            pQVar11 = *(QArrayData **)pDVar15;
                            if (*(int *)pQVar11 == 0) {
LAB_1006a27f3:
                              QArrayData::deallocate(pQVar11,2,8);
                            }
                            else if (*(int *)pQVar11 != -1) {
                              LOCK();
                              *(int *)pQVar11 = *(int *)pQVar11 + -1;
                              local_31 = *(int *)pQVar11 != 0;
                              UNLOCK();
                              if (!(bool)local_31) {
                                pQVar11 = *(QArrayData **)pDVar15;
                                goto LAB_1006a27f3;
                              }
                            }
                            pDVar15 = pDVar15 + -8;
                            lVar14 = lVar14 + 8;
                          } while (lVar14 != 0);
                        }
                        QListData::dispose(pDVar6);
                      }
LAB_1006a281b:
                      if (*(int *)local_210 != -1) {
                        if (*(int *)local_210 != 0) {
                          LOCK();
                          *(int *)local_210 = *(int *)local_210 + -1;
                          local_31 = *(int *)local_210 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1006a2851;
                        }
                        QArrayData::deallocate(local_210,2,8);
                      }
LAB_1006a2851:
                      if (*(int *)local_208 != -1) {
                        if (*(int *)local_208 != 0) {
                          LOCK();
                          *(int *)local_208 = *(int *)local_208 + -1;
                          local_31 = *(int *)local_208 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1006a2887;
                        }
                        QArrayData::deallocate(local_208,2,8);
                      }
LAB_1006a2887:
                      if (cVar7 == '\0') {
                        uVar13 = 0x80021011;
                        FUN_1008e3970("","dimg",0,
                                      "Error: can\'t insert %s into embedded descriptor!",
                                      "ddb.geometry.cylinders");
                      }
                      else {
                        lVar14 = local_40[2];
                        local_230 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                        local_238 = (QArrayData *)
                                    QString::fromAscii_helper("ddb.geometry.heads",0x12);
                        local_240 = (Data *)PTR_shared_null_100ba2188;
                        local_250 = (QArrayData *)QString::fromAscii_helper("%1",2);
                        QString::arg(&local_248,&local_250,local_74,0,10,0x20);
                        FUN_10000c490(&local_240,&local_248);
                        cVar7 = FUN_1006ad450(lVar14,&local_230,&local_238,&local_240);
                        if (*(int *)local_248 != -1) {
                          if (*(int *)local_248 != 0) {
                            LOCK();
                            *(int *)local_248 = *(int *)local_248 + -1;
                            local_31 = *(int *)local_248 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1006a297e;
                          }
                          QArrayData::deallocate(local_248,2,8);
                        }
LAB_1006a297e:
                        if (*(int *)local_250 != -1) {
                          if (*(int *)local_250 != 0) {
                            LOCK();
                            *(int *)local_250 = *(int *)local_250 + -1;
                            local_31 = *(int *)local_250 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1006a29b4;
                          }
                          QArrayData::deallocate(local_250,2,8);
                        }
LAB_1006a29b4:
                        pDVar6 = local_240;
                        if (*(int *)local_240 != -1) {
                          if (*(int *)local_240 != 0) {
                            LOCK();
                            *(int *)local_240 = *(int *)local_240 + -1;
                            local_31 = *(int *)local_240 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1006a2a3e;
                          }
                          iVar2 = *(int *)(local_240 + 0xc);
                          if (iVar2 != *(int *)(local_240 + 8)) {
                            lVar14 = (long)*(int *)(local_240 + 8) * 8 + (long)iVar2 * -8;
                            pDVar15 = local_240 + (long)iVar2 * 8 + 8;
                            do {
                              pQVar11 = *(QArrayData **)pDVar15;
                              if (*(int *)pQVar11 == 0) {
LAB_1006a2a1d:
                                QArrayData::deallocate(pQVar11,2,8);
                              }
                              else if (*(int *)pQVar11 != -1) {
                                LOCK();
                                *(int *)pQVar11 = *(int *)pQVar11 + -1;
                                local_31 = *(int *)pQVar11 != 0;
                                UNLOCK();
                                if (!(bool)local_31) {
                                  pQVar11 = *(QArrayData **)pDVar15;
                                  goto LAB_1006a2a1d;
                                }
                              }
                              pDVar15 = pDVar15 + -8;
                              lVar14 = lVar14 + 8;
                            } while (lVar14 != 0);
                          }
                          QListData::dispose(pDVar6);
                        }
LAB_1006a2a3e:
                        if (*(int *)local_238 != -1) {
                          if (*(int *)local_238 != 0) {
                            LOCK();
                            *(int *)local_238 = *(int *)local_238 + -1;
                            local_31 = *(int *)local_238 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1006a2a7b;
                          }
                          QArrayData::deallocate(local_238,2,8);
                        }
LAB_1006a2a7b:
                        if (*(int *)local_230 != -1) {
                          if (*(int *)local_230 != 0) {
                            LOCK();
                            *(int *)local_230 = *(int *)local_230 + -1;
                            local_31 = *(int *)local_230 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1006a2ab1;
                          }
                          QArrayData::deallocate(local_230,2,8);
                        }
LAB_1006a2ab1:
                        if (cVar7 == '\0') {
                          uVar13 = 0x80021011;
                          FUN_1008e3970("","dimg",0,
                                        "Error: can\'t insert %s into embedded descriptor!",
                                        "ddb.geometry.heads");
                        }
                        else {
                          lVar14 = local_40[2];
                          local_258 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                          local_260 = (QArrayData *)
                                      QString::fromAscii_helper("ddb.geometry.sectors",0x14);
                          local_268 = (Data *)PTR_shared_null_100ba2188;
                          local_278 = (QArrayData *)QString::fromAscii_helper("%1",2);
                          QString::arg(&local_270,&local_278,local_78,0,10,0x20);
                          FUN_10000c490(&local_268,&local_270);
                          cVar7 = FUN_1006ad450(lVar14,&local_258,&local_260,&local_268);
                          if (*(int *)local_270 != -1) {
                            if (*(int *)local_270 != 0) {
                              LOCK();
                              *(int *)local_270 = *(int *)local_270 + -1;
                              local_31 = *(int *)local_270 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1006a2ba8;
                            }
                            QArrayData::deallocate(local_270,2,8);
                          }
LAB_1006a2ba8:
                          if (*(int *)local_278 != -1) {
                            if (*(int *)local_278 != 0) {
                              LOCK();
                              *(int *)local_278 = *(int *)local_278 + -1;
                              local_31 = *(int *)local_278 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1006a2bde;
                            }
                            QArrayData::deallocate(local_278,2,8);
                          }
LAB_1006a2bde:
                          pDVar6 = local_268;
                          if (*(int *)local_268 != -1) {
                            if (*(int *)local_268 != 0) {
                              LOCK();
                              *(int *)local_268 = *(int *)local_268 + -1;
                              local_31 = *(int *)local_268 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1006a2c68;
                            }
                            iVar2 = *(int *)(local_268 + 0xc);
                            if (iVar2 != *(int *)(local_268 + 8)) {
                              lVar14 = (long)*(int *)(local_268 + 8) * 8 + (long)iVar2 * -8;
                              pDVar15 = local_268 + (long)iVar2 * 8 + 8;
                              do {
                                pQVar11 = *(QArrayData **)pDVar15;
                                if (*(int *)pQVar11 == 0) {
LAB_1006a2c47:
                                  QArrayData::deallocate(pQVar11,2,8);
                                }
                                else if (*(int *)pQVar11 != -1) {
                                  LOCK();
                                  *(int *)pQVar11 = *(int *)pQVar11 + -1;
                                  local_31 = *(int *)pQVar11 != 0;
                                  UNLOCK();
                                  if (!(bool)local_31) {
                                    pQVar11 = *(QArrayData **)pDVar15;
                                    goto LAB_1006a2c47;
                                  }
                                }
                                pDVar15 = pDVar15 + -8;
                                lVar14 = lVar14 + 8;
                              } while (lVar14 != 0);
                            }
                            QListData::dispose(pDVar6);
                          }
LAB_1006a2c68:
                          if (*(int *)local_260 != -1) {
                            if (*(int *)local_260 != 0) {
                              LOCK();
                              *(int *)local_260 = *(int *)local_260 + -1;
                              local_31 = *(int *)local_260 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1006a2c9e;
                            }
                            QArrayData::deallocate(local_260,2,8);
                          }
LAB_1006a2c9e:
                          if (*(int *)local_258 != -1) {
                            if (*(int *)local_258 != 0) {
                              LOCK();
                              *(int *)local_258 = *(int *)local_258 + -1;
                              local_31 = *(int *)local_258 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1006a2cdb;
                            }
                            QArrayData::deallocate(local_258,2,8);
                          }
LAB_1006a2cdb:
                          if (cVar7 == '\0') {
                            uVar13 = 0x80021011;
                            FUN_1008e3970("","dimg",0,
                                          "Error: can\'t insert %s into embedded descriptor!",
                                          "ddb.geometry.sectors");
                          }
                          else {
                            lVar14 = local_40[2];
                            local_280 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                            local_288 = (QArrayData *)
                                        QString::fromAscii_helper("ddb.geometry.adapterType",0x18);
                            local_290 = (Data *)PTR_shared_null_100ba2188;
                            local_2a0 = (QArrayData *)QString::fromAscii_helper("%1",2);
                            local_2a8 = (QArrayData *)QString::fromAscii_helper("ide",3);
                            QString::arg(&local_298,&local_2a0,&local_2a8,0,0x20);
                            FUN_10000c490(&local_290,&local_298);
                            cVar7 = FUN_1006ad450(lVar14,&local_280,&local_288,&local_290);
                            if (*(int *)local_298 != -1) {
                              if (*(int *)local_298 != 0) {
                                LOCK();
                                *(int *)local_298 = *(int *)local_298 + -1;
                                local_31 = *(int *)local_298 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1006a2de8;
                              }
                              QArrayData::deallocate(local_298,2,8);
                            }
LAB_1006a2de8:
                            if (*(int *)local_2a8 != -1) {
                              if (*(int *)local_2a8 != 0) {
                                LOCK();
                                *(int *)local_2a8 = *(int *)local_2a8 + -1;
                                local_31 = *(int *)local_2a8 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1006a2e1e;
                              }
                              QArrayData::deallocate(local_2a8,2,8);
                            }
LAB_1006a2e1e:
                            if (*(int *)local_2a0 != -1) {
                              if (*(int *)local_2a0 != 0) {
                                LOCK();
                                *(int *)local_2a0 = *(int *)local_2a0 + -1;
                                local_31 = *(int *)local_2a0 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1006a2e54;
                              }
                              QArrayData::deallocate(local_2a0,2,8);
                            }
LAB_1006a2e54:
                            pDVar6 = local_290;
                            if (*(int *)local_290 != -1) {
                              if (*(int *)local_290 != 0) {
                                LOCK();
                                *(int *)local_290 = *(int *)local_290 + -1;
                                local_31 = *(int *)local_290 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1006a2ede;
                              }
                              iVar2 = *(int *)(local_290 + 0xc);
                              if (iVar2 != *(int *)(local_290 + 8)) {
                                lVar14 = (long)*(int *)(local_290 + 8) * 8 + (long)iVar2 * -8;
                                pDVar15 = local_290 + (long)iVar2 * 8 + 8;
                                do {
                                  pQVar11 = *(QArrayData **)pDVar15;
                                  if (*(int *)pQVar11 == 0) {
LAB_1006a2ebd:
                                    QArrayData::deallocate(pQVar11,2,8);
                                  }
                                  else if (*(int *)pQVar11 != -1) {
                                    LOCK();
                                    *(int *)pQVar11 = *(int *)pQVar11 + -1;
                                    local_31 = *(int *)pQVar11 != 0;
                                    UNLOCK();
                                    if (!(bool)local_31) {
                                      pQVar11 = *(QArrayData **)pDVar15;
                                      goto LAB_1006a2ebd;
                                    }
                                  }
                                  pDVar15 = pDVar15 + -8;
                                  lVar14 = lVar14 + 8;
                                } while (lVar14 != 0);
                              }
                              QListData::dispose(pDVar6);
                            }
LAB_1006a2ede:
                            if (*(int *)local_288 != -1) {
                              if (*(int *)local_288 != 0) {
                                LOCK();
                                *(int *)local_288 = *(int *)local_288 + -1;
                                local_31 = *(int *)local_288 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1006a2f14;
                              }
                              QArrayData::deallocate(local_288,2,8);
                            }
LAB_1006a2f14:
                            if (*(int *)local_280 != -1) {
                              if (*(int *)local_280 != 0) {
                                LOCK();
                                *(int *)local_280 = *(int *)local_280 + -1;
                                local_31 = *(int *)local_280 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1006a2f51;
                              }
                              QArrayData::deallocate(local_280,2,8);
                            }
LAB_1006a2f51:
                            if (cVar7 == '\0') {
                              uVar13 = 0x80021011;
                              FUN_1008e3970("","dimg",0,
                                            "Error: can\'t insert %s into embedded descriptor!",
                                            "ddb.geometry.adapterType");
                            }
                            else {
                              uVar13 = 0;
                              if (*param_3 != 0) {
                                uVar13 = *(undefined8 *)(*param_3 + 0x10);
                              }
                              lVar14 = FUN_1006b1200(local_40[2],uVar13,0x4000,0);
                              if (lVar14 == 0) {
                                uVar13 = 0x80021027;
                                FUN_1008e3970("","dimg",0,"Error: write to buffer failed");
                              }
                              else {
                                *param_4 = 0x20;
                                uVar13 = 0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a30cb;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006a30cb:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a30fb;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006a30fb:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a312b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006a312b:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a315b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006a315b:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar14 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)(*local_40 + 0x10))(local_40);
    }
  }
  return uVar13;
}

