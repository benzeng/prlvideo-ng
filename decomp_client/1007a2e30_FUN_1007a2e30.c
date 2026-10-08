
void FUN_1007a2e30(undefined8 param_1,int param_2)

{
  if ((param_2 + 0xcffffffeU < 0xf) && ((0x4c33U >> (param_2 + 0xcffffffeU & 0x1f) & 1) != 0)) {
    FUN_1007a2e60(param_1,1);
    return;
  }
  FUN_1007a2e60(param_1,0);
  return;
}

