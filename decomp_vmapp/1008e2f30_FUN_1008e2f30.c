
bool FUN_1008e2f30(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_1 != -1) {
    iVar1 = _close(param_1);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

