
undefined8 * FUN_100cd5f00(undefined8 *param_1,void **param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  void *pvVar4;
  Data *pDVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = *param_2;
  if (*puVar2 < 2) goto LAB_100cd5fb9;
  lVar3 = *param_3;
  uVar1 = puVar2[2];
  pDVar5 = (Data *)QListData::detach((int)param_2);
  pvVar4 = *param_2;
  lVar7 = (long)*(int *)((long)pvVar4 + 8);
  if ((puVar2 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar4 + lVar7 * 8)) &&
     (lVar8 = *(int *)((long)pvVar4 + 0xc) - lVar7,
     lVar8 != 0 && lVar7 <= *(int *)((long)pvVar4 + 0xc))) {
    _memcpy((void *)((long)pvVar4 + lVar7 * 8 + 0x10),puVar2 + (long)(int)uVar1 * 2 + 4,lVar8 * 8);
  }
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      UNLOCK();
      if (*(int *)pDVar5 != 0) goto LAB_100cd5f9b;
    }
    QListData::dispose(pDVar5);
  }
LAB_100cd5f9b:
  *param_3 = (long)*param_2 +
             ((long)(int)((ulong)(lVar3 - (long)(puVar2 + (long)(int)uVar1 * 2 + 4)) >> 3) +
             (long)*(int *)((long)*param_2 + 8)) * 8 + 0x10;
LAB_100cd5fb9:
  uVar6 = QListData::erase(param_2);
  *param_1 = uVar6;
  return param_1;
}

