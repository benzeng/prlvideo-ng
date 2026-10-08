
void FUN_1006fadf0(long param_1,uint param_2,byte param_3)

{
  if ((param_3 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      return;
    }
  }
  else if ((param_2 & 1) != 0) {
    return;
  }
  FUN_100720b50(param_1 + 0x48);
  return;
}

