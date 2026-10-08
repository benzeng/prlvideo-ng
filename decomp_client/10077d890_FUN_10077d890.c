
int FUN_10077d890(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = QObject::qt_metacall();
  if (iVar2 < 0) {
    return iVar2;
  }
  if (param_2 == 0xc) {
    if (iVar2 < 2) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return iVar2 + -2;
    }
LAB_10077d8ee:
    iVar3 = iVar2 + -2;
LAB_10077d8f2:
    if (param_2 == 0xc) {
      if (iVar3 < 1) {
        if (*(int *)param_4[1] == 0) {
          *(undefined4 *)*param_4 = 2;
        }
        else {
          *(undefined4 *)*param_4 = 0xffffffff;
        }
      }
      goto LAB_10077d976;
    }
    if (param_2 != 0) {
      return iVar3;
    }
  }
  else {
    iVar3 = iVar2;
    if (param_2 != 0) goto LAB_10077d8f2;
    if (1 < iVar2) goto LAB_10077d8ee;
    if (iVar2 == 1) {
      FUN_100774880(param_1);
      return -1;
    }
    if (iVar2 == 0) {
      QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6e90,0,(void **)0x0);
      return -2;
    }
    iVar3 = iVar2 + -2;
    if (iVar2 < 2) {
      return iVar3;
    }
  }
  if (iVar3 < 1) {
    uVar1 = *(undefined4 *)param_4[1];
    param_1[0x19] = (QObject)0x1;
    param_1[0x18] = (QObject)((byte)((uint)uVar1 >> 0x1f) ^ 1);
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6e90,0,(void **)0x0);
  }
LAB_10077d976:
  return iVar3 + -1;
}

