
void FUN_1000b52b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  QArrayData *pQVar3;
  
  lVar1 = param_1[1];
LAB_1000b52d0:
  do {
    lVar2 = param_1[2];
    if (lVar2 == lVar1) {
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
      }
      return;
    }
    param_1[2] = (undefined8 *)(lVar2 + -8);
    pQVar3 = *(QArrayData **)(lVar2 + -8);
  } while (*(int *)pQVar3 == -1);
  if (*(int *)pQVar3 != 0) goto code_r0x0001000b52f0;
  goto LAB_1000b5301;
code_r0x0001000b52f0:
  LOCK();
  *(int *)pQVar3 = *(int *)pQVar3 + -1;
  UNLOCK();
  if (*(int *)pQVar3 == 0) {
    pQVar3 = *(QArrayData **)(lVar2 + -8);
LAB_1000b5301:
    QArrayData::deallocate(pQVar3,2,8);
  }
  goto LAB_1000b52d0;
}

