
undefined4 FUN_1002db030(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  Data *pDVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  void **ppvVar12;
  
  uVar11 = param_1 + 0x20;
  if ((uVar11 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar11 = uVar11 | 1;
  }
  lVar7 = FUN_1002dde60(param_1,0x81);
  if (lVar7 == 0) {
    uVar6 = 0;
    if (-1 < DAT_1011c568c) {
      uVar6 = 0;
      FUN_1008e3970("","USB",0,"[HUB] can\'t submit hub event ep_info = %p",0);
    }
    goto LAB_1002db272;
  }
  QMutex::lock();
  puVar3 = *(uint **)(lVar7 + 0x10);
  uVar2 = puVar3[2];
  if (puVar3[3] == uVar2) {
    uVar6 = 0;
    if (-1 < DAT_1011c568c) {
      uVar6 = 0;
      FUN_1008e3970("","USB",0,"[HUB] hub event dropped due to io-packet queue empty");
    }
  }
  else {
    ppvVar12 = (void **)(lVar7 + 0x10);
    iVar10 = (int)ppvVar12;
    if (1 < *puVar3) {
      pDVar8 = (Data *)QListData::detach(iVar10);
      pvVar4 = *ppvVar12;
      lVar7 = (long)*(int *)((long)pvVar4 + 8);
      puVar1 = (uint *)((long)pvVar4 + lVar7 * 8 + 0x10);
      if ((puVar3 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
         (lVar9 = *(int *)((long)pvVar4 + 0xc) - lVar7,
         lVar9 != 0 && lVar7 <= *(int *)((long)pvVar4 + 0xc))) {
        _memcpy(puVar1,puVar3 + (long)(int)uVar2 * 2 + 4,lVar9 * 8);
      }
      if (*(int *)pDVar8 != -1) {
        if (*(int *)pDVar8 != 0) {
          LOCK();
          *(int *)pDVar8 = *(int *)pDVar8 + -1;
          UNLOCK();
          if (*(int *)pDVar8 != 0) goto LAB_1002db169;
        }
        QListData::dispose(pDVar8);
      }
    }
LAB_1002db169:
    puVar3 = *ppvVar12;
    uVar2 = puVar3[2];
    uVar5 = *(undefined8 *)(puVar3 + (long)(int)uVar2 * 2 + 4);
    if (1 < *puVar3) {
      pDVar8 = (Data *)QListData::detach(iVar10);
      pvVar4 = *ppvVar12;
      lVar7 = (long)*(int *)((long)pvVar4 + 8);
      puVar1 = (uint *)((long)pvVar4 + lVar7 * 8 + 0x10);
      if ((puVar3 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
         (lVar9 = *(int *)((long)pvVar4 + 0xc) - lVar7,
         lVar9 != 0 && lVar7 <= *(int *)((long)pvVar4 + 0xc))) {
        _memcpy(puVar1,puVar3 + (long)(int)uVar2 * 2 + 4,lVar9 * 8);
      }
      if (*(int *)pDVar8 != -1) {
        if (*(int *)pDVar8 != 0) {
          LOCK();
          *(int *)pDVar8 = *(int *)pDVar8 + -1;
          UNLOCK();
          if (*(int *)pDVar8 != 0) goto LAB_1002db1d9;
        }
        QListData::dispose(pDVar8);
      }
    }
LAB_1002db1d9:
    puVar3 = *ppvVar12;
    uVar2 = puVar3[2];
    if (1 < *puVar3) {
      pDVar8 = (Data *)QListData::detach(iVar10);
      pvVar4 = *ppvVar12;
      lVar7 = (long)*(int *)((long)pvVar4 + 8);
      puVar1 = (uint *)((long)pvVar4 + lVar7 * 8 + 0x10);
      if ((puVar3 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
         (lVar9 = *(int *)((long)pvVar4 + 0xc) - lVar7,
         lVar9 != 0 && lVar7 <= *(int *)((long)pvVar4 + 0xc))) {
        _memcpy(puVar1,puVar3 + (long)(int)uVar2 * 2 + 4,lVar9 * 8);
      }
      if (*(int *)pDVar8 != -1) {
        if (*(int *)pDVar8 != 0) {
          LOCK();
          *(int *)pDVar8 = *(int *)pDVar8 + -1;
          UNLOCK();
          if (*(int *)pDVar8 != 0) goto LAB_1002db24b;
        }
        QListData::dispose(pDVar8);
      }
    }
LAB_1002db24b:
    QListData::erase(ppvVar12);
    uVar6 = FUN_1002db960(param_1,uVar5);
  }
  QMutex::unlock();
LAB_1002db272:
  if ((uVar11 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return uVar6;
}

