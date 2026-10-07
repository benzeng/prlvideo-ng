
int FUN_10071ffa0(long param_1,long param_2,int param_3)

{
  long lVar1;
  char *in_RAX;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  char *local_38;
  
  puVar4 = (undefined1 *)(param_1 + 1);
  lVar1 = 0;
  local_38 = in_RAX;
  do {
    lVar2 = lVar1;
    uVar3 = _strtoul((char *)(param_2 + lVar2),&local_38,0x10);
    puVar4[-1] = (char)(uVar3 >> 8);
    *puVar4 = (char)uVar3;
    if ((char *)(param_2 + 4 + lVar2) != local_38) {
      return -2;
    }
    puVar4 = puVar4 + 2;
    lVar1 = lVar2 + 5;
  } while (lVar2 + 5 < (long)param_3);
  return (int)lVar2 + 4;
}

