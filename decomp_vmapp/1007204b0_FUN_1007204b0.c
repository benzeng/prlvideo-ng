
int FUN_1007204b0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    if (((int)uVar3 != 0) && ((uVar3 & 1) == 0)) {
      iVar1 = ___sprintf_chk(param_2 + iVar2,0,0xffffffffffffffff,"%c",0x2e);
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = ___sprintf_chk(param_2 + iVar2,0,0xffffffffffffffff,"%02X",
                           *(undefined1 *)(param_1 + uVar3));
    iVar2 = iVar2 + iVar1;
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x10);
  return iVar2;
}

