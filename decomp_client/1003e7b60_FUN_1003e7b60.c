
undefined1 FUN_1003e7b60(long param_1,QString *param_2,QString *param_3,QVariant *param_4)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  char local_fc;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QString::operator=((QString *)(param_1 + 0x28),param_2);
  QString::operator=((QString *)(param_1 + 0x30),param_3);
  QVariant::operator=((QVariant *)(param_1 + 0x38),param_4);
  pQVar1 = param_2->field0_0x0;
  iVar6 = QString::compare_helper
                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                     PTR_s_VmConfig_1021f1e00,0xffffffff,1);
  if (iVar6 != 0) goto LAB_1003e8a23;
  local_40 = (QArrayData *)QString::fromAscii_helper("Hardware.Hdd[",0xd);
  iVar6 = QString::indexOf(param_3,&local_40,0,1);
  if (iVar6 == -1) {
    cVar4 = '\0';
  }
  else {
    local_48 = (QArrayData *)QString::fromAscii_helper("EmulatedType",0xc);
    cVar4 = QString::endsWith(param_3,&local_48,1);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003e7ca0;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1003e7ca0:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e7cd0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003e7cd0:
  if (cVar4 == '\0') {
    local_50 = (QArrayData *)QString::fromAscii_helper("InterfaceType",0xd);
    cVar4 = QString::endsWith(param_3,&local_50,1);
    cVar5 = '\x01';
    if (cVar4 == '\0') {
      local_58 = (QArrayData *)QString::fromAscii_helper("StackIndex",10);
      cVar5 = QString::endsWith(param_3,&local_58,1);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e7d65;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
LAB_1003e7d65:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003e7d95;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1003e7d95:
    if (cVar5 == '\0') {
      local_78 = (QArrayData *)QString::fromAscii_helper("Hardware.CdRom[",0xf);
      iVar6 = QString::indexOf(param_3,&local_78,0,1);
      if (iVar6 == -1) {
        cVar4 = '\0';
      }
      else {
        local_80 = (QArrayData *)QString::fromAscii_helper("Remote",6);
        cVar4 = QString::endsWith(param_3,&local_80,1);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e7fb3;
          }
          QArrayData::deallocate(local_80,2,8);
        }
      }
LAB_1003e7fb3:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e7fe3;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1003e7fe3:
      if (cVar4 != '\0') {
        FUN_1003ecdd0(param_1);
        goto LAB_1003e8a23;
      }
      local_88 = (QArrayData *)QString::fromAscii_helper("Hardware.CdRom[",0xf);
      iVar6 = QString::indexOf(param_3,&local_88,0,1);
      if (iVar6 == -1) {
        local_90 = (QArrayData *)QString::fromAscii_helper("Hardware.NetworkAdapter[",0x18);
        iVar6 = QString::indexOf(param_3,&local_90,0,1);
        if (iVar6 != -1) {
          bVar7 = true;
          goto LAB_1003e806c;
        }
        local_98 = (QArrayData *)QString::fromAscii_helper("Hardware.Parallel[",0x12);
        iVar6 = QString::indexOf(param_3,&local_98,0,1);
        if (iVar6 != -1) {
          bVar7 = true;
          bVar2 = false;
          bVar3 = true;
          goto LAB_1003e8072;
        }
        local_a0 = (QArrayData *)QString::fromAscii_helper("Hardware.Serial[",0x10);
        iVar6 = QString::indexOf(param_3,&local_a0,0,1);
        bVar7 = true;
        if (iVar6 != -1) {
          bVar7 = true;
          bVar3 = true;
          bVar2 = true;
          goto LAB_1003e8072;
        }
        local_fc = '\0';
        bVar3 = true;
LAB_1003e8189:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e81bf;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
      }
      else {
        bVar7 = false;
LAB_1003e806c:
        bVar3 = false;
        bVar2 = false;
LAB_1003e8072:
        local_a8 = (QArrayData *)QString::fromAscii_helper("EmulatedType",0xc);
        local_fc = QString::endsWith(param_3,&local_a8,1);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e80da;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_1003e80da:
        if (bVar2) goto LAB_1003e8189;
      }
LAB_1003e81bf:
      if ((bVar3) && (*(int *)local_98 != -1)) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e81fa;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1003e81fa:
      if ((bVar7) && (*(int *)local_90 != -1)) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e8234;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1003e8234:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e826a;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1003e826a:
      if (local_fc == '\0') {
        local_b0 = (QArrayData *)QString::fromAscii_helper("Hardware.GenericPciDevice[",0x1a);
        iVar6 = QString::indexOf(param_3,&local_b0,0,1);
        if (iVar6 == -1) {
          cVar4 = '\0';
        }
        else {
          local_b8 = (QArrayData *)QString::fromAscii_helper("SystemName",10);
          cVar4 = QString::endsWith(param_3,&local_b8,1);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003e8360;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
        }
LAB_1003e8360:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e8396;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_1003e8396:
        if (cVar4 == '\0') {
          local_c0 = (QArrayData *)QString::fromAscii_helper("Hardware.PciVideoAdapter[",0x19);
          iVar6 = QString::indexOf(param_3,&local_c0,0,1);
          if (iVar6 == -1) {
            cVar4 = '\0';
          }
          else {
            local_c8 = (QArrayData *)QString::fromAscii_helper("Enabled",7);
            cVar4 = QString::endsWith(param_3,&local_c8,1);
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_31 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003e8496;
              }
              QArrayData::deallocate(local_c8,2,8);
            }
          }
LAB_1003e8496:
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003e84cc;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_1003e84cc:
          if (cVar4 != '\0') {
            FUN_1003ee390(param_1);
            goto LAB_1003e8a23;
          }
          local_d0 = (QArrayData *)QString::fromAscii_helper("Hardware.NetworkAdapter[",0x18);
          iVar6 = QString::indexOf(param_3,&local_d0,0,1);
          if (iVar6 == -1) {
            cVar4 = '\0';
          }
          else {
            local_d8 = (QArrayData *)QString::fromAscii_helper("EmulatedType",0xc);
            cVar4 = QString::endsWith(param_3,&local_d8,1);
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003e85c2;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
          }
LAB_1003e85c2:
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003e85f8;
            }
            QArrayData::deallocate(local_d0,2,8);
          }
LAB_1003e85f8:
          if (cVar4 != '\0') {
            FUN_1003ee610(param_1);
            goto LAB_1003e8a23;
          }
          pQVar1 = param_3->field0_0x0;
          iVar6 = QString::compare_helper
                            (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                             "Hardware.Video.Enable3DAcceleration",0xffffffff,1);
          if (iVar6 == 0) {
            FUN_1003ee860(param_1);
            goto LAB_1003e8a23;
          }
          pQVar1 = param_3->field0_0x0;
          iVar6 = QString::compare_helper
                            (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                             "Hardware.Video.EnableHiResDrawing",0xffffffff,1);
          if (iVar6 == 0) {
            cVar4 = FUN_1003eeae0(param_1);
            goto LAB_1003e83a2;
          }
          pQVar1 = param_3->field0_0x0;
          iVar6 = QString::compare_helper
                            (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                             "Settings.Startup.AutoStart",0xffffffff,1);
          if (iVar6 == 0) {
            FUN_1003ef020(param_1);
            goto LAB_1003e8a23;
          }
          pQVar1 = param_3->field0_0x0;
          iVar6 = QString::compare_helper
                            (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                             "Settings.Startup.VmStartAsUser",0xffffffff,1);
          if (iVar6 != 0) {
            pQVar1 = param_3->field0_0x0;
            iVar6 = QString::compare_helper
                              (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                               "Settings.Startup.VmStartAsPassword",0xffffffff,1);
            if (iVar6 != 0) {
              pQVar1 = param_3->field0_0x0;
              iVar6 = QString::compare_helper
                                (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                                 "Settings.Autoprotect.Schema",0xffffffff,1);
              if (iVar6 == 0) {
                FUN_1003ef230(param_1);
                goto LAB_1003e8a23;
              }
              pQVar1 = param_3->field0_0x0;
              iVar6 = QString::compare_helper
                                (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                                 "Settings.Tools.Modality.Opacity",0xffffffff,1);
              if (iVar6 == 0) {
                FUN_1003ef400(param_1);
                goto LAB_1003e8a23;
              }
              pQVar1 = param_3->field0_0x0;
              iVar6 = QString::compare_helper
                                (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                                 "Settings.Tools.IsolatedVm",0xffffffff,1);
              if (iVar6 == 0) {
                cVar4 = FUN_1003ef520(param_1);
              }
              else {
                pQVar1 = param_3->field0_0x0;
                iVar6 = QString::compare_helper
                                  (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                                   "Settings.Tools.SharedFolders.GuestSharing.Enabled",0xffffffff,1)
                ;
                if (iVar6 == 0) {
                  cVar4 = FUN_1003ef9b0(param_1);
                }
                else {
                  pQVar1 = param_3->field0_0x0;
                  iVar6 = QString::compare_helper
                                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                                     "Settings.Tools.SharedFolders.HostSharing.ShareAllMacDisks",
                                     0xffffffff,1);
                  if (iVar6 == 0) {
                    cVar4 = FUN_1003efde0(param_1);
                  }
                  else {
                    pQVar1 = param_3->field0_0x0;
                    iVar6 = QString::compare_helper
                                      (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4)
                                       ,"Settings.Tools.SharedProfile.Enabled",0xffffffff,1);
                    if (iVar6 == 0) {
                      cVar4 = FUN_1003f02d0(param_1);
                    }
                    else {
                      pQVar1 = param_3->field0_0x0;
                      iVar6 = QString::compare_helper
                                        (pQVar1 + *(long *)(pQVar1 + 0x10),
                                         *(undefined4 *)(pQVar1 + 4),
                                         "Settings.Tools.SharedFolders.HostSharing.Enabled",
                                         0xffffffff,1);
                      if (iVar6 == 0) {
                        cVar4 = FUN_1003f0880(param_1);
                      }
                      else {
                        pQVar1 = param_3->field0_0x0;
                        iVar6 = QString::compare_helper
                                          (pQVar1 + *(long *)(pQVar1 + 0x10),
                                           *(undefined4 *)(pQVar1 + 4),
                                           "Settings.Tools.SharedVolumes.Enabled",0xffffffff,1);
                        if (iVar6 == 0) goto LAB_1003e8a23;
                        pQVar1 = param_3->field0_0x0;
                        iVar6 = QString::compare_helper
                                          (pQVar1 + *(long *)(pQVar1 + 0x10),
                                           *(undefined4 *)(pQVar1 + 4),"Settings.General.OsNumber",
                                           0xffffffff,1);
                        if (iVar6 == 0) {
                          FUN_1003f0c70(param_1);
                          goto LAB_1003e8a23;
                        }
                        pQVar1 = param_3->field0_0x0;
                        iVar6 = QString::compare_helper
                                          (pQVar1 + *(long *)(pQVar1 + 0x10),
                                           *(undefined4 *)(pQVar1 + 4),
                                           "Settings.Startup.VmStartLoginMode",0xffffffff,1);
                        if (iVar6 == 0) {
                          FUN_1003f1110(param_1);
                          goto LAB_1003e8a23;
                        }
                        pQVar1 = param_3->field0_0x0;
                        iVar6 = QString::compare_helper
                                          (pQVar1 + *(long *)(pQVar1 + 0x10),
                                           *(undefined4 *)(pQVar1 + 4),
                                           "Settings.UsbController.XhcEnabled",0xffffffff,1);
                        if (iVar6 == 0) {
                          cVar4 = FUN_1003f1270(param_1);
                          goto LAB_1003e83a2;
                        }
                        pQVar1 = param_3->field0_0x0;
                        iVar6 = QString::compare_helper
                                          (pQVar1 + *(long *)(pQVar1 + 0x10),
                                           *(undefined4 *)(pQVar1 + 4),
                                           PTR_s_Settings_Startup_BootingOrder_Bo_102273e38,
                                           0xffffffff,1);
                        if (iVar6 == 0) {
                          FUN_1003f1760(param_1);
                          goto LAB_1003e8a23;
                        }
                        local_e0 = (QArrayData *)QString::fromAscii_helper("Hardware.Hdd[",0xd);
                        iVar6 = QString::indexOf(param_3,&local_e0,0,1);
                        if (iVar6 == -1) {
                          cVar4 = '\0';
                        }
                        else {
                          local_e8 = (QArrayData *)QString::fromAscii_helper("SystemName",10);
                          cVar4 = QString::endsWith(param_3,&local_e8,1);
                          if (*(int *)local_e8 != -1) {
                            if (*(int *)local_e8 != 0) {
                              LOCK();
                              *(int *)local_e8 = *(int *)local_e8 + -1;
                              local_31 = *(int *)local_e8 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_1003e8ab7;
                            }
                            QArrayData::deallocate(local_e8,2,8);
                          }
                        }
LAB_1003e8ab7:
                        if (*(int *)local_e0 != -1) {
                          if (*(int *)local_e0 != 0) {
                            LOCK();
                            *(int *)local_e0 = *(int *)local_e0 + -1;
                            local_31 = *(int *)local_e0 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_1003e8aed;
                          }
                          QArrayData::deallocate(local_e0,2,8);
                        }
LAB_1003e8aed:
                        if (cVar4 != '\0') {
                          FUN_1003f5600(param_1);
                          goto LAB_1003e8a23;
                        }
                        pQVar1 = param_3->field0_0x0;
                        iVar6 = QString::compare_helper
                                          (pQVar1 + *(long *)(pQVar1 + 0x10),
                                           *(undefined4 *)(pQVar1 + 4),"Hardware.Cpu.VirtualizedHV",
                                           0xffffffff,1);
                        if (iVar6 == 0) {
                          cVar4 = FUN_1003f5990(param_1);
                        }
                        else {
                          pQVar1 = param_3->field0_0x0;
                          iVar6 = QString::compare_helper
                                            (pQVar1 + *(long *)(pQVar1 + 0x10),
                                             *(undefined4 *)(pQVar1 + 4),
                                             "Hardware.Cpu.VirtualizePMU",0xffffffff,1);
                          if (iVar6 == 0) {
                            cVar4 = FUN_1003f5d50(param_1);
                          }
                          else {
                            pQVar1 = param_3->field0_0x0;
                            iVar6 = QString::compare_helper
                                              (pQVar1 + *(long *)(pQVar1 + 0x10),
                                               *(undefined4 *)(pQVar1 + 4),
                                               "Settings.Startup.ExternalDeviceSystemName",
                                               0xffffffff,1);
                            if (iVar6 == 0) {
                              cVar4 = FUN_1003f5f90(param_1);
                            }
                            else {
                              local_f0 = (QArrayData *)
                                         QString::fromAscii_helper("Hardware.Hdd[",0xd);
                              iVar6 = QString::indexOf(param_3,&local_f0,0,1);
                              if (iVar6 == -1) {
                                cVar4 = '\0';
                              }
                              else {
                                local_f8 = (QArrayData *)
                                           QString::fromAscii_helper("OnlineCompactMode",0x11);
                                cVar4 = QString::endsWith(param_3,&local_f8,1);
                                if (*(int *)local_f8 != -1) {
                                  if (*(int *)local_f8 != 0) {
                                    LOCK();
                                    *(int *)local_f8 = *(int *)local_f8 + -1;
                                    local_31 = *(int *)local_f8 != 0;
                                    UNLOCK();
                                    if ((bool)local_31) goto LAB_1003e8e29;
                                  }
                                  QArrayData::deallocate(local_f8,2,8);
                                }
                              }
LAB_1003e8e29:
                              if (*(int *)local_f0 != -1) {
                                if (*(int *)local_f0 != 0) {
                                  LOCK();
                                  *(int *)local_f0 = *(int *)local_f0 + -1;
                                  local_31 = *(int *)local_f0 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_1003e8e5f;
                                }
                                QArrayData::deallocate(local_f0,2,8);
                              }
LAB_1003e8e5f:
                              if (cVar4 == '\0') {
                                pQVar1 = param_3->field0_0x0;
                                iVar6 = QString::compare_helper
                                                  (pQVar1 + *(long *)(pQVar1 + 0x10),
                                                   *(undefined4 *)(pQVar1 + 4),
                                                   PTR_s_Settings_Tools_SharedFolders_Hos_102273e48,
                                                   0xffffffff,1);
                                if (iVar6 == 0) {
                                  FUN_1003f6f00(param_1);
                                  goto LAB_1003e8a23;
                                }
                                pQVar1 = param_3->field0_0x0;
                                iVar6 = QString::compare_helper
                                                  (pQVar1 + *(long *)(pQVar1 + 0x10),
                                                   *(undefined4 *)(pQVar1 + 4),
                                                   "Settings.Tools.SharedApplications.FromWinToMac",
                                                   0xffffffff,1);
                                if (iVar6 == 0) {
                                  cVar4 = FUN_1003f7310(param_1);
                                }
                                else {
                                  pQVar1 = param_3->field0_0x0;
                                  iVar6 = QString::compare_helper
                                                    (pQVar1 + *(long *)(pQVar1 + 0x10),
                                                     *(undefined4 *)(pQVar1 + 4),
                                                                                                          
                                                  "Settings.Tools.SharedApplications.FromMacToWin",
                                                  0xffffffff,1);
                                  if (iVar6 != 0) {
                                    pQVar1 = param_3->field0_0x0;
                                    iVar6 = QString::compare_helper
                                                      (pQVar1 + *(long *)(pQVar1 + 0x10),
                                                       *(undefined4 *)(pQVar1 + 4),
                                                                                                              
                                                  "Settings.Tools.SharedApplications.StoreInternetPasswordsInOSXKeychain"
                                                  ,0xffffffff,1);
                                    if (iVar6 == 0) {
                                      FUN_1003f7800(param_1);
                                      return 1;
                                    }
                                    goto LAB_1003e8a23;
                                  }
                                  cVar4 = FUN_1003f75e0(param_1);
                                }
                              }
                              else {
                                cVar4 = FUN_1003f6810(param_1);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_1003e83a2;
            }
          }
          FUN_1003ef130(param_1);
          goto LAB_1003e8a23;
        }
        cVar4 = FUN_1003eda10(param_1);
      }
      else {
        cVar4 = FUN_1003ed020(param_1);
      }
    }
    else {
      local_60 = (QArrayData *)QString::fromAscii_helper("Hardware.Hdd[",0xd);
      iVar6 = QString::indexOf(param_3,&local_60,0,1);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e7df3;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1003e7df3:
      if (iVar6 == -1) {
        local_68 = (QArrayData *)QString::fromAscii_helper("Hardware.CdRom[",0xf);
        iVar6 = QString::indexOf(param_3,&local_68,0,1);
        bVar7 = true;
        if (iVar6 == -1) {
          local_70 = (QArrayData *)QString::fromAscii_helper("Hardware.GenericScsiDevice[",0x1b);
          iVar6 = QString::indexOf(param_3,&local_70,0,1);
          bVar7 = iVar6 != -1;
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003e7f6c;
            }
            QArrayData::deallocate(local_70,2,8);
          }
        }
LAB_1003e7f6c:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e7f9c;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_1003e7f9c:
        if (!bVar7) goto LAB_1003e8a23;
        cVar4 = FUN_1003ec390(param_1);
      }
      else {
        cVar4 = FUN_1003ebf40(param_1);
      }
    }
  }
  else {
    cVar4 = FUN_1003e9280(param_1);
  }
LAB_1003e83a2:
  if (cVar4 != '\0') {
    return 1;
  }
LAB_1003e8a23:
  FUN_1003f7a20(param_1,1);
  return 0;
}

