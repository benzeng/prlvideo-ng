
void FUN_100715050(long param_1,long param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x50) == 1) {
    iVar1 = _strcasecmp("VZSRV",(char *)(param_1 + 0x20));
    if (((iVar1 == 0) || (*(int *)(param_2 + 0x54) < 5)) || ((*(byte *)(param_2 + 0xec) & 8) != 0))
    {
      FUN_1007150d0(param_1,param_2);
      if (iVar1 != 0) {
        *(byte *)(param_2 + 0xec) = *(byte *)(param_2 + 0xec) | 8;
      }
    }
    return;
  }
  FUN_1007150d0(param_1,param_2);
  return;
}

