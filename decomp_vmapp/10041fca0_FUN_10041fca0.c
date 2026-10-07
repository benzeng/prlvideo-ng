
void FUN_10041fca0(long param_1,int *param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  *param_2 = 0;
  iVar4 = 0;
  lVar2 = 0;
  while( true ) {
    cVar1 = *(char *)(param_1 + lVar2);
    iVar3 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar3 = iVar3 + -0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar3 = iVar3 + -0x57;
    }
    else {
      iVar3 = iVar3 + -0x37;
      if (5 < (byte)(cVar1 + 0xbfU)) {
        iVar3 = -1;
      }
    }
    if ((7 < lVar2) || (iVar3 < 0)) break;
    iVar4 = iVar4 * 0x10 + iVar3;
    *param_2 = iVar4;
    lVar2 = lVar2 + 1;
  }
  return;
}

