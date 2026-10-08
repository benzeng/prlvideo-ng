
void FUN_100292ff0(long *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  QImage *pQVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  QImage local_48 [32];
  
  lVar4 = QObject::sender();
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = ___dynamic_cast(lVar4,PTR_typeinfo_1021e1720,&DAT_102272640,0);
  }
  QFutureInterfaceBase::waitForResult(iVar3 + 0x10);
  lVar4 = QFutureInterfaceBase::mutex();
  if (lVar4 != 0) {
    QMutex::lock();
  }
  iVar3 = QFutureInterfaceBase::resultStoreBase();
  auVar7 = QtPrivate::ResultStoreBase::resultAt(iVar3);
  pQVar5 = *(QImage **)(auVar7._0_8_ + 0x28);
  if (*(int *)(auVar7._0_8_ + 0x20) != 0) {
    pQVar5 = (QImage *)
             ((long)auVar7._8_4_ * 0x20 + *(long *)pQVar5 + *(long *)(*(long *)pQVar5 + 0x10));
  }
  if (lVar4 != 0) {
    QMutex::unlock();
  }
  QImage::QImage(local_48,pQVar5);
  QImage::operator=((QImage *)(param_1 + 0xe),local_48);
  QImage::~QImage(local_48);
  pcVar1 = *(code **)(*param_1 + 0xb0);
  cVar2 = QImage::isNull();
  uVar6 = 0x80000009;
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
  (*pcVar1)(param_1,uVar6);
  return;
}

