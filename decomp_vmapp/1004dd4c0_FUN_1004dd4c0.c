
bool FUN_1004dd4c0(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = QString::indexOf(param_1,0x2a,0,1);
  bVar2 = true;
  if (iVar1 == -1) {
    iVar1 = QString::indexOf(param_1,0x3f,0,1);
    bVar2 = iVar1 != -1;
  }
  return bVar2;
}

