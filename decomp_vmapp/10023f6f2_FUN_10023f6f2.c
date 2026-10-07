
void FUN_10023f6f2(long param_1)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x68) != 0)) && (0 < **(int **)(param_1 + 0x68))) {
    iVar1 = FUN_10023f60b(param_1);
    if ((-1 < iVar1) && (iVar1 < **(int **)(param_1 + 0x68))) {
      *(undefined8 *)(param_1 + 0x60) =
           *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + (long)iVar1 * 8);
      FUN_10023f775(param_1,1);
    }
  }
  return;
}

