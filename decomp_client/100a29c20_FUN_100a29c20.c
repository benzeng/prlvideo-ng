
void FUN_100a29c20(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  QArrayData *pQVar6;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar1 = *(long *)(param_1 + 0x70);
    plVar2 = *(long **)(param_1 + 0x78);
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    *(undefined8 *)(param_1 + 0x80) = 0;
    while (plVar2 != (long *)(param_1 + 0x70)) {
      plVar4 = (long *)plVar2[1];
      std::string::~string((string *)(plVar2 + 2));
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  pQVar6 = *(QArrayData **)(param_1 + 0x60);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_100a29cbf;
      pQVar6 = *(QArrayData **)(param_1 + 0x60);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100a29cbf:
  std::string::~string((string *)(param_1 + 0x38));
  pvVar5 = *(void **)(param_1 + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(void **)(param_1 + 0x20) != pvVar5) {
      *(void **)(param_1 + 0x20) = pvVar5;
    }
    operator_delete(pvVar5);
  }
  if (*(long *)(param_1 + 8) != 0) {
    _PrlHandle_Free();
  }
  return;
}

