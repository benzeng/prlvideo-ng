
void FUN_10041f220(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  QArrayData *pQVar3;
  
  plVar2 = (long *)*param_2;
  if (plVar2 != param_2) {
    do {
      plVar1 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        pQVar3 = (QArrayData *)plVar2[2];
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_10041f278;
            pQVar3 = (QArrayData *)plVar2[2];
          }
          QArrayData::deallocate(pQVar3,1,8);
        }
LAB_10041f278:
        operator_delete(plVar2);
      }
      plVar2 = plVar1;
    } while (plVar1 != param_2);
    if (param_2 == (long *)0x0) {
      return;
    }
  }
  operator_delete(param_2);
  return;
}

