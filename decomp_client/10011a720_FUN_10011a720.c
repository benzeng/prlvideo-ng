
bool FUN_10011a720(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = FUN_10018ff50();
  if (cVar1 == '\0') {
    cVar1 = FUN_10018ffc0(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_10018ecf0(param_1);
      if (cVar1 == '\0') {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_10018a9d0(param_1);
        bVar3 = true;
        if (iVar2 != 0x30000004) {
          iVar2 = FUN_10018a9d0(param_1);
          bVar3 = iVar2 == 0x30000005;
        }
      }
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

