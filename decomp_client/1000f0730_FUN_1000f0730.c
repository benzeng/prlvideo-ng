
void FUN_1000f0730(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  QFutureInterfaceBase *pQVar6;
  QFutureInterfaceBase local_40 [8];
  long local_38;
  undefined1 local_2c [4];
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = _LSSharedFileListCopySnapshot(*(long *)(param_1 + 0x20),local_2c);
    if (lVar3 != 0) {
      lVar4 = _CFArrayGetCount(lVar3);
      if (lVar4 != 0) {
        uVar5 = _CFArrayGetValueAtIndex(lVar3,0);
        iVar2 = _LSSharedFileListItemGetID(uVar5);
        if ((param_2 != '\0') || (*(int *)(param_1 + 0x28) != iVar2)) {
          *(int *)(param_1 + 0x28) = iVar2;
          pQVar6 = operator_new(0x40);
          QFutureInterfaceBase::QFutureInterfaceBase(pQVar6,0);
          *(undefined ***)pQVar6 = &PTR_FUN_10226d138;
          QFutureInterfaceBase::refT();
          *(undefined4 *)(pQVar6 + 0x18) = 0;
          *(undefined **)(pQVar6 + 0x20) = PTR_shared_null_1021e15e8;
          *(undefined ***)pQVar6 = &PTR_FUN_10226d178;
          *(undefined ***)(pQVar6 + 0x10) = &PTR_FUN_10226d1a8;
          *(code **)(pQVar6 + 0x28) = FUN_1000f08f0;
          *(long *)(pQVar6 + 0x30) = lVar3;
          _CFRetain(lVar3);
          *(long *)(pQVar6 + 0x38) = lVar4;
          uVar5 = QThreadPool::globalInstance();
          FUN_1000f1340(local_40,pQVar6,uVar5);
          if (local_38 != *(long *)(param_1 + 0x50)) {
            QFutureWatcherBase::disconnectOutputInterface((bool)((char)param_1 + '8'));
            QFutureInterfaceBase::refT();
            cVar1 = QFutureInterfaceBase::derefT();
            if (cVar1 == '\0') {
              uVar5 = QFutureInterfaceBase::resultStoreBase();
              FUN_1000f03c0(uVar5);
            }
            QFutureInterfaceBase::operator=((QFutureInterfaceBase *)(param_1 + 0x48),local_40);
            QFutureWatcherBase::connectOutputInterface();
          }
          FUN_1000f0360(local_40);
        }
      }
      _CFRelease(lVar3);
    }
  }
  return;
}

