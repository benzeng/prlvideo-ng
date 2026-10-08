
undefined8 FUN_100cd3b80(long *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  Data *pDVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  
  plVar1 = param_1 + 4;
  puVar9 = (uint *)param_1[4];
  if (1 < *puVar9) {
    uVar2 = puVar9[2];
    pDVar5 = (Data *)QListData::detach((int)plVar1);
    lVar3 = *plVar1;
    lVar7 = (long)*(int *)(lVar3 + 8);
    if ((puVar9 + (long)(int)uVar2 * 2 != (uint *)(lVar3 + lVar7 * 8)) &&
       (lVar8 = *(int *)(lVar3 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar3 + 0xc))) {
      _memcpy((void *)(lVar3 + 0x10 + lVar7 * 8),puVar9 + (long)(int)uVar2 * 2 + 4,lVar8 * 8);
    }
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        UNLOCK();
        if (*(int *)pDVar5 != 0) goto LAB_100cd3c1a;
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_100cd3c1a:
  puVar10 = (uint *)*plVar1;
  puVar9 = puVar10 + (long)(int)puVar10[2] * 2 + 4;
  do {
    if (1 < *puVar10) {
      uVar2 = puVar10[2];
      pDVar5 = (Data *)QListData::detach((int)plVar1);
      lVar3 = *plVar1;
      lVar7 = (long)*(int *)(lVar3 + 8);
      if ((puVar10 + (long)(int)uVar2 * 2 != (uint *)(lVar3 + lVar7 * 8)) &&
         (lVar8 = *(int *)(lVar3 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(lVar3 + 0xc))) {
        _memcpy((void *)(lVar3 + 0x10 + lVar7 * 8),puVar10 + (long)(int)uVar2 * 2 + 4,lVar8 * 8);
      }
      if (*(int *)pDVar5 != -1) {
        if (*(int *)pDVar5 != 0) {
          LOCK();
          *(int *)pDVar5 = *(int *)pDVar5 + -1;
          UNLOCK();
          if (*(int *)pDVar5 != 0) goto LAB_100cd3cb0;
        }
        QListData::dispose(pDVar5);
      }
    }
LAB_100cd3cb0:
    if (puVar9 == (uint *)(*plVar1 + 0x10 + (long)*(int *)(*plVar1 + 0xc) * 8)) {
      uVar6 = (**(code **)(*param_1 + 200))(param_1,param_3,param_4);
      return uVar6;
    }
    iVar4 = (**(code **)(**(long **)puVar9 + 0x100))();
    if ((iVar4 == 2) &&
       (iVar4 = (**(code **)(**(long **)puVar9 + 0xb0))(*(long **)puVar9,param_2,param_3,param_4,0),
       iVar4 == 3)) {
      return 1;
    }
    puVar9 = puVar9 + 2;
    puVar10 = (uint *)*plVar1;
  } while( true );
}

