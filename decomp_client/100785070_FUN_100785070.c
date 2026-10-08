
void FUN_100785070(long param_1,char *param_2)

{
  if (*param_2 == *(char *)(*(long *)(param_1 + 0x10) + 0x20)) {
    return;
  }
  *(char *)(*(long *)(param_1 + 0x10) + 0x20) = *param_2;
  FUN_10085e4e0(param_1,*param_2);
  return;
}

