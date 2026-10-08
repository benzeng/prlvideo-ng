
void FUN_1007d86b0(void)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  
  lVar1 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102208610);
  if (lVar1 == 0) {
    return;
  }
  if ((*(byte *)(lVar1 + 0xc0) & 1) != 0) {
    return;
  }
  pQVar2 = (QArrayData *)QString::fromAscii_helper("Started From Dock",0x11);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("New Wizard usage",0x10);
  FUN_1007d29c0();
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1007d875b;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1007d875b:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return;
      }
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

