
undefined8 * FUN_100226f20(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *pQVar3;
  QArrayData *local_20;
  
  QMetaMethod::methodSignature();
  lVar2 = 0;
  pQVar3 = local_20 + *(long *)(local_20 + 0x10);
  if ((pQVar3 != (QArrayData *)0x0) && (*(uint *)(local_20 + 4) != 0)) {
    lVar2 = 0;
    do {
      if (pQVar3[lVar2] == (QArrayData)0x0) break;
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(local_20 + 4));
  }
  uVar1 = QString::fromAscii_helper((char *)pQVar3,(int)lVar2);
  *param_1 = uVar1;
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return param_1;
}

