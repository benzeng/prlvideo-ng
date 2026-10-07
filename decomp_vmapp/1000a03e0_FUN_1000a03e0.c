
void FUN_1000a03e0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    if (*(long *)(lVar1 + 0x40) != 0) {
      FUN_100024ac0(*(long *)(lVar1 + 0x40),param_2 != 0,param_3,param_4,param_5,param_6,param_7);
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  return;
}

