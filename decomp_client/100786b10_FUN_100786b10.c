
void FUN_100786b10(long param_1)

{
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  QArrayData *local_30;
  
  QMetaMethod::methodSignature();
  lVar2 = 0;
  pQVar3 = local_30 + *(long *)(local_30 + 0x10);
  if ((pQVar3 != (QArrayData *)0x0) && (*(uint *)(local_30 + 4) != 0)) {
    lVar2 = 0;
    do {
      if (pQVar3[lVar2] == (QArrayData)0x0) break;
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(local_30 + 4));
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper((char *)pQVar3,(int)lVar2);
  iVar1 = QString::compare_helper
                    (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                     "valueChanged(QVariant)",0xffffffff,1);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100786bb4;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100786bb4:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100786be4;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100786be4:
  if ((iVar1 == 0) && (*(char *)(*(long *)(param_1 + 0x10) + 0x48) != '\x01')) {
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x48) = 1;
    FUN_10085eb00(param_1,1);
  }
  return;
}

