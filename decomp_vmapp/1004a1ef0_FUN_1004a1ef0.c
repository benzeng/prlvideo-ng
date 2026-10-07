
bool FUN_1004a1ef0(long *param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = FUN_1004a1f30(param_1,param_2,0,0);
  bVar3 = true;
  if (iVar2 < 0) {
    if (*param_1 == 0) {
      bVar3 = false;
    }
    else {
      cVar1 = _IsDataAvailableInIconRef(param_2 & 0xffffffff);
      bVar3 = cVar1 != '\0';
    }
  }
  return bVar3;
}

