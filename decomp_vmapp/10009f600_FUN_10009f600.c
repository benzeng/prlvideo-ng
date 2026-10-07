
undefined8 FUN_10009f600(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  CVmTools local_188 [360];
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
  }
  QMutex::unlock();
  CVmTools::CVmTools(local_188);
  FUN_100080150(local_188,param_2);
  if (lVar1 != 0) {
    FUN_1004c0550(lVar1,local_188);
  }
  CVmTools::~CVmTools(local_188);
  if (lVar1 != 0) {
    FUN_100026030(&DAT_1011cc7f8);
  }
  return 0;
}

