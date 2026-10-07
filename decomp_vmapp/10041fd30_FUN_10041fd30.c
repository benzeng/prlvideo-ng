
void FUN_10041fd30(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  *param_2 = 0;
  lVar5 = 0;
  lVar2 = 0;
  while( true ) {
    cVar1 = *(char *)(param_1 + lVar2);
    iVar3 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar4 = (ulong)(iVar3 - 0x30);
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      uVar4 = (ulong)(iVar3 - 0x57);
    }
    else {
      uVar4 = (ulong)(iVar3 - 0x37);
      if (5 < (byte)(cVar1 + 0xbfU)) {
        uVar4 = 0xffffffff;
      }
    }
    if ((0xf < lVar2) || ((int)uVar4 < 0)) break;
    lVar5 = lVar5 * 0x10 + uVar4;
    *param_2 = lVar5;
    lVar2 = lVar2 + 1;
  }
  return;
}

