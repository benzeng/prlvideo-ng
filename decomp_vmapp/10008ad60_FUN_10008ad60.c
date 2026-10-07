
void FUN_10008ad60(long param_1)

{
  void *pvVar1;
  char cVar2;
  QArrayData *pQVar3;
  
  if (DAT_1011c3688 == param_1) {
    DAT_1011c3688 = 0;
  }
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    cVar2 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
    if (cVar2 != '\0') {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x20))
                (*(long **)(param_1 + 0x60),*(undefined1 *)(param_1 + 0xd8));
    }
    if (*(long **)(param_1 + 0x60) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x60) + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  pvVar1 = *(void **)(param_1 + 0xe0);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)(param_1 + 0xe8) != pvVar1) {
      *(void **)(param_1 + 0xe8) = pvVar1;
    }
    operator_delete(pvVar1);
  }
  pQVar3 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10008ae17;
      pQVar3 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar3,1,8);
  }
LAB_10008ae17:
  pQVar3 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar3,1,8);
  }
  return;
}

