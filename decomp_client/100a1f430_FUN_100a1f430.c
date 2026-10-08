
undefined8 * FUN_100a1f430(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *local_30;
  
  if (param_2 != 0) {
    FUN_100a1f530(param_2,param_3);
    iVar1 = QMetaMethod::methodIndex();
    if (iVar1 != -1) {
      QMetaMethod::methodSignature();
      lVar3 = 0;
      pQVar4 = local_30 + *(long *)(local_30 + 0x10);
      if ((pQVar4 != (QArrayData *)0x0) && (*(uint *)(local_30 + 4) != 0)) {
        lVar3 = 0;
        do {
          if (pQVar4[lVar3] == (QArrayData)0x0) break;
          lVar3 = lVar3 + 1;
        } while ((uint)lVar3 < *(uint *)(local_30 + 4));
      }
      uVar2 = QString::fromAscii_helper((char *)pQVar4,(int)lVar3);
      *param_1 = uVar2;
      if (*(int *)local_30 == -1) {
        return param_1;
      }
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return param_1;
        }
      }
      QArrayData::deallocate(local_30,1,8);
      return param_1;
    }
  }
  *param_1 = PTR_shared_null_1021e1288;
  return param_1;
}

