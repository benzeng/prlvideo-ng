
void FUN_10018c7e0(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0xb0) == param_2) {
    return;
  }
  *(char *)(param_1 + 0xb0) = param_2;
  FUN_100df99c0("","prl_client_app",0,"m_bIsMemorySwappingOn = %d");
  if (*(char *)(param_1 + 0xb0) != '\0') {
    FUN_1008055e0(param_1);
    return;
  }
  FUN_100805600(param_1);
  return;
}

