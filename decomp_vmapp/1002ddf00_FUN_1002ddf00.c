
undefined8 FUN_1002ddf00(long param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  void *pvVar3;
  code *pcVar4;
  uint uVar5;
  Data *pDVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  void **ppvVar13;
  
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x40 + (ulong)*(byte *)(*(long *)(param_2 + 8) + 2) * 8
                   );
  QMutex::lock();
  puVar11 = *(uint **)(param_2 + 0x10);
  uVar5 = puVar11[2];
  if (puVar11[3] != uVar5) {
    ppvVar13 = (void **)(param_2 + 0x10);
    do {
      iVar12 = (int)ppvVar13;
      if (1 < *puVar11) {
        pDVar6 = (Data *)QListData::detach(iVar12);
        pvVar3 = *ppvVar13;
        lVar7 = (long)*(int *)((long)pvVar3 + 8);
        if ((puVar11 + (long)(int)uVar5 * 2 != (uint *)((long)pvVar3 + lVar7 * 8)) &&
           (lVar9 = *(int *)((long)pvVar3 + 0xc) - lVar7,
           lVar9 != 0 && lVar7 <= *(int *)((long)pvVar3 + 0xc))) {
          _memcpy((void *)((long)pvVar3 + lVar7 * 8 + 0x10),puVar11 + (long)(int)uVar5 * 2 + 4,
                  lVar9 * 8);
        }
        if (*(int *)pDVar6 != -1) {
          if (*(int *)pDVar6 != 0) {
            LOCK();
            *(int *)pDVar6 = *(int *)pDVar6 + -1;
            UNLOCK();
            if (*(int *)pDVar6 != 0) goto LAB_1002ddfc0;
          }
          QListData::dispose(pDVar6);
        }
      }
LAB_1002ddfc0:
      puVar11 = *ppvVar13;
      uVar5 = puVar11[2];
      lVar7 = *(long *)(puVar11 + (long)(int)uVar5 * 2 + 4);
      *(undefined4 *)(lVar7 + 0x468) = 5;
      if (1 < *puVar11) {
        pDVar6 = (Data *)QListData::detach(iVar12);
        pvVar3 = *ppvVar13;
        lVar9 = (long)*(int *)((long)pvVar3 + 8);
        puVar2 = (uint *)((long)pvVar3 + lVar9 * 8 + 0x10);
        if ((puVar11 + (long)(int)uVar5 * 2 + 4 != puVar2) &&
           (lVar10 = *(int *)((long)pvVar3 + 0xc) - lVar9,
           lVar10 != 0 && lVar9 <= *(int *)((long)pvVar3 + 0xc))) {
          _memcpy(puVar2,puVar11 + (long)(int)uVar5 * 2 + 4,lVar10 * 8);
        }
        if (*(int *)pDVar6 != -1) {
          if (*(int *)pDVar6 != 0) {
            LOCK();
            *(int *)pDVar6 = *(int *)pDVar6 + -1;
            UNLOCK();
            if (*(int *)pDVar6 != 0) goto LAB_1002de040;
          }
          QListData::dispose(pDVar6);
        }
      }
LAB_1002de040:
      puVar11 = *ppvVar13;
      uVar5 = puVar11[2];
      if (1 < *puVar11) {
        pDVar6 = (Data *)QListData::detach(iVar12);
        pvVar3 = *ppvVar13;
        lVar9 = (long)*(int *)((long)pvVar3 + 8);
        puVar2 = (uint *)((long)pvVar3 + lVar9 * 8 + 0x10);
        if ((puVar11 + (long)(int)uVar5 * 2 + 4 != puVar2) &&
           (lVar10 = *(int *)((long)pvVar3 + 0xc) - lVar9,
           lVar10 != 0 && lVar9 <= *(int *)((long)pvVar3 + 0xc))) {
          _memcpy(puVar2,puVar11 + (long)(int)uVar5 * 2 + 4,lVar10 * 8);
        }
        if (*(int *)pDVar6 != -1) {
          if (*(int *)pDVar6 != 0) {
            LOCK();
            *(int *)pDVar6 = *(int *)pDVar6 + -1;
            UNLOCK();
            if (*(int *)pDVar6 != 0) goto LAB_1002de0b9;
          }
          QListData::dispose(pDVar6);
        }
      }
LAB_1002de0b9:
      QListData::erase(ppvVar13);
      if ((1 < DAT_1011c568c) && (*(int *)(lVar7 + 0x450) == 0x69)) {
        FUN_1002da980(2,lVar7);
      }
      uVar5 = *(uint *)(lVar7 + 0x470);
      *(undefined4 *)(lVar7 + 0x464) = 1;
      LOCK();
      piVar1 = (int *)(*(long *)(lVar8 + 0xc0) + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)(lVar8 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((uVar5 & 4) != 0) {
        FUN_1002c9070(lVar7);
      }
      puVar11 = *ppvVar13;
      uVar5 = puVar11[2];
    } while (puVar11[3] != uVar5);
  }
  puVar11 = *(uint **)(param_2 + 0x18);
  uVar5 = puVar11[2];
  if (puVar11[3] != uVar5) {
    ppvVar13 = (void **)(param_2 + 0x18);
    do {
      iVar12 = (int)ppvVar13;
      if (1 < *puVar11) {
        pDVar6 = (Data *)QListData::detach(iVar12);
        pvVar3 = *ppvVar13;
        lVar8 = (long)*(int *)((long)pvVar3 + 8);
        if ((puVar11 + (long)(int)uVar5 * 2 != (uint *)((long)pvVar3 + lVar8 * 8)) &&
           (lVar7 = *(int *)((long)pvVar3 + 0xc) - lVar8,
           lVar7 != 0 && lVar8 <= *(int *)((long)pvVar3 + 0xc))) {
          _memcpy((void *)((long)pvVar3 + lVar8 * 8 + 0x10),puVar11 + (long)(int)uVar5 * 2 + 4,
                  lVar7 * 8);
        }
        if (*(int *)pDVar6 != -1) {
          if (*(int *)pDVar6 != 0) {
            LOCK();
            *(int *)pDVar6 = *(int *)pDVar6 + -1;
            UNLOCK();
            if (*(int *)pDVar6 != 0) goto LAB_1002de1c0;
          }
          QListData::dispose(pDVar6);
        }
      }
LAB_1002de1c0:
      puVar11 = *ppvVar13;
      uVar5 = puVar11[2];
      lVar8 = *(long *)(puVar11 + (long)(int)uVar5 * 2 + 4);
      if (1 < *puVar11) {
        pDVar6 = (Data *)QListData::detach(iVar12);
        pvVar3 = *ppvVar13;
        lVar7 = (long)*(int *)((long)pvVar3 + 8);
        puVar2 = (uint *)((long)pvVar3 + lVar7 * 8 + 0x10);
        if ((puVar11 + (long)(int)uVar5 * 2 + 4 != puVar2) &&
           (lVar9 = *(int *)((long)pvVar3 + 0xc) - lVar7,
           lVar9 != 0 && lVar7 <= *(int *)((long)pvVar3 + 0xc))) {
          _memcpy(puVar2,puVar11 + (long)(int)uVar5 * 2 + 4,lVar9 * 8);
        }
        if (*(int *)pDVar6 != -1) {
          if (*(int *)pDVar6 != 0) {
            LOCK();
            *(int *)pDVar6 = *(int *)pDVar6 + -1;
            UNLOCK();
            if (*(int *)pDVar6 != 0) goto LAB_1002de230;
          }
          QListData::dispose(pDVar6);
        }
      }
LAB_1002de230:
      puVar11 = *ppvVar13;
      uVar5 = puVar11[2];
      if (1 < *puVar11) {
        pDVar6 = (Data *)QListData::detach(iVar12);
        pvVar3 = *ppvVar13;
        lVar7 = (long)*(int *)((long)pvVar3 + 8);
        puVar2 = (uint *)((long)pvVar3 + lVar7 * 8 + 0x10);
        if ((puVar11 + (long)(int)uVar5 * 2 + 4 != puVar2) &&
           (lVar9 = *(int *)((long)pvVar3 + 0xc) - lVar7,
           lVar9 != 0 && lVar7 <= *(int *)((long)pvVar3 + 0xc))) {
          _memcpy(puVar2,puVar11 + (long)(int)uVar5 * 2 + 4,lVar9 * 8);
        }
        if (*(int *)pDVar6 != -1) {
          if (*(int *)pDVar6 != 0) {
            LOCK();
            *(int *)pDVar6 = *(int *)pDVar6 + -1;
            UNLOCK();
            if (*(int *)pDVar6 != 0) goto LAB_1002de2a7;
          }
          QListData::dispose(pDVar6);
        }
      }
LAB_1002de2a7:
      QListData::erase(ppvVar13);
      pcVar4 = *(code **)(lVar8 + 0x18);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(lVar8);
      }
      puVar11 = *ppvVar13;
      uVar5 = puVar11[2];
    } while (puVar11[3] != uVar5);
  }
  QMutex::unlock();
  return 1;
}

