
void FUN_100cc8a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  long *plVar4;
  uint *puVar5;
  QArrayData *pQVar6;
  int iVar7;
  size_t sVar8;
  QString this;
  Data *pDVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined **ppuVar14;
  ulong local_d0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QTypedArrayData<unsigned_short> *local_90;
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
  
  ppuVar14 = &PTR_s_parallel1_txt_102259888;
  local_d0 = 0;
  do {
    local_40 = (QArrayData *)QString::fromAscii_helper("Parallel ports",0xe);
    pcVar3 = ppuVar14[-7];
    sVar8 = _strlen(pcVar3);
    local_48 = (QArrayData *)QString::fromAscii_helper(pcVar3,(int)sVar8);
    FUN_100ccd670(param_2,&local_40,&local_48,10,*(undefined4 *)(ppuVar14 + -6));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8b16;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100cc8b16:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8b46;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100cc8b46:
    local_50 = (QArrayData *)QString::fromAscii_helper("Parallel ports",0xe);
    pcVar3 = ppuVar14[-5];
    sVar8 = _strlen(pcVar3);
    local_58 = (QArrayData *)QString::fromAscii_helper(pcVar3,(int)sVar8);
    FUN_100ccd670(param_2,&local_50,&local_58,10,*(undefined4 *)(ppuVar14 + -4));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8bc3;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100cc8bc3:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8bf3;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100cc8bf3:
    local_60 = (QArrayData *)QString::fromAscii_helper("Parallel ports",0xe);
    pcVar3 = ppuVar14[-3];
    sVar8 = _strlen(pcVar3);
    local_68 = (QArrayData *)QString::fromAscii_helper(pcVar3,(int)sVar8);
    iVar7 = FUN_100ccd670(param_2,&local_60,&local_68,10,*(undefined4 *)(ppuVar14 + -2));
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8c6a;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100cc8c6a:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8c9a;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100cc8c9a:
    local_78 = (QArrayData *)QString::fromAscii_helper("Parallel ports",0xe);
    pcVar3 = ppuVar14[-1];
    sVar8 = _strlen(pcVar3);
    local_80 = (QArrayData *)QString::fromAscii_helper(pcVar3,(int)sVar8);
    pcVar3 = *ppuVar14;
    sVar8 = _strlen(pcVar3);
    local_88 = (QArrayData *)QString::fromAscii_helper(pcVar3,(int)sVar8);
    FUN_100ccd600(&local_70,param_2,&local_78,&local_80,&local_88);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8d2a;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100cc8d2a:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8d5a;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100cc8d5a:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc8d8a;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100cc8d8a:
    if (iVar7 != 0) {
      this.field0_0x0 = operator_new(0xf8);
      CVmParallelPortOld::CVmParallelPortOld((CVmParallelPortOld *)this.field0_0x0);
      uVar13 = (uint)this.field0_0x0;
      local_90 = this.field0_0x0;
      CVmDevice::setEnabled(uVar13);
      CVmDevice::setConnected(uVar13);
      if (iVar7 == 1) {
        CVmDevice::setEmulatedType(uVar13);
      }
      else {
        CVmDevice::setEmulatedType(uVar13);
      }
      CVmDevice::setIndex(uVar13);
      local_98 = (QArrayData *)QString::fromAscii_helper("default",7);
      iVar7 = QString::indexOf(&local_70,&local_98,0,0);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cc8e60;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100cc8e60:
      pQVar6 = local_70;
      if (iVar7 == -1) {
        if (1 < *(int *)local_70 + 1U) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + 1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
        }
        CVmDevice::setSystemName(this);
        if (*(int *)pQVar6 != -1) {
          if (*(int *)pQVar6 != 0) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_31 = *(int *)pQVar6 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cc8fd1;
          }
          QArrayData::deallocate(pQVar6,2,8);
        }
LAB_100cc8fd1:
        pQVar6 = local_70;
        if (1 < *(int *)local_70 + 1U) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + 1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
        }
        CVmDevice::setUserFriendlyName(this);
        if (*(int *)pQVar6 != -1) {
          if (*(int *)pQVar6 != 0) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_31 = *(int *)pQVar6 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cc91e0;
          }
          QArrayData::deallocate(pQVar6,2,8);
        }
      }
      else {
        plVar4 = *(long **)(param_4 + 0x188);
        puVar5 = (uint *)*plVar4;
        uVar2 = puVar5[2];
        if (puVar5[3] == uVar2) {
          CVmDevice::setConnected(uVar13);
          CVmDevice::setEnabled(uVar13);
          pQVar6 = local_70;
          if (1 < *(int *)local_70 + 1U) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + 1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
          }
          CVmDevice::setSystemName(this);
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              local_31 = *(int *)pQVar6 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cc8efe;
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_100cc8efe:
          pQVar6 = local_70;
          if (1 < *(int *)local_70 + 1U) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + 1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
          }
          CVmDevice::setUserFriendlyName(this);
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              local_31 = *(int *)pQVar6 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cc91e0;
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
        }
        else {
          if (1 < *puVar5) {
            pDVar9 = (Data *)QListData::detach((int)plVar4);
            lVar10 = *plVar4;
            lVar12 = (long)*(int *)(lVar10 + 8);
            puVar1 = (uint *)(lVar10 + 0x10 + lVar12 * 8);
            if ((puVar5 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
               (lVar11 = *(int *)(lVar10 + 0xc) - lVar12,
               lVar11 != 0 && lVar12 <= *(int *)(lVar10 + 0xc))) {
              _memcpy(puVar1,puVar5 + (long)(int)uVar2 * 2 + 4,lVar11 * 8);
            }
            if (*(int *)pDVar9 != -1) {
              if (*(int *)pDVar9 != 0) {
                LOCK();
                *(int *)pDVar9 = *(int *)pDVar9 + -1;
                local_31 = *(int *)pDVar9 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cc909f;
              }
              QListData::dispose(pDVar9);
            }
          }
LAB_100cc909f:
          (**(code **)(**(long **)(*plVar4 + 0x10 + (long)*(int *)(*plVar4 + 8) * 8) + 0xb8))
                    (&local_a0);
          CVmDevice::setSystemName(this);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cc9104;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_100cc9104:
          plVar4 = *(long **)(param_4 + 0x188);
          puVar5 = (uint *)*plVar4;
          if (1 < *puVar5) {
            uVar13 = puVar5[2];
            pDVar9 = (Data *)QListData::detach((int)plVar4);
            lVar10 = *plVar4;
            lVar12 = (long)*(int *)(lVar10 + 8);
            puVar1 = (uint *)(lVar10 + 0x10 + lVar12 * 8);
            if ((puVar5 + (long)(int)uVar13 * 2 + 4 != puVar1) &&
               (lVar11 = *(int *)(lVar10 + 0xc) - lVar12,
               lVar11 != 0 && lVar12 <= *(int *)(lVar10 + 0xc))) {
              _memcpy(puVar1,puVar5 + (long)(int)uVar13 * 2 + 4,lVar11 * 8);
            }
            if (*(int *)pDVar9 != -1) {
              if (*(int *)pDVar9 != 0) {
                LOCK();
                *(int *)pDVar9 = *(int *)pDVar9 + -1;
                local_31 = *(int *)pDVar9 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100cc917a;
              }
              QListData::dispose(pDVar9);
            }
          }
LAB_100cc917a:
          (**(code **)(**(long **)(*plVar4 + 0x10 + (long)*(int *)(*plVar4 + 8) * 8) + 0xa8))
                    (&local_a8);
          CVmDevice::setUserFriendlyName(this);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cc91e0;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
        }
      }
LAB_100cc91e0:
      lVar10 = CVmConfiguration::getVmHardwareList();
      FUN_100cccac0(lVar10 + 0x1c0,&local_90);
    }
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cc923f;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100cc923f:
    local_d0 = local_d0 + 1;
    ppuVar14 = ppuVar14 + 8;
    if (2 < local_d0) {
      return;
    }
  } while( true );
}

