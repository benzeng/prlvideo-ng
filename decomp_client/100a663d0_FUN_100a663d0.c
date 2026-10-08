
void FUN_100a663d0(long param_1,int param_2)

{
  if ((param_2 == 0x30000005) == (bool)*(char *)(param_1 + 0x29)) {
    return;
  }
  *(bool *)(param_1 + 0x29) = param_2 == 0x30000005;
  if (((*(char *)(param_1 + 0x28) != '\0') && (param_2 != 0x30000005)) &&
     (*(char *)(param_1 + 0x2a) != '\0')) {
    FUN_100a65d30(param_1 + 0x48);
    return;
  }
  FUN_100a65d50(param_1 + 0x48);
  return;
}

