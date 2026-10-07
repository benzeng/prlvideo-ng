
undefined1 FUN_10002d640(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("PTIAHOST","vm",2,"RunApplicationPackage (packageId = %d; cmd = %d)",param_2,
                  param_3);
  }
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 == 0) {
    QMutex::unlock();
    uVar2 = 0;
  }
  else {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    local_30 = 0;
    local_38 = 0;
    local_40 = param_2;
    local_3c = param_3;
    if (*(long *)(lVar1 + 0x20) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1004c2f50(*(long *)(lVar1 + 0x20),0x1a,&local_40,0x18,1,0);
    }
    FUN_100026030(&DAT_1011cc7f8);
  }
  return uVar2;
}

