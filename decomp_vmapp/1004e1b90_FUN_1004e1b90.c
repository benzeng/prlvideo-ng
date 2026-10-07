
long * FUN_1004e1b90(long *param_1,long param_2,QString *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  iVar2 = qHash(param_3,0);
  uVar5 = param_2 + 0x38;
  if ((uVar5 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar5 = uVar5 | 1;
  }
  lVar3 = *(long *)(param_2 + 0x40);
  if (*(long *)(lVar3 + 0x10) != 0) {
    lVar4 = *(long *)(lVar3 + 0x20);
    while (lVar4 != lVar3 + 8) {
      if ((*(int *)(*(long *)(lVar4 + 0x20) + 0x40) == iVar2) &&
         (cVar1 = operator==((QString *)(*(long *)(lVar4 + 0x20) + 0x30),param_3), cVar1 != '\0')) {
        lVar3 = *(long *)(lVar4 + 0x20);
        *param_1 = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        goto LAB_1004e1c4c;
      }
      lVar4 = QMapNodeBase::nextNode();
      lVar3 = *(long *)(param_2 + 0x40);
    }
  }
  *param_1 = 0;
LAB_1004e1c4c:
  if ((uVar5 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return param_1;
}

