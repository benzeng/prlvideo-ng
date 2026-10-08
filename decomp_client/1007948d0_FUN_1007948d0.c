
bool FUN_1007948d0(void)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_20;
  undefined1 local_11;
  
  uVar2 = QGuiApplication::clipboard();
  QClipboard::text(&local_20,uVar2,0);
  iVar1 = *(int *)(local_20 + 4);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) goto LAB_10079491f;
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_10079491f:
  return iVar1 != 0;
}

