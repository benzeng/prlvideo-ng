
void FUN_100d6ead0(long param_1,int param_2,int param_3)

{
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("","PrlPsConverter",1,
                  "[PrlPostscript] Converting ps to pdf finished with status:%d and code:%d.",
                  param_3,param_2);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    return;
  }
  FUN_100d6fa30(param_1,param_3 == 0 && param_2 == 0);
  return;
}

