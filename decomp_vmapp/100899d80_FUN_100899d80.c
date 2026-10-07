
bool FUN_100899d80(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (((param_1 != (int *)0x0) &&
      (iVar1 = (int)(((uint)(param_2 >> 0x1f) >> 0x1d) + param_2) >> 3, iVar1 + 1 <= *param_1)) &&
     (*(long *)(param_1 + 2) != 0)) {
    bVar2 = (1 << (~(byte)param_2 & 7) & (uint)*(byte *)(*(long *)(param_1 + 2) + (long)iVar1)) != 0
    ;
  }
  return bVar2;
}

