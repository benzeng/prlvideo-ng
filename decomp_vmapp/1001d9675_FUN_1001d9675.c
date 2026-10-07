
void FUN_1001d9675(FILE *param_1,int *param_2)

{
  _fwrite("  range: ",1,9,param_1);
  if (*param_2 != 0) {
    _fwrite("negative ",1,9,param_1);
  }
  FUN_1001d8db4(param_1,param_2[1]);
  _fprintf(param_1,"%c - %c\n",(ulong)(uint)param_2[2],(ulong)(uint)param_2[3]);
  return;
}

