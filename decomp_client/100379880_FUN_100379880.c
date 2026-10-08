
void FUN_100379880(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  *(undefined1 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x4c) = 0xffffffff;
  QByteArray::clear();
  return;
}

