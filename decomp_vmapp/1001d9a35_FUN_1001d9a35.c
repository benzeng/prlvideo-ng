
void FUN_1001d9a35(FILE *param_1,int *param_2)

{
  int local_c;
  
  _fwrite(" state: ",1,8,param_1);
  if (param_2 == (int *)0x0) {
    _fwrite("NULL\n",1,5,param_1);
  }
  else {
    if (*param_2 == 1) {
      _fwrite("START ",1,6,param_1);
    }
    if (*param_2 == 2) {
      _fwrite("FINAL ",1,6,param_1);
    }
    _fprintf(param_1,"%d, %d transitions:\n",(ulong)(uint)param_2[3],(ulong)(uint)param_2[5]);
    for (local_c = 0; local_c < param_2[5]; local_c = local_c + 1) {
      FUN_1001d98c4(param_1,*(long *)(param_2 + 6) + (long)local_c * 0x18);
    }
  }
  return;
}

