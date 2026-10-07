
undefined1 FUN_100026bb0(void)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 local_20 [2];
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 == 0) {
    QMutex::unlock();
    uVar3 = 0;
  }
  else {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    lVar1 = *(long *)(lVar1 + 0x20);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      local_20[0] = 1;
      cVar2 = FUN_1004c2f50(lVar1,0,local_20,4,1,0);
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_1004c2f50(lVar1,0x17,local_20,4,1,0);
      }
    }
    FUN_100026030(&DAT_1011cc7f8);
  }
  return uVar3;
}

