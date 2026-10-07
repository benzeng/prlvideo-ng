
bool FUN_100106640(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if (*param_1 == *param_2) {
    bVar1 = param_1[1] != param_2[1];
  }
  return bVar1;
}

