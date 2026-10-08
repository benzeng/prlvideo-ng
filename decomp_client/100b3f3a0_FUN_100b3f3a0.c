
char * FUN_100b3f3a0(char *param_1,byte *param_2)

{
  *(undefined **)param_1 = PTR_shared_null_1021e1288;
  QString::sprintf(param_1,"%02X:%02X:%02X:%02X:%02X:%02X",(ulong)*param_2,(ulong)param_2[1],
                   (ulong)param_2[2],(ulong)param_2[3],(uint)param_2[4],(uint)param_2[5]);
  return param_1;
}

