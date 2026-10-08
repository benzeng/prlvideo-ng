
void FUN_1002001c0(long param_1)

{
  char cVar1;
  
  cVar1 = FUN_100d9bbb0(param_1 + 0x48);
  if (cVar1 != '\0') {
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Warning: Failed to cleanup backup dir");
  return;
}

