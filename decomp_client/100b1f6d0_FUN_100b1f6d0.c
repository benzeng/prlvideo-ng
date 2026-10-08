
int FUN_100b1f6d0(long *param_1,int param_2,char *param_3)

{
  if (-1 < param_2) {
    param_2 = FUN_100b1f750(param_1);
    if (-1 < param_2) {
      (**(code **)(*param_1 + 0x188))(param_1,param_1[7] * param_1[4]);
      return 0;
    }
    param_3 = "Fill disk parameters failed";
  }
  FUN_100df99c0("","dimg",0,"%s: 0x%x",param_3,param_2);
  (**(code **)(*param_1 + 0x28))(param_1);
  return param_2;
}

