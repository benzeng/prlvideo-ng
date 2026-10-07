
void FUN_100465a50(long param_1,int param_2)

{
  QByteArray::resize((int)param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 4) = (param_2 == 0) + 1;
  return;
}

