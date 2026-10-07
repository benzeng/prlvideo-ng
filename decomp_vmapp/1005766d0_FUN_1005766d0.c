
char * FUN_1005766d0(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((long)iVar1 == -1) {
    return "Invalid";
  }
  if (iVar1 == -2) {
    return "Disabled";
  }
  return (&PTR_s_None_100bc6390)[iVar1];
}

