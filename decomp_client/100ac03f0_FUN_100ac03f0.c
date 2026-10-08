
void FUN_100ac03f0(long param_1,int *param_2)

{
  char cVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  cVar1 = FUN_100abace0(param_1 + 0x10,&local_20);
  if (cVar1 != '\0') {
    *param_2 = local_20;
    param_2[1] = local_1c;
    param_2[2] = local_20 + -1 + local_18;
    param_2[3] = local_1c + -1 + local_14;
  }
  return;
}

