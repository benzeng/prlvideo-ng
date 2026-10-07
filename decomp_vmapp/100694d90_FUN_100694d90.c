
int FUN_100694d90(long *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_100694340(param_1 + 0x301f);
  if (-1 < iVar1) {
    iVar1 = 0;
    *(int *)(param_2 + 8) =
         (int)((ulong)*(uint *)(param_1 + 0x30a4) /
              *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1));
    *(undefined4 *)(param_2 + 0xc) = 0x51;
  }
  return iVar1;
}

