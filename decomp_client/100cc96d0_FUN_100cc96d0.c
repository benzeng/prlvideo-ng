
void FUN_100cc96d0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  QString this;
  QArrayData *pQVar4;
  CVmSoundDevice *pCVar5;
  uint uVar6;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  long *local_98;
  QString local_90;
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
  
  local_40 = (QArrayData *)QString::fromAscii_helper("Sound",5);
  local_48 = (QArrayData *)QString::fromAscii_helper("Sound enabled",0xd);
  FUN_100ccd670(param_2,&local_40,&local_48,10,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc975f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100cc975f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc978f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100cc978f:
  local_50 = (QArrayData *)QString::fromAscii_helper("Sound",5);
  local_58 = (QArrayData *)QString::fromAscii_helper("Sound connected",0xf);
  FUN_100ccd670(param_2,&local_50,&local_58,10,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc9807;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cc9807:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc983e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cc983e:
  local_60 = (QArrayData *)QString::fromAscii_helper("Sound",5);
  local_68 = (QArrayData *)QString::fromAscii_helper("Sound",5);
  iVar3 = FUN_100ccd670(param_2,&local_60,&local_68,10,0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc98b2;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cc98b2:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc98e2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cc98e2:
  local_78 = (QArrayData *)QString::fromAscii_helper("Sound",5);
  local_80 = (QArrayData *)QString::fromAscii_helper("Sound device",0xc);
  local_88 = (QArrayData *)QString::fromAscii_helper("dsp",3);
  FUN_100ccd600(&local_70,param_2,&local_78,&local_80,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc9969;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100cc9969:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc9999;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100cc9999:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc99c9;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100cc99c9:
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_a0 = (QArrayData *)QString::fromAscii_helper("Sound",5);
  local_a8 = (QArrayData *)QString::fromAscii_helper("Mixer device",0xc);
  FUN_100ccd530(&local_98,param_2,&local_a0,&local_a8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc9a5a;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100cc9a5a:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc9a90;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100cc9a90:
  if ((local_98 == (long *)0x0) || (local_98[2] == 0)) {
    local_d8 = (QArrayData *)QString::fromAscii_helper("Sound",5);
    local_e0 = (QArrayData *)QString::fromAscii_helper("Sound recording device",0x16);
    local_e8 = (QArrayData *)QString::fromAscii_helper("mixer",5);
    FUN_100ccd600(&local_d0,param_2,&local_d8,&local_e0,&local_e8);
    QString::operator=(&local_90,&local_d0);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_31 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc9cc4;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
LAB_100cc9cc4:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc9cfa;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_100cc9cfa:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc9d30;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_100cc9d30:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc9d66;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
  }
  else {
    local_b8 = (QArrayData *)QString::fromAscii_helper("Sound",5);
    local_c0 = (QArrayData *)QString::fromAscii_helper("Mixer device",0xc);
    local_c8 = (QArrayData *)QString::fromAscii_helper("mixer",5);
    FUN_100ccd600(&local_b0,param_2,&local_b8,&local_c0,&local_c8);
    QString::operator=(&local_90,&local_b0);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_31 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc9b60;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_100cc9b60:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc9b96;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_100cc9b96:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc9bcc;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100cc9bcc:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc9d66;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
  }
LAB_100cc9d66:
  if (iVar3 != 0) {
    this.field0_0x0 = operator_new(0x110);
    CVmSoundDevice::CVmSoundDevice((CVmSoundDevice *)this.field0_0x0);
    uVar6 = (uint)this.field0_0x0;
    CVmDevice::setEnabled(uVar6);
    CVmDevice::setConnected(uVar6);
    local_f0 = (QArrayData *)QString::fromAscii_helper("System",6);
    local_f8 = (QArrayData *)QString::fromAscii_helper("OS Type",7);
    FUN_100ccd670(param_2,&local_f0,&local_f8,10,0x807);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc9e23;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_100cc9e23:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc9e59;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_100cc9e59:
    CVmDevice::setEmulatedType(uVar6);
    pQVar4 = (QArrayData *)QString::fromAscii_helper("Default",7);
    CVmSoundDevice::setOutputDevice(this);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc9ee2;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_100cc9ee2:
    pQVar4 = (QArrayData *)QString::fromAscii_helper("Default",7);
    CVmSoundDevice::setMixerDevice(this);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc9f3f;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_100cc9f3f:
    pCVar5 = (CVmSoundDevice *)CVmConfiguration::getVmHardwareList();
    CVmHardware::addSoundDevice(pCVar5);
  }
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cc9fb0;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100cc9fb0:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return;
}

