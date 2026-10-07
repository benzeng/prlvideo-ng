
undefined8
FUN_10048f3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  long *plVar2;
  int *piVar3;
  QArrayData *pQVar4;
  uint *puVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  CHostHardwareInfo *this;
  long *plVar9;
  QString this_00;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  int *piVar17;
  undefined1 uVar18;
  QTypedArrayData<unsigned_short> *pQVar19;
  bool bVar20;
  long local_1f8;
  long *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  long *local_1d0 [2];
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  int *local_1a8;
  int *local_1a0;
  int *local_198;
  uint local_190;
  QArrayData *local_188;
  int *local_180;
  int *local_178;
  QArrayData *local_170;
  int *local_168;
  int *local_160;
  int *local_158;
  uint local_150;
  QArrayData *local_148;
  int *local_140;
  int *local_138;
  int *local_130;
  QArrayData *local_128;
  int *local_120;
  int *local_118;
  int *local_110;
  uint local_108;
  QArrayData *local_100;
  int *local_f8;
  int *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  Data *local_d8;
  Data *local_d0;
  Data *local_c8;
  uint local_c0;
  QTypedArrayData<unsigned_short> *local_b8;
  QArrayData *local_b0;
  int *local_a8;
  QArrayData *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  uint local_80;
  QArrayData *local_78;
  int *local_70;
  int *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  uint *local_50;
  QArrayData *local_48;
  uint *local_40;
  undefined1 local_31;
  
  lVar8 = FUN_1002a6010(param_4);
  iVar7 = -0x7ffcbffc;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == 4)) {
    iVar7 = *(int *)(lVar8 + 0x2c);
  }
  FUN_100119090(local_1d0,param_1,iVar7);
  lVar8 = 0;
  if (local_1d0[0] != (long *)0x0) {
    LOCK();
    *(int *)(local_1d0[0] + 1) = (int)local_1d0[0][1] + 1;
    UNLOCK();
    lVar8 = local_1d0[0][2];
    LOCK();
    plVar9 = local_1d0[0] + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)(*local_1d0[0] + 0x10))();
    }
  }
  if (iVar7 == 0) {
    local_1d8 = (QArrayData *)PTR_shared_null_100ba20d0;
    iVar7 = FUN_100488f00(param_4,&local_1d8,0x800);
    if (iVar7 < 0) {
      bVar20 = false;
    }
    else {
      this = operator_new(0x1c8);
      CHostHardwareInfo::CHostHardwareInfo(this);
      plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        (**(code **)(*(long *)this + 0x88))(this);
      }
      else {
        *(undefined4 *)(plVar9 + 1) = 1;
        plVar9[2] = (long)this;
        *plVar9 = (long)&PTR_FUN_100bfbb80;
      }
      if (*(int *)(local_1d8 + 4) == 0) {
        bVar20 = false;
        FUN_1008e3970("TCHOST","ToolsCenterHost",0,"prl_nettool return empty response");
      }
      else {
        local_48 = (QArrayData *)QString::fromAscii_helper("\n",1);
        QString::split(&local_40,&local_1d8,&local_48,0,1);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10048f52b;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_10048f52b:
        if ((int)local_40[2] < (int)local_40[3]) {
          local_1f8 = 0;
          do {
            if (1 < *local_40) {
              FUN_100022c80(&local_40,local_40[1]);
            }
            QString::remove(local_40 + ((int)local_40[2] + local_1f8) * 2 + 4,0xd,1);
            if (1 < *local_40) {
              FUN_100022c80(&local_40);
            }
            uVar13 = local_40[2];
            if (*(int *)(*(long *)(local_40 + ((int)uVar13 + local_1f8) * 2 + 4) + 4) != 0) {
              if (1 < *local_40) {
                FUN_100022c80(&local_40,local_40[1]);
                uVar13 = local_40[2];
              }
              puVar5 = local_40;
              local_58 = (QArrayData *)QString::fromAscii_helper(";",1);
              QString::split(&local_50,puVar5 + ((int)uVar13 + local_1f8) * 2 + 4,&local_58,0,1);
              if (*(int *)local_58 != -1) {
                if (*(int *)local_58 != 0) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + -1;
                  local_31 = *(int *)local_58 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10048f630;
                }
                QArrayData::deallocate(local_58,2,8);
              }
LAB_10048f630:
              uVar13 = local_50[2];
              if ((int)(local_50[3] - uVar13) < 2) {
                puVar12 = (undefined1 *)___cxa_allocate_exception(1);
                *puVar12 = 0;
                    /* WARNING: Subroutine does not return */
                ___cxa_throw(puVar12,PTR_typeinfo_100ba22d0,0);
              }
              if (1 < *local_50) {
                FUN_100022c80(&local_50,local_50[1]);
                uVar13 = local_50[2];
              }
              pQVar1 = *(QArrayData **)(local_50 + (long)(int)uVar13 * 2 + 4);
              if (1 < *(int *)pQVar1 + 1U) {
                LOCK();
                *(int *)pQVar1 = *(int *)pQVar1 + 1;
                local_31 = *(int *)pQVar1 != 0;
                UNLOCK();
              }
              if (1 < *local_50) {
                FUN_100022c80(&local_50,local_50[1]);
              }
              local_60 = *(QArrayData **)(local_50 + (long)(int)local_50[2] * 2 + 6);
              if (1 < *(int *)local_60 + 1U) {
                LOCK();
                *(int *)local_60 = *(int *)local_60 + 1;
                local_31 = *(int *)local_60 != 0;
                UNLOCK();
              }
              if (*(int *)(pQVar1 + 4) == 0) {
                puVar12 = (undefined1 *)___cxa_allocate_exception(1);
                *puVar12 = 0;
                    /* WARNING: Subroutine does not return */
                ___cxa_throw(puVar12,PTR_typeinfo_100ba22d0,0);
              }
              iVar7 = QString::compare_helper
                                (pQVar1 + *(long *)(pQVar1 + 0x10),*(int *)(pQVar1 + 4),
                                 "SEARCHDOMAIN",0xffffffff,1);
              if (iVar7 == 0) {
                CHostHardwareInfoBase::getNetworkSettings();
                CHwNetworkSettings::getGlobalNetwork();
                CHwGlobalNetwork::getSearchDomains();
                local_78 = (QArrayData *)QString::fromAscii_helper(" ",1);
                QString::split(&local_70,&local_60,&local_78,0,1);
                if (*(int *)local_78 != -1) {
                  if (*(int *)local_78 != 0) {
                    LOCK();
                    *(int *)local_78 = *(int *)local_78 + -1;
                    local_31 = *(int *)local_78 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048f844;
                  }
                  QArrayData::deallocate(local_78,2,8);
                }
LAB_10048f844:
                local_98 = local_70;
                if (*local_70 != -1) {
                  if (*local_70 == 0) {
                    QListData::detach((int)&local_98);
                    iVar7 = local_98[2];
                    if (iVar7 != local_98[3]) {
                      piVar15 = local_70 + (long)local_70[2] * 2 + 4;
                      piVar17 = local_98 + (long)iVar7 * 2 + 4;
                      lVar11 = (long)local_98[3] * 8 + (long)iVar7 * -8;
                      do {
                        piVar3 = *(int **)piVar15;
                        *(int **)piVar17 = piVar3;
                        if (1 < *piVar3 + 1U) {
                          LOCK();
                          *piVar3 = *piVar3 + 1;
                          local_31 = *piVar3 != 0;
                          UNLOCK();
                        }
                        piVar17 = piVar17 + 2;
                        piVar15 = piVar15 + 2;
                        lVar11 = lVar11 + -8;
                      } while (lVar11 != 0);
                    }
                  }
                  else {
                    LOCK();
                    *local_70 = *local_70 + 1;
                    local_31 = *local_70 != 0;
                    UNLOCK();
                  }
                }
                local_90 = local_98 + (long)local_98[2] * 2 + 4;
                local_88 = local_98 + (long)local_98[3] * 2 + 4;
                local_80 = 1;
                if (local_98[2] != local_98[3]) {
                  do {
                    pQVar4 = *(QArrayData **)local_90;
                    if (1 < *(int *)pQVar4 + 1U) {
                      LOCK();
                      *(int *)pQVar4 = *(int *)pQVar4 + 1;
                      local_31 = *(int *)pQVar4 != 0;
                      UNLOCK();
                    }
                    local_a0 = pQVar4;
                    if (local_80 != 0) {
                      if (0 < *(int *)(pQVar4 + 4)) {
                        FUN_10000c490(&local_68,&local_a0);
                      }
                      local_80 = 0;
                    }
                    if (*(int *)pQVar4 != -1) {
                      if (*(int *)pQVar4 != 0) {
                        LOCK();
                        *(int *)pQVar4 = *(int *)pQVar4 + -1;
                        local_31 = *(int *)pQVar4 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10048fe5d;
                      }
                      QArrayData::deallocate(pQVar4,2,8);
                    }
LAB_10048fe5d:
                    local_90 = local_90 + 2;
                    uVar13 = local_80 ^ 1;
                    bVar20 = local_80 != 1;
                    local_80 = uVar13;
                  } while ((bVar20) && (local_90 != local_88));
                }
                FUN_100013180(&local_98);
                CHostHardwareInfoBase::getNetworkSettings();
                uVar10 = CHwNetworkSettings::getGlobalNetwork();
                local_a8 = local_68;
                if (*local_68 != -1) {
                  if (*local_68 == 0) {
                    QListData::detach((int)&local_a8);
                    iVar7 = local_a8[2];
                    if (iVar7 != local_a8[3]) {
                      piVar15 = local_68 + (long)local_68[2] * 2 + 4;
                      piVar17 = local_a8 + (long)iVar7 * 2 + 4;
                      lVar11 = (long)local_a8[3] * 8 + (long)iVar7 * -8;
                      do {
                        piVar3 = *(int **)piVar15;
                        *(int **)piVar17 = piVar3;
                        if (1 < *piVar3 + 1U) {
                          LOCK();
                          *piVar3 = *piVar3 + 1;
                          local_31 = *piVar3 != 0;
                          UNLOCK();
                        }
                        piVar17 = piVar17 + 2;
                        piVar15 = piVar15 + 2;
                        lVar11 = lVar11 + -8;
                      } while (lVar11 != 0);
                    }
                  }
                  else {
                    LOCK();
                    *local_68 = *local_68 + 1;
                    local_31 = *local_68 != 0;
                    UNLOCK();
                  }
                }
                CHwGlobalNetwork::setSearchDomains(uVar10);
                FUN_100013180(&local_a8);
                FUN_100013180(&local_70);
                FUN_100013180(&local_68);
              }
              else {
                uVar13 = local_50[2];
                if ((int)(local_50[3] - uVar13) < 3) {
                  puVar12 = (undefined1 *)___cxa_allocate_exception(1);
                  *puVar12 = 0;
                    /* WARNING: Subroutine does not return */
                  ___cxa_throw(puVar12,PTR_typeinfo_100ba22d0,0);
                }
                if (1 < *local_50) {
                  FUN_100022c80(&local_50,local_50[1]);
                  uVar13 = local_50[2];
                }
                local_b0 = *(QArrayData **)(local_50 + (long)(int)uVar13 * 2 + 8);
                if (1 < *(int *)local_b0 + 1U) {
                  LOCK();
                  *(int *)local_b0 = *(int *)local_b0 + 1;
                  local_31 = *(int *)local_b0 != 0;
                  UNLOCK();
                }
                local_b8 = (QTypedArrayData<unsigned_short> *)0x0;
                plVar2 = *(long **)(plVar9[2] + 0x168);
                local_d8 = (Data *)*plVar2;
                if (*(int *)local_d8 != -1) {
                  if (*(int *)local_d8 == 0) {
                    QListData::detach((int)&local_d8);
                    lVar14 = (long)*(int *)(local_d8 + 8);
                    lVar11 = *plVar2;
                    if (((Data *)(lVar11 + (long)*(int *)(lVar11 + 8) * 8) != local_d8 + lVar14 * 8)
                       && (lVar16 = *(int *)(local_d8 + 0xc) - lVar14,
                          lVar16 != 0 && lVar14 <= *(int *)(local_d8 + 0xc))) {
                      _memcpy(local_d8 + lVar14 * 8 + 0x10,
                              (void *)(lVar11 + 0x10 + (long)*(int *)(lVar11 + 8) * 8),lVar16 * 8);
                    }
                  }
                  else {
                    LOCK();
                    *(int *)local_d8 = *(int *)local_d8 + 1;
                    local_31 = *(int *)local_d8 != 0;
                    UNLOCK();
                  }
                }
                local_d0 = local_d8 + (long)*(int *)(local_d8 + 8) * 8 + 0x10;
                local_c8 = local_d8 + (long)*(int *)(local_d8 + 0xc) * 8 + 0x10;
                local_c0 = 1;
                this_00.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
                if (*(int *)(local_d8 + 8) != *(int *)(local_d8 + 0xc)) {
                  pQVar19 = (QTypedArrayData<unsigned_short> *)0x0;
                  do {
                    if (local_c0 == 0) {
LAB_10048f9db:
                      local_d0 = local_d0 + 8;
                      local_c0 = 1;
                    }
                    else {
                      this_00.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_d0;
                      CHwNetAdapter::getMacAddress();
                      cVar6 = FUN_1006b7230(&local_e0,&local_60);
                      if (*(int *)local_e0 != -1) {
                        if (*(int *)local_e0 != 0) {
                          LOCK();
                          *(int *)local_e0 = *(int *)local_e0 + -1;
                          local_31 = *(int *)local_e0 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_10048f992;
                        }
                        QArrayData::deallocate(local_e0,2,8);
                      }
LAB_10048f992:
                      if (cVar6 == '\0') goto LAB_10048f9db;
                      local_d0 = local_d0 + 8;
                      uVar13 = local_c0 ^ 1;
                      bVar20 = local_c0 == 1;
                      pQVar19 = this_00.field0_0x0;
                      local_c0 = uVar13;
                      local_b8 = this_00.field0_0x0;
                      if (bVar20) break;
                    }
                    this_00.field0_0x0 = pQVar19;
                  } while (local_d0 != local_c8);
                }
                if (*(int *)local_d8 != -1) {
                  if (*(int *)local_d8 != 0) {
                    LOCK();
                    *(int *)local_d8 = *(int *)local_d8 + -1;
                    local_31 = *(int *)local_d8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10048fa38;
                  }
                  QListData::dispose(local_d8);
                }
LAB_10048fa38:
                if (this_00.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
                  this_00.field0_0x0 = operator_new(0x120);
                  CHwNetAdapter::CHwNetAdapter((CHwNetAdapter *)this_00.field0_0x0);
                  local_e8 = local_60;
                  if (1 < *(int *)local_60 + 1U) {
                    LOCK();
                    *(int *)local_60 = *(int *)local_60 + 1;
                    local_31 = *(int *)local_60 != 0;
                    UNLOCK();
                  }
                  local_b8 = this_00.field0_0x0;
                  CHwNetAdapter::setMacAddress(this_00);
                  if (*(int *)local_e8 != -1) {
                    if (*(int *)local_e8 != 0) {
                      LOCK();
                      *(int *)local_e8 = *(int *)local_e8 + -1;
                      local_31 = *(int *)local_e8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048fabe;
                    }
                    QArrayData::deallocate(local_e8,2,8);
                  }
LAB_10048fabe:
                  FUN_1000f55b0(*(undefined8 *)(plVar9[2] + 0x168),&local_b8);
                }
                iVar7 = QString::compare_helper
                                  (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                                   "DNS",0xffffffff,1);
                if (iVar7 == 0) {
                  CHwNetAdapter::getDnsIPAddresses();
                  local_100 = (QArrayData *)QString::fromAscii_helper(" ",1);
                  QString::split(&local_f8,&local_b0,&local_100,0,1);
                  if (*(int *)local_100 != -1) {
                    if (*(int *)local_100 != 0) {
                      LOCK();
                      *(int *)local_100 = *(int *)local_100 + -1;
                      local_31 = *(int *)local_100 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10048fcdc;
                    }
                    QArrayData::deallocate(local_100,2,8);
                  }
LAB_10048fcdc:
                  local_120 = local_f8;
                  if (*local_f8 != -1) {
                    if (*local_f8 == 0) {
                      QListData::detach((int)&local_120);
                      iVar7 = local_120[2];
                      if (iVar7 != local_120[3]) {
                        piVar15 = local_f8 + (long)local_f8[2] * 2 + 4;
                        piVar17 = local_120 + (long)iVar7 * 2 + 4;
                        lVar11 = (long)local_120[3] * 8 + (long)iVar7 * -8;
                        do {
                          piVar3 = *(int **)piVar15;
                          *(int **)piVar17 = piVar3;
                          if (1 < *piVar3 + 1U) {
                            LOCK();
                            *piVar3 = *piVar3 + 1;
                            local_31 = *piVar3 != 0;
                            UNLOCK();
                          }
                          piVar17 = piVar17 + 2;
                          piVar15 = piVar15 + 2;
                          lVar11 = lVar11 + -8;
                        } while (lVar11 != 0);
                      }
                    }
                    else {
                      LOCK();
                      *local_f8 = *local_f8 + 1;
                      local_31 = *local_f8 != 0;
                      UNLOCK();
                    }
                  }
                  local_118 = local_120 + (long)local_120[2] * 2 + 4;
                  local_110 = local_120 + (long)local_120[3] * 2 + 4;
                  local_108 = 1;
                  if (local_120[2] != local_120[3]) {
                    do {
                      pQVar4 = *(QArrayData **)local_118;
                      if (1 < *(int *)pQVar4 + 1U) {
                        LOCK();
                        *(int *)pQVar4 = *(int *)pQVar4 + 1;
                        local_31 = *(int *)pQVar4 != 0;
                        UNLOCK();
                      }
                      local_128 = pQVar4;
                      if (local_108 != 0) {
                        if (0 < *(int *)(pQVar4 + 4)) {
                          FUN_10000c490(&local_f0,&local_128);
                        }
                        local_108 = 0;
                      }
                      if (*(int *)pQVar4 != -1) {
                        if (*(int *)pQVar4 != 0) {
                          LOCK();
                          *(int *)pQVar4 = *(int *)pQVar4 + -1;
                          local_31 = *(int *)pQVar4 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100490067;
                        }
                        QArrayData::deallocate(pQVar4,2,8);
                      }
LAB_100490067:
                      local_118 = local_118 + 2;
                      uVar13 = local_108 ^ 1;
                      bVar20 = local_108 != 1;
                      local_108 = uVar13;
                    } while ((bVar20) && (local_118 != local_110));
                  }
                  FUN_100013180(&local_120);
                  pQVar19 = local_b8;
                  local_130 = local_f0;
                  if (*local_f0 != -1) {
                    if (*local_f0 == 0) {
                      QListData::detach((int)&local_130);
                      iVar7 = local_130[2];
                      if (iVar7 != local_130[3]) {
                        piVar15 = local_f0 + (long)local_f0[2] * 2 + 4;
                        piVar17 = local_130 + (long)iVar7 * 2 + 4;
                        lVar11 = (long)local_130[3] * 8 + (long)iVar7 * -8;
                        do {
                          piVar3 = *(int **)piVar15;
                          *(int **)piVar17 = piVar3;
                          if (1 < *piVar3 + 1U) {
                            LOCK();
                            *piVar3 = *piVar3 + 1;
                            local_31 = *piVar3 != 0;
                            UNLOCK();
                          }
                          piVar17 = piVar17 + 2;
                          piVar15 = piVar15 + 2;
                          lVar11 = lVar11 + -8;
                        } while (lVar11 != 0);
                      }
                    }
                    else {
                      LOCK();
                      *local_f0 = *local_f0 + 1;
                      local_31 = *local_f0 != 0;
                      UNLOCK();
                    }
                  }
                  CHwNetAdapter::setDnsIPAddresses(pQVar19);
                  FUN_100013180(&local_130);
                  FUN_100013180(&local_f8);
                  FUN_100013180(&local_f0);
                }
                else {
                  iVar7 = QString::compare_helper
                                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                                     "DHCP",0xffffffff,1);
                  bVar20 = SUB81(this_00.field0_0x0,0);
                  if (iVar7 == 0) {
                    iVar7 = QString::compare_helper
                                      (local_b0 + *(long *)(local_b0 + 0x10),*(int *)(local_b0 + 4),
                                       "TRUE",0xffffffff,1);
                    if (iVar7 == 0) {
                      CHwNetAdapter::setConfigureWithDhcp(bVar20);
                    }
                    else {
                      CHwNetAdapter::setConfigureWithDhcp(bVar20);
                    }
                  }
                  else {
                    iVar7 = QString::compare_helper
                                      (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4)
                                       ,"DHCPV6",0xffffffff,1);
                    if (iVar7 == 0) {
                      iVar7 = QString::compare_helper
                                        (local_b0 + *(long *)(local_b0 + 0x10),
                                         *(int *)(local_b0 + 4),"TRUE",0xffffffff,1);
                      if (iVar7 == 0) {
                        CHwNetAdapter::setConfigureWithDhcpIPv6(bVar20);
                      }
                      else {
                        CHwNetAdapter::setConfigureWithDhcpIPv6(bVar20);
                      }
                    }
                    else {
                      iVar7 = QString::compare_helper
                                        (pQVar1 + *(long *)(pQVar1 + 0x10),
                                         *(undefined4 *)(pQVar1 + 4),"IP",0xffffffff,1);
                      if (iVar7 == 0) {
                        CHwNetAdapter::getNetAddresses();
                        local_148 = (QArrayData *)QString::fromAscii_helper(" ",1);
                        QString::split(&local_140,&local_b0,&local_148,0,1);
                        if (*(int *)local_148 != -1) {
                          if (*(int *)local_148 != 0) {
                            LOCK();
                            *(int *)local_148 = *(int *)local_148 + -1;
                            local_31 = *(int *)local_148 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1004901c6;
                          }
                          QArrayData::deallocate(local_148,2,8);
                        }
LAB_1004901c6:
                        local_168 = local_140;
                        if (*local_140 != -1) {
                          if (*local_140 == 0) {
                            QListData::detach((int)&local_168);
                            iVar7 = local_168[2];
                            if (iVar7 != local_168[3]) {
                              piVar15 = local_140 + (long)local_140[2] * 2 + 4;
                              piVar17 = local_168 + (long)iVar7 * 2 + 4;
                              lVar11 = (long)local_168[3] * 8 + (long)iVar7 * -8;
                              do {
                                piVar3 = *(int **)piVar15;
                                *(int **)piVar17 = piVar3;
                                if (1 < *piVar3 + 1U) {
                                  LOCK();
                                  *piVar3 = *piVar3 + 1;
                                  local_31 = *piVar3 != 0;
                                  UNLOCK();
                                }
                                piVar17 = piVar17 + 2;
                                piVar15 = piVar15 + 2;
                                lVar11 = lVar11 + -8;
                              } while (lVar11 != 0);
                            }
                          }
                          else {
                            LOCK();
                            *local_140 = *local_140 + 1;
                            local_31 = *local_140 != 0;
                            UNLOCK();
                          }
                        }
                        local_160 = local_168 + (long)local_168[2] * 2 + 4;
                        local_158 = local_168 + (long)local_168[3] * 2 + 4;
                        local_150 = 1;
                        if (local_168[2] != local_168[3]) {
                          do {
                            pQVar4 = *(QArrayData **)local_160;
                            if (1 < *(int *)pQVar4 + 1U) {
                              LOCK();
                              *(int *)pQVar4 = *(int *)pQVar4 + 1;
                              local_31 = *(int *)pQVar4 != 0;
                              UNLOCK();
                            }
                            local_170 = pQVar4;
                            if (local_150 != 0) {
                              if (0 < *(int *)(pQVar4 + 4)) {
                                FUN_10000c490(&local_138,&local_170);
                              }
                              local_150 = 0;
                            }
                            if (*(int *)pQVar4 != -1) {
                              if (*(int *)pQVar4 != 0) {
                                LOCK();
                                *(int *)pQVar4 = *(int *)pQVar4 + -1;
                                local_31 = *(int *)pQVar4 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1004905d2;
                              }
                              QArrayData::deallocate(pQVar4,2,8);
                            }
LAB_1004905d2:
                            local_160 = local_160 + 2;
                            uVar13 = local_150 ^ 1;
                            bVar20 = local_150 != 1;
                            local_150 = uVar13;
                          } while ((bVar20) && (local_160 != local_158));
                        }
                        FUN_100013180(&local_168);
                        pQVar19 = local_b8;
                        local_178 = local_138;
                        if (*local_138 != -1) {
                          if (*local_138 == 0) {
                            QListData::detach((int)&local_178);
                            iVar7 = local_178[2];
                            if (iVar7 != local_178[3]) {
                              piVar15 = local_138 + (long)local_138[2] * 2 + 4;
                              piVar17 = local_178 + (long)iVar7 * 2 + 4;
                              lVar11 = (long)local_178[3] * 8 + (long)iVar7 * -8;
                              do {
                                piVar3 = *(int **)piVar15;
                                *(int **)piVar17 = piVar3;
                                if (1 < *piVar3 + 1U) {
                                  LOCK();
                                  *piVar3 = *piVar3 + 1;
                                  local_31 = *piVar3 != 0;
                                  UNLOCK();
                                }
                                piVar17 = piVar17 + 2;
                                piVar15 = piVar15 + 2;
                                lVar11 = lVar11 + -8;
                              } while (lVar11 != 0);
                            }
                          }
                          else {
                            LOCK();
                            *local_138 = *local_138 + 1;
                            local_31 = *local_138 != 0;
                            UNLOCK();
                          }
                        }
                        CHwNetAdapter::setNetAddresses(pQVar19);
                        FUN_100013180(&local_178);
                        FUN_100013180(&local_140);
                        FUN_100013180(&local_138);
                      }
                      else {
                        iVar7 = QString::compare_helper
                                          (pQVar1 + *(long *)(pQVar1 + 0x10),
                                           *(undefined4 *)(pQVar1 + 4),"GATEWAY",0xffffffff,1);
                        if (iVar7 != 0) {
                          puVar12 = (undefined1 *)___cxa_allocate_exception(1);
                          *puVar12 = 0;
                    /* WARNING: Subroutine does not return */
                          ___cxa_throw(puVar12,PTR_typeinfo_100ba22d0,0);
                        }
                        local_188 = (QArrayData *)QString::fromAscii_helper(" ",1);
                        QString::split(&local_180,&local_b0,&local_188,1,1);
                        if (*(int *)local_188 != -1) {
                          if (*(int *)local_188 != 0) {
                            LOCK();
                            *(int *)local_188 = *(int *)local_188 + -1;
                            local_31 = *(int *)local_188 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_10048fc38;
                          }
                          QArrayData::deallocate(local_188,2,8);
                        }
LAB_10048fc38:
                        local_1a8 = local_180;
                        if (*local_180 != -1) {
                          if (*local_180 == 0) {
                            QListData::detach((int)&local_1a8);
                            iVar7 = local_1a8[2];
                            if (iVar7 != local_1a8[3]) {
                              piVar15 = local_180 + (long)local_180[2] * 2 + 4;
                              piVar17 = local_1a8 + (long)iVar7 * 2 + 4;
                              lVar11 = (long)local_1a8[3] * 8 + (long)iVar7 * -8;
                              do {
                                piVar3 = *(int **)piVar15;
                                *(int **)piVar17 = piVar3;
                                if (1 < *piVar3 + 1U) {
                                  LOCK();
                                  *piVar3 = *piVar3 + 1;
                                  local_31 = *piVar3 != 0;
                                  UNLOCK();
                                }
                                piVar17 = piVar17 + 2;
                                piVar15 = piVar15 + 2;
                                lVar11 = lVar11 + -8;
                                this_00.field0_0x0 = local_b8;
                              } while (lVar11 != 0);
                            }
                          }
                          else {
                            LOCK();
                            *local_180 = *local_180 + 1;
                            local_31 = *local_180 != 0;
                            UNLOCK();
                          }
                        }
                        local_1a0 = local_1a8 + (long)local_1a8[2] * 2 + 4;
                        local_198 = local_1a8 + (long)local_1a8[3] * 2 + 4;
                        local_190 = 1;
                        if (local_1a8[2] != local_1a8[3]) {
                          do {
                            local_1b0 = *(QArrayData **)local_1a0;
                            if (1 < *(int *)local_1b0 + 1U) {
                              LOCK();
                              *(int *)local_1b0 = *(int *)local_1b0 + 1;
                              local_31 = *(int *)local_1b0 != 0;
                              UNLOCK();
                            }
                            if (local_190 != 0) {
                              iVar7 = QString::indexOf(&local_1b0,0x3a,0,1);
                              if (iVar7 < 0) {
                                local_1c0 = local_1b0;
                                if (1 < *(int *)local_1b0 + 1U) {
                                  LOCK();
                                  *(int *)local_1b0 = *(int *)local_1b0 + 1;
                                  local_31 = *(int *)local_1b0 != 0;
                                  UNLOCK();
                                }
                                CHwNetAdapter::setDefaultGateway(this_00);
                                if (*(int *)local_1c0 != -1) {
                                  if (*(int *)local_1c0 != 0) {
                                    LOCK();
                                    *(int *)local_1c0 = *(int *)local_1c0 + -1;
                                    local_31 = *(int *)local_1c0 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100490487;
                                  }
                                  QArrayData::deallocate(local_1c0,2,8);
                                }
                              }
                              else {
                                local_1b8 = local_1b0;
                                if (1 < *(int *)local_1b0 + 1U) {
                                  LOCK();
                                  *(int *)local_1b0 = *(int *)local_1b0 + 1;
                                  local_31 = *(int *)local_1b0 != 0;
                                  UNLOCK();
                                }
                                CHwNetAdapter::setDefaultGatewayIPv6(this_00);
                                if (*(int *)local_1b8 != -1) {
                                  if (*(int *)local_1b8 != 0) {
                                    LOCK();
                                    *(int *)local_1b8 = *(int *)local_1b8 + -1;
                                    local_31 = *(int *)local_1b8 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_100490487;
                                  }
                                  QArrayData::deallocate(local_1b8,2,8);
                                }
                              }
LAB_100490487:
                              local_190 = 0;
                            }
                            if (*(int *)local_1b0 != -1) {
                              if (*(int *)local_1b0 != 0) {
                                LOCK();
                                *(int *)local_1b0 = *(int *)local_1b0 + -1;
                                local_31 = *(int *)local_1b0 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_1004904c7;
                              }
                              QArrayData::deallocate(local_1b0,2,8);
                            }
LAB_1004904c7:
                            local_1a0 = local_1a0 + 2;
                            uVar13 = local_190 ^ 1;
                            bVar20 = local_190 != 1;
                            local_190 = uVar13;
                          } while ((bVar20) && (local_1a0 != local_198));
                        }
                        FUN_100013180(&local_1a8);
                        FUN_100013180(&local_180);
                      }
                    }
                  }
                }
                if (*(int *)local_b0 != -1) {
                  if (*(int *)local_b0 != 0) {
                    LOCK();
                    *(int *)local_b0 = *(int *)local_b0 + -1;
                    local_31 = *(int *)local_b0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100490708;
                  }
                  QArrayData::deallocate(local_b0,2,8);
                }
              }
LAB_100490708:
              if (*(int *)local_60 != -1) {
                if (*(int *)local_60 != 0) {
                  LOCK();
                  *(int *)local_60 = *(int *)local_60 + -1;
                  local_31 = *(int *)local_60 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100490738;
                }
                QArrayData::deallocate(local_60,2,8);
              }
LAB_100490738:
              if (*(int *)pQVar1 != -1) {
                if (*(int *)pQVar1 != 0) {
                  LOCK();
                  *(int *)pQVar1 = *(int *)pQVar1 + -1;
                  local_31 = *(int *)pQVar1 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100490765;
                }
                QArrayData::deallocate(pQVar1,2,8);
              }
LAB_100490765:
              FUN_100013180(&local_50);
              uVar13 = local_40[2];
            }
            local_1f8 = local_1f8 + 1;
          } while (local_1f8 < (long)(int)local_40[3] - (long)(int)uVar13);
        }
        bVar20 = true;
        FUN_100013180(&local_40);
      }
      if (bVar20) {
        uVar18 = false;
        if (plVar9 != (long *)0x0) {
          uVar18 = (undefined1)plVar9[2];
        }
        CBaseNode::toString(SUB81(&local_1e0,0),(bool)uVar18);
        FUN_100128660(lVar8);
        if (*(int *)local_1e0 != -1) {
          if (*(int *)local_1e0 != 0) {
            LOCK();
            *(int *)local_1e0 = *(int *)local_1e0 + -1;
            local_31 = *(int *)local_1e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004910b3;
          }
          QArrayData::deallocate(local_1e0,2,8);
        }
      }
LAB_1004910b3:
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (*(int *)local_1d8 != -1) {
      if (*(int *)local_1d8 != 0) {
        LOCK();
        *(int *)local_1d8 = *(int *)local_1d8 + -1;
        local_31 = *(int *)local_1d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10049110b;
      }
      QArrayData::deallocate(local_1d8,2,8);
    }
LAB_10049110b:
    if (!bVar20) goto LAB_10049110f;
  }
  else {
LAB_10049110f:
    FUN_1001248c0(lVar8);
  }
  uVar10 = DAT_1011c3650;
  FUN_10011cf50(&local_1f0);
  cVar6 = '\0';
  if (local_1f0 != (long *)0x0) {
    cVar6 = (char)local_1f0[2];
  }
  CBaseNode::toString(SUB81(&local_1e8,0),(bool)(cVar6 + '\b'));
  FUN_100063e20(uVar10,&local_1e8,0x1389,param_1,0);
  if (*(int *)local_1e8 != -1) {
    if (*(int *)local_1e8 != 0) {
      LOCK();
      *(int *)local_1e8 = *(int *)local_1e8 + -1;
      local_31 = *(int *)local_1e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004911ba;
    }
    QArrayData::deallocate(local_1e8,2,8);
  }
LAB_1004911ba:
  if (local_1f0 != (long *)0x0) {
    LOCK();
    plVar9 = local_1f0 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)(*local_1f0 + 0x10))();
    }
  }
  if (local_1d0[0] != (long *)0x0) {
    LOCK();
    plVar9 = local_1d0[0] + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)(*local_1d0[0] + 0x10))();
    }
  }
  return 0;
}

