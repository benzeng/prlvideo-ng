
void FUN_100cca660(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  QString QVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  QString this;
  QArrayData *pQVar8;
  CVmGenericNetworkAdapter *pCVar9;
  uint uVar10;
  ulong uVar11;
  QArrayData *local_120;
  QString local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QString local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar11 = 0;
  do {
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    if (uVar11 == 0) {
      QString::fromUtf8_helper((char *)&local_60,0x1ef3576);
      QString::operator=(&local_68,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ccaab2;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_100ccaab2:
      QString::fromUtf8_helper((char *)&local_58,0x1ef3586);
      QString::operator=(&local_70,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ccab04;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_100ccab04:
      QString::fromUtf8_helper((char *)&local_50,0x1dc685b);
      QString::operator=(&local_78,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ccab56;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100ccab56:
      QString::fromUtf8_helper((char *)&local_48,0x1ef3598);
      QString::operator=(&local_80,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ccaba8;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_100ccaba8:
      QString::fromUtf8_helper((char *)&local_40,0x1ef35a3);
      QString::operator=(&local_88,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ccac00;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
    else {
      local_98 = (QArrayData *)QString::fromAscii_helper("Network%1 enabled",0x11);
      lVar1 = uVar11 + 1;
      QString::arg(&local_90,&local_98,lVar1,0,10,0x20);
      QString::operator=(&local_68,&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cca73a;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_100cca73a:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cca770;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100cca770:
      local_a8 = (QArrayData *)QString::fromAscii_helper("Network%1 connected",0x13);
      QString::arg(&local_a0,&local_a8,lVar1,0,10,0x20);
      QString::operator=(&local_70,&local_a0);
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cca7f2;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
LAB_100cca7f2:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cca828;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100cca828:
      local_b8 = (QArrayData *)QString::fromAscii_helper("Network%1",9);
      QString::arg(&local_b0,&local_b8,lVar1,0,10,0x20);
      QString::operator=(&local_78,&local_b0);
      if (*(int *)local_b0.field0_0x0 != -1) {
        if (*(int *)local_b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
          local_31 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cca8aa;
        }
        QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
      }
LAB_100cca8aa:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cca8e0;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100cca8e0:
      local_c8 = (QArrayData *)QString::fromAscii_helper("Network%1 Adapter No",0x14);
      QString::arg(&local_c0,&local_c8,lVar1,0,10,0x20);
      QString::operator=(&local_80,&local_c0);
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          local_31 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cca962;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
LAB_100cca962:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cca998;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100cca998:
      local_d8 = (QArrayData *)QString::fromAscii_helper("Network%1 MAC address",0x15);
      QString::arg(&local_d0,&local_d8,lVar1,0,10,0x20);
      QString::operator=(&local_88,&local_d0);
      if (*(int *)local_d0.field0_0x0 != -1) {
        if (*(int *)local_d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
          local_31 = *(int *)local_d0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ccaa1a;
        }
        QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
      }
LAB_100ccaa1a:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ccac00;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
    }
LAB_100ccac00:
    local_e0 = (QArrayData *)QString::fromAscii_helper("Network",7);
    FUN_100ccd670(param_2,&local_e0,&local_68,10,0);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccac6f;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_100ccac6f:
    local_e8 = (QArrayData *)QString::fromAscii_helper("Network",7);
    FUN_100ccd670(param_2,&local_e8,&local_70,10,1);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccacdd;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_100ccacdd:
    local_f0 = (QArrayData *)QString::fromAscii_helper("Network",7);
    iVar5 = FUN_100ccd670(param_2,&local_f0,&local_78,10,0);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccad49;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_100ccad49:
    local_f8 = (QArrayData *)QString::fromAscii_helper("Network",7);
    iVar6 = FUN_100ccd670(param_2,&local_f8,&local_80,10,0);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccadb5;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_100ccadb5:
    local_108 = (QArrayData *)QString::fromAscii_helper("Network",7);
    local_110 = (QArrayData *)QString::fromAscii_helper("",0);
    FUN_100ccd600(&local_100,param_2,&local_108);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccae39;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_100ccae39:
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccae6f;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_100ccae6f:
    iVar7 = FUN_100d7e9e0();
    cVar4 = FUN_100db9190(&local_100,iVar7 == 2);
    if (cVar4 == '\0') {
      FUN_100db8d30(&local_118,1);
      QString::operator=(&local_100,&local_118);
      if (*(int *)local_118.field0_0x0 != -1) {
        if (*(int *)local_118.field0_0x0 != 0) {
          LOCK();
          *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
          local_31 = *(int *)local_118.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ccaef0;
        }
        QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
      }
    }
LAB_100ccaef0:
    if (iVar5 != 0) {
      this.field0_0x0 = operator_new(0x198);
      CVmGenericNetworkAdapter::CVmGenericNetworkAdapter
                ((CVmGenericNetworkAdapter *)this.field0_0x0);
      uVar10 = (uint)this.field0_0x0;
      CVmDevice::setEnabled(uVar10);
      CVmDevice::setConnected(uVar10);
      CVmDevice::setIndex(uVar10);
      if (iVar5 == 1) {
        CVmDevice::setEmulatedType(uVar10);
      }
      else if (iVar5 == 2) {
        CVmDevice::setEmulatedType(uVar10);
      }
      else if (iVar5 == 3) {
        CVmDevice::setEmulatedType(uVar10);
      }
      if (iVar6 == 0) {
LAB_100ccb040:
        CVmGenericNetworkAdapter::setBoundAdapterIndex(uVar10);
        pQVar8 = (QArrayData *)QString::fromAscii_helper("Default adapter",0xf);
        CVmGenericNetworkAdapter::setBoundAdapterName(this);
        if (*(int *)pQVar8 != -1) {
          if (*(int *)pQVar8 != 0) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ccb0aa;
          }
          QArrayData::deallocate(pQVar8,2,8);
        }
      }
      else {
        lVar1 = **(long **)(param_4 + 0x168);
        iVar5 = *(int *)(lVar1 + 8);
        if ((((*(int *)(lVar1 + 0xc) == iVar5) || (iVar6 = iVar6 + -1, iVar6 < 0)) ||
            (*(int *)(lVar1 + 0xc) - iVar5 <= iVar6)) ||
           (plVar2 = *(long **)(lVar1 + 0x10 + ((long)iVar6 + (long)iVar5) * 8),
           plVar2 == (long *)0x0)) goto LAB_100ccb040;
        CVmGenericNetworkAdapter::setBoundAdapterIndex(uVar10);
        (**(code **)(*plVar2 + 0xa8))(&local_120,plVar2);
        CVmGenericNetworkAdapter::setBoundAdapterName(this);
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ccb0aa;
          }
          QArrayData::deallocate(local_120,2,8);
        }
      }
LAB_100ccb0aa:
      QVar3.field0_0x0 = local_100.field0_0x0;
      if (1 < *(int *)local_100.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
        local_31 = *(int *)local_100.field0_0x0 != 0;
        UNLOCK();
      }
      CVmGenericNetworkAdapter::setMacAddress(this);
      if (*(int *)QVar3.field0_0x0 != -1) {
        if (*(int *)QVar3.field0_0x0 != 0) {
          LOCK();
          *(int *)QVar3.field0_0x0 = *(int *)QVar3.field0_0x0 + -1;
          local_31 = *(int *)QVar3.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ccb10e;
        }
        QArrayData::deallocate((QArrayData *)QVar3.field0_0x0,2,8);
      }
LAB_100ccb10e:
      pCVar9 = (CVmGenericNetworkAdapter *)CVmConfiguration::getVmHardwareList();
      CVmHardware::addNetworkAdapter(pCVar9);
    }
    if (*(int *)local_100.field0_0x0 != -1) {
      if (*(int *)local_100.field0_0x0 != 0) {
        LOCK();
        *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
        local_31 = *(int *)local_100.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccb162;
      }
      QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
    }
LAB_100ccb162:
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccb192;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_100ccb192:
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccb1c2;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_100ccb1c2:
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccb1f2;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100ccb1f2:
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccb222;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100ccb222:
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100ccb252;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_100ccb252:
    uVar11 = uVar11 + 1;
    if (4 < uVar11) {
      return;
    }
  } while( true );
}

