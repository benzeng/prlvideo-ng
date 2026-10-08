
void FUN_100b7c880(uint *param_1,uint param_2)

{
  if ((param_2 < 0x10) && (3 < param_2 - 0xb)) {
    *param_1 = param_2;
    return;
  }
  *param_1 = 0xffffffff;
  return;
}

