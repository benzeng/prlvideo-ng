
undefined1 FUN_100cd4b90(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  char cVar4;
  Data *pDVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  
  QMutex::lock();
  if (DAT_102311910 == param_1) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",2,"[CHIDHostHook] Ungrab keyboard");
    }
    plVar1 = param_1 + 4;
    puVar11 = (uint *)param_1[4];
    if (1 < *puVar11) {
      uVar12 = puVar11[2];
      pDVar5 = (Data *)QListData::detach((int)plVar1);
      lVar3 = *plVar1;
      lVar6 = (long)*(int *)(lVar3 + 8);
      puVar10 = (uint *)(lVar3 + 0x10 + lVar6 * 8);
      if ((puVar11 + (long)(int)uVar12 * 2 + 4 != puVar10) &&
         (lVar8 = *(int *)(lVar3 + 0xc) - lVar6, lVar8 != 0 && lVar6 <= *(int *)(lVar3 + 0xc))) {
        _memcpy(puVar10,puVar11 + (long)(int)uVar12 * 2 + 4,lVar8 * 8);
      }
      if (*(int *)pDVar5 != -1) {
        if (*(int *)pDVar5 != 0) {
          LOCK();
          *(int *)pDVar5 = *(int *)pDVar5 + -1;
          UNLOCK();
          if (*(int *)pDVar5 != 0) goto LAB_100cd4c92;
        }
        QListData::dispose(pDVar5);
      }
    }
LAB_100cd4c92:
    puVar10 = (uint *)*plVar1;
    puVar11 = puVar10 + (long)(int)puVar10[2] * 2 + 4;
    do {
      if (1 < *puVar10) {
        uVar12 = puVar10[2];
        pDVar5 = (Data *)QListData::detach((int)plVar1);
        lVar3 = *plVar1;
        lVar6 = (long)*(int *)(lVar3 + 8);
        puVar2 = (uint *)(lVar3 + 0x10 + lVar6 * 8);
        if ((puVar10 + (long)(int)uVar12 * 2 + 4 != puVar2) &&
           (lVar8 = *(int *)(lVar3 + 0xc) - lVar6, lVar8 != 0 && lVar6 <= *(int *)(lVar3 + 0xc))) {
          _memcpy(puVar2,puVar10 + (long)(int)uVar12 * 2 + 4,lVar8 * 8);
        }
        if (*(int *)pDVar5 != -1) {
          if (*(int *)pDVar5 != 0) {
            LOCK();
            *(int *)pDVar5 = *(int *)pDVar5 + -1;
            UNLOCK();
            if (*(int *)pDVar5 != 0) goto LAB_100cd4d20;
          }
          QListData::dispose(pDVar5);
        }
      }
LAB_100cd4d20:
      if (puVar11 == (uint *)(*plVar1 + 0x10 + (long)*(int *)(*plVar1 + 0xc) * 8))
      goto LAB_100cd4d4c;
      (**(code **)(**(long **)puVar11 + 0xd0))();
      puVar11 = puVar11 + 2;
      puVar10 = (uint *)*plVar1;
    } while( true );
  }
  uVar9 = 0;
  if (DAT_102311910 != (long *)0x0) {
    FUN_100df99c0("","hid",0,"[CHIDHostHook] Bad instance for keyboard ungrab (this: %p, owner: %p)"
                  ,param_1);
    uVar9 = 0;
  }
  goto LAB_100cd4e35;
LAB_100cd4d4c:
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x3b4) = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  cVar4 = (**(code **)(*param_1 + 0x150))(param_1);
  uVar9 = 0;
  if (cVar4 != '\0') {
    uVar12 = 0;
    do {
      if ((*(uint *)((long)param_1 + (ulong)(uVar12 >> 5) * 4 + 0x3c0) >> (uVar12 & 0x1f) & 1) != 0)
      {
        uVar7 = FUN_100cdf380(uVar12);
        FUN_100df99c0("","hid",0,"[CHIDHostHook] Send key-up to VM (key: 0x%x [%s])",uVar12,uVar7);
        (**(code **)(*param_1 + 200))(param_1,uVar12,0);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x100);
    *(undefined8 *)(param_1[0x6d] + 0xf0) = 0;
    DAT_102311910 = (long *)0x0;
    uVar9 = 1;
  }
LAB_100cd4e35:
  QMutex::unlock();
  return uVar9;
}

