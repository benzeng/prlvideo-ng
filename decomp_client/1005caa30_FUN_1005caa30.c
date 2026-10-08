
undefined8 FUN_1005caa30(void)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  Data *pDVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  
  lVar6 = CVmConfiguration::getVmHardwareList();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmStartupOptions();
  lVar7 = CVmStartupOptionsBase::getBootingOrder();
  lVar9 = *(long *)(lVar7 + 0xa8);
  if (*(int *)(lVar9 + 8) < *(int *)(lVar9 + 0xc)) {
    plVar14 = (long *)(lVar7 + 0xa8);
    iVar13 = 0;
    do {
      puVar8 = (undefined8 *)FUN_1001bc7b0(plVar14,iVar13);
      BootDevice::setBootingNumber((uint)*puVar8);
      uVar3 = BootDevice::getType();
      iVar4 = BootDevice::getIndex();
      if ((uVar3 < 0x10) && ((0x8168U >> (uVar3 & 0x1f) & 1) != 0)) {
        plVar1 = *(long **)(lVar6 + 0xa8 + (ulong)uVar3 * 8);
        if (plVar1 != (long *)0x0) {
          lVar9 = *plVar1;
          uVar11 = (ulong)*(uint *)(lVar9 + 8);
          lVar7 = 0;
          if ((int)*(uint *)(lVar9 + 8) < *(int *)(lVar9 + 0xc)) {
            do {
              if (*(long *)(lVar9 + 0x10 + ((int)uVar11 + lVar7) * 8) != 0) {
                iVar5 = CVmDevice::getIndex();
                if (iVar4 == iVar5) goto LAB_1005cabc4;
              }
              lVar7 = lVar7 + 1;
              lVar9 = *plVar1;
              uVar11 = (ulong)*(int *)(lVar9 + 8);
            } while (lVar7 < (long)((long)*(int *)(lVar9 + 0xc) - uVar11));
          }
        }
        if (-1 < iVar13) {
          puVar2 = (uint *)*plVar14;
          uVar3 = puVar2[2];
          if (iVar13 < (int)(puVar2[3] - uVar3)) {
            if (1 < *puVar2) {
              pDVar10 = (Data *)QListData::detach((int)plVar14);
              lVar9 = *plVar14;
              lVar7 = (long)*(int *)(lVar9 + 8);
              if ((puVar2 + (long)(int)uVar3 * 2 != (uint *)(lVar9 + lVar7 * 8)) &&
                 (lVar12 = *(int *)(lVar9 + 0xc) - lVar7,
                 lVar12 != 0 && lVar7 <= *(int *)(lVar9 + 0xc))) {
                _memcpy((void *)(lVar9 + 0x10 + lVar7 * 8),puVar2 + (long)(int)uVar3 * 2 + 4,
                        lVar12 * 8);
              }
              if (*(int *)pDVar10 != -1) {
                if (*(int *)pDVar10 != 0) {
                  LOCK();
                  *(int *)pDVar10 = *(int *)pDVar10 + -1;
                  UNLOCK();
                  if (*(int *)pDVar10 != 0) goto LAB_1005cabb6;
                }
                QListData::dispose(pDVar10);
              }
            }
LAB_1005cabb6:
            QListData::remove((int)plVar14);
          }
        }
        iVar13 = iVar13 + -1;
      }
LAB_1005cabc4:
      iVar13 = iVar13 + 1;
      lVar9 = *plVar14;
    } while (iVar13 < *(int *)(lVar9 + 0xc) - *(int *)(lVar9 + 8));
  }
  return CONCAT71((int7)((ulong)lVar9 >> 8),1);
}

