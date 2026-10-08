
void FUN_10039ce10(undefined8 *param_1,QImage *param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  QImage *this;
  
  this = operator_new(0x38);
  QImage::QImage(this,param_2);
  piVar1 = *(int **)(param_2 + 0x20);
  *(int **)(this + 0x20) = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(this + 0x20));
      lVar2 = *(long *)(this + 0x20);
      FUN_10039d130(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                    lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,
                    *(long *)(param_2 + 0x20) + 0x10 +
                    (long)*(int *)(*(long *)(param_2 + 0x20) + 8) * 8);
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0x28) = uVar3;
  *param_1 = this;
  return;
}

