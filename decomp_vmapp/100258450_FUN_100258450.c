
bool FUN_100258450(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*(char *)(param_2 + 0x10) == '\0') {
    iVar1 = FUN_1002ef640(param_3);
    bVar2 = iVar1 == 4;
  }
  return bVar2;
}

