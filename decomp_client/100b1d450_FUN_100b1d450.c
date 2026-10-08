
int FUN_100b1d450(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_100b1c9b0();
  if (-1 < iVar1) {
    iVar1 = 0;
    *(int *)(param_2 + 8) =
         (int)((ulong)*(uint *)(param_1 + 0x428) /
              *(ulong *)(param_1 + -0x180c0 + *(long *)(*(long *)(param_1 + -0x180f8) + -0x18)));
    *(undefined4 *)(param_2 + 0xc) = 0x51;
  }
  return iVar1;
}

