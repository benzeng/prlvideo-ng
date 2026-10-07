
undefined8 FUN_100085da0(long param_1,long param_2)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  long *plVar10;
  Data *pDVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmSettings();
  if (*(int *)(*(long *)(param_2 + 0x1a0) + 8) < *(int *)(*(long *)(param_2 + 0x1a0) + 0xc)) {
    iVar14 = 0;
    do {
      FUN_100081fb0((long *)(param_2 + 0x1a0),iVar14);
      iVar5 = CVmDevice::getEnabled();
      if (iVar5 == 1) {
        uVar6 = CVmDevice::getIndex();
        if (uVar6 < 2) {
          *(undefined8 *)(param_1 + 0x3c + (ulong)uVar6 * 0x110) = 0xc00000001;
          iVar5 = CVmDevice::getConnected();
          *(uint *)(param_1 + 0x44 + (ulong)uVar6 * 0x110) = (uint)(iVar5 == 1);
        }
        else {
          FUN_1008e3970("","vm",0,"[Config] Wrong %s config %u","flp");
        }
      }
      iVar14 = iVar14 + 1;
      lVar18 = *(long *)(param_2 + 0x1a0);
    } while (iVar14 < *(int *)(lVar18 + 0xc) - *(int *)(lVar18 + 8));
  }
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  if (*(int *)(*(long *)(param_2 + 0x1b0) + 8) < *(int *)(*(long *)(param_2 + 0x1b0) + 0xc)) {
    uVar6 = 0xff;
    bVar2 = false;
    iVar14 = 0;
    do {
      FUN_100082610((long *)(param_2 + 0x1b0),iVar14);
      iVar5 = CVmClusteredDevice::getInterfaceType();
      iVar7 = CVmDevice::getEnabled();
      if (iVar7 == 1) {
        CVmDevice::getSystemName();
        iVar7 = *(int *)(local_40 + 4);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100085f4a;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_100085f4a:
        if (iVar7 != 0) {
          if (iVar5 == 2) {
            bVar2 = true;
          }
          else if (iVar5 == 1) {
            uVar6 = CVmClusteredDevice::getSubType();
          }
          else {
            uVar8 = CVmClusteredDevice::getStackIndex();
            if (iVar5 == 0) {
              if (uVar8 < 4) {
                *(uint *)(param_1 + 0x458) = *(uint *)(param_1 + 0x458) | 1 << ((byte)uVar8 & 0x1f);
              }
              else {
                FUN_1008e3970("","vm",0,"[Config] Wrong %u config %u",0);
              }
            }
            else {
              FUN_1008e3970("","vm",0,"Unknown disk type specified %u",iVar5);
            }
          }
        }
      }
      iVar14 = iVar14 + 1;
      lVar18 = *(long *)(param_2 + 0x1b0);
    } while (iVar14 < *(int *)(lVar18 + 0xc) - *(int *)(lVar18 + 8));
  }
  else {
    bVar2 = false;
    uVar6 = 0xff;
  }
  if (*(int *)(*(long *)(param_2 + 0x1a8) + 8) < *(int *)(*(long *)(param_2 + 0x1a8) + 0xc)) {
    iVar14 = 0;
    do {
      FUN_100081f00((long *)(param_2 + 0x1a8),iVar14);
      iVar5 = CVmDevice::getEnabled();
      if (iVar5 == 1) {
        uVar8 = CVmClusteredDevice::getStackIndex();
        iVar5 = CVmClusteredDevice::getInterfaceType();
        if (iVar5 == 2) {
          if (uVar8 < 0x40) {
            if ((uVar8 & 0x1e) < 6) {
              bVar2 = true;
            }
            else {
              uVar15 = 2;
LAB_1000860e3:
              FUN_1008e3970("","vm",0,"[Config] Wrong %u config %u",uVar15,uVar8);
            }
          }
          else {
            FUN_1008e3970("","vm",0,"Can not get disk reference for HBA[%d]",uVar8 >> 5);
          }
        }
        else if (iVar5 == 1) {
          uVar6 = CVmClusteredDevice::getSubType();
        }
        else if (iVar5 == 0) {
          if (3 < uVar8) {
            uVar15 = 0;
            goto LAB_1000860e3;
          }
          *(uint *)(param_1 + 0x458) = *(uint *)(param_1 + 0x458) | 1 << ((byte)uVar8 & 0x1f);
        }
      }
      iVar14 = iVar14 + 1;
      lVar18 = *(long *)(param_2 + 0x1a8);
    } while (iVar14 < *(int *)(lVar18 + 0xc) - *(int *)(lVar18 + 8));
  }
  if (bVar2) {
    lVar18 = param_1 + 0xa58;
    uVar9 = FUN_1007da320(lVar18,"devices.ahci.enable",1);
    iVar14 = FUN_1007da320(lVar18,"devices.ahci.ncq",1);
    iVar5 = FUN_1006d65a0();
    iVar5 = FUN_1007da320(lVar18,"devices.ahci.hotplug",iVar5 == 0);
    *(undefined4 *)(param_1 + 0x448) = uVar9;
    *(undefined4 *)(param_1 + 0x44c) = uVar9;
    *(uint *)(param_1 + 0x450) = (uint)(iVar14 != 0);
    *(uint *)(param_1 + 0x454) = (uint)(iVar5 != 0);
  }
  if (*(int *)(*(long *)(param_2 + 0x200) + 8) < *(int *)(*(long *)(param_2 + 0x200) + 0xc)) {
    iVar14 = 0;
    do {
      FUN_100088da0((long *)(param_2 + 0x200),iVar14);
      iVar5 = CVmDevice::getEnabled();
      if (iVar5 == 1) {
        uVar6 = CVmClusteredDevice::getSubType();
      }
      iVar14 = iVar14 + 1;
      lVar18 = *(long *)(param_2 + 0x200);
    } while (iVar14 < *(int *)(lVar18 + 0xc) - *(int *)(lVar18 + 8));
  }
  uVar8 = FUN_1007da320(param_1 + 0xa58,"devices.scsi",uVar6);
  *(uint *)(param_1 + 0x444) = uVar8;
  pcVar17 = "not specified";
  pcVar16 = "not specified";
  if (uVar8 < 3) {
    pcVar16 = (&PTR_s_BusLogic_100ba8700)[(int)uVar8];
  }
  if (uVar6 < 3) {
    pcVar17 = (&PTR_s_BusLogic_100ba8700)[(int)uVar6];
  }
  iVar14 = 0;
  FUN_1008e3970("","vm",0,"SCSI controller: %s (in config %s)",pcVar16,pcVar17);
  if (*(int *)(*(long *)(param_2 + 0x1b8) + 8) < *(int *)(*(long *)(param_2 + 0x1b8) + 0xc)) {
    do {
      FUN_1000818a0((long *)(param_2 + 0x1b8),iVar14);
      uVar6 = CVmDevice::getIndex();
      if (uVar6 < 4) {
        iVar5 = CVmDevice::getEnabled();
        *(uint *)(param_1 + 0x25c + (ulong)uVar6 * 4) = (uint)(iVar5 == 1);
      }
      else {
        FUN_1008e3970("","vm",0,"[Config] Wrong %s config %u","ser",uVar6);
      }
      iVar14 = iVar14 + 1;
      lVar18 = *(long *)(param_2 + 0x1b8);
    } while (iVar14 < *(int *)(lVar18 + 0xc) - *(int *)(lVar18 + 8));
  }
  if (*(int *)(*(long *)(param_2 + 0x1c8) + 8) < *(int *)(*(long *)(param_2 + 0x1c8) + 0xc)) {
    iVar14 = 0;
    do {
      FUN_1000817f0((long *)(param_2 + 0x1c8),iVar14);
      uVar6 = CVmDevice::getIndex();
      if (uVar6 < 3) {
        iVar5 = CVmDevice::getEnabled();
        *(uint *)(param_1 + 0x26c + (ulong)uVar6 * 4) = (uint)(iVar5 == 1);
      }
      else {
        FUN_1008e3970("","vm",0,"[Config] Wrong %s config %u","prn",uVar6);
      }
      iVar14 = iVar14 + 1;
      lVar18 = *(long *)(param_2 + 0x1c8);
    } while (iVar14 < *(int *)(lVar18 + 0xc) - *(int *)(lVar18 + 8));
  }
  *(undefined4 *)(param_1 + 0xf64) = 0;
  if (*(int *)(*(long *)(param_2 + 0x1d0) + 8) < *(int *)(*(long *)(param_2 + 0x1d0) + 0xc)) {
    iVar14 = 0;
    do {
      FUN_100081190((long *)(param_2 + 0x1d0),iVar14);
      iVar5 = CVmDevice::getIndex();
      if (iVar5 < 0x10) {
        iVar7 = CVmDevice::getEnabled();
        if ((iVar7 == 1) && (iVar7 = CVmDevice::getEmulatedType(), iVar7 != 4)) {
          uVar9 = CVmGenericNetworkAdapter::getAdapterType();
          iVar7 = FUN_1000946b0(uVar9);
          if (iVar7 == 0) {
            local_58 = 0;
            uStack_50 = 0;
            local_48 = 0;
            FUN_100408ff0(DAT_1011c3698 + 0x10b0,0x80004034,&local_58);
            FUN_10002d9d0(&local_58);
            break;
          }
          *(uint *)(param_1 + 0xf64) = *(uint *)(param_1 + 0xf64) | 1 << ((byte)iVar5 & 0x1f);
          lVar18 = (long)iVar5 * 0x1c;
          *(undefined4 *)(param_1 + 0x278 + lVar18) = 1;
          *(int *)(param_1 + 0x27c + lVar18) = iVar5;
          *(char *)(param_1 + 0x280 + lVar18) = (char)iVar7;
          CVmGenericNetworkAdapter::getMacAddress();
          cVar3 = FUN_1006b6c60(&local_60,param_1 + 0x28c + lVar18);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10008650c;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_10008650c:
          if (cVar3 == '\0') {
            CVmGenericNetworkAdapter::getMacAddress();
            QString::toLatin1();
            FUN_1008e3970("","vm",0,"MonitorConfig: VMAdapter %d has wrong-formatted MAC-Address %s"
                          ,iVar5,local_68 + *(long *)(local_68 + 0x10));
            if (*(int *)local_68 != -1) {
              if (*(int *)local_68 != 0) {
                LOCK();
                *(int *)local_68 = *(int *)local_68 + -1;
                local_31 = *(int *)local_68 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100086596;
              }
              QArrayData::deallocate(local_68,1,8);
            }
LAB_100086596:
            if (*(int *)local_70 != -1) {
              if (*(int *)local_70 != 0) {
                LOCK();
                *(int *)local_70 = *(int *)local_70 + -1;
                local_31 = *(int *)local_70 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100086664;
              }
              QArrayData::deallocate(local_70,2,8);
            }
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x278 + (long)iVar5 * 0x1c) = 0;
        }
      }
      else {
        FUN_1008e3970("","vm",0,"[Config] Wrong %s config %u","ser",iVar5);
      }
LAB_100086664:
      iVar14 = iVar14 + 1;
      if ((0xf < iVar14) ||
         (lVar18 = *(long *)(param_2 + 0x1d0),
         *(int *)(lVar18 + 0xc) - *(int *)(lVar18 + 8) <= iVar14)) break;
    } while( true );
  }
  if (*(int *)(*(long *)(param_2 + 0x1d8) + 8) < *(int *)(*(long *)(param_2 + 0x1d8) + 0xc)) {
    iVar14 = 0;
    do {
      FUN_1000810e0((long *)(param_2 + 0x1d8),iVar14);
      iVar5 = CVmDevice::getEnabled();
      if (iVar5 == 1) {
        *(undefined4 *)(param_1 + 0x438) = 1;
        iVar5 = CVmDevice::getEmulatedType();
        *(bool *)(param_1 + 0x43c) = iVar5 == 1;
      }
      iVar14 = iVar14 + 1;
      lVar18 = *(long *)(param_2 + 0x1d8);
    } while (iVar14 < *(int *)(lVar18 + 0xc) - *(int *)(lVar18 + 8));
  }
  *(undefined4 *)(param_1 + 0x440) = 0;
  puVar1 = *(uint **)(param_2 + 0x1e0);
  uVar6 = puVar1[2];
  if (puVar1[3] == uVar6) {
    return 0;
  }
  plVar10 = (long *)(param_2 + 0x1e0);
  if (1 < *puVar1) {
    pDVar11 = (Data *)QListData::detach((int)plVar10);
    lVar18 = *plVar10;
    lVar12 = (long)*(int *)(lVar18 + 8);
    if ((puVar1 + (long)(int)uVar6 * 2 != (uint *)(lVar18 + lVar12 * 8)) &&
       (lVar13 = *(int *)(lVar18 + 0xc) - lVar12, lVar13 != 0 && lVar12 <= *(int *)(lVar18 + 0xc)))
    {
      _memcpy((void *)(lVar18 + 0x10 + lVar12 * 8),puVar1 + (long)(int)uVar6 * 2 + 4,lVar13 * 8);
    }
    if (*(int *)pDVar11 != -1) {
      if (*(int *)pDVar11 != 0) {
        LOCK();
        *(int *)pDVar11 = *(int *)pDVar11 + -1;
        local_31 = *(int *)pDVar11 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000867b0;
      }
      QListData::dispose(pDVar11);
    }
  }
LAB_1000867b0:
  if ((*(long *)(*plVar10 + 0x10 + (long)*(int *)(*plVar10 + 8) * 8) != 0) &&
     (iVar14 = CVmDevice::getEnabled(), iVar14 == 1)) {
    CVmSettings::getUsbController();
    uVar4 = CVmUsbController::isUhcEnabled();
    iVar14 = FUN_1007da300("devices.usb.uhc",uVar4);
    if (iVar14 != 0) {
      *(byte *)(param_1 + 0x440) = *(byte *)(param_1 + 0x440) | 1;
    }
    CVmSettings::getUsbController();
    uVar4 = CVmUsbController::isEhcEnabled();
    iVar14 = FUN_1007da300("devices.usb.ehc",uVar4);
    if (iVar14 != 0) {
      *(byte *)(param_1 + 0x440) = *(byte *)(param_1 + 0x440) | 2;
    }
    CVmSettings::getUsbController();
    uVar4 = CVmUsbController::isXhcEnabled();
    iVar14 = FUN_1007da300("devices.usb.xhc",uVar4);
    if (iVar14 != 0) {
      *(byte *)(param_1 + 0x440) = *(byte *)(param_1 + 0x440) | 4;
    }
  }
  return 0;
}

