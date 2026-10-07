
bool FUN_100528de0(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((*(int *)(*(long *)(param_1 + 0x838) + 0x14) == 0) &&
       (*(int *)(*(long *)(param_1 + 0x830) + 0x14) == 0)) &&
      (*(int *)(*(long *)(param_1 + 0x828) + 0x14) == 0)) && (*(char *)(param_1 + 0x820) == '\0')) {
    bVar1 = *(int *)(param_1 + 0x824) != 0;
  }
  return bVar1;
}

