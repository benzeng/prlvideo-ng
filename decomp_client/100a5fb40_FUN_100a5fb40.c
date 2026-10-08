
undefined8 * FUN_100a5fb40(undefined8 *param_1,void **param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  
  puVar2 = *param_2;
  if (*puVar2 < 2) {
    puVar4 = (undefined8 *)*param_3;
  }
  else {
    lVar3 = *param_3;
    uVar1 = puVar2[2];
    FUN_100a63160(param_2,puVar2[1]);
    puVar4 = (undefined8 *)
             ((long)*param_2 +
             ((long)(int)((ulong)(lVar3 - (long)(puVar2 + (ulong)uVar1 * 2 + 4)) >> 3) +
             (long)*(int *)((long)*param_2 + 8)) * 8 + 0x10);
    *param_3 = (long)puVar4;
  }
  pQVar6 = (QArrayData *)*puVar4;
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_100a5fbc7;
      pQVar6 = (QArrayData *)*puVar4;
    }
    QArrayData::deallocate(pQVar6,1,8);
  }
LAB_100a5fbc7:
  uVar5 = QListData::erase(param_2);
  *param_1 = uVar5;
  return param_1;
}

