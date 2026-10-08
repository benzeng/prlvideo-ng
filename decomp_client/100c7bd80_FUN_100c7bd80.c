
void FUN_100c7bd80(long *param_1,long param_2)

{
  if (*param_1 != 0) {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      FUN_100c266b0();
    }
    else {
      FUN_100c26640();
    }
    *param_1 = 0;
  }
  return;
}

