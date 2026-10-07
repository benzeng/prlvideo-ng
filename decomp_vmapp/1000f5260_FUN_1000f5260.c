
void FUN_1000f5260(void)

{
  undefined8 *puVar1;
  QMapNodeBase *pQVar2;
  
  puVar1 = DAT_1011b75a0;
  if (DAT_1011b75a0 == (undefined8 *)0x0) {
    DAT_1011b7598 = 0xfffffffe;
    return;
  }
  pQVar2 = (QMapNodeBase *)*DAT_1011b75a0;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1000f52bf;
      pQVar2 = (QMapNodeBase *)*puVar1;
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_1000f5610();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_1000f52bf:
  operator_delete(puVar1);
  DAT_1011b7598 = 0xfffffffe;
  return;
}

