
int FUN_100697060(long *param_1,int param_2,char *param_3)

{
  if (-1 < param_2) {
    param_2 = FUN_1006970e0(param_1);
    if (-1 < param_2) {
      (**(code **)(*param_1 + 0x188))(param_1,param_1[7] * param_1[4]);
      return 0;
    }
    param_3 = "Fill disk parameters failed";
  }
  FUN_1008e3970("","dimg",0,"%s: 0x%x",param_3,param_2);
  (**(code **)(*param_1 + 0x28))(param_1);
  return param_2;
}

