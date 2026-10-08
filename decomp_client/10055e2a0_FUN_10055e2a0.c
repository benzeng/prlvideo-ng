
void FUN_10055e2a0(long param_1)

{
  QString *pQVar1;
  undefined4 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x20);
  uVar2 = FUN_10055e350();
  FUN_10055e850(&local_28,uVar2);
  QLabel::setText(pQVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

