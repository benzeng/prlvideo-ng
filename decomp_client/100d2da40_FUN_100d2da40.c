
undefined8 * FUN_100d2da40(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  QArrayData *pQVar6;
  QDomNode local_38 [15];
  undefined1 local_29;
  
  puVar1 = operator_new(0x10);
  FUN_100d272e0(local_38,param_2 + 0x10);
  plVar5 = (long *)0x0;
  if (*(long *)(param_2 + 8) != 0) {
    plVar5 = *(long **)(*(long *)(param_2 + 8) + 0x10);
  }
  uVar2 = (**(code **)(*plVar5 + 0x10))();
  pvVar3 = (void *)FUN_100d27530(local_38,uVar2);
  *puVar1 = &PTR_FUN_10230f898;
  puVar1[1] = pvVar3;
  puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
    puVar4[2] = puVar1;
    *puVar4 = &PTR_FUN_10230f8f8;
    goto LAB_100d2db1b;
  }
  *puVar1 = &PTR_FUN_10230f898;
  if (pvVar3 != (void *)0x0) {
    pQVar6 = *(QArrayData **)((long)pvVar3 + 8);
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_29 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d2db09;
        pQVar6 = *(QArrayData **)((long)pvVar3 + 8);
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_100d2db09:
    operator_delete(pvVar3);
  }
  operator_delete(puVar1);
  puVar4 = (undefined8 *)0x0;
LAB_100d2db1b:
  *param_1 = puVar4;
  QDomNode::~QDomNode(local_38);
  return param_1;
}

