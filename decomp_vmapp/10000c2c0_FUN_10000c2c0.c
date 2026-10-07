
void FUN_10000c2c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  QArrayData *local_58;
  string local_50 [31];
  undefined1 local_31;
  
  FUN_10000c730(param_1 + 0x40);
  lVar1 = param_1 + 0x10;
  FUN_10049d500(lVar1);
  lVar2 = *(long *)(param_1 + 8);
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 != lVar2 + 8) {
      do {
        QString::toUtf8();
        lVar3 = *(long *)(local_58 + 0x10);
        _strlen((char *)(local_58 + lVar3));
        std::string::__init((char *)local_50,(ulong)(local_58 + lVar3));
        FUN_10049d590(lVar1,local_50,*(undefined4 *)(lVar4 + 0x20),0);
        std::string::~string(local_50);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10000c384;
          }
          QArrayData::deallocate(local_58,1,8);
        }
LAB_10000c384:
        lVar4 = QMapNodeBase::nextNode();
      } while (lVar4 != lVar2 + 8);
    }
  }
  FUN_10049ded0(lVar1);
  return;
}

