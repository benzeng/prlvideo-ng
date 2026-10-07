
void FUN_1002d5f00(long *param_1)

{
  void *pvVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  QArrayData *pQVar5;
  
  lVar3 = 0xff;
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] dev destroy %p",param_1 + 0x107,param_1);
    lVar3 = 0xff;
  }
  do {
    pvVar1 = (void *)param_1[lVar3 + 7];
    if (pvVar1 != (void *)0x0) {
      FUN_1002d7cd0(pvVar1);
      operator_delete(pvVar1);
      param_1[lVar3 + 7] = 0;
    }
    lVar4 = lVar3 + -1;
    bVar2 = 0 < lVar3;
    lVar3 = lVar4;
  } while (lVar4 != 0 && bVar2);
  FUN_1002d5dc0(param_1);
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x20))();
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 0x10))();
    }
    *param_1 = 0;
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  pQVar5 = (QArrayData *)param_1[4];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) {
        return;
      }
      pQVar5 = (QArrayData *)param_1[4];
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
  return;
}

