
long FUN_10047e030(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  Data *pDVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar8 = *(uint **)(param_1 + 0x50);
  plVar6 = (long *)(param_1 + 0x50);
  if (1 < *puVar8) {
    uVar1 = puVar8[2];
    pDVar2 = (Data *)QListData::detach((int)plVar6);
    lVar3 = *plVar6;
    lVar4 = (long)*(int *)(lVar3 + 8);
    if ((puVar8 + (long)(int)uVar1 * 2 != (uint *)(lVar3 + lVar4 * 8)) &&
       (lVar5 = *(int *)(lVar3 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(lVar3 + 0xc))) {
      _memcpy((void *)(lVar3 + 0x10 + lVar4 * 8),puVar8 + (long)(int)uVar1 * 2 + 4,lVar5 * 8);
    }
    if (*(int *)pDVar2 != -1) {
      if (*(int *)pDVar2 != 0) {
        LOCK();
        *(int *)pDVar2 = *(int *)pDVar2 + -1;
        UNLOCK();
        if (*(int *)pDVar2 != 0) goto LAB_10047e0cd;
      }
      QListData::dispose(pDVar2);
    }
  }
LAB_10047e0cd:
  puVar7 = (uint *)*plVar6;
  puVar8 = puVar7 + (long)(int)puVar7[2] * 2 + 4;
  do {
    if (1 < *puVar7) {
      uVar1 = puVar7[2];
      pDVar2 = (Data *)QListData::detach((int)plVar6);
      lVar3 = *plVar6;
      lVar4 = (long)*(int *)(lVar3 + 8);
      if ((puVar7 + (long)(int)uVar1 * 2 != (uint *)(lVar3 + lVar4 * 8)) &&
         (lVar5 = *(int *)(lVar3 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(lVar3 + 0xc))) {
        _memcpy((void *)(lVar3 + 0x10 + lVar4 * 8),puVar7 + (long)(int)uVar1 * 2 + 4,lVar5 * 8);
      }
      if (*(int *)pDVar2 != -1) {
        if (*(int *)pDVar2 != 0) {
          LOCK();
          *(int *)pDVar2 = *(int *)pDVar2 + -1;
          UNLOCK();
          if (*(int *)pDVar2 != 0) goto LAB_10047e170;
        }
        QListData::dispose(pDVar2);
      }
    }
LAB_10047e170:
    if (puVar8 == (uint *)(*plVar6 + 0x10 + (long)*(int *)(*plVar6 + 0xc) * 8)) {
      return 0;
    }
    lVar3 = FUN_10047e1c0(*(undefined8 *)puVar8,param_2);
    if (lVar3 != 0) {
      *param_3 = *(undefined8 *)puVar8;
      return lVar3;
    }
    puVar8 = puVar8 + 2;
    puVar7 = (uint *)*plVar6;
  } while( true );
}

