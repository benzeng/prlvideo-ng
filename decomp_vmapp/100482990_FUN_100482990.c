
void FUN_100482990(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  Data *pDVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  
  plVar1 = (long *)(param_1 + 0x58);
  puVar7 = *(uint **)(param_1 + 0x58);
  if (1 < *puVar7) {
    uVar2 = puVar7[2];
    pDVar6 = (Data *)QListData::detach((int)plVar1);
    lVar4 = *plVar1;
    lVar8 = (long)*(int *)(lVar4 + 8);
    if ((puVar7 + (long)(int)uVar2 * 2 != (uint *)(lVar4 + lVar8 * 8)) &&
       (lVar9 = *(int *)(lVar4 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(lVar4 + 0xc))) {
      _memcpy((void *)(lVar4 + 0x10 + lVar8 * 8),puVar7 + (long)(int)uVar2 * 2 + 4,lVar9 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        UNLOCK();
        if (*(int *)pDVar6 != 0) goto LAB_100482a23;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_100482a23:
  puVar5 = *(undefined8 **)(*plVar1 + 0x10 + (long)*(int *)(*plVar1 + 8) * 8);
  puVar7 = (uint *)*puVar5;
  if ((1 < *puVar7) || (*(long *)(puVar7 + 4) != 0x18)) {
    QByteArray::reallocData(puVar5,puVar7[1] + 1,puVar7[2] >> 0x1f);
    puVar7 = (uint *)*puVar5;
  }
  iVar3 = *(int *)(*(long *)(puVar7 + 4) + 0x10 + (long)puVar7);
  if ((iVar3 == 3) || (iVar3 == 6)) {
    FUN_100482230(param_1,param_2,puVar5);
  }
  else {
    FUN_100482870(param_1,param_2,puVar5);
  }
  return;
}

