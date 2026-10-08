
byte FUN_1006907d0(undefined4 param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  switch(param_1) {
  case 0:
    cVar1 = FUN_10018ecf0(param_2);
    if (cVar1 == '\0') {
      bVar2 = 0;
    }
    else {
      iVar3 = FUN_10018a9d0(param_2);
      bVar2 = iVar3 != 0;
    }
    break;
  case 1:
    iVar3 = FUN_10018f5b0(param_2);
    bVar2 = 1;
    if (iVar3 != 2) {
      iVar3 = FUN_10018f5b0(param_2);
      bVar2 = iVar3 == 3;
    }
    break;
  case 3:
    bVar2 = FUN_10018ffc0(param_2);
    goto LAB_100690847;
  case 4:
    bVar2 = FUN_10018d9f0(param_2,0);
LAB_100690847:
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}

