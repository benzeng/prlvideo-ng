
undefined8 FUN_1004db960(int param_1,int param_2,ulong *param_3)

{
  QByteArray::resize(param_1 + 0x40);
  *param_3 = (ulong)(param_2 + 0x1ffU & 0xfffffe00);
  return 0;
}

