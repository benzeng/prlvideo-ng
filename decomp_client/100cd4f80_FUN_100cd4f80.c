
undefined1 FUN_100cd4f80(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  Data *pDVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  uint *puVar10;
  uint *puVar11;
  
  QMutex::lock();
  if (DAT_102311918 == param_1) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",2,"[CHIDHostHook] Ungrab mouse");
    }
    plVar1 = param_1 + 4;
    puVar10 = (uint *)param_1[4];
    if (1 < *puVar10) {
      uVar3 = puVar10[2];
      pDVar6 = (Data *)QListData::detach((int)plVar1);
      lVar4 = *plVar1;
      lVar7 = (long)*(int *)(lVar4 + 8);
      puVar11 = (uint *)(lVar4 + 0x10 + lVar7 * 8);
      if ((puVar10 + (long)(int)uVar3 * 2 + 4 != puVar11) &&
         (lVar8 = *(int *)(lVar4 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar4 + 0xc))) {
        _memcpy(puVar11,puVar10 + (long)(int)uVar3 * 2 + 4,lVar8 * 8);
      }
      if (*(int *)pDVar6 != -1) {
        if (*(int *)pDVar6 != 0) {
          LOCK();
          *(int *)pDVar6 = *(int *)pDVar6 + -1;
          UNLOCK();
          if (*(int *)pDVar6 != 0) goto LAB_100cd507d;
        }
        QListData::dispose(pDVar6);
      }
    }
LAB_100cd507d:
    puVar11 = (uint *)*plVar1;
    puVar10 = puVar11 + (long)(int)puVar11[2] * 2 + 4;
    do {
      if (1 < *puVar11) {
        uVar3 = puVar11[2];
        pDVar6 = (Data *)QListData::detach((int)plVar1);
        lVar4 = *plVar1;
        lVar7 = (long)*(int *)(lVar4 + 8);
        puVar2 = (uint *)(lVar4 + 0x10 + lVar7 * 8);
        if ((puVar11 + (long)(int)uVar3 * 2 + 4 != puVar2) &&
           (lVar8 = *(int *)(lVar4 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar4 + 0xc))) {
          _memcpy(puVar2,puVar11 + (long)(int)uVar3 * 2 + 4,lVar8 * 8);
        }
        if (*(int *)pDVar6 != -1) {
          if (*(int *)pDVar6 != 0) {
            LOCK();
            *(int *)pDVar6 = *(int *)pDVar6 + -1;
            UNLOCK();
            if (*(int *)pDVar6 != 0) goto LAB_100cd5100;
          }
          QListData::dispose(pDVar6);
        }
      }
LAB_100cd5100:
      if (puVar10 == (uint *)(*plVar1 + 0x10 + (long)*(int *)(*plVar1 + 0xc) * 8))
      goto LAB_100cd5141;
      (**(code **)(**(long **)puVar10 + 0xd8))();
      puVar10 = puVar10 + 2;
      puVar11 = (uint *)*plVar1;
    } while( true );
  }
  uVar9 = 0;
  if (DAT_102311918 != (long *)0x0) {
    FUN_100df99c0("","hid",0,"[CHIDHostHook] Bad instance for mouse ungrab (this: %p, owner: %p)",
                  param_1);
    uVar9 = 0;
  }
  goto LAB_100cd5182;
LAB_100cd5141:
  cVar5 = (**(code **)(*param_1 + 0x160))(param_1);
  if (cVar5 == '\0') {
    uVar9 = 0;
  }
  else {
    *(undefined8 *)(param_1[0x68] + 0xf0) = 0;
    DAT_102311918 = (long *)0x0;
    uVar9 = 1;
  }
LAB_100cd5182:
  QMutex::unlock();
  return uVar9;
}

