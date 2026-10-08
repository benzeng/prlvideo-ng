
undefined8 FUN_10061b3c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QDateTime local_28;
  
  uVar5 = 0x8000000000000000;
  iVar2 = FUN_10061aab0();
  if ((((iVar2 != 0) && (iVar2 = FUN_10061aab0(param_1), iVar2 != -0x7ffeefa8)) &&
      (iVar2 = FUN_10061aab0(param_1), iVar2 != -0x7ffeefff)) &&
     (((iVar2 = FUN_10061aab0(param_1), iVar2 != -0x7ffeef8c &&
       (iVar2 = FUN_10061aab0(param_1), iVar2 != -0x7ffeef89)) &&
      (iVar2 = FUN_10061aab0(param_1), iVar2 != -0x7ffeef9b)))) {
    return 0x8000000000000000;
  }
  lVar3 = FUN_100b5ffd0(param_2);
  if (lVar3 != 0) {
    uVar4 = FUN_100b5ffd0(param_2);
    cVar1 = FUN_100b89890(uVar4);
    if (cVar1 == '\0') {
      uVar5 = FUN_100b5ffd0(param_2);
      uVar5 = FUN_100b7fed0(uVar5);
      return uVar5;
    }
  }
  lVar3 = FUN_100b5ffe0(param_2);
  if (lVar3 != 0) {
    uVar5 = FUN_100b5ffe0(param_2);
    FUN_100b673f0(&local_28,uVar5);
    uVar5 = QDateTime::date();
    QDateTime::~QDateTime(&local_28);
  }
  return uVar5;
}

