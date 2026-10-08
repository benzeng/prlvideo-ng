
void FUN_100aede20(long param_1)

{
  int iVar1;
  CHwGenericDevice *pCVar2;
  undefined8 uVar3;
  bool bVar4;
  QArrayData *pQVar5;
  char cVar6;
  CHwGenericDevice *pCVar7;
  Data *pDVar8;
  uint uVar9;
  long lVar10;
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
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  FUN_100b59e70(&local_40);
  FUN_100af9f40(&local_60,&local_40);
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  bVar4 = false;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      iVar1 = **(int **)local_58;
      uVar3 = *(undefined8 *)*(int **)local_58;
      FUN_100b59e90(&local_68,uVar3);
      cVar6 = FUN_100b5a4e0(uVar3);
      if (cVar6 != '\0') {
        FUN_100b5a090(&local_70,uVar3,1);
        pCVar2 = *(CHwGenericDevice **)(param_1 + 0x18);
        pCVar7 = operator_new(0xb8);
        local_78 = local_68;
        if (1 < *(int *)local_68 + 1U) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + 1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
        }
        local_80 = local_70;
        if (1 < *(int *)local_70 + 1U) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + 1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
        }
        CHwGenericDevice::CHwGenericDevice(pCVar7,0xd,&local_78,&local_80);
        CHostHardwareInfo::addSoundMixerDevice(pCVar2);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100aedf6d;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_100aedf6d:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100aedf9d;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_100aedf9d:
        if (1 < DAT_10230ffd0) {
          QString::toUtf8();
          pQVar5 = local_88;
          lVar10 = *(long *)(local_88 + 0x10);
          QString::toUtf8();
          FUN_100df99c0("","pvsHostInfo",2,"[HostInfo] Add sound capture device:\"%s\" (%s)",
                        pQVar5 + lVar10,local_90 + *(long *)(local_90 + 0x10));
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100aee03a;
            }
            QArrayData::deallocate(local_90,1,8);
          }
LAB_100aee03a:
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100aee070;
            }
            QArrayData::deallocate(local_88,1,8);
          }
        }
LAB_100aee070:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100aee0b0;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
LAB_100aee0b0:
      cVar6 = FUN_100b5a540(uVar3);
      if (cVar6 != '\0') {
        FUN_100b5a090(&local_98,uVar3,0);
        pCVar2 = *(CHwGenericDevice **)(param_1 + 0x18);
        pCVar7 = operator_new(0xb8);
        local_a0 = local_68;
        if (1 < *(int *)local_68 + 1U) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + 1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
        }
        local_a8 = local_98;
        if (1 < *(int *)local_98 + 1U) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + 1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
        }
        CHwGenericDevice::CHwGenericDevice(pCVar7,0xc,&local_a0,&local_a8);
        CHostHardwareInfo::addSoundOutputDevice(pCVar2);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100aee189;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_100aee189:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100aee1bf;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_100aee1bf:
        if (1 < DAT_10230ffd0) {
          QString::toUtf8();
          lVar10 = *(long *)(local_b0 + 0x10);
          QString::toUtf8();
          FUN_100df99c0("","pvsHostInfo",2,"[HostInfo] Add sound playback device:\"%s\" (%s)",
                        local_b0 + lVar10,local_b8 + *(long *)(local_b8 + 0x10));
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100aee265;
            }
            QArrayData::deallocate(local_b8,1,8);
          }
LAB_100aee265:
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100aee2a0;
            }
            QArrayData::deallocate(local_b0,1,8);
          }
        }
LAB_100aee2a0:
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100aee2e0;
          }
          QArrayData::deallocate(local_98,2,8);
        }
      }
LAB_100aee2e0:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100aee310;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100aee310:
      bVar4 = (bool)(bVar4 | iVar1 == 2);
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100aee39f;
    }
    iVar1 = *(int *)(local_60 + 0xc);
    if (iVar1 != *(int *)(local_60 + 8)) {
      lVar10 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_60 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_100aee39f:
  uVar9 = (uint)*(undefined8 *)(param_1 + 0x18);
  if (bVar4) {
    CHostHardwareInfoBase::setSoundDefaultEnabled(uVar9);
  }
  else {
    CHostHardwareInfoBase::setSoundDefaultEnabled(uVar9);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar10 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_40);
  }
  return;
}

