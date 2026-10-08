
int FUN_10077d4a0(QObject *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = QObject::qt_metacall();
  if (iVar3 < 0) {
    return iVar3;
  }
  if (param_2 == 0xc) {
    if (1 < iVar3) {
LAB_10077d4ea:
      iVar3 = iVar3 + -2;
LAB_10077d4ee:
      if (param_2 != 0xc) {
        if (param_2 != 0) {
          return iVar3;
        }
        goto LAB_10077d532;
      }
      if (1 < iVar3) goto LAB_10077d575;
    }
    *(undefined4 *)*param_4 = 0xffffffff;
  }
  else {
    if (param_2 != 0) goto LAB_10077d4ee;
    if (1 < iVar3) goto LAB_10077d4ea;
    if (iVar3 == 1) {
      FUN_100774880(param_1);
      goto LAB_10077d575;
    }
    if (iVar3 == 0) {
      QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6e90,0,(void **)0x0);
      goto LAB_10077d575;
    }
    iVar4 = iVar3 + -2;
    bVar1 = iVar3 < 2;
    iVar3 = iVar4;
    if (bVar1) {
      return iVar4;
    }
LAB_10077d532:
    if (iVar3 < 2) {
      if (iVar3 == 1) {
        FUN_100776c20(param_1);
      }
      else if ((((iVar3 == 0) && (*(int *)param_4[2] == 0x30000004)) &&
               (*(int *)(param_1 + 0x30) < 0)) &&
              (cVar2 = (**(code **)(*(long *)param_1 + 0x78))(param_1), cVar2 == '\0')) {
        QTimer::start();
      }
    }
  }
LAB_10077d575:
  return iVar3 + -2;
}

