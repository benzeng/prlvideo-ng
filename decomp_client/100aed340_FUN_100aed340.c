
void FUN_100aed340(long param_1,ulong param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  uint *puVar4;
  long *plVar5;
  char cVar6;
  Data *pDVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  uint *local_40;
  uint *local_38;
  
  iVar12 = param_3 % 0x10;
  if ((iVar12 < 1) || (iVar12 <= DAT_10230ffd0)) {
    FUN_100df99c0("","pvsHostInfo",param_3,"--- start host info refreshing ---");
  }
  cVar6 = FUN_100b5b330();
  if (cVar6 != '\0') {
    FUN_100df99c0("","pvsHostInfo",0,"[HostInfo] Unsafe refresh: system is sleeping");
  }
  FUN_100094f70(param_1 + 8);
  if (((param_2 & 0x2000000) != 0) &&
     ((FUN_100aedd60(param_1), iVar12 < 1 || (iVar12 <= DAT_10230ffd0)))) {
    FUN_100df99c0("","pvsHostInfo",param_3,"--- CPU info refreshed ---");
  }
  if (((param_2 & 0x1000000) != 0) &&
     ((FUN_100aed0c0(param_1), iVar12 < 1 || (iVar12 <= DAT_10230ffd0)))) {
    FUN_100df99c0("","pvsHostInfo",param_3,"--- memory info refreshed ---");
  }
  if ((param_2 & 0x40) == 0) goto LAB_100aed5ba;
  FUN_100afa560(param_1);
  plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x150);
  puVar4 = (uint *)*plVar3;
  if (1 < *puVar4) {
    uVar2 = puVar4[2];
    pDVar7 = (Data *)QListData::detach((int)plVar3);
    lVar9 = *plVar3;
    lVar8 = (long)*(int *)(lVar9 + 8);
    puVar1 = (uint *)(lVar9 + 0x10 + lVar8 * 8);
    if ((puVar4 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
       (lVar11 = *(int *)(lVar9 + 0xc) - lVar8, lVar11 != 0 && lVar8 <= *(int *)(lVar9 + 0xc))) {
      _memcpy(puVar1,puVar4 + (long)(int)uVar2 * 2 + 4,lVar11 * 8);
    }
    if (*(int *)pDVar7 != -1) {
      if (*(int *)pDVar7 != 0) {
        LOCK();
        *(int *)pDVar7 = *(int *)pDVar7 + -1;
        UNLOCK();
        if (*(int *)pDVar7 != 0) goto LAB_100aed4e8;
      }
      QListData::dispose(pDVar7);
    }
  }
LAB_100aed4e8:
  puVar1 = (uint *)*plVar3;
  puVar4 = puVar1 + (long)(int)puVar1[2] * 2 + 4;
  if (1 < *puVar1) {
    pDVar7 = (Data *)QListData::detach((int)plVar3);
    lVar9 = *plVar3;
    lVar8 = (long)*(int *)(lVar9 + 8);
    puVar1 = (uint *)(lVar9 + 0x10 + lVar8 * 8);
    if ((puVar4 != puVar1) &&
       (lVar11 = *(int *)(lVar9 + 0xc) - lVar8, lVar11 != 0 && lVar8 <= *(int *)(lVar9 + 0xc))) {
      _memcpy(puVar1,puVar4,lVar11 * 8);
    }
    if (*(int *)pDVar7 != -1) {
      if (*(int *)pDVar7 != 0) {
        LOCK();
        *(int *)pDVar7 = *(int *)pDVar7 + -1;
        UNLOCK();
        if (*(int *)pDVar7 != 0) goto LAB_100aed552;
      }
      QListData::dispose(pDVar7);
    }
  }
LAB_100aed552:
  puVar1 = (uint *)(*plVar3 + 0x10 + (long)*(int *)(*plVar3 + 0xc) * 8);
  if (puVar4 != puVar1) {
    local_40 = puVar1;
    local_38 = puVar4;
    FUN_100af8000(&local_38,&local_40,puVar4,FUN_100af74f0);
  }
  param_2 = param_2 | 0x8000;
  if ((iVar12 < 1) || (iVar12 <= DAT_10230ffd0)) {
    FUN_100df99c0("","pvsHostInfo",param_3,"--- HDD info refreshed ---");
  }
LAB_100aed5ba:
  if (((param_2 & 0x8000) != 0) &&
     ((FUN_100afc180(param_1), iVar12 < 1 || (iVar12 <= DAT_10230ffd0)))) {
    FUN_100df99c0("","pvsHostInfo",param_3,"--- USB info refreshed ---");
  }
  if ((param_2 & 0x20000) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x198);
    lVar8 = CHostHardwareInfoBase::getGenericPciDevices();
    lVar9 = *plVar3;
    uVar10 = (ulong)*(uint *)(lVar9 + 8);
    lVar11 = 0;
    if ((int)*(uint *)(lVar9 + 8) < *(int *)(lVar9 + 0xc)) {
      do {
        plVar5 = *(long **)(lVar9 + 0x10 + ((int)uVar10 + lVar11) * 8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x88))();
          lVar9 = *plVar3;
        }
        lVar11 = lVar11 + 1;
        uVar10 = (ulong)*(int *)(lVar9 + 8);
      } while (lVar11 < (long)((long)*(int *)(lVar9 + 0xc) - uVar10));
    }
    FUN_100af8b40(plVar3);
    FUN_100af84c0(lVar8 + 0x60);
    if ((iVar12 < 1) || (iVar12 <= DAT_10230ffd0)) {
      FUN_100df99c0("","pvsHostInfo",param_3,"--- PCI info refreshed ---");
    }
  }
  if ((param_2 & 0x40000) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x1a0);
    lVar8 = CHostHardwareInfoBase::getGenericScsiDevices();
    lVar9 = *plVar3;
    uVar10 = (ulong)*(uint *)(lVar9 + 8);
    lVar11 = 0;
    if ((int)*(uint *)(lVar9 + 8) < *(int *)(lVar9 + 0xc)) {
      do {
        plVar5 = *(long **)(lVar9 + 0x10 + ((int)uVar10 + lVar11) * 8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x88))();
          lVar9 = *plVar3;
        }
        lVar11 = lVar11 + 1;
        uVar10 = (ulong)*(int *)(lVar9 + 8);
      } while (lVar11 < (long)((long)*(int *)(lVar9 + 0xc) - uVar10));
    }
    FUN_100af8c90(plVar3);
    FUN_100af84c0(lVar8 + 0x60);
    FUN_100afd9c0(param_1);
    if ((iVar12 < 1) || (iVar12 <= DAT_10230ffd0)) {
      FUN_100df99c0("","pvsHostInfo",param_3,"--- SCSI info collected ---");
    }
  }
  if (((param_2 & 0x10000) != 0) &&
     ((FUN_100afd9d0(param_1), iVar12 < 1 || (iVar12 <= DAT_10230ffd0)))) {
    FUN_100df99c0("","pvsHostInfo",param_3,"--- printer info refreshed ---");
  }
  if ((param_2 & 0x1000) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x178);
    CHostHardwareInfoBase::getSoundDevices();
    lVar8 = SoundDevices::getMixerDevices();
    lVar9 = *plVar3;
    uVar10 = (ulong)*(uint *)(lVar9 + 8);
    lVar11 = 0;
    if ((int)*(uint *)(lVar9 + 8) < *(int *)(lVar9 + 0xc)) {
      do {
        plVar5 = *(long **)(lVar9 + 0x10 + ((int)uVar10 + lVar11) * 8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x88))();
          lVar9 = *plVar3;
        }
        lVar11 = lVar11 + 1;
        uVar10 = (ulong)*(int *)(lVar9 + 8);
      } while (lVar11 < (long)((long)*(int *)(lVar9 + 0xc) - uVar10));
    }
    FUN_100af8c90(plVar3);
    FUN_100af84c0(lVar8 + 0x60);
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x170);
    CHostHardwareInfoBase::getSoundDevices();
    lVar8 = SoundDevices::getOutputDevices();
    lVar9 = *plVar3;
    uVar10 = (ulong)*(uint *)(lVar9 + 8);
    lVar11 = 0;
    if ((int)*(uint *)(lVar9 + 8) < *(int *)(lVar9 + 0xc)) {
      do {
        plVar5 = *(long **)(lVar9 + 0x10 + ((int)uVar10 + lVar11) * 8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x88))();
          lVar9 = *plVar3;
        }
        lVar11 = lVar11 + 1;
        uVar10 = (ulong)*(int *)(lVar9 + 8);
      } while (lVar11 < (long)((long)*(int *)(lVar9 + 0xc) - uVar10));
    }
    FUN_100af8c90(plVar3);
    FUN_100af84c0(lVar8 + 0x60);
    FUN_100aede20(param_1);
    if ((iVar12 < 1) || (iVar12 <= DAT_10230ffd0)) {
      FUN_100df99c0("","pvsHostInfo",param_3,"--- sound info refreshed ---");
    }
  }
  if ((param_2 & 0x20) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x148);
    lVar8 = CHostHardwareInfoBase::getCdROMs();
    lVar9 = *plVar3;
    uVar10 = (ulong)*(uint *)(lVar9 + 8);
    lVar11 = 0;
    if ((int)*(uint *)(lVar9 + 8) < *(int *)(lVar9 + 0xc)) {
      do {
        plVar5 = *(long **)(lVar9 + 0x10 + ((int)uVar10 + lVar11) * 8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x88))();
          lVar9 = *plVar3;
        }
        lVar11 = lVar11 + 1;
        uVar10 = (ulong)*(int *)(lVar9 + 8);
      } while (lVar11 < (long)((long)*(int *)(lVar9 + 0xc) - uVar10));
    }
    FUN_100af8c90(plVar3);
    FUN_100af84c0(lVar8 + 0x60);
    FUN_100afb8d0(param_1);
    if ((iVar12 < 1) || (iVar12 <= DAT_10230ffd0)) {
      FUN_100df99c0("","pvsHostInfo",param_3,"--- CD info refreshed ---");
    }
  }
  if ((param_2 & 0x400) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x158);
    lVar8 = CHostHardwareInfoBase::getSerialPorts();
    lVar9 = *plVar3;
    uVar10 = (ulong)*(uint *)(lVar9 + 8);
    lVar11 = 0;
    if ((int)*(uint *)(lVar9 + 8) < *(int *)(lVar9 + 0xc)) {
      do {
        plVar5 = *(long **)(lVar9 + 0x10 + ((int)uVar10 + lVar11) * 8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x88))();
          lVar9 = *plVar3;
        }
        lVar11 = lVar11 + 1;
        uVar10 = (ulong)*(int *)(lVar9 + 8);
      } while (lVar11 < (long)((long)*(int *)(lVar9 + 0xc) - uVar10));
    }
    FUN_100af8c90(plVar3);
    FUN_100af84c0(lVar8 + 0x60);
    FUN_100afbb40(param_1);
    if ((iVar12 < 1) || (iVar12 <= DAT_10230ffd0)) {
      FUN_100df99c0("","pvsHostInfo",param_3,"--- COM info refreshed ---");
    }
  }
  if ((param_2 & 8) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x140);
    lVar8 = CHostHardwareInfoBase::getFloppyDisks();
    lVar9 = *plVar3;
    uVar10 = (ulong)*(uint *)(lVar9 + 8);
    lVar11 = 0;
    if ((int)*(uint *)(lVar9 + 8) < *(int *)(lVar9 + 0xc)) {
      do {
        plVar5 = *(long **)(lVar9 + 0x10 + ((int)uVar10 + lVar11) * 8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x88))();
          lVar9 = *plVar3;
        }
        lVar11 = lVar11 + 1;
        uVar10 = (ulong)*(int *)(lVar9 + 8);
      } while (lVar11 < (long)((long)*(int *)(lVar9 + 0xc) - uVar10));
    }
    FUN_100af8c90(plVar3);
    FUN_100af84c0(lVar8 + 0x60);
    FUN_100afa2b0(param_1);
    if ((iVar12 < 1) || (iVar12 <= DAT_10230ffd0)) {
      FUN_100df99c0("","pvsHostInfo",param_3,"--- FDD info refreshed ---");
    }
  }
  if ((param_2 & 0x800) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x160);
    lVar8 = CHostHardwareInfoBase::getParallelPorts();
    lVar9 = *plVar3;
    uVar10 = (ulong)*(uint *)(lVar9 + 8);
    lVar11 = 0;
    if ((int)*(uint *)(lVar9 + 8) < *(int *)(lVar9 + 0xc)) {
      do {
        plVar5 = *(long **)(lVar9 + 0x10 + ((int)uVar10 + lVar11) * 8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x88))();
          lVar9 = *plVar3;
        }
        lVar11 = lVar11 + 1;
        uVar10 = (ulong)*(int *)(lVar9 + 8);
      } while (lVar11 < (long)((long)*(int *)(lVar9 + 0xc) - uVar10));
    }
    FUN_100af8c90(plVar3);
    FUN_100af84c0(lVar8 + 0x60);
    FUN_100afc010(param_1);
    if ((iVar12 < 1) || (iVar12 <= DAT_10230ffd0)) {
      FUN_100df99c0("","pvsHostInfo",param_3,"--- LPT info refreshed ---");
    }
  }
  if (((param_2 & 0x100) != 0) &&
     ((FUN_100aec460(param_1), iVar12 < 1 || (iVar12 <= DAT_10230ffd0)))) {
    FUN_100df99c0("","pvsHostInfo",param_3,"--- NET info refreshed ---");
  }
  if (((param_2 & 0x10000000) != 0) &&
     ((FUN_100aee810(param_1), iVar12 < 1 || (iVar12 <= DAT_10230ffd0)))) {
    FUN_100df99c0("","pvsHostInfo",param_3,"--- Partitions info refreshed ---");
  }
  if (((param_2 & 0x400000) != 0) &&
     ((FUN_100affb60(param_1), iVar12 < 1 || (iVar12 <= DAT_10230ffd0)))) {
    FUN_100df99c0("","pvsHostInfo",param_3,"--- shared camera info refreshed ---");
  }
  if ((iVar12 < 1) || (iVar12 <= DAT_10230ffd0)) {
    FUN_100df99c0("","pvsHostInfo",param_3,"---finish host info refreshing ---");
  }
  FUN_100b5b350();
  return;
}

