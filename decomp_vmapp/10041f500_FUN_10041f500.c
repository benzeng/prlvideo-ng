
long * FUN_10041f500(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  long *plVar3;
  undefined8 local_48;
  long *local_40;
  undefined1 local_31;
  
  plVar3 = (long *)*param_2;
  if (*(uint *)(plVar3 + 2) < 2) {
    local_40 = (long *)*param_3;
  }
  else {
    local_48 = *param_3;
    FUN_10041f350(&local_40,param_2,&local_48);
    *param_3 = local_40;
    plVar3 = (long *)*param_2;
  }
  if (local_40 == plVar3) goto LAB_10041f5aa;
  lVar1 = *local_40;
  *(long *)(lVar1 + 8) = local_40[1];
  *(long *)local_40[1] = lVar1;
  plVar3 = (long *)*local_40;
  if (local_40 != (long *)0x0) {
    pQVar2 = (QArrayData *)local_40[2];
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10041f59c;
        pQVar2 = (QArrayData *)local_40[2];
      }
      QArrayData::deallocate(pQVar2,1,8);
    }
LAB_10041f59c:
    operator_delete(local_40);
  }
  *(int *)(*param_2 + 0x14) = *(int *)(*param_2 + 0x14) + -1;
LAB_10041f5aa:
  *param_1 = (long)plVar3;
  return param_1;
}

