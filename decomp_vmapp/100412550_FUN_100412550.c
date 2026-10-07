
void FUN_100412550(long param_1,int param_2,int param_3)

{
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","PrlPsConverter",1,
                  "[PrlPostscript] Converting ps to pdf finished with status:%d and code:%d.",
                  param_3,param_2);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    return;
  }
  FUN_1004134b0(param_1,param_3 == 0 && param_2 == 0);
  return;
}

