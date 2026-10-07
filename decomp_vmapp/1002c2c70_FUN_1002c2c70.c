
ulong FUN_1002c2c70(undefined8 param_1,CVmUsbDevice *param_2)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  CHwUsbDevice *pCVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  CVmExternalDevices *pCVar11;
  long lVar12;
  long lVar13;
  QArrayData *pQVar14;
  QArrayData *pQVar15;
  QArrayData *pQVar16;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  long *local_58;
  long local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_50 = DAT_1011c3698 + 0x110;
  uVar10 = FUN_1000b4970(&local_50);
  cVar6 = '\x01';
  if ((int)uVar10 != 2) goto LAB_1002c32ed;
  FUN_100090a50(&local_58,DAT_1011c3698);
  plVar3 = *(long **)(local_58[2] + 0x180);
  local_78 = (Data *)*plVar3;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_78);
      lVar12 = (long)*(int *)(local_78 + 8);
      lVar4 = *plVar3;
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_78 + lVar12 * 8) &&
         (lVar13 = *(int *)(local_78 + 0xc) - lVar12,
         lVar13 != 0 && lVar12 <= *(int *)(local_78 + 0xc))) {
        _memcpy(local_78 + lVar12 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar13 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_60 = 1;
  if (*(int *)(local_78 + 8) == *(int *)(local_78 + 0xc)) {
    iVar7 = 2;
    cVar6 = '\x01';
  }
  else {
    do {
      local_60 = 1;
      pCVar5 = *(CHwUsbDevice **)local_70;
      (**(code **)(*(long *)pCVar5 + 0xb8))(&local_88);
      QString::QString(&local_48,0x7c);
      QString::section(&local_80,&local_88,&local_48,0,2,0);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c2de1;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_1002c2de1:
      CVmDevice::getSystemName();
      QString::QString(&local_40,0x7c);
      QString::section(&local_90,&local_98,&local_40,0,2,0);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c2e4e;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1002c2e4e:
      cVar6 = operator==(&local_80,&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c2e96;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_1002c2e96:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c2ecc;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1002c2ecc:
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c2efc;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1002c2efc:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c2f2c;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1002c2f2c:
      if (cVar6 != '\0') {
        iVar7 = CHwUsbDevice::getUsbType();
        iVar8 = CVmUsbDevice::getUsbType();
        if (iVar7 != iVar8) {
          CVmDevice::getSystemName();
          QString::toUtf8();
          pQVar15 = local_a0 + *(long *)(local_a0 + 0x10);
          CVmDevice::getUserFriendlyName();
          QString::toUtf8();
          pQVar16 = local_b0 + *(long *)(local_b0 + 0x10);
          uVar9 = CVmUsbDevice::getUsbType();
          FUN_1006fd930(&local_c8,uVar9);
          QString::toUtf8();
          pQVar14 = local_c0 + *(long *)(local_c0 + 0x10);
          uVar9 = CHwUsbDevice::getUsbType();
          FUN_1006fd930(&local_d8,uVar9);
          QString::toUtf8();
          FUN_1008e3970("","USB",0,"[USB] Recover lost USB type for %s (%s), %s -> %s",pQVar15,
                        pQVar16,pQVar14,local_d0 + *(long *)(local_d0 + 0x10));
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c30b9;
            }
            QArrayData::deallocate(local_d0,1,8);
          }
LAB_1002c30b9:
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c30ef;
            }
            QArrayData::deallocate(local_d8,2,8);
          }
LAB_1002c30ef:
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c3128;
            }
            QArrayData::deallocate(local_c0,1,8);
          }
LAB_1002c3128:
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c315e;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
LAB_1002c315e:
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c3194;
            }
            QArrayData::deallocate(local_b0,1,8);
          }
LAB_1002c3194:
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c31ca;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_1002c31ca:
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c3200;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
LAB_1002c3200:
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c3236;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_1002c3236:
          CVmConfiguration::getVmSettings();
          CVmSettings::getUsbController();
          pCVar11 = (CVmExternalDevices *)CVmUsbController::getExternalDevices();
          cVar6 = CXmlUsbHelper::IsUsbDeviceAllowed(pCVar5,pCVar11);
          iVar7 = 1;
          break;
        }
      }
      local_70 = local_70 + 8;
      local_60 = 1;
      iVar7 = 2;
    } while (local_70 != local_68);
  }
  uVar2 = *(uint *)local_78;
  uVar10 = (ulong)uVar2;
  if (uVar2 != 0xffffffff) {
    if (uVar2 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c3292;
    }
    uVar10 = QListData::dispose(local_78);
  }
LAB_1002c3292:
  if (iVar7 == 2) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getUsbController();
    pCVar11 = (CVmExternalDevices *)CVmUsbController::getExternalDevices();
    uVar10 = CXmlUsbHelper::IsUsbDeviceAllowed(param_2,pCVar11);
    cVar6 = (char)uVar10;
  }
  if (local_58 != (long *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_58 + 1);
    uVar2 = *puVar1;
    uVar10 = (ulong)uVar2;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      uVar10 = (**(code **)(*local_58 + 0x10))();
    }
  }
LAB_1002c32ed:
  return CONCAT71((int7)(uVar10 >> 8),cVar6) & 0xffffffffffffff01;
}

