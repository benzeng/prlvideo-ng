
void FUN_1003046c0(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined8 in_RAX;
  undefined8 uStack_38;
  
  if (0 < param_2) {
    uStack_38 = in_RAX;
    do {
      (*(code *)DAT_1011c4a88[0x27b])(*DAT_1011c4a88,1,(long)&uStack_38 + 4);
      FUN_1003061a0(param_1,uStack_38._4_4_,uStack_38._4_4_);
      *param_3 = uStack_38._4_4_;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

