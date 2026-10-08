
bool FUN_10031bde0(void)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = FUN_100319960();
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_100325aa0(lVar2);
    bVar3 = iVar1 == 3;
  }
  return bVar3;
}

