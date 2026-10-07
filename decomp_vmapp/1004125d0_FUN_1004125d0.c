
void FUN_1004125d0(long param_1,int param_2)

{
  if ((param_2 == 0) && (0 < DAT_1011b55f8)) {
    FUN_1008e3970("","PrlPsConverter",1,
                  "[PrlPostscript] Failed to start ps converting util \'pstopdf\'.");
  }
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","PrlPsConverter",1,
                  "[PrlPostscript] Converting ps to pdf finished with status:%d and code:%d.",1,
                  0xffffffff);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    return;
  }
  FUN_1004134b0(param_1,0);
  return;
}

