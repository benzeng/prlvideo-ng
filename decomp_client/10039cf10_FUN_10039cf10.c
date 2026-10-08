
void FUN_10039cf10(long param_1,long param_2,long param_3)

{
  QImage *pQVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  QImage *this;
  long lVar5;
  
  if (param_1 - param_2 != 0) {
    lVar5 = 0;
    do {
      this = operator_new(0x38);
      pQVar1 = *(QImage **)(param_3 + lVar5);
      QImage::QImage(this,pQVar1);
      piVar2 = *(int **)(pQVar1 + 0x20);
      *(int **)(this + 0x20) = piVar2;
      if (*piVar2 != -1) {
        if (*piVar2 == 0) {
          QListData::detach((int)this + 0x20);
          lVar3 = *(long *)(this + 0x20);
          FUN_10039d130(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8,
                        lVar3 + 0x10 + (long)*(int *)(lVar3 + 0xc) * 8,
                        *(long *)(pQVar1 + 0x20) + 0x10 +
                        (long)*(int *)(*(long *)(pQVar1 + 0x20) + 8) * 8);
        }
        else {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
      }
      uVar4 = *(undefined8 *)(pQVar1 + 0x28);
      *(undefined8 *)(this + 0x30) = *(undefined8 *)(pQVar1 + 0x30);
      *(undefined8 *)(this + 0x28) = uVar4;
      *(QImage **)(param_1 + lVar5) = this;
      lVar5 = lVar5 + 8;
    } while ((param_1 - param_2) + lVar5 != 0);
  }
  return;
}

