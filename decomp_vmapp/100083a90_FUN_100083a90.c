
long * FUN_100083a90(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  Data *pDVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  Data *pDVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  char cVar21;
  bool bVar22;
  bool bVar23;
  long *local_828;
  byte local_801;
  QArrayData *local_7e8;
  QArrayData *local_7e0;
  QArrayData *local_7d8;
  QArrayData *local_7d0;
  char local_7c1;
  QArrayData *local_7c0;
  QArrayData *local_7b8;
  char local_7a9;
  QArrayData *local_7a8;
  QArrayData *local_7a0;
  char local_795;
  undefined1 local_794 [4];
  QString local_790;
  QArrayData *local_788;
  QString local_780;
  QString local_778;
  QArrayData *local_770;
  QString local_768;
  QString local_760;
  QArrayData *local_758;
  QString local_750;
  Data *local_748;
  Data *local_740;
  Data *local_738;
  uint local_730;
  long *local_728;
  QArrayData *local_720;
  long *local_718;
  Data *local_710;
  Data *local_708;
  Data *local_700;
  undefined4 local_6f8;
  BootDevice *local_6f0;
  Data *local_6e8;
  Data *local_6e0;
  Data *local_6d8;
  QString local_6d0;
  QString local_6c8;
  QString local_6c0;
  QString local_6b8;
  QString local_6b0;
  QString local_6a8;
  undefined1 local_699;
  char local_698 [112];
  undefined *local_628 [2];
  undefined *local_618;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined1 local_574 [4];
  undefined4 *local_570;
  undefined4 *local_568;
  undefined4 *local_560;
  undefined1 *local_558;
  undefined *local_550 [2];
  undefined *local_540;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined1 local_49c [4];
  undefined4 *local_498;
  undefined4 *local_490;
  undefined4 *local_488;
  undefined1 *local_480;
  undefined *local_478 [2];
  undefined *local_468;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined1 local_3c4 [4];
  undefined4 *local_3c0;
  undefined4 *local_3b8;
  undefined4 *local_3b0;
  undefined1 *local_3a8;
  undefined *local_3a0 [2];
  undefined *local_390;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined1 local_2ec [4];
  undefined4 *local_2e8;
  undefined4 *local_2e0;
  undefined4 *local_2d8;
  undefined1 *local_2d0;
  undefined *local_2c8 [2];
  undefined *local_2b8;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined1 local_214 [4];
  undefined4 *local_210;
  undefined4 *local_208;
  undefined4 *local_200;
  undefined1 *local_1f8;
  undefined *local_1f0 [2];
  undefined *local_1e0;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_13c [4];
  undefined4 *local_138;
  undefined4 *local_130;
  undefined4 *local_128;
  undefined1 *local_120;
  undefined *local_118 [2];
  undefined *local_108;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64 [4];
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined1 *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmStartupOptions();
  CVmStartupOptions::getBootDeviceList();
  BootDevice::BootDevice((BootDevice *)local_628);
  local_570 = &local_57c;
  local_568 = &local_580;
  local_560 = &local_578;
  local_558 = local_574;
  local_57c = 5;
  local_580 = 0;
  local_578 = 0;
  local_574[0] = 1;
  puVar1 = PTR_DAT_100ba22f0 + 0x10;
  puVar20 = PTR_DAT_100ba22f0 + 200;
  local_628[0] = puVar1;
  local_618 = puVar20;
  BootDevice::BootDevice((BootDevice *)local_550);
  local_498 = &local_4a4;
  local_490 = &local_4a8;
  local_488 = &local_4a0;
  local_480 = local_49c;
  local_4a4 = 6;
  local_4a8 = 0;
  local_4a0 = 1;
  local_49c[0] = 1;
  local_550[0] = puVar1;
  local_540 = puVar20;
  BootDevice::BootDevice((BootDevice *)local_478);
  local_3c0 = &local_3cc;
  local_3b8 = &local_3d0;
  local_3b0 = &local_3c8;
  local_3a8 = local_3c4;
  local_3cc = 6;
  local_3d0 = 1;
  local_3c8 = 2;
  local_3c4[0] = 1;
  local_478[0] = puVar1;
  local_468 = puVar20;
  BootDevice::BootDevice((BootDevice *)local_3a0);
  local_2e8 = &local_2f4;
  local_2e0 = &local_2f8;
  local_2d8 = &local_2f0;
  local_2d0 = local_2ec;
  local_2f4 = 6;
  local_2f8 = 2;
  local_2f0 = 3;
  local_2ec[0] = 1;
  local_3a0[0] = puVar1;
  local_390 = puVar20;
  BootDevice::BootDevice((BootDevice *)local_2c8);
  local_210 = &local_21c;
  local_208 = &local_220;
  local_200 = &local_218;
  local_1f8 = local_214;
  local_21c = 6;
  local_220 = 3;
  local_218 = 4;
  local_214[0] = 1;
  local_2c8[0] = puVar1;
  local_2b8 = puVar20;
  BootDevice::BootDevice((BootDevice *)local_1f0);
  local_138 = &local_144;
  local_130 = &local_148;
  local_128 = &local_140;
  local_120 = local_13c;
  local_144 = 3;
  local_148 = 0;
  local_140 = 5;
  local_13c[0] = 1;
  local_1f0[0] = puVar1;
  local_1e0 = puVar20;
  BootDevice::BootDevice((BootDevice *)local_118);
  local_60 = &local_6c;
  local_58 = &local_70;
  local_50 = &local_68;
  local_48 = local_64;
  local_6c = 8;
  local_70 = 0;
  local_68 = 6;
  local_64[0] = 1;
  local_118[0] = puVar1;
  local_108 = puVar20;
  if (*(uint *)(local_6e8 + 0xc) == *(uint *)(local_6e8 + 8)) {
    local_6f0 = (BootDevice *)local_628;
    FUN_100080e30(&local_6e8,&local_6f0);
    local_6f0 = (BootDevice *)local_550;
    FUN_100080e30(&local_6e8,&local_6f0);
    local_6f0 = (BootDevice *)local_478;
    FUN_100080e30(&local_6e8,&local_6f0);
    local_6f0 = (BootDevice *)local_3a0;
    FUN_100080e30(&local_6e8,&local_6f0);
    local_6f0 = (BootDevice *)local_2c8;
    FUN_100080e30(&local_6e8,&local_6f0);
    local_6f0 = (BootDevice *)local_1f0;
    FUN_100080e30(&local_6e8,&local_6f0);
    local_6f0 = (BootDevice *)local_118;
    FUN_100080e30(&local_6e8,&local_6f0);
  }
  pDVar3 = local_6e8;
  if (1 < *(uint *)local_6e8) {
    uVar17 = *(uint *)(local_6e8 + 8);
    pDVar11 = (Data *)QListData::detach((int)&local_6e8);
    lVar12 = (long)(int)*(uint *)(local_6e8 + 8);
    if ((pDVar3 + (long)(int)uVar17 * 8 + 0x10 != local_6e8 + lVar12 * 8 + 0x10) &&
       (lVar18 = (int)*(uint *)(local_6e8 + 0xc) - lVar12,
       lVar18 != 0 && lVar12 <= (int)*(uint *)(local_6e8 + 0xc))) {
      _memcpy(local_6e8 + lVar12 * 8 + 0x10,pDVar3 + (long)(int)uVar17 * 8 + 0x10,lVar18 * 8);
    }
    if (*(int *)pDVar11 != -1) {
      if (*(int *)pDVar11 != 0) {
        LOCK();
        *(int *)pDVar11 = *(int *)pDVar11 + -1;
        local_699 = *(int *)pDVar11 != 0;
        UNLOCK();
        if ((bool)local_699) goto LAB_100083f8c;
      }
      QListData::dispose(pDVar11);
    }
  }
LAB_100083f8c:
  pDVar3 = local_6e8 + (long)(int)*(uint *)(local_6e8 + 8) * 8 + 0x10;
  if (1 < *(uint *)local_6e8) {
    pDVar11 = (Data *)QListData::detach((int)&local_6e8);
    lVar12 = (long)(int)*(uint *)(local_6e8 + 8);
    if ((pDVar3 != local_6e8 + lVar12 * 8 + 0x10) &&
       (lVar18 = (int)*(uint *)(local_6e8 + 0xc) - lVar12,
       lVar18 != 0 && lVar12 <= (int)*(uint *)(local_6e8 + 0xc))) {
      _memcpy(local_6e8 + lVar12 * 8 + 0x10,pDVar3,lVar18 * 8);
    }
    if (*(int *)pDVar11 != -1) {
      if (*(int *)pDVar11 != 0) {
        LOCK();
        *(int *)pDVar11 = *(int *)pDVar11 + -1;
        local_699 = *(int *)pDVar11 != 0;
        UNLOCK();
        if ((bool)local_699) goto LAB_100084006;
      }
      QListData::dispose(pDVar11);
    }
  }
LAB_100084006:
  if (pDVar3 != local_6e8 + (long)(int)*(uint *)(local_6e8 + 0xc) * 8 + 0x10) {
    local_6e0 = local_6e8 + (long)(int)*(uint *)(local_6e8 + 0xc) * 8 + 0x10;
    local_6d8 = pDVar3;
    FUN_100088e50(&local_6d8,&local_6e0,pDVar3,FUN_100088d60);
  }
  local_698[0] = '\0';
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  local_710 = local_6e8;
  if (*(uint *)local_6e8 != 0xffffffff) {
    if (*(uint *)local_6e8 == 0) {
      QListData::detach((int)&local_710);
      lVar12 = (long)(int)*(uint *)(local_710 + 8);
      if ((local_6e8 + (long)(int)*(uint *)(local_6e8 + 8) * 8 != local_710 + lVar12 * 8) &&
         (lVar18 = (int)*(uint *)(local_710 + 0xc) - lVar12,
         lVar18 != 0 && lVar12 <= (int)*(uint *)(local_710 + 0xc))) {
        _memcpy(local_710 + lVar12 * 8 + 0x10,
                local_6e8 + (long)(int)*(uint *)(local_6e8 + 8) * 8 + 0x10,lVar18 * 8);
      }
    }
    else {
      LOCK();
      *(uint *)local_6e8 = *(uint *)local_6e8 + 1;
      local_699 = *(uint *)local_6e8 != 0;
      UNLOCK();
    }
  }
  local_708 = local_710 + (long)(int)*(uint *)(local_710 + 8) * 8 + 0x10;
  local_700 = local_710 + (long)(int)*(uint *)(local_710 + 0xc) * 8 + 0x10;
  local_828 = (long *)0x0;
  uVar17 = 0;
  if (*(uint *)(local_710 + 8) != *(uint *)(local_710 + 0xc)) {
    local_801 = 0xff;
    local_828 = (long *)0x0;
    uVar16 = 0;
    cVar21 = '\0';
    uVar17 = 0;
    bVar4 = false;
    do {
      local_6f8 = 1;
      lVar12 = *(long *)local_708;
      if (**(char **)(lVar12 + 0xd0) == '\0') goto LAB_100084e20;
      FUN_100258cd0(&local_718,**(undefined4 **)(lVar12 + 0xb8),**(undefined4 **)(lVar12 + 0xc0));
      lVar18 = *(long *)(local_718[2] + 8);
      cVar5 = '\0';
      cVar6 = '\0';
      cVar8 = cVar21;
      if (lVar18 != 0) {
        QMutex::lock();
        plVar14 = *(long **)(lVar18 + 0x18);
        if (plVar14 != (long *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        QMutex::unlock();
        iVar10 = CVmDevice::getEnabled();
        if (iVar10 == 1) {
          iVar10 = 0;
          cVar5 = '\0';
          cVar6 = '\0';
          if (plVar14 != (long *)0x0) {
            cVar6 = '\0';
            cVar5 = '\0';
            if (plVar14[2] != 0) {
              lVar18 = ___dynamic_cast(plVar14[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2230);
              if (lVar18 == 0) {
                cVar6 = '\0';
                cVar5 = '\0';
                iVar10 = 0;
              }
              else {
                cVar5 = CVmClusteredDevice::getStackIndex();
                cVar6 = CVmClusteredDevice::getInterfaceType();
                iVar10 = 0;
              }
            }
            goto LAB_1000842d0;
          }
          goto LAB_100084300;
        }
        if (plVar14 != (long *)0x0) {
          iVar10 = 10;
          cVar6 = '\0';
          cVar5 = '\0';
LAB_1000842d0:
          LOCK();
          plVar2 = plVar14 + 1;
          lVar18 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
          if (iVar10 == 0) goto LAB_100084300;
        }
        goto LAB_100084dfc;
      }
LAB_100084300:
      iVar10 = **(int **)(lVar12 + 0xb8);
      if (0xe < iVar10) {
        if (iVar10 != 0xf) goto switchD_100084331_caseD_4;
        bVar9 = local_801;
        if (*(int *)(DAT_1011c3698 + 0x580) == 0) goto switchD_100084331_caseD_8;
        CVmStartupOptionsBase::getExternalDeviceSystemName();
        FUN_100090a50(&local_728,DAT_1011c3698);
        if (local_728 == (long *)0x0) {
LAB_100084c65:
          iVar10 = FUN_1007da300("vm.bios.efi.wait_usb",1);
          cVar21 = 'W';
          if (iVar10 == 0) {
            cVar21 = 'U';
          }
          bVar4 = true;
          iVar10 = 0xb;
          local_801 = 0x10;
        }
        else {
          bVar22 = local_728[2] == 0;
          if (!bVar22) {
            plVar14 = *(long **)(local_728[2] + 0x180);
            local_748 = (Data *)*plVar14;
            if (*(int *)local_748 != -1) {
              if (*(int *)local_748 == 0) {
                QListData::detach((int)&local_748);
                lVar18 = (long)*(int *)(local_748 + 8);
                lVar12 = *plVar14;
                if (((Data *)(lVar12 + (long)*(int *)(lVar12 + 8) * 8) != local_748 + lVar18 * 8) &&
                   (lVar19 = *(int *)(local_748 + 0xc) - lVar18,
                   lVar19 != 0 && lVar18 <= *(int *)(local_748 + 0xc))) {
                  _memcpy(local_748 + lVar18 * 8 + 0x10,
                          (void *)(lVar12 + 0x10 + (long)*(int *)(lVar12 + 8) * 8),lVar19 * 8);
                }
              }
              else {
                LOCK();
                *(int *)local_748 = *(int *)local_748 + 1;
                local_699 = *(int *)local_748 != 0;
                UNLOCK();
              }
            }
            local_740 = local_748 + (long)*(int *)(local_748 + 8) * 8 + 0x10;
            local_738 = local_748 + (long)*(int *)(local_748 + 0xc) * 8 + 0x10;
            local_730 = 1;
            if (*(int *)(local_748 + 8) != *(int *)(local_748 + 0xc)) {
              do {
                if (local_730 != 0) {
                  plVar14 = *(long **)local_740;
                  (**(code **)(*plVar14 + 0xb8))(&local_758,plVar14);
                  QString::QString(&local_6d0,0x7c);
                  QString::section(&local_750,&local_758,&local_6d0,0,2,0);
                  if (*(int *)local_6d0.field0_0x0 != -1) {
                    if (*(int *)local_6d0.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_6d0.field0_0x0 = *(int *)local_6d0.field0_0x0 + -1;
                      local_699 = *(int *)local_6d0.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_699) goto LAB_1000846a3;
                    }
                    QArrayData::deallocate((QArrayData *)local_6d0.field0_0x0,2,8);
                  }
LAB_1000846a3:
                  QString::QString(&local_6c8,0x7c);
                  QString::section(&local_760,&local_720,&local_6c8,0,2,0);
                  if (*(int *)local_6c8.field0_0x0 != -1) {
                    if (*(int *)local_6c8.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_6c8.field0_0x0 = *(int *)local_6c8.field0_0x0 + -1;
                      local_699 = *(int *)local_6c8.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_699) goto LAB_100084715;
                    }
                    QArrayData::deallocate((QArrayData *)local_6c8.field0_0x0,2,8);
                  }
LAB_100084715:
                  cVar8 = operator==(&local_750,&local_760);
                  if (*(int *)local_760.field0_0x0 != -1) {
                    if (*(int *)local_760.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_760.field0_0x0 = *(int *)local_760.field0_0x0 + -1;
                      local_699 = *(int *)local_760.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_699) goto LAB_100084766;
                    }
                    QArrayData::deallocate((QArrayData *)local_760.field0_0x0,2,8);
                  }
LAB_100084766:
                  if (*(int *)local_750.field0_0x0 != -1) {
                    if (*(int *)local_750.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_750.field0_0x0 = *(int *)local_750.field0_0x0 + -1;
                      local_699 = *(int *)local_750.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_699) goto LAB_1000847a2;
                    }
                    QArrayData::deallocate((QArrayData *)local_750.field0_0x0,2,8);
                  }
LAB_1000847a2:
                  if (*(int *)local_758 != -1) {
                    if (*(int *)local_758 != 0) {
                      LOCK();
                      *(int *)local_758 = *(int *)local_758 + -1;
                      local_699 = *(int *)local_758 != 0;
                      UNLOCK();
                      if ((bool)local_699) goto LAB_1000847de;
                    }
                    QArrayData::deallocate(local_758,2,8);
                  }
LAB_1000847de:
                  if (cVar8 == '\0') {
                    (**(code **)(*plVar14 + 0xb8))(&local_770,plVar14);
                    QString::QString(&local_6c0,0x7c);
                    QString::section(&local_768,&local_770,&local_6c0,1,2,0);
                    if (*(int *)local_6c0.field0_0x0 != -1) {
                      if (*(int *)local_6c0.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_6c0.field0_0x0 = *(int *)local_6c0.field0_0x0 + -1;
                        local_699 = *(int *)local_6c0.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_699) goto LAB_10008489b;
                      }
                      QArrayData::deallocate((QArrayData *)local_6c0.field0_0x0,2,8);
                    }
LAB_10008489b:
                    QString::QString(&local_6b8,0x7c);
                    QString::section(&local_778,&local_720,&local_6b8,1,2,0);
                    if (*(int *)local_6b8.field0_0x0 != -1) {
                      if (*(int *)local_6b8.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_6b8.field0_0x0 = *(int *)local_6b8.field0_0x0 + -1;
                        local_699 = *(int *)local_6b8.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_699) goto LAB_100084910;
                      }
                      QArrayData::deallocate((QArrayData *)local_6b8.field0_0x0,2,8);
                    }
LAB_100084910:
                    cVar8 = operator==(&local_768,&local_778);
                    if (cVar8 == '\0') {
                      cVar8 = '\0';
                    }
                    else {
                      (**(code **)(*plVar14 + 0xb8))(&local_788,plVar14);
                      QString::QString(&local_6b0,0x7c);
                      QString::section(&local_780,&local_788,&local_6b0,5,0xffffffff,0);
                      if (*(int *)local_6b0.field0_0x0 != -1) {
                        if (*(int *)local_6b0.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_6b0.field0_0x0 = *(int *)local_6b0.field0_0x0 + -1;
                          local_699 = *(int *)local_6b0.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_699) goto LAB_1000849b6;
                        }
                        QArrayData::deallocate((QArrayData *)local_6b0.field0_0x0,2,8);
                      }
LAB_1000849b6:
                      QString::QString(&local_6a8,0x7c);
                      QString::section(&local_790,&local_720,&local_6a8,5,0xffffffff,0);
                      if (*(int *)local_6a8.field0_0x0 != -1) {
                        if (*(int *)local_6a8.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_6a8.field0_0x0 = *(int *)local_6a8.field0_0x0 + -1;
                          local_699 = *(int *)local_6a8.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_699) goto LAB_100084a2b;
                        }
                        QArrayData::deallocate((QArrayData *)local_6a8.field0_0x0,2,8);
                      }
LAB_100084a2b:
                      cVar8 = operator==(&local_780,&local_790);
                      if (*(int *)local_790.field0_0x0 != -1) {
                        if (*(int *)local_790.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_790.field0_0x0 = *(int *)local_790.field0_0x0 + -1;
                          local_699 = *(int *)local_790.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_699) goto LAB_100084a7c;
                        }
                        QArrayData::deallocate((QArrayData *)local_790.field0_0x0,2,8);
                      }
LAB_100084a7c:
                      if (*(int *)local_780.field0_0x0 != -1) {
                        if (*(int *)local_780.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_780.field0_0x0 = *(int *)local_780.field0_0x0 + -1;
                          local_699 = *(int *)local_780.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)local_699) goto LAB_100084ab8;
                        }
                        QArrayData::deallocate((QArrayData *)local_780.field0_0x0,2,8);
                      }
LAB_100084ab8:
                      if (*(int *)local_788 != -1) {
                        if (*(int *)local_788 != 0) {
                          LOCK();
                          *(int *)local_788 = *(int *)local_788 + -1;
                          local_699 = *(int *)local_788 != 0;
                          UNLOCK();
                          if ((bool)local_699) goto LAB_100084af8;
                        }
                        QArrayData::deallocate(local_788,2,8);
                      }
                    }
LAB_100084af8:
                    if (*(int *)local_778.field0_0x0 != -1) {
                      if (*(int *)local_778.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_778.field0_0x0 = *(int *)local_778.field0_0x0 + -1;
                        local_699 = *(int *)local_778.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_699) goto LAB_100084b34;
                      }
                      QArrayData::deallocate((QArrayData *)local_778.field0_0x0,2,8);
                    }
LAB_100084b34:
                    if (*(int *)local_768.field0_0x0 != -1) {
                      if (*(int *)local_768.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_768.field0_0x0 = *(int *)local_768.field0_0x0 + -1;
                        local_699 = *(int *)local_768.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_699) goto LAB_100084b70;
                      }
                      QArrayData::deallocate((QArrayData *)local_768.field0_0x0,2,8);
                    }
LAB_100084b70:
                    if (*(int *)local_770 != -1) {
                      if (*(int *)local_770 != 0) {
                        LOCK();
                        *(int *)local_770 = *(int *)local_770 + -1;
                        local_699 = *(int *)local_770 != 0;
                        UNLOCK();
                        if ((bool)local_699) goto LAB_100084bac;
                      }
                      QArrayData::deallocate(local_770,2,8);
                    }
LAB_100084bac:
                    if (cVar8 == '\0') {
                      local_730 = 0;
                    }
                    else {
                      bVar22 = true;
                      FUN_1008e3970("","vm",0,"Enable USB boot  by VID/PID/SN");
                    }
                  }
                  else {
                    bVar22 = true;
                    FUN_1008e3970("","vm",0,"Enable USB boot by Location/VID/PID");
                  }
                }
                local_740 = local_740 + 8;
                uVar15 = local_730 ^ 1;
                bVar23 = local_730 != 1;
                local_730 = uVar15;
              } while ((bVar23) && (local_740 != local_738));
            }
            if (*(int *)local_748 != -1) {
              if (*(int *)local_748 != 0) {
                LOCK();
                *(int *)local_748 = *(int *)local_748 + -1;
                local_699 = *(int *)local_748 != 0;
                UNLOCK();
                if ((bool)local_699) goto LAB_100084c47;
              }
              QListData::dispose(local_748);
            }
          }
LAB_100084c47:
          iVar10 = 10;
          if (bVar22) goto LAB_100084c65;
        }
        if (local_728 != (long *)0x0) {
          LOCK();
          plVar14 = local_728 + 1;
          lVar12 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)(*local_728 + 0x10))();
          }
        }
        if (*(int *)local_720 != -1) {
          if (*(int *)local_720 != 0) {
            LOCK();
            *(int *)local_720 = *(int *)local_720 + -1;
            local_699 = *(int *)local_720 != 0;
            UNLOCK();
            if ((bool)local_699) goto LAB_100084cf9;
          }
          QArrayData::deallocate(local_720,2,8);
        }
LAB_100084cf9:
        bVar9 = local_801;
        cVar8 = cVar21;
        if (iVar10 == 0xb) goto switchD_100084331_caseD_8;
        goto LAB_100084dfc;
      }
      bVar9 = 0x40;
      cVar8 = 'N';
      switch(iVar10) {
      case 3:
        cVar8 = cVar21;
        if (*(long *)(local_718[2] + 8) != 0) {
          bVar9 = 8;
          cVar8 = 'F';
          break;
        }
        goto LAB_100084dfc;
      default:
switchD_100084331_caseD_4:
        FUN_1008e3970("","vm",0,"Unknown device type in the boot devices list: %d");
        cVar8 = cVar21;
        goto LAB_100084dfc;
      case 5:
        cVar8 = cVar21;
        if (*(long *)(local_718[2] + 8) == 0) goto LAB_100084dfc;
        iVar10 = CVmClusteredDevice::getInterfaceType();
        cVar8 = 'C';
        cVar21 = 'C';
        bVar9 = 4;
        if (iVar10 == 2) {
          iVar10 = CVmDevice::getEnabled();
          bVar9 = 0xff;
          if (iVar10 == 1) {
            bVar7 = CVmClusteredDevice::getStackIndex();
            iVar10 = CVmClusteredDevice::getInterfaceType();
            if (iVar10 == 0) {
              bVar9 = bVar7 + 0xc;
            }
            else {
              cVar8 = cVar21;
              if (iVar10 == 1) {
                if ((bVar7 & 0xf8) < 8) {
                  bVar9 = bVar7 & 7 | 0x80;
                }
              }
              else if (iVar10 == 2) {
                bVar9 = bVar7 & 7 | 0x20;
              }
            }
          }
        }
        break;
      case 6:
        cVar8 = cVar21;
        if ((*(long *)(local_718[2] + 8) == 0) ||
           (plVar14 = (long *)___dynamic_cast(*(long *)(local_718[2] + 8),&PTR_vtable_100baea70,
                                              &PTR_vtable_100bef130,0xfffffffffffffffe),
           plVar14 == (long *)0x0)) goto LAB_100084dfc;
        iVar10 = CVmDevice::getEnabled();
        bVar9 = 0xff;
        if (iVar10 == 1) {
          bVar7 = CVmClusteredDevice::getStackIndex();
          iVar10 = CVmClusteredDevice::getInterfaceType();
          if (iVar10 == 0) {
            bVar9 = bVar7 + 0xc;
          }
          else if (iVar10 == 1) {
            if ((bVar7 & 0xf8) < 8) {
              bVar9 = bVar7 & 7 | 0x80;
            }
          }
          else if (iVar10 == 2) {
            bVar9 = bVar7 & 7 | 0x20;
          }
        }
        iVar10 = CVmClusteredDevice::getInterfaceType();
        cVar8 = 'S';
        if (iVar10 != 1) {
          cVar8 = 'H';
        }
        if (local_828 == (long *)0x0) {
          local_828 = plVar14;
        }
        break;
      case 8:
        break;
      }
switchD_100084331_caseD_8:
      iVar10 = FUN_1007da300("devices.usb.boot",1);
      if ((bVar4) && (iVar10 != 0)) {
        *(uint *)(DAT_1011c3698 + 0xae4) = *(uint *)(DAT_1011c3698 + 0xae4) | 0x10;
      }
      if (uVar16 < 0x20) {
        uVar13 = (ulong)uVar16;
        uVar16 = uVar16 + 1;
        *(byte *)(param_1 + 0x1c + uVar13) = bVar9;
      }
      local_801 = bVar9;
      if (uVar17 < 0x5e) {
        local_698[uVar17] = cVar8;
        uVar15 = uVar17 + 2;
        local_698[uVar17 + 1] = cVar6;
        uVar17 = uVar17 + 3;
        local_698[uVar15] = cVar5;
      }
LAB_100084dfc:
      cVar21 = cVar8;
      if (local_718 != (long *)0x0) {
        LOCK();
        plVar14 = local_718 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)(*local_718 + 0x10))();
        }
      }
LAB_100084e20:
      local_708 = local_708 + 8;
    } while (local_708 != local_700);
  }
  local_6f8 = 1;
  if (*(int *)local_710 != -1) {
    if (*(int *)local_710 != 0) {
      LOCK();
      *(int *)local_710 = *(int *)local_710 + -1;
      local_699 = *(int *)local_710 != 0;
      UNLOCK();
      if ((bool)local_699) goto LAB_100084e82;
    }
    QListData::dispose(local_710);
  }
LAB_100084e82:
  BootDevice::~BootDevice((BootDevice *)local_118);
  BootDevice::~BootDevice((BootDevice *)local_1f0);
  BootDevice::~BootDevice((BootDevice *)local_2c8);
  BootDevice::~BootDevice((BootDevice *)local_3a0);
  BootDevice::~BootDevice((BootDevice *)local_478);
  BootDevice::~BootDevice((BootDevice *)local_550);
  BootDevice::~BootDevice((BootDevice *)local_628);
  if (*(int *)local_6e8 != -1) {
    if (*(int *)local_6e8 != 0) {
      LOCK();
      *(int *)local_6e8 = *(int *)local_6e8 + -1;
      local_699 = *(int *)local_6e8 != 0;
      UNLOCK();
      if ((bool)local_699) goto LAB_100084f48;
    }
    QListData::dispose(local_6e8);
  }
LAB_100084f48:
  if (*(int *)(param_1 + 0xa20) == 0) goto LAB_100085329;
  bVar9 = 0;
  if ((local_828 != (long *)0x0) && ((*(uint *)(param_1 + 0x480) & 0xffffff00) == 0x800)) {
    lVar12 = (**(code **)(*local_828 + 0x10))(local_828);
    if (lVar12 == 0) {
      bVar9 = 0;
    }
    else {
      plVar14 = (long *)(**(code **)(*local_828 + 0x10))(local_828);
      bVar9 = (**(code **)(*plVar14 + 0x1a8))(plVar14,local_794);
      bVar9 = bVar9 ^ 1;
    }
  }
  iVar10 = FUN_1007da300("vm.bios.efi.cd_use_noprompt",bVar9);
  if (iVar10 != 0) {
    local_795 = '\x01';
    local_7a0 = (QArrayData *)QString::fromAscii_helper("PrlNoPromptCd",0xd);
    QByteArray::QByteArray((QByteArray *)&local_7a8,&local_795,1);
    FUN_1000e2b60(&local_7a0,&DAT_1011c3768,2,&local_7a8);
    if (*(int *)local_7a8 != -1) {
      if (*(int *)local_7a8 != 0) {
        LOCK();
        *(int *)local_7a8 = *(int *)local_7a8 + -1;
        local_699 = *(int *)local_7a8 != 0;
        UNLOCK();
        if ((bool)local_699) goto LAB_100085056;
      }
      QArrayData::deallocate(local_7a8,1,8);
    }
LAB_100085056:
    if (*(int *)local_7a0 != -1) {
      if (*(int *)local_7a0 != 0) {
        LOCK();
        *(int *)local_7a0 = *(int *)local_7a0 + -1;
        local_699 = *(int *)local_7a0 != 0;
        UNLOCK();
        if ((bool)local_699) goto LAB_100085092;
      }
      QArrayData::deallocate(local_7a0,2,8);
    }
  }
LAB_100085092:
  iVar10 = FUN_1007da300("vm.bios.efi.limit_video",1);
  if (iVar10 != 0) {
    local_7a9 = '\x01';
    local_7b8 = (QArrayData *)QString::fromAscii_helper("PrlLimitVideoModes",0x12);
    QByteArray::QByteArray((QByteArray *)&local_7c0,&local_7a9,1);
    FUN_1000e2b60(&local_7b8,&DAT_1011c3768,2,&local_7c0);
    if (*(int *)local_7c0 != -1) {
      if (*(int *)local_7c0 != 0) {
        LOCK();
        *(int *)local_7c0 = *(int *)local_7c0 + -1;
        local_699 = *(int *)local_7c0 != 0;
        UNLOCK();
        if ((bool)local_699) goto LAB_10008513d;
      }
      QArrayData::deallocate(local_7c0,1,8);
    }
LAB_10008513d:
    if (*(int *)local_7b8 != -1) {
      if (*(int *)local_7b8 != 0) {
        LOCK();
        *(int *)local_7b8 = *(int *)local_7b8 + -1;
        local_699 = *(int *)local_7b8 != 0;
        UNLOCK();
        if ((bool)local_699) goto LAB_100085179;
      }
      QArrayData::deallocate(local_7b8,2,8);
    }
  }
LAB_100085179:
  iVar10 = FUN_1007da300("vm.bios.efi.limit_low_bit_video",1);
  if (iVar10 != 0) {
    local_7c1 = '\x01';
    local_7d0 = (QArrayData *)QString::fromAscii_helper("PrlLimitLowBits",0xf);
    QByteArray::QByteArray((QByteArray *)&local_7d8,&local_7c1,1);
    FUN_1000e2b60(&local_7d0,&DAT_1011c3768,2,&local_7d8);
    if (*(int *)local_7d8 != -1) {
      if (*(int *)local_7d8 != 0) {
        LOCK();
        *(int *)local_7d8 = *(int *)local_7d8 + -1;
        local_699 = *(int *)local_7d8 != 0;
        UNLOCK();
        if ((bool)local_699) goto LAB_100085224;
      }
      QArrayData::deallocate(local_7d8,1,8);
    }
LAB_100085224:
    if (*(int *)local_7d0 != -1) {
      if (*(int *)local_7d0 != 0) {
        LOCK();
        *(int *)local_7d0 = *(int *)local_7d0 + -1;
        local_699 = *(int *)local_7d0 != 0;
        UNLOCK();
        if ((bool)local_699) goto LAB_100085260;
      }
      QArrayData::deallocate(local_7d0,2,8);
    }
  }
LAB_100085260:
  local_7e0 = (QArrayData *)QString::fromAscii_helper("PrlBootOrder",0xc);
  QByteArray::QByteArray((QByteArray *)&local_7e8,local_698,uVar17);
  FUN_1000e2b60(&local_7e0,&DAT_1011c3768,2,&local_7e8);
  if (*(int *)local_7e8 != -1) {
    if (*(int *)local_7e8 != 0) {
      LOCK();
      *(int *)local_7e8 = *(int *)local_7e8 + -1;
      local_699 = *(int *)local_7e8 != 0;
      UNLOCK();
      if ((bool)local_699) goto LAB_1000852ed;
    }
    QArrayData::deallocate(local_7e8,1,8);
  }
LAB_1000852ed:
  if (*(int *)local_7e0 != -1) {
    if (*(int *)local_7e0 != 0) {
      LOCK();
      *(int *)local_7e0 = *(int *)local_7e0 + -1;
      local_699 = *(int *)local_7e0 != 0;
      UNLOCK();
      if ((bool)local_699) goto LAB_100085329;
    }
    QArrayData::deallocate(local_7e0,2,8);
  }
LAB_100085329:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return local_828;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

