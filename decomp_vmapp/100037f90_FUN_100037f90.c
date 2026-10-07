
bool FUN_100037f90(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 local_50 [32];
  QArrayData *local_30;
  undefined1 local_21;
  
  QString::toUtf8();
  iVar1 = FUN_10078cca0(local_50,0x50);
  if (iVar1 == 0) {
    iVar1 = FUN_10078cd90(local_50,local_30 + *(long *)(local_30 + 0x10),
                          *(undefined4 *)(local_30 + 4),0x200a);
    bVar2 = iVar1 == 0;
    if (bVar2) {
      FUN_100038080(param_1,local_50,param_3);
    }
    FUN_10078cf00(local_50);
  }
  else {
    bVar2 = false;
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return bVar2;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return bVar2;
}

