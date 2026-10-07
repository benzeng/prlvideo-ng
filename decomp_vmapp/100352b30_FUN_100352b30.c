
void FUN_100352b30(long param_1)

{
  if (*(uint *)(param_1 + 0x100) < 0xffff0200) {
    FUN_1003526a0();
  }
  else if (*(uint *)(param_1 + 0x100) < 0xffff0300) {
    FUN_100351f20();
  }
  else {
    FUN_1003523a0();
  }
  FUN_10039fb50(param_1);
  return;
}

