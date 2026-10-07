
int FUN_100059d20(long param_1,code *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  char cVar5;
  Data *pDVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  int local_5c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 local_31;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  puVar3 = *(uint **)(param_1 + 8);
  plVar9 = (long *)(param_1 + 8);
  if (1 < *puVar3) {
    uVar2 = puVar3[2];
    pDVar6 = (Data *)QListData::detach((int)plVar9);
    lVar4 = *plVar9;
    lVar7 = (long)*(int *)(lVar4 + 8);
    puVar1 = (uint *)(lVar4 + 0x10 + lVar7 * 8);
    if ((puVar3 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
       (lVar8 = *(int *)(lVar4 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar4 + 0xc))) {
      _memcpy(puVar1,puVar3 + (long)(int)uVar2 * 2 + 4,lVar8 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        local_31 = *(int *)pDVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100059dc5;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100059dc5:
  local_5c = 0;
  puVar10 = (undefined8 *)(*plVar9 + 0x10 + (long)*(int *)(*plVar9 + 8) * 8);
  do {
    puVar3 = (uint *)*plVar9;
    if (1 < *puVar3) {
      uVar2 = puVar3[2];
      pDVar6 = (Data *)QListData::detach((int)plVar9);
      lVar4 = *plVar9;
      lVar7 = (long)*(int *)(lVar4 + 8);
      puVar1 = (uint *)(lVar4 + 0x10 + lVar7 * 8);
      if ((puVar3 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
         (lVar8 = *(int *)(lVar4 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar4 + 0xc))) {
        _memcpy(puVar1,puVar3 + (long)(int)uVar2 * 2 + 4,lVar8 * 8);
      }
      if (*(int *)pDVar6 != -1) {
        if (*(int *)pDVar6 != 0) {
          LOCK();
          *(int *)pDVar6 = *(int *)pDVar6 + -1;
          local_31 = *(int *)pDVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100059e50;
        }
        QListData::dispose(pDVar6);
      }
    }
LAB_100059e50:
    if (puVar10 == (undefined8 *)(*plVar9 + 0x10 + (long)*(int *)(*plVar9 + 0xc) * 8)) {
      _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
      return local_5c;
    }
    cVar5 = (*param_2)(*puVar10,param_3);
    if (cVar5 == '\0') {
      puVar10 = puVar10 + 1;
    }
    else {
      local_48 = puVar10;
      FUN_100059c40(&local_40,plVar9,&local_48);
      local_5c = local_5c + 1;
      puVar10 = local_40;
    }
  } while( true );
}

