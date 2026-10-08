
void FUN_10035f790(long param_1,undefined8 param_2,QByteArray *param_3)

{
  uint *puVar1;
  
  if (2 < DAT_10230ffd0) {
    puVar1 = *(uint **)param_3;
    if ((1 < *puVar1) || (*(long *)(puVar1 + 4) != 0x18)) {
      QByteArray::reallocData(param_3,puVar1[1] + 1,puVar1[2] >> 0x1f);
      puVar1 = *(uint **)param_3;
    }
    FUN_100df99c0("[CURSOR_CTL]","prl_client_app",3,"Cursor data received = %p",
                  (long)puVar1 + *(long *)(puVar1 + 4));
  }
  puVar1 = *(uint **)param_3;
  if ((1 < *puVar1) || (*(long *)(puVar1 + 4) != 0x18)) {
    QByteArray::reallocData(param_3,puVar1[1] + 1,puVar1[2] >> 0x1f);
    puVar1 = *(uint **)param_3;
  }
  if ((long)puVar1 + *(long *)(puVar1 + 4) != 0) {
    QByteArray::operator=((QByteArray *)(param_1 + 0x40),param_3);
    FUN_10035f660(param_1);
    return;
  }
  return;
}

