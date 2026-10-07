
bool FUN_100525d60(long *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*param_2 == 0x103) {
    *(undefined1 *)((long)param_1 + 9) = 1;
    bVar2 = true;
  }
  else if (*param_2 == 0x101) {
    *(undefined1 *)(param_1 + 1) = 1;
    bVar2 = true;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0xc) - *(int *)(*param_1 + 8);
    bVar2 = iVar1 < 0x10;
    if (iVar1 < 0x10) {
      FUN_100526050();
    }
  }
  return bVar2;
}

