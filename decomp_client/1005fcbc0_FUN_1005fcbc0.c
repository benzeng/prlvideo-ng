
int FUN_1005fcbc0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = QObject::qt_metacall();
  if (-1 < iVar1) {
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 0xb:
      FUN_1005fca20(param_1,param_2,iVar1,param_4);
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}

