
long * FUN_100ab4b60(long *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  *param_1 = (long)param_6 +
             (long)param_5 * 1000 +
             (long)param_4 * 60000 + (long)param_3 * 3600000 + (long)param_2 * 86400000;
  return param_1;
}

