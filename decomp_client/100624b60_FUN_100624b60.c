
bool FUN_100624b60(void)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  QArrayData *local_38;
  undefined1 local_30 [31];
  undefined1 local_11;
  
  QString::trimmed();
  FUN_100b5f7a0(local_30,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100624bb7;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100624bb7:
  iVar1 = FUN_100b5ff90(local_30);
  if (iVar1 == 1) {
    uVar2 = FUN_100b5ffd0(local_30);
    iVar1 = FUN_100b7e260(uVar2);
    bVar3 = iVar1 != -0x7ffef000;
  }
  else {
    bVar3 = false;
  }
  FUN_100b5ff80(local_30);
  return bVar3;
}

