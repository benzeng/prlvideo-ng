
undefined1 FUN_100cd5370(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  Data *pDVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  uint *puVar11;
  uint *puVar12;
  undefined1 local_48 [8];
  uint *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  if (param_2 != (long *)0x0) {
    puVar11 = *(uint **)(param_1 + 0x20);
    plVar10 = (long *)(param_1 + 0x20);
    if (1 < *puVar11) {
      uVar2 = puVar11[2];
      pDVar6 = (Data *)QListData::detach((int)plVar10);
      lVar3 = *plVar10;
      lVar7 = (long)*(int *)(lVar3 + 8);
      puVar12 = (uint *)(lVar3 + 0x10 + lVar7 * 8);
      if ((puVar11 + (long)(int)uVar2 * 2 + 4 != puVar12) &&
         (lVar8 = *(int *)(lVar3 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar3 + 0xc))) {
        _memcpy(puVar12,puVar11 + (long)(int)uVar2 * 2 + 4,lVar8 * 8);
      }
      if (*(int *)pDVar6 != -1) {
        if (*(int *)pDVar6 != 0) {
          LOCK();
          *(int *)pDVar6 = *(int *)pDVar6 + -1;
          local_31 = *(int *)pDVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cd540e;
        }
        QListData::dispose(pDVar6);
      }
    }
LAB_100cd540e:
    puVar12 = (uint *)*plVar10;
    puVar11 = puVar12 + (long)(int)puVar12[2] * 2 + 4;
    do {
      if (1 < *puVar12) {
        uVar2 = puVar12[2];
        pDVar6 = (Data *)QListData::detach((int)plVar10);
        lVar3 = *plVar10;
        lVar7 = (long)*(int *)(lVar3 + 8);
        puVar1 = (uint *)(lVar3 + 0x10 + lVar7 * 8);
        if ((puVar12 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
           (lVar8 = *(int *)(lVar3 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar3 + 0xc))) {
          _memcpy(puVar1,puVar12 + (long)(int)uVar2 * 2 + 4,lVar8 * 8);
        }
        if (*(int *)pDVar6 != -1) {
          if (*(int *)pDVar6 != 0) {
            LOCK();
            *(int *)pDVar6 = *(int *)pDVar6 + -1;
            local_31 = *(int *)pDVar6 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cd5490;
          }
          QListData::dispose(pDVar6);
        }
      }
LAB_100cd5490:
      if (puVar11 == (uint *)(*plVar10 + 0x10 + (long)*(int *)(*plVar10 + 0xc) * 8)) {
        uVar9 = 0;
        goto LAB_100cd54ea;
      }
      cVar5 = (**(code **)(*param_2 + 0x68))(param_2,*(undefined8 *)puVar11);
      if (cVar5 != '\0') goto code_r0x000100cd54ba;
      puVar11 = puVar11 + 2;
      puVar12 = (uint *)*plVar10;
    } while( true );
  }
  uVar9 = 0;
  goto LAB_100cd54ea;
code_r0x000100cd54ba:
  plVar4 = *(long **)puVar11;
  local_40 = puVar11;
  FUN_100cd5f00(local_48,plVar10,&local_40);
  uVar9 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4);
LAB_100cd54ea:
  QMutex::unlock();
  return uVar9;
}

