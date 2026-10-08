
void FUN_1004e68c0(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_100524aa0(param_1 + 0x40);
  if ((param_2 < 0) || (iVar1 <= param_2)) {
    FUN_1004e61b0(param_1);
    return;
  }
  if (((*(long *)(param_1 + 0x88) != 0) && (*(int *)(*(long *)(param_1 + 0x88) + 4) != 0)) &&
     (*(long *)(param_1 + 0x90) != 0)) {
    FUN_10006f080(*(long *)(param_1 + 0x90),param_2);
    return;
  }
  return;
}

