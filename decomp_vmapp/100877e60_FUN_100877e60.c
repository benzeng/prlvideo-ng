
void FUN_100877e60(void *param_1)

{
  if (*(long *)((long)param_1 + 8) != 0) {
    FUN_10087a5e0();
  }
  FUN_10081fa50(0xd,param_1,(long)param_1 + 0x20);
  _OPENSSL_cleanse(param_1,0x30);
  FUN_10081e1a0(param_1);
  return;
}

