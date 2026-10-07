
bool FUN_100482870(long param_1,long param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  void *pvVar3;
  QArrayData *pQVar4;
  long *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  bVar2 = *(int *)(*param_3 + 4) < (int)(uint)*(ushort *)(param_2 + 0x14);
  local_30 = param_3;
  if (bVar2) {
    pvVar3 = (void *)FUN_1002a6010(param_2);
    lVar1 = *param_3;
    _memcpy(pvVar3,(void *)(*(long *)(lVar1 + 0x10) + lVar1),(long)*(int *)(lVar1 + 4));
  }
  FUN_100495ce0(param_1 + 0x58,&local_30);
  pQVar4 = (QArrayData *)param_3[1];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_23 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_23) goto LAB_1004828f9;
      pQVar4 = (QArrayData *)param_3[1];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1004828f9:
  pQVar4 = (QArrayData *)*param_3;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_22 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100482927;
      pQVar4 = (QArrayData *)*param_3;
    }
    QArrayData::deallocate(pQVar4,1,8);
  }
LAB_100482927:
  operator_delete(param_3);
  return bVar2;
}

