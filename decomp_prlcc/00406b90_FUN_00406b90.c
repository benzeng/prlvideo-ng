
void FUN_00406b90(long *param_1,int *param_2)

{
  if ((*(long *)(param_2 + 8) ==
       *(long *)((long)*(int *)(*param_1 + 0xe0) * 0x80 + 0x10 + *(long *)(*param_1 + 0xe8))) &&
     (*param_2 == 0x16)) {
    if ((0 < param_2[0xe]) && (0 < param_2[0xf])) {
      FUN_00405ce0(param_1,param_2[0xe]);
      return;
    }
  }
  return;
}

