
void FUN_100d6eb50(long param_1,int param_2)

{
  if ((param_2 == 0) && (0 < DAT_10230ffd0)) {
    FUN_100df99c0("","PrlPsConverter",1,
                  "[PrlPostscript] Failed to start ps converting util \'pstopdf\'.");
  }
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("","PrlPsConverter",1,
                  "[PrlPostscript] Converting ps to pdf finished with status:%d and code:%d.",1,
                  0xffffffff);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    return;
  }
  FUN_100d6fa30(param_1,0);
  return;
}

