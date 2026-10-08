
int FUN_10059d530(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = QObject::qt_metacall();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 1) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      if (iVar1 == 0) {
        if (-1 < *(int *)param_4[1]) {
          uVar3 = 0;
          if ((*(long *)(param_1 + 0x38) != 0) &&
             (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
            uVar3 = *(undefined8 *)(param_1 + 0x40);
          }
          lVar2 = FUN_100599cc0(uVar3);
          *(undefined1 *)(lVar2 + 0x4a) = 1;
        }
        CMappingValueHandler::handleValueFinished(SUB81(*(undefined8 *)(param_1 + 0x10),0));
      }
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

