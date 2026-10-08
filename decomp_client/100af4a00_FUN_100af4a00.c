
int FUN_100af4a00(long param_1,void **param_2)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  long *plVar5;
  char cVar6;
  Data *pDVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  int local_5c;
  QString local_40;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  
  puVar3 = *param_2;
  iVar11 = (int)param_2;
  if (1 < *puVar3) {
    uVar2 = puVar3[2];
    pDVar7 = (Data *)QListData::detach(iVar11);
    pvVar4 = *param_2;
    lVar8 = (long)*(int *)((long)pvVar4 + 8);
    if ((puVar3 + (long)(int)uVar2 * 2 != (uint *)((long)pvVar4 + lVar8 * 8)) &&
       (lVar9 = *(int *)((long)pvVar4 + 0xc) - lVar8,
       lVar9 != 0 && lVar8 <= *(int *)((long)pvVar4 + 0xc))) {
      _memcpy((void *)((long)pvVar4 + lVar8 * 8 + 0x10),puVar3 + (long)(int)uVar2 * 2 + 4,lVar9 * 8)
      ;
    }
    if (*(int *)pDVar7 != -1) {
      if (*(int *)pDVar7 != 0) {
        LOCK();
        *(int *)pDVar7 = *(int *)pDVar7 + -1;
        local_35 = *(int *)pDVar7 != 0;
        UNLOCK();
        if ((bool)local_35) goto LAB_100af4a97;
      }
      QListData::dispose(pDVar7);
    }
  }
LAB_100af4a97:
  lVar8 = (long)*param_2 + (long)*(int *)((long)*param_2 + 8) * 8 + 0x10;
  plVar1 = (long *)(param_1 + 0x30);
  local_5c = 0;
LAB_100af4add:
  do {
    puVar3 = *param_2;
    if (1 < *puVar3) {
      uVar2 = puVar3[2];
      pDVar7 = (Data *)QListData::detach(iVar11);
      pvVar4 = *param_2;
      lVar9 = (long)*(int *)((long)pvVar4 + 8);
      if ((puVar3 + (long)(int)uVar2 * 2 != (uint *)((long)pvVar4 + lVar9 * 8)) &&
         (lVar10 = *(int *)((long)pvVar4 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)((long)pvVar4 + 0xc))) {
        _memcpy((void *)((long)pvVar4 + lVar9 * 8 + 0x10),puVar3 + (long)(int)uVar2 * 2 + 4,
                lVar10 * 8);
      }
      if (*(int *)pDVar7 != -1) {
        if (*(int *)pDVar7 != 0) {
          LOCK();
          *(int *)pDVar7 = *(int *)pDVar7 + -1;
          local_34 = *(int *)pDVar7 != 0;
          UNLOCK();
          if ((bool)local_34) goto LAB_100af4b60;
        }
        QListData::dispose(pDVar7);
      }
    }
LAB_100af4b60:
    if (lVar8 == (long)*param_2 + (long)*(int *)((long)*param_2 + 0xc) * 8 + 0x10) {
      return local_5c;
    }
    CHwHardDisk::getDeviceId();
    plVar5 = (long *)*plVar1;
    plVar13 = plVar1;
    if ((long *)*plVar1 == (long *)0x0) {
LAB_100af4bd8:
      plVar13 = plVar1;
    }
    else {
      do {
        while (plVar12 = plVar5, cVar6 = operator<((QString *)(plVar12 + 4),&local_40),
              cVar6 != '\0') {
          plVar5 = (long *)plVar12[1];
          if ((long *)plVar12[1] == (long *)0x0) goto LAB_100af4bc3;
        }
        plVar13 = plVar12;
        plVar5 = (long *)*plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
LAB_100af4bc3:
      if ((plVar13 == plVar1) ||
         (cVar6 = operator<(&local_40,(QString *)(plVar13 + 4)), cVar6 != '\0')) goto LAB_100af4bd8;
    }
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_33 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_33) goto LAB_100af4c0b;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100af4c0b:
    if ((char)plVar13[5] != '\0') {
      lVar8 = lVar8 + 8;
      *(undefined1 *)(plVar13 + 5) = 0;
      goto LAB_100af4add;
    }
    puVar3 = *param_2;
    if (1 < *puVar3) {
      uVar2 = puVar3[2];
      pDVar7 = (Data *)QListData::detach(iVar11);
      pvVar4 = *param_2;
      lVar8 = (long)*(int *)((long)pvVar4 + 8);
      if ((puVar3 + (long)(int)uVar2 * 2 != (uint *)((long)pvVar4 + lVar8 * 8)) &&
         (lVar9 = *(int *)((long)pvVar4 + 0xc) - lVar8,
         lVar9 != 0 && lVar8 <= *(int *)((long)pvVar4 + 0xc))) {
        _memcpy((void *)((long)pvVar4 + lVar8 * 8 + 0x10),puVar3 + (long)(int)uVar2 * 2 + 4,
                lVar9 * 8);
      }
      if (*(int *)pDVar7 != -1) {
        if (*(int *)pDVar7 != 0) {
          LOCK();
          *(int *)pDVar7 = *(int *)pDVar7 + -1;
          local_32 = *(int *)pDVar7 != 0;
          UNLOCK();
          if ((bool)local_32) goto LAB_100af4cc9;
        }
        QListData::dispose(pDVar7);
      }
    }
LAB_100af4cc9:
    lVar8 = QListData::erase(param_2);
    FUN_100af9c80(param_1 + 0x28,plVar13);
    local_5c = local_5c + 1;
  } while( true );
}

