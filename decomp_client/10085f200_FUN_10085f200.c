
int FUN_10085f200(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = QObject::qt_metacall();
  if (-1 < iVar3) {
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 0xb:
      if ((param_2 == 1) && (iVar3 == 0)) {
        puVar1 = (undefined1 *)*param_4;
        uVar2 = FUN_1007883e0(param_1);
        *puVar1 = uVar2;
      }
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      iVar3 = iVar3 + -1;
    }
  }
  return iVar3;
}

