
void FUN_10005d710(long param_1)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  Data *pDVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  uVar9 = param_1 + 0x20U | 1;
  puVar8 = *(uint **)(param_1 + 0x18);
  uVar10 = puVar8[2];
  if (puVar8[3] != uVar10) {
    plVar1 = (long *)(param_1 + 0x18);
    do {
      if (1 < *puVar8) {
        pDVar5 = (Data *)QListData::detach((int)plVar1);
        lVar3 = *plVar1;
        lVar6 = (long)*(int *)(lVar3 + 8);
        puVar2 = (uint *)(lVar3 + 0x10 + lVar6 * 8);
        if ((puVar8 + (long)(int)uVar10 * 2 + 4 != puVar2) &&
           (lVar7 = *(int *)(lVar3 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(lVar3 + 0xc))) {
          _memcpy(puVar2,puVar8 + (long)(int)uVar10 * 2 + 4,lVar7 * 8);
        }
        if (*(int *)pDVar5 != -1) {
          if (*(int *)pDVar5 != 0) {
            LOCK();
            *(int *)pDVar5 = *(int *)pDVar5 + -1;
            local_31 = *(int *)pDVar5 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005d7c0;
          }
          QListData::dispose(pDVar5);
        }
      }
LAB_10005d7c0:
      puVar4 = *(undefined8 **)(*plVar1 + 0x10 + (long)*(int *)(*plVar1 + 8) * 8);
      local_40 = puVar4;
      FUN_10005f2a0(plVar1,&local_40);
      if ((uVar9 & 1) != 0) {
        uVar9 = uVar9 & 0xfffffffffffffffe;
        QMutex::unlock();
      }
      FUN_10005c9f0(*(undefined8 *)(param_1 + 0x10),*puVar4,puVar4[1]);
      _free((void *)*puVar4);
      if (puVar4 != (undefined8 *)0x0) {
        operator_delete(puVar4);
      }
      if ((uVar9 != 0) && ((uVar9 & 1) == 0)) {
        QMutex::lock();
        uVar9 = uVar9 | 1;
      }
      puVar8 = (uint *)*plVar1;
      uVar10 = puVar8[2];
    } while (puVar8[3] != uVar10);
  }
  if ((uVar9 & 1) != 0) {
    QMutex::unlock();
  }
  return;
}

