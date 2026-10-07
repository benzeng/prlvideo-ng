
long FUN_1002c7da0(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  QArrayData *local_30;
  
  uVar1 = (**(code **)(*param_1 + 0x80))();
  lVar3 = 0;
  if (uVar1 != 0xffffffff) {
    lVar3 = param_1[(ulong)uVar1 + 0xc];
  }
  if ((2 < DAT_1011c568c) && (iVar2 = FUN_1008e38f0(&DAT_101116bb8), iVar2 != 0)) {
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"GetUsbDevByName path %s, dev %p",local_30 + *(long *)(local_30 + 0x10)
                  ,lVar3);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return lVar3;
        }
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  return lVar3;
}

