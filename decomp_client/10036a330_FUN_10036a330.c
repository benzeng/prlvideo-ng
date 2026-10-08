
void FUN_10036a330(long param_1,char param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x8c) == param_2) {
    return;
  }
  *(char *)(lVar1 + 0x8c) = param_2;
  if (param_2 == '\0') {
    FUN_100369db0();
  }
  else {
    FUN_100369150(lVar1,1,1);
  }
  FUN_100832c70(param_1,param_2);
  return;
}

