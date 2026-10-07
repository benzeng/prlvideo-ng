
void FUN_100025f10(undefined8 param_1,long *param_2,byte *param_3)

{
  long lVar1;
  
  QMutex::lock();
  lVar1 = DAT_1011cc808;
  if (DAT_1011cc808 != 0) {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    if ((*param_3 & 0x20) != 0) {
      if (*(int *)(*param_2 + 0x58) == 2) {
        *(undefined1 *)(*(long *)(lVar1 + 0x40) + 0x71) = 0;
      }
      else if (*(int *)(*param_2 + 0x58) == 1) {
        *(undefined1 *)(*(long *)(lVar1 + 0x40) + 0x71) = 1;
        FUN_100025640();
      }
    }
    FUN_100026030(&DAT_1011cc7f8);
    return;
  }
  QMutex::unlock();
  return;
}

