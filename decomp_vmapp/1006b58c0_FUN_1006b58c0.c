
char * FUN_1006b58c0(char *param_1,byte *param_2)

{
  *(undefined **)param_1 = PTR_shared_null_100ba20d0;
  QString::sprintf(param_1,"%02X:%02X:%02X:%02X:%02X:%02X",(ulong)*param_2,(ulong)param_2[1],
                   (ulong)param_2[2],(ulong)param_2[3],(uint)param_2[4],(uint)param_2[5]);
  return param_1;
}

