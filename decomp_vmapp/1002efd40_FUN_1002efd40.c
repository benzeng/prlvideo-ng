
uint FUN_1002efd40(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  lVar2 = *param_1;
  uVar3 = 0xffff0004;
  if (((*(uint *)(lVar2 + 0xc) & 2) == 0) && (iVar4 = (int)param_1[1], iVar4 != 4)) {
    uVar3 = 0;
    if ((*(uint *)(lVar2 + 0xc) & 0xc) != 0) {
      uVar3 = *(uint *)(lVar2 + 0xc);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar2 + 0xc);
        bVar5 = uVar3 == uVar1;
        if (bVar5) {
          *(uint *)(lVar2 + 0xc) = uVar3 & 0xfffffff3;
          uVar1 = uVar3;
        }
        uVar3 = uVar1;
        UNLOCK();
      } while (!bVar5);
      uVar3 = uVar3 & 0xc;
      iVar4 = (int)param_1[1];
    }
    if (iVar4 == 1) {
      if ((uVar3 & 8) == 0) {
        if ((uVar3 & 4) != 0) {
          QMutex::lock();
          *(undefined4 *)(param_1 + 1) = 2;
          QWaitCondition::wakeAll();
          QMutex::unlock();
          return 0xffff0002;
        }
      }
      else {
        QMutex::lock();
        *(undefined4 *)(param_1 + 1) = 1;
        QWaitCondition::wakeAll();
        QMutex::unlock();
      }
      uVar3 = 0;
      if ((*(uint *)(lVar2 + 0xc) != 0) && (uVar3 = 1, (*(uint *)(lVar2 + 0xc) & 0x10) != 0)) {
        uVar3 = *(uint *)(lVar2 + 0xc);
        do {
          LOCK();
          uVar1 = *(uint *)(lVar2 + 0xc);
          bVar5 = uVar3 == uVar1;
          if (bVar5) {
            *(uint *)(lVar2 + 0xc) = uVar3 & 0xffffffef;
            uVar1 = uVar3;
          }
          uVar3 = uVar1;
          UNLOCK();
        } while (!bVar5);
        uVar3 = uVar3 >> 3 & 2 | 1;
      }
    }
    else if ((uVar3 & 8) == 0) {
      uVar3 = 0;
      if ((*(byte *)(lVar2 + 0xc) & 0x10) != 0) {
        uVar3 = *(uint *)(lVar2 + 0xc);
        do {
          LOCK();
          uVar1 = *(uint *)(lVar2 + 0xc);
          bVar5 = uVar3 == uVar1;
          if (bVar5) {
            *(uint *)(lVar2 + 0xc) = uVar3 & 0xffffffef;
            uVar1 = uVar3;
          }
          uVar3 = uVar1;
          UNLOCK();
        } while (!bVar5);
        uVar3 = (int)(uVar3 << 0x1b) >> 0x1f & 3;
      }
    }
    else {
      QMutex::lock();
      *(undefined4 *)(param_1 + 1) = 0;
      QWaitCondition::wakeAll();
      QMutex::unlock();
      uVar3 = 0xffff0003;
    }
  }
  return uVar3;
}

