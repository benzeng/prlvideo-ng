
void FUN_100cc7df0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  QArrayData *pQVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  QString this;
  CVmSerialPort *pCVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulong local_d8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  long *local_b0;
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
  
  puVar12 = &DAT_102259728;
  local_d8 = 0;
  do {
    local_40 = (QArrayData *)QString::fromAscii_helper("Serial ports",0xc);
    pcVar2 = *(char **)(puVar12 + -0x16);
    sVar9 = _strlen(pcVar2);
    local_48 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar9);
    FUN_100ccd670(param_2,&local_40,&local_48,10,puVar12[-0x14]);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc7e9d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100cc7e9d:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc7ecd;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100cc7ecd:
    local_50 = (QArrayData *)QString::fromAscii_helper("Serial ports",0xc);
    pcVar2 = *(char **)(puVar12 + -0xe);
    sVar9 = _strlen(pcVar2);
    local_58 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar9);
    FUN_100ccd670(param_2,&local_50,&local_58,10,puVar12[-0xc]);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc7f49;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100cc7f49:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc7f7f;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100cc7f7f:
    local_60 = (QArrayData *)QString::fromAscii_helper("Serial ports",0xc);
    pcVar2 = *(char **)(puVar12 + -0x12);
    sVar9 = _strlen(pcVar2);
    local_68 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar9);
    iVar6 = FUN_100ccd670(param_2,&local_60,&local_68,10,puVar12[-0x10]);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc7ffc;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100cc7ffc:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8033;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100cc8033:
    local_70 = (QArrayData *)QString::fromAscii_helper("Serial ports",0xc);
    pcVar2 = *(char **)(puVar12 + -6);
    sVar9 = _strlen(pcVar2);
    local_78 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar9);
    iVar7 = FUN_100ccd670(param_2,&local_70,&local_78,10,puVar12[-4]);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc80af;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100cc80af:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc80e5;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100cc80e5:
    local_80 = (QArrayData *)QString::fromAscii_helper("Serial ports",0xc);
    pcVar3 = *(char **)(puVar12 + -2);
    sVar9 = _strlen(pcVar3);
    local_88 = (QArrayData *)QString::fromAscii_helper(pcVar3,(int)sVar9);
    iVar8 = FUN_100ccd670(param_2,&local_80,&local_88,10,*puVar12);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8160;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100cc8160:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8196;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100cc8196:
    local_98 = (QArrayData *)QString::fromAscii_helper("Serial ports",0xc);
    pcVar3 = *(char **)(puVar12 + -10);
    sVar9 = _strlen(pcVar3);
    local_a0 = (QArrayData *)QString::fromAscii_helper(pcVar3,(int)sVar9);
    pcVar3 = *(char **)(puVar12 + -8);
    sVar9 = _strlen(pcVar3);
    local_a8 = (QArrayData *)QString::fromAscii_helper(pcVar3,(int)sVar9);
    FUN_100ccd600(&local_90,param_2,&local_98,&local_a0,&local_a8);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8244;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100cc8244:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc827a;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100cc827a:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc82b0;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100cc82b0:
    if (iVar6 != 0) {
      this.field0_0x0 = operator_new(0xf8);
      CVmSerialPort::CVmSerialPort((CVmSerialPort *)this.field0_0x0);
      uVar11 = (uint)this.field0_0x0;
      CVmDevice::setEnabled(uVar11);
      CVmDevice::setConnected(uVar11);
      CVmDevice::setIndex(uVar11);
      if (iVar6 == 1) {
        CVmDevice::setEmulatedType(uVar11);
      }
      else {
        CVmDevice::setEmulatedType(uVar11);
      }
      local_b8 = (QArrayData *)QString::fromAscii_helper("Serial ports",0xc);
      sVar9 = _strlen(pcVar2);
      local_c0 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar9);
      FUN_100ccd530(&local_b0,param_2,&local_b8,&local_c0);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc83b1;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100cc83b1:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc83e7;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100cc83e7:
      if ((local_b0 == (long *)0x0) || (local_b0[2] == 0)) {
        CVmSerialPort::setSocketMode(this.field0_0x0,iVar8 == 0);
      }
      else {
        CVmSerialPort::setSocketMode(this.field0_0x0,iVar7 != 0);
      }
      pQVar5 = local_90;
      if (1 < *(int *)local_90 + 1U) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
      CVmDevice::setSystemName(this);
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc8499;
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
LAB_100cc8499:
      pQVar5 = local_90;
      if (1 < *(int *)local_90 + 1U) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
      CVmDevice::setUserFriendlyName(this);
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc84fd;
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
LAB_100cc84fd:
      pCVar10 = (CVmSerialPort *)CVmConfiguration::getVmHardwareList();
      CVmHardware::addSerialPort(pCVar10);
      if (local_b0 != (long *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
    }
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8579;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100cc8579:
    local_d8 = local_d8 + 1;
    puVar12 = puVar12 + 0x18;
    if (3 < local_d8) {
      return;
    }
  } while( true );
}

