
void FUN_100107a70(long param_1)

{
  QArrayData *local_20;
  
  if (DAT_101116b58 == 1) {
    FUN_1000915f0(DAT_1011c3698);
    QString::toUtf8();
    FUN_1002bacc0(0,7,local_20 + *(long *)(local_20 + 0x10));
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) goto LAB_100107ae8;
      }
      QArrayData::deallocate(local_20,1,8);
    }
  }
LAB_100107ae8:
  *(undefined1 *)(param_1 + 0x15) = 1;
  return;
}

