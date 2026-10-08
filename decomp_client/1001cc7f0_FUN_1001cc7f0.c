
void FUN_1001cc7f0(long param_1)

{
  int *piVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  size_t sVar8;
  int *piVar9;
  int *piVar10;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  QString local_30;
  undefined1 local_21;
  
  FUN_100df1c80(&local_40);
  local_48 = local_40;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_48);
      iVar5 = local_48[2];
      if (iVar5 != local_48[3]) {
        local_40 = local_40 + (long)local_40[2] * 2 + 4;
        piVar9 = local_48 + (long)iVar5 * 2 + 4;
        lVar7 = (long)local_48[3] * 8 + (long)iVar5 * -8;
        do {
          piVar10 = *(int **)local_40;
          *(int **)piVar9 = piVar10;
          if (1 < *piVar10 + 1U) {
            LOCK();
            *piVar10 = *piVar10 + 1;
            local_21 = *piVar10 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          local_40 = local_40 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_21 = *local_40 != 0;
      UNLOCK();
    }
  }
  if (*(int **)(param_1 + 0x18) != local_48) {
    local_38 = local_48;
    if (*local_48 != -1) {
      if (*local_48 == 0) {
        QListData::detach((int)&local_38);
        iVar5 = local_38[2];
        if (iVar5 != local_38[3]) {
          piVar9 = local_48 + (long)local_48[2] * 2 + 4;
          piVar10 = local_38 + (long)iVar5 * 2 + 4;
          lVar7 = (long)local_38[3] * 8 + (long)iVar5 * -8;
          do {
            piVar1 = *(int **)piVar9;
            *(int **)piVar10 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_21 = *piVar1 != 0;
              UNLOCK();
            }
            piVar10 = piVar10 + 2;
            piVar9 = piVar9 + 2;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *local_48 = *local_48 + 1;
        local_21 = *local_48 != 0;
        UNLOCK();
      }
    }
    piVar9 = *(int **)(param_1 + 0x18);
    *(int **)(param_1 + 0x18) = local_38;
    local_38 = piVar9;
    FUN_100039a80(&local_38);
  }
  FUN_100039a80(&local_48);
  puVar3 = PTR_s___mode_10230ff18;
  iVar5 = -1;
  if (PTR_s___mode_10230ff18 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s___mode_10230ff18);
    iVar5 = (int)sVar8;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
  FUN_100df1f90(&local_50,&local_40,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001cc9ad;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001cc9ad:
  iVar5 = QString::compare_helper
                    ((QArrayData *)(local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                     *(undefined4 *)(local_50.field0_0x0 + 4),PTR_s_pp_10230ff40,0xffffffff,1);
  if (((iVar5 != 0) &&
      (iVar5 = QString::compare_helper
                         ((QArrayData *)
                          (local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                          *(undefined4 *)(local_50.field0_0x0 + 4),PTR_s_cache_10230ff50,0xffffffff,
                          1), iVar5 != 0)) &&
     (iVar5 = QString::compare_helper
                        ((QArrayData *)(local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10))
                         ,*(undefined4 *)(local_50.field0_0x0 + 4),PTR_s_cache_install_10230ff58,
                         0xffffffff,1), puVar3 = PTR_s_pdfm_10230ff28, iVar5 != 0)) {
    if (PTR_s_pdfm_10230ff28 != (undefined *)0x0) {
      _strlen(PTR_s_pdfm_10230ff28);
    }
    QString::fromUtf8_helper((char *)&local_30,(int)puVar3);
    QString::operator=(&local_50,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001ccaa1;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_1001ccaa1:
  iVar5 = QString::compare_helper
                    ((QArrayData *)(local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                     *(undefined4 *)(local_50.field0_0x0 + 4),PTR_s_ps_10230ff20,0xffffffff,1);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
LAB_1001ccf72:
    puVar3 = PTR_s___crashreporter_10230fec8;
    iVar5 = -1;
    if (PTR_s___crashreporter_10230fec8 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s___crashreporter_10230fec8);
      iVar5 = (int)sVar8;
    }
    local_a0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
    cVar4 = FUN_100df2570(&local_40,&local_a0);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_21 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001ccfe8;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1001ccfe8:
    if (cVar4 != '\0') {
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 8;
      puVar3 = PTR_s___dump_10230fed0;
      iVar5 = -1;
      if (PTR_s___dump_10230fed0 != (undefined *)0x0) {
        sVar8 = _strlen(PTR_s___dump_10230fed0);
        iVar5 = (int)sVar8;
      }
      local_b0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
      FUN_100df1f90(&local_a8,&local_40,&local_b0);
      QString::operator=((QString *)(param_1 + 0x50),&local_a8);
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_21 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1001cd083;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_1001cd083:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_21 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1001cd0b9;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1001cd0b9:
      if (*(int *)(((QString *)(param_1 + 0x50))->field0_0x0 + 4) == 0) {
        FUN_100df99c0("","prl_client_app",0,"--dump parameter must be specified");
        goto LAB_1001cd2b7;
      }
    }
    puVar3 = PTR_s___openvm_10230fed8;
    iVar5 = -1;
    if (PTR_s___openvm_10230fed8 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s___openvm_10230fed8);
      iVar5 = (int)sVar8;
    }
    local_c0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
    FUN_100df1f90(&local_b8,&local_40,&local_c0);
    QString::operator=((QString *)(param_1 + 0x40),&local_b8);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_21 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001cd151;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_1001cd151:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_21 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001cd187;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_1001cd187:
    uVar6 = FUN_1001c9320(&local_40);
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | uVar6;
    puVar3 = PTR_s___verbose_10230ff98;
    iVar5 = -1;
    if (PTR_s___verbose_10230ff98 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s___verbose_10230ff98);
      iVar5 = (int)sVar8;
    }
    local_c8 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
    cVar4 = FUN_100df2570(&local_40,&local_c8);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_21 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001cd20a;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_1001cd20a:
    if (cVar4 != '\0') {
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x10;
    }
    puVar3 = PTR_s___sba_upgrade_10230ffa0;
    iVar5 = -1;
    if (PTR_s___sba_upgrade_10230ffa0 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s___sba_upgrade_10230ffa0);
      iVar5 = (int)sVar8;
    }
    local_d0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
    cVar4 = FUN_100df2570(&local_40,&local_d0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_21 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001cd289;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1001cd289:
    if (cVar4 != '\0') {
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x40;
    }
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  else {
    iVar5 = QString::compare_helper
                      ((QArrayData *)(local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                       *(undefined4 *)(local_50.field0_0x0 + 4),PTR_s_pdfm_10230ff28,0xffffffff,1);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 1;
      goto LAB_1001ccf72;
    }
    iVar5 = QString::compare_helper
                      ((QArrayData *)(local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                       *(undefined4 *)(local_50.field0_0x0 + 4),PTR_s_pdfwl_10230ff30,0xffffffff,1);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 5;
      goto LAB_1001ccf72;
    }
    iVar5 = QString::compare_helper
                      ((QArrayData *)(local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                       *(undefined4 *)(local_50.field0_0x0 + 4),PTR_s_pwe_10230ff38,0xffffffff,1);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 2;
      goto LAB_1001ccf72;
    }
    iVar5 = QString::compare_helper
                      ((QArrayData *)(local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                       *(undefined4 *)(local_50.field0_0x0 + 4),PTR_s_pp_10230ff40,0xffffffff,1);
    if (iVar5 != 0) {
      iVar5 = QString::compare_helper
                        ((QArrayData *)(local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10))
                         ,*(undefined4 *)(local_50.field0_0x0 + 4),PTR_s_cache_10230ff50,0xffffffff,
                         1);
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x68) = 1;
      }
      else {
        iVar5 = QString::compare_helper
                          ((QArrayData *)
                           (local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                           *(undefined4 *)(local_50.field0_0x0 + 4),PTR_s_cache_install_10230ff58,
                           0xffffffff,1);
        if (iVar5 != 0) {
          FUN_100df99c0("","prl_client_app",0,"Wrong execute mode for application.");
          goto LAB_1001cd2b7;
        }
        *(undefined4 *)(param_1 + 0x68) = 2;
      }
      goto LAB_1001ccf72;
    }
    *(undefined4 *)(param_1 + 0x58) = 3;
    puVar3 = PTR_s___host_10230ff78;
    iVar5 = -1;
    if (PTR_s___host_10230ff78 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s___host_10230ff78);
      iVar5 = (int)sVar8;
    }
    local_68 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
    FUN_100df1f90(&local_60,&local_40,&local_68);
    QString::operator=((QString *)(param_1 + 0x20),&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001cccc5;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1001cccc5:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001cccf5;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1001cccf5:
    pQVar2 = ((QString *)(param_1 + 0x20))->field0_0x0;
    if (*(int *)(pQVar2 + 4) == 0) {
      FUN_100df99c0("","prl_client_app",0,"Error: host name is not specified.");
    }
    else {
      iVar5 = QString::compare_helper
                        (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),"localhost",
                         0xffffffff,1);
      puVar3 = PTR_s___user_10230ff88;
      if (iVar5 == 0) {
LAB_1001cce9d:
        puVar3 = PTR_s___vmuuid_10230ff80;
        iVar5 = -1;
        if (PTR_s___vmuuid_10230ff80 != (undefined *)0x0) {
          sVar8 = _strlen(PTR_s___vmuuid_10230ff80);
          iVar5 = (int)sVar8;
        }
        local_98 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
        FUN_100df1f90(&local_90,&local_40,&local_98);
        QString::operator=((QString *)(param_1 + 0x48),&local_90);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_21 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1001ccf28;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
LAB_1001ccf28:
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_21 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1001ccf72;
          }
          QArrayData::deallocate(local_98,2,8);
        }
        goto LAB_1001ccf72;
      }
      iVar5 = -1;
      if (PTR_s___user_10230ff88 != (undefined *)0x0) {
        sVar8 = _strlen(PTR_s___user_10230ff88);
        iVar5 = (int)sVar8;
      }
      local_78 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
      FUN_100df1f90(&local_70,&local_40,&local_78);
      QString::operator=((QString *)(param_1 + 0x30),&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_21 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1001ccda7;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1001ccda7:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_21 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1001ccdd7;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1001ccdd7:
      puVar3 = PTR_s___passwd_10230ff90;
      if (*(int *)(((QString *)(param_1 + 0x30))->field0_0x0 + 4) == 0) {
        FUN_100df99c0("","prl_client_app",0,"Error: user login is not specified.");
      }
      else {
        iVar5 = -1;
        if (PTR_s___passwd_10230ff90 != (undefined *)0x0) {
          sVar8 = _strlen(PTR_s___passwd_10230ff90);
          iVar5 = (int)sVar8;
        }
        local_88 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar5);
        FUN_100df1f90(&local_80,&local_40,&local_88);
        QString::operator=((QString *)(param_1 + 0x38),&local_80);
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_21 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1001cce60;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_1001cce60:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_21 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1001cce90;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1001cce90:
        if (*(int *)(((QString *)(param_1 + 0x38))->field0_0x0 + 4) != 0) goto LAB_1001cce9d;
        FUN_100df99c0("","prl_client_app",0,"Error: password is not specified.");
      }
    }
  }
LAB_1001cd2b7:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001cd2e7;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1001cd2e7:
  FUN_100039a80(&local_40);
  return;
}

