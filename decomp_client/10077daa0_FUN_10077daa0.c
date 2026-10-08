
int FUN_10077daa0(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = QObject::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (iVar1 < 2) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return iVar1 + -2;
    }
LAB_10077dafe:
    iVar2 = iVar1 + -2;
LAB_10077db02:
    if (param_2 == 0xc) {
      if (iVar2 < 1) {
        if (*(int *)param_4[1] == 0) {
          *(undefined4 *)*param_4 = 2;
        }
        else if (*(int *)param_4[1] == 1) {
          if (DAT_10226db58 == 0) {
            DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
          }
          *(int *)*param_4 = DAT_10226db58;
        }
        else {
          *(undefined4 *)*param_4 = 0xffffffff;
        }
      }
      goto LAB_10077dba8;
    }
    if (param_2 != 0) {
      return iVar2;
    }
  }
  else {
    iVar2 = iVar1;
    if (param_2 != 0) goto LAB_10077db02;
    if (1 < iVar1) goto LAB_10077dafe;
    if (iVar1 == 1) {
      FUN_100774880(param_1);
      return -1;
    }
    if (iVar1 == 0) {
      QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6e90,0,(void **)0x0);
      return -2;
    }
    iVar2 = iVar1 + -2;
    if (iVar1 < 2) {
      return iVar2;
    }
  }
  if (iVar2 < 1) {
    FUN_10077b2f0();
  }
LAB_10077dba8:
  return iVar2 + -1;
}

