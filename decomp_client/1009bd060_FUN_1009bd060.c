
int FUN_1009bd060(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = QObject::qt_metacall();
  if (iVar3 < 0) {
    return iVar3;
  }
  if (param_2 == 0xc) {
    if (iVar3 < 3) {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else {
    if (param_2 != 0) {
      return iVar3;
    }
    if (iVar3 < 3) {
      if (iVar3 != 2) {
        if (iVar3 == 1) {
          FUN_1009bc7f0(param_1);
          goto LAB_1009bd0db;
        }
        if (iVar3 != 0) goto LAB_1009bd0db;
        uVar1 = param_4[1];
        cVar2 = FUN_100da2630(uVar1);
        if (cVar2 == '\0') goto LAB_1009bd0db;
        FUN_1000341d0(param_1 + 0x40,uVar1);
      }
      FUN_1009bc8b0(param_1);
    }
  }
LAB_1009bd0db:
  return iVar3 + -3;
}

