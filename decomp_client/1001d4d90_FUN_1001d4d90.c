
int FUN_1001d4d90(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = QObject::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (iVar1 < 4) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else {
    if (param_2 != 0) {
      return iVar1;
    }
    switch(iVar1) {
    case 0:
      if (*(int *)param_4[2] == 3) goto switchD_1001d4de3_default;
    case 3:
      uVar2 = 0;
      break;
    case 1:
      uVar2 = 1;
      break;
    case 2:
      uVar2 = *(undefined1 *)param_4[1];
      break;
    default:
      goto switchD_1001d4de3_default;
    }
    FUN_1001d3dc0(param_1,uVar2);
  }
switchD_1001d4de3_default:
  return iVar1 + -4;
}

