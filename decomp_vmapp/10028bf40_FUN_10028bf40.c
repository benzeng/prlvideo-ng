
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10028bf40(void)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_1011b8bdc = DAT_1011b8cd4;
  _DAT_1011b8bd4 = DAT_1011b8ccc;
  _DAT_1011b8bcc = DAT_1011b8cc4;
  _DAT_1011b8bc4 = DAT_1011b8cbc;
  _DAT_1011b8bec = DAT_1011b8ce4;
  _DAT_1011b8be4 = DAT_1011b8cdc;
  _DAT_1011b8bfc = DAT_1011b8cf4;
  _DAT_1011b8bf4 = DAT_1011b8cec;
  _DAT_1011b8c08 = DAT_1011b8d00;
  _DAT_1011b8c00 = DAT_1011b8cf8;
  _memcpy(&DAT_1011b8c0c,&DAT_1011b8d04,0x4c);
  _DAT_1011b8c60 = DAT_1011b8d58;
  _DAT_1011b8c58 = DAT_1011b8d50;
  _DAT_1011c3dd8 = DAT_1011b8d64;
  _DAT_1011c3dd0 = DAT_1011b8d5c;
  puVar2 = &DAT_1011b8c64;
  puVar3 = &DAT_1011c3de0;
  for (lVar1 = 0x13; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (ulong)bVar4 * -2 + 1;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  _DAT_1011b8cb8 = DAT_1011b8d74;
  _DAT_1011b8cb0 = DAT_1011b8d6c;
  return;
}

