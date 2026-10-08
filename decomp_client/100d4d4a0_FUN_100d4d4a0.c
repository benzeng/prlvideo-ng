
/* WARNING: Type propagation algorithm not settling */

QArrayData *
FUN_100d4d4a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  long lVar7;
  int iVar8;
  QArrayData *pQVar9;
  QArrayData *local_4138;
  undefined *local_4130;
  long local_4128;
  QString local_4120;
  QString local_4118;
  QArrayData *local_4110;
  QString local_4108;
  QString local_4100;
  QArrayData *local_40f8;
  QArrayData *local_40f0;
  QString local_40e8;
  QFileInfo local_40e0 [8];
  QArrayData *local_40d8;
  QArrayData *local_40d0;
  undefined4 local_40c4;
  long local_40c0;
  long local_40b8;
  int local_40b0 [2];
  QArrayData *local_40a8;
  QArrayData *local_40a0;
  QArrayData *local_4098;
  QArrayData *local_4090;
  int local_4084;
  long local_4080;
  uint local_4074;
  long local_4070;
  undefined1 local_4061;
  long local_4060;
  char local_4058;
  undefined1 local_4057 [4096];
  undefined1 local_3057 [4099];
  undefined1 local_2054 [4];
  undefined1 local_2050 [8];
  undefined1 local_2048;
  char local_2047 [4096];
  char local_1047 [4099];
  undefined4 local_44;
  undefined4 local_40;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_4128 = 0;
  local_38 = lVar7;
  uVar3 = FUN_100d4ec80(param_1,&local_4128);
  pQVar9 = (QArrayData *)(ulong)uVar3;
  if ((int)uVar3 < 0) goto LAB_100d4e5f3;
  uVar3 = FUN_100d4ed50(&local_4128,param_3);
  pQVar9 = (QArrayData *)(ulong)uVar3;
  if ((int)uVar3 < 0) goto LAB_100d4e5f3;
  local_4058 = '\0';
  local_40b0[0] = 0;
  uVar3 = _PrlVmCfg_GetSerialPortsCount(local_4128,local_40b0);
  pQVar9 = (QArrayData *)(ulong)uVar3;
  if ((int)uVar3 < 0) {
    pQVar6 = (QArrayData *)FUN_100dddcf0(pQVar9);
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to get count of Serial ports PrlVmCfg_GetSerialPortsCount has failed with  RC = %.8X [%s]"
                  ,uVar3,pQVar6);
  }
  else {
    FUN_100df99c0("","PrlSdkUtils",0," Serial ports count %d",local_40b0[0]);
    if (local_40b0[0] == 0) {
      local_40b8 = 0;
      uVar3 = _PrlVmCfg_CreateVmDev(local_4128,10,&local_40b8);
      pQVar9 = (QArrayData *)(ulong)uVar3;
      if ((int)uVar3 < 0) {
        pQVar6 = (QArrayData *)FUN_100dddcf0(pQVar9);
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to create the serial port device configuration PrlVmCfg_CreateVmDev has failed with  RC = %.8X [%s]"
                      ,uVar3,pQVar6);
        if (local_40b8 != 0) {
          _PrlHandle_Free();
        }
        goto LAB_100d4deee;
      }
      if (local_40b8 != 0) {
        _PrlHandle_Free();
      }
    }
    local_40c0 = 0;
    uVar3 = _PrlVmCfg_GetSerialPort(local_4128,0,&local_40c0);
    pQVar9 = (QArrayData *)(ulong)uVar3;
    if ((int)uVar3 < 0) {
      pQVar6 = (QArrayData *)FUN_100dddcf0(pQVar9);
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Failed to get Serial port PrlVmCfg_GetSerialPort has failed with  RC = %.8X [%s]"
                    ,uVar3,pQVar6);
    }
    else if (local_40b0[0] == 0) {
LAB_100d4d68d:
      local_40d0 = (QArrayData *)PTR_shared_null_1021e1288;
      local_40b0[1] = 0;
      uVar3 = _PrlVmCfg_GetHomePath(local_4128,0,local_40b0 + 1);
      if ((uVar3 == 0x80000006) || (uVar3 == 0)) {
        QByteArray::resize((int)&local_40d0);
        lVar2 = local_4128;
        if ((1 < *(uint *)local_40d0) || (*(long *)(local_40d0 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_40d0,*(uint *)(local_40d0 + 4) + 1,*(uint *)(local_40d0 + 8) >> 0x1f);
        }
        uVar3 = _PrlVmCfg_GetHomePath
                          (lVar2,local_40d0 + *(long *)(local_40d0 + 0x10),local_40b0 + 1);
      }
      pQVar9 = (QArrayData *)(ulong)uVar3;
      if ((int)uVar3 < 0) {
        pQVar6 = (QArrayData *)FUN_100dddcf0(pQVar9);
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to get the VM folder GetPrlStr(PrlVmCfg_GetHomePath) has failed with  RC = %.8X [%s]"
                      ,pQVar9,pQVar6);
      }
      else {
        pQVar6 = local_40d0 + *(long *)(local_40d0 + 0x10);
        if (pQVar6 != (QArrayData *)0x0) {
          _strlen((char *)pQVar6);
        }
        QString::fromUtf8_helper((char *)&local_40f0,(int)pQVar6);
        QString::normalized(&local_40e8,&local_40f0,1,0);
        QFileInfo::QFileInfo(local_40e0,&local_40e8);
        QFileInfo::absolutePath();
        QFileInfo::~QFileInfo(local_40e0);
        if (*(int *)local_40e8.field0_0x0 != -1) {
          if (*(int *)local_40e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40e8.field0_0x0 = *(int *)local_40e8.field0_0x0 + -1;
            local_4061 = *(int *)local_40e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4d7ec;
          }
          QArrayData::deallocate((QArrayData *)local_40e8.field0_0x0,2,8);
        }
LAB_100d4d7ec:
        if (*(int *)local_40f0 != -1) {
          if (*(int *)local_40f0 != 0) {
            LOCK();
            *(int *)local_40f0 = *(int *)local_40f0 + -1;
            local_4061 = *(int *)local_40f0 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4d828;
          }
          QArrayData::deallocate(local_40f0,2,8);
        }
LAB_100d4d828:
        local_4108.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40d8;
        if (1 < *(int *)local_40d8 + 1U) {
          LOCK();
          *(int *)local_40d8 = *(int *)local_40d8 + 1;
          local_4061 = *(int *)local_40d8 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_40a8,0x1e2468c);
        QString::append(&local_4108);
        if (*(int *)local_40a8 != -1) {
          if (*(int *)local_40a8 != 0) {
            LOCK();
            *(int *)local_40a8 = *(int *)local_40a8 + -1;
            local_4061 = *(int *)local_40a8 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4d8b1;
          }
          QArrayData::deallocate(local_40a8,2,8);
        }
LAB_100d4d8b1:
        local_4100.field0_0x0 = local_4108.field0_0x0;
        if (1 < *(int *)local_4108.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_4108.field0_0x0 = *(int *)local_4108.field0_0x0 + 1;
          local_4061 = *(int *)local_4108.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_40a0,0x1efa670);
        QString::append(&local_4100);
        if (*(int *)local_40a0 != -1) {
          if (*(int *)local_40a0 != 0) {
            LOCK();
            *(int *)local_40a0 = *(int *)local_40a0 + -1;
            local_4061 = *(int *)local_40a0 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4d93a;
          }
          QArrayData::deallocate(local_40a0,2,8);
        }
LAB_100d4d93a:
        QString::toUtf8();
        if ((1 < *(uint *)local_40f8) || (*(long *)(local_40f8 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_40f8,*(uint *)(local_40f8 + 4) + 1,*(uint *)(local_40f8 + 8) >> 0x1f);
        }
        _strncpy(local_2047,(char *)(local_40f8 + *(long *)(local_40f8 + 0x10)),0x1000);
        if (*(int *)local_40f8 != -1) {
          if (*(int *)local_40f8 != 0) {
            LOCK();
            *(int *)local_40f8 = *(int *)local_40f8 + -1;
            local_4061 = *(int *)local_40f8 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4d9d1;
          }
          QArrayData::deallocate(local_40f8,1,8);
        }
LAB_100d4d9d1:
        if (*(int *)local_4100.field0_0x0 != -1) {
          if (*(int *)local_4100.field0_0x0 != 0) {
            LOCK();
            *(int *)local_4100.field0_0x0 = *(int *)local_4100.field0_0x0 + -1;
            local_4061 = *(int *)local_4100.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4da0d;
          }
          QArrayData::deallocate((QArrayData *)local_4100.field0_0x0,2,8);
        }
LAB_100d4da0d:
        if (*(int *)local_4108.field0_0x0 != -1) {
          if (*(int *)local_4108.field0_0x0 != 0) {
            LOCK();
            *(int *)local_4108.field0_0x0 = *(int *)local_4108.field0_0x0 + -1;
            local_4061 = *(int *)local_4108.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4da49;
          }
          QArrayData::deallocate((QArrayData *)local_4108.field0_0x0,2,8);
        }
LAB_100d4da49:
        local_4120.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40d8;
        if (1 < *(int *)local_40d8 + 1U) {
          LOCK();
          *(int *)local_40d8 = *(int *)local_40d8 + 1;
          local_4061 = *(int *)local_40d8 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_4098,0x1e2468c);
        QString::append(&local_4120);
        if (*(int *)local_4098 != -1) {
          if (*(int *)local_4098 != 0) {
            LOCK();
            *(int *)local_4098 = *(int *)local_4098 + -1;
            local_4061 = *(int *)local_4098 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4dad2;
          }
          QArrayData::deallocate(local_4098,2,8);
        }
LAB_100d4dad2:
        local_4118.field0_0x0 = local_4120.field0_0x0;
        if (1 < *(int *)local_4120.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_4120.field0_0x0 = *(int *)local_4120.field0_0x0 + 1;
          local_4061 = *(int *)local_4120.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_4090,0x1efa670);
        QString::append(&local_4118);
        if (*(int *)local_4090 != -1) {
          if (*(int *)local_4090 != 0) {
            LOCK();
            *(int *)local_4090 = *(int *)local_4090 + -1;
            local_4061 = *(int *)local_4090 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4db5b;
          }
          QArrayData::deallocate(local_4090,2,8);
        }
LAB_100d4db5b:
        QString::toUtf8();
        if ((1 < *(uint *)local_4110) || (*(long *)(local_4110 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_4110,*(uint *)(local_4110 + 4) + 1,*(uint *)(local_4110 + 8) >> 0x1f);
        }
        _strncpy(local_1047,(char *)(local_4110 + *(long *)(local_4110 + 0x10)),0x1000);
        if (*(int *)local_4110 != -1) {
          if (*(int *)local_4110 != 0) {
            LOCK();
            *(int *)local_4110 = *(int *)local_4110 + -1;
            local_4061 = *(int *)local_4110 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4dbf2;
          }
          QArrayData::deallocate(local_4110,1,8);
        }
LAB_100d4dbf2:
        if (*(int *)local_4118.field0_0x0 != -1) {
          if (*(int *)local_4118.field0_0x0 != 0) {
            LOCK();
            *(int *)local_4118.field0_0x0 = *(int *)local_4118.field0_0x0 + -1;
            local_4061 = *(int *)local_4118.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4dc2e;
          }
          QArrayData::deallocate((QArrayData *)local_4118.field0_0x0,2,8);
        }
LAB_100d4dc2e:
        if (*(int *)local_4120.field0_0x0 != -1) {
          if (*(int *)local_4120.field0_0x0 != 0) {
            LOCK();
            *(int *)local_4120.field0_0x0 = *(int *)local_4120.field0_0x0 + -1;
            local_4061 = *(int *)local_4120.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4dc6a;
          }
          QArrayData::deallocate((QArrayData *)local_4120.field0_0x0,2,8);
        }
LAB_100d4dc6a:
        local_44 = 2;
        local_40 = 1;
        uVar3 = FUN_100d4fd60(&local_40c0,&local_2048);
        pQVar9 = (QArrayData *)(ulong)uVar3;
        if (*(int *)local_40d8 != -1) {
          if (*(int *)local_40d8 != 0) {
            LOCK();
            *(int *)local_40d8 = *(int *)local_40d8 + -1;
            local_4061 = *(int *)local_40d8 != 0;
            UNLOCK();
            if ((bool)local_4061) goto LAB_100d4ddfa;
          }
          QArrayData::deallocate(local_40d8,2,8);
        }
      }
LAB_100d4ddfa:
      if (*(int *)local_40d0 != -1) {
        if (*(int *)local_40d0 != 0) {
          LOCK();
          *(int *)local_40d0 = *(int *)local_40d0 + -1;
          local_4061 = *(int *)local_40d0 != 0;
          UNLOCK();
          if ((bool)local_4061) goto LAB_100d4dedd;
        }
        QArrayData::deallocate(local_40d0,1,8);
      }
    }
    else {
      local_40c4 = 0x1000;
      uVar3 = _PrlVmDev_GetSysName(local_40c0,local_4057,&local_40c4);
      pQVar9 = (QArrayData *)(ulong)uVar3;
      if ((int)uVar3 < 0) {
        pQVar6 = (QArrayData *)FUN_100dddcf0(pQVar9);
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to get Serial port output sys name PrlVmDev_GetSysName has failed with  RC = %.8X [%s]"
                      ,uVar3,pQVar6);
      }
      else {
        local_40c4 = 0x1000;
        uVar3 = _PrlVmDev_GetFriendlyName(local_40c0,local_3057,&local_40c4);
        pQVar9 = (QArrayData *)(ulong)uVar3;
        if ((int)uVar3 < 0) {
          pQVar6 = (QArrayData *)FUN_100dddcf0(pQVar9);
          FUN_100df99c0("","PrlSdkUtils",0,
                        "Failed to get Serial port friendly name PrlVmDev_GetFriendlyName has failed with  RC = %.8X [%s]"
                        ,uVar3,pQVar6);
        }
        else {
          uVar3 = _PrlVmDev_GetEmulatedType(local_40c0,local_2054);
          pQVar9 = (QArrayData *)(ulong)uVar3;
          if ((int)uVar3 < 0) {
            pQVar6 = (QArrayData *)FUN_100dddcf0(pQVar9);
            FUN_100df99c0("","PrlSdkUtils",0,
                          "Failed to get Serial port emulation type PrlVmDev_GetEmulatedType has failed with  RC = %.8X [%s]"
                          ,uVar3,pQVar6);
          }
          else {
            uVar3 = _PrlVmDev_IsEnabled(local_40c0,local_2050);
            pQVar9 = (QArrayData *)(ulong)uVar3;
            if (-1 < (int)uVar3) {
              local_4058 = '\x01';
              goto LAB_100d4d68d;
            }
            pQVar6 = (QArrayData *)FUN_100dddcf0(pQVar9);
            FUN_100df99c0("","PrlSdkUtils",0,
                          "Failed to enable Serial port PrlVmDev_SetEnabled has failed with  RC = %.8X [%s]"
                          ,uVar3,pQVar6);
          }
        }
      }
    }
LAB_100d4dedd:
    if (local_40c0 != 0) {
      _PrlHandle_Free();
    }
  }
LAB_100d4deee:
  if ((int)pQVar9 < 0) goto LAB_100d4e5f3;
  local_4070 = 0;
  local_4074 = 0;
  uVar3 = _PrlVmCfg_GetBootDevCount(local_4128,&local_4074);
  pQVar9 = (QArrayData *)(ulong)uVar3;
  if ((int)uVar3 < 0) {
    uVar5 = FUN_100dddcf0(pQVar9);
    FUN_100df99c0("","PrlSdkUtils",0,
                  "Failed to get boot device count,  PrlVmCfg_GetBootDevCount has failed with  RC = %.8X [%s]"
                  ,uVar3,uVar5);
  }
  else {
    if (local_4074 == 0) {
LAB_100d4e159:
      local_4070 = 0;
      uVar3 = _PrlVmCfg_CreateBootDev(local_4128,&local_4070);
      pQVar9 = (QArrayData *)(ulong)uVar3;
      if ((int)uVar3 < 0) {
        uVar5 = FUN_100dddcf0(pQVar9);
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to create the hdd boot device,  PrlVmCfg_CreateBootDev has failed with  RC = %.8X [%s]"
                      ,uVar3,uVar5);
        goto LAB_100d4e336;
      }
    }
    else {
      iVar8 = 1;
      uVar3 = 0;
      do {
        local_4080 = 0;
        uVar4 = _PrlVmCfg_GetBootDev(local_4128,uVar3,&local_4080);
        if ((int)uVar4 < 0) {
          uVar5 = FUN_100dddcf0((QArrayData *)(ulong)uVar4);
          bVar1 = true;
          FUN_100df99c0("","PrlSdkUtils",0,
                        "Failed to get boot device,  PrlVmCfg_GetBootDev has failed with  RC = %.8X [%s]"
                        ,uVar4,uVar5);
          pQVar6 = (QArrayData *)(ulong)uVar4;
LAB_100d4e120:
          if (local_4080 != 0) {
            _PrlHandle_Free();
          }
          pQVar9 = pQVar6;
          if (bVar1) goto LAB_100d4e336;
        }
        else {
          uVar4 = _PrlBootDev_GetType(local_4080,&local_4084);
          if ((int)uVar4 < 0) {
            uVar5 = FUN_100dddcf0((QArrayData *)(ulong)uVar4);
            bVar1 = true;
            FUN_100df99c0("","PrlSdkUtils",0,
                          "Failed to get boot device type,  PrlBootDev_GetType has failed with  RC = %.8X [%s]"
                          ,uVar4,uVar5);
            pQVar6 = (QArrayData *)(ulong)uVar4;
            goto LAB_100d4e120;
          }
          if ((local_4084 != 5) || (local_4070 != 0)) {
            FUN_100df99c0("","PrlSdkUtils",0,"found device type %d ");
            uVar4 = _PrlBootDev_SetSequenceIndex(local_4080,iVar8);
            iVar8 = iVar8 + 1;
            bVar1 = false;
            if ((int)uVar4 < 0) {
              uVar5 = FUN_100dddcf0((QArrayData *)(ulong)uVar4);
              bVar1 = true;
              FUN_100df99c0("","PrlSdkUtils",0,
                            "Failed to set sequence index,  PrlBootDev_SetSequenceIndex has failed with  RC = %.8X [%s]"
                            ,uVar4,uVar5);
              pQVar6 = (QArrayData *)(ulong)uVar4;
            }
            else {
              pQVar6 = (QArrayData *)((ulong)pQVar6 & 0xffffffff);
            }
            goto LAB_100d4e120;
          }
          FUN_100df99c0("","PrlSdkUtils",0,"found optical. place %d ",uVar3);
          if (local_4070 != 0) {
            _PrlHandle_Free();
          }
          local_4070 = local_4080;
          if (local_4080 != 0) {
            bVar1 = false;
            _PrlHandle_AddRef();
            pQVar6 = (QArrayData *)((ulong)pQVar6 & 0xffffffff);
            goto LAB_100d4e120;
          }
          pQVar6 = (QArrayData *)((ulong)pQVar6 & 0xffffffff);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_4074);
      if (local_4070 == 0) goto LAB_100d4e159;
    }
    uVar3 = _PrlBootDev_SetType(local_4070,5);
    pQVar9 = (QArrayData *)(ulong)uVar3;
    if ((int)uVar3 < 0) {
      uVar5 = FUN_100dddcf0(pQVar9);
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Failed to set the hdd boot device type,  PrlBootDev_SetType has failed with  RC = %.8X [%s]"
                    ,uVar3,uVar5);
    }
    else {
      uVar3 = _PrlBootDev_SetIndex(local_4070,0);
      pQVar9 = (QArrayData *)(ulong)uVar3;
      if ((int)uVar3 < 0) {
        uVar5 = FUN_100dddcf0(pQVar9);
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Failed to set the hdd boot device index,  PrlBootDev_SetIndex has failed with  RC = %.8X [%s]"
                      ,uVar3,uVar5);
      }
      else {
        uVar3 = _PrlBootDev_SetSequenceIndex(local_4070,0);
        pQVar9 = (QArrayData *)(ulong)uVar3;
        if ((int)uVar3 < 0) {
          uVar5 = FUN_100dddcf0(pQVar9);
          FUN_100df99c0("","PrlSdkUtils",0,
                        "Failed to set the boot device sequence index, PrlBootDev_SetSequenceIndex( has failed with  RC = %.8X [%s]"
                        ,uVar3,uVar5);
        }
        else {
          uVar3 = _PrlBootDev_SetInUse(local_4070,1);
          pQVar9 = (QArrayData *)0x0;
          if ((int)uVar3 < 0) {
            uVar5 = FUN_100dddcf0(uVar3);
            FUN_100df99c0("","PrlSdkUtils",0,
                          "Failed to set the hdd boot device used, PrlBootDev_SetInUse has failed with  RC = %.8X [%s]"
                          ,uVar3,uVar5);
            pQVar9 = (QArrayData *)(ulong)uVar3;
          }
        }
      }
    }
  }
LAB_100d4e336:
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (local_4070 != 0) {
    _PrlHandle_Free();
  }
  if ((int)pQVar9 < 0) goto LAB_100d4e5f3;
  uVar3 = FUN_100d4ef90(param_1,&local_4128);
  pQVar9 = (QArrayData *)(ulong)uVar3;
  if ((int)uVar3 < 0) goto LAB_100d4e5f3;
  uVar5 = _PrlVm_Start(*param_1);
  uVar3 = FUN_100d429b0(uVar5,"start VM");
  pQVar9 = (QArrayData *)(ulong)uVar3;
  if ((int)uVar3 < 0) goto LAB_100d4e5f3;
  local_4130 = PTR_shared_null_1021e15e8;
  uVar3 = FUN_100d4f110(param_1,param_2,&local_4130,300);
  pQVar9 = (QArrayData *)(ulong)uVar3;
  FUN_100039a80(&local_4130);
  if (-1 < (int)uVar3) {
    uVar5 = _PrlVm_StopEx(*param_1,0,0x800);
    uVar3 = FUN_100d429b0(uVar5,"stop VM");
    pQVar9 = (QArrayData *)(ulong)uVar3;
    if (-1 < (int)uVar3) {
      uVar3 = FUN_100d4f400(param_1,&local_4128);
      pQVar9 = (QArrayData *)(ulong)uVar3;
      if (-1 < (int)uVar3) {
        local_4060 = 0;
        uVar3 = _PrlVmCfg_GetSerialPort(local_4128,0,&local_4060);
        pQVar9 = (QArrayData *)(ulong)uVar3;
        if ((int)uVar3 < 0) {
          uVar5 = FUN_100dddcf0(pQVar9);
          FUN_100df99c0("","PrlSdkUtils",0,
                        "Failed to get Serial port PrlVmCfg_GetSerialPort has failed with  RC = %.8X [%s]"
                        ,pQVar9,uVar5);
        }
        else if (local_4058 == '\0') {
          uVar3 = _PrlVmDev_Remove(local_4060);
          pQVar9 = (QArrayData *)0x0;
          if ((int)uVar3 < 0) {
            uVar5 = FUN_100dddcf0(uVar3);
            FUN_100df99c0("","PrlSdkUtils",0,
                          "Failed to remove Serial port PrlVmDev_Remove has failed with  RC = %.8X [%s]"
                          ,uVar3,uVar5);
            pQVar9 = (QArrayData *)(ulong)uVar3;
          }
        }
        else {
          uVar3 = FUN_100d4fd60(&local_4060,&local_4058);
          pQVar9 = (QArrayData *)(ulong)uVar3;
        }
        if (local_4060 != 0) {
          _PrlHandle_Free();
        }
        if (-1 < (int)pQVar9) {
          FUN_100df99c0("","PrlSdkUtils",0,"Reconnect CD-ROM with tools");
          uVar3 = FUN_100d4ed50(&local_4128,param_4);
          pQVar9 = (QArrayData *)(ulong)uVar3;
          if (-1 < (int)uVar3) {
            uVar3 = FUN_100d4ef90(param_1,&local_4128);
            pQVar9 = (QArrayData *)(ulong)uVar3;
          }
        }
      }
    }
    goto LAB_100d4e5f3;
  }
  uVar5 = _PrlVm_StopEx(*param_1,0,0x800);
  FUN_100d429b0(uVar5,"stop VM");
  FUN_100d4ec80(param_1,&local_4128);
  local_4138 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_100d4ed50(&local_4128,&local_4138);
  if (*(int *)local_4138 != -1) {
    if (*(int *)local_4138 != 0) {
      LOCK();
      *(int *)local_4138 = *(int *)local_4138 + -1;
      local_4061 = *(int *)local_4138 != 0;
      UNLOCK();
      if ((bool)local_4061) goto LAB_100d4e508;
    }
    QArrayData::deallocate(local_4138,2,8);
  }
LAB_100d4e508:
  FUN_100d4ef90(param_1,&local_4128);
LAB_100d4e5f3:
  if (local_4128 != 0) {
    _PrlHandle_Free();
  }
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pQVar9;
}

