
bool FUN_1005031a0(long param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = param_2 <= *(uint *)(param_1 + 0x50);
  if (bVar1) {
    QByteArray::resize((int)param_1 + 0x58);
  }
  return bVar1;
}

