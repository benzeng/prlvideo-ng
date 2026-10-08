
void FUN_10090d1ec(FILE *param_1,long *param_2)

{
  _fwrite("  trans: ",1,9,param_1);
  if (param_2 == (long *)0x0) {
    _fwrite("NULL\n",1,5,param_1);
  }
  else if ((int)param_2[1] < 0) {
    _fwrite("removed\n",1,8,param_1);
  }
  else {
    if (-1 < *(int *)((long)param_2 + 0xc)) {
      _fprintf(param_1,"counted %d, ",(ulong)*(uint *)((long)param_2 + 0xc));
    }
    if ((int)param_2[2] == 0x123456) {
      _fwrite("all transition, ",1,0x10,param_1);
    }
    else if (-1 < (int)param_2[2]) {
      _fprintf(param_1,"count based %d, ",(ulong)*(uint *)(param_2 + 2));
    }
    if (*param_2 == 0) {
      _fprintf(param_1,"epsilon to %d\n",(ulong)*(uint *)(param_2 + 1));
    }
    else {
      if (*(int *)(*param_2 + 4) == 2) {
        _fprintf(param_1,"char %c ",(ulong)*(uint *)(*param_2 + 0x2c));
      }
      _fprintf(param_1,"atom %d, to %d\n",(ulong)*(uint *)*param_2,(ulong)*(uint *)(param_2 + 1));
    }
  }
  return;
}

