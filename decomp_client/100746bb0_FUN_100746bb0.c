
void FUN_100746bb0(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined1 *)(lVar1 + 0x28) = *param_2;
  QString::operator=((QString *)(lVar1 + 0x30),(QString *)(param_2 + 8));
  QString::operator=((QString *)(lVar1 + 0x38),(QString *)(param_2 + 0x10));
  QString::operator=((QString *)(lVar1 + 0x40),(QString *)(param_2 + 0x18));
  QString::operator=((QString *)(lVar1 + 0x48),(QString *)(param_2 + 0x20));
  QString::operator=((QString *)(lVar1 + 0x50),(QString *)(param_2 + 0x28));
  QString::operator=((QString *)(lVar1 + 0x58),(QString *)(param_2 + 0x30));
  *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(param_2 + 0x38);
  return;
}

