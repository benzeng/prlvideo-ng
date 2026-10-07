
void FUN_1000a04b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    if (*(long *)(lVar1 + 0x40) == 0) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vm",2,"Unable to set indents: no Desktop Utilities object");
      }
    }
    else {
      FUN_100024b20(*(long *)(lVar1 + 0x40),param_2,param_3);
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",2,"Unable to set indents: no Tool Dispatcher");
  }
  return;
}

