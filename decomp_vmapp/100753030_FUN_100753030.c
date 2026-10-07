
void FUN_100753030(long param_1,int param_2)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 8) != param_2)) {
    FUN_1000f9130(*(long *)(param_1 + 0x10),param_2);
    *(int *)(param_1 + 8) = param_2;
  }
  return;
}

