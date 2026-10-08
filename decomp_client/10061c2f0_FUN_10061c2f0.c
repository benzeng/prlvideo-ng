
undefined8 FUN_10061c2f0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  QDateTime local_30;
  undefined1 local_28 [24];
  
  FUN_100b5f7a0(local_28,param_1);
  lVar2 = FUN_100b5ffd0(local_28);
  if (lVar2 != 0) {
    uVar3 = FUN_100b5ffd0(local_28);
    cVar1 = FUN_100b89890(uVar3);
    if (cVar1 == '\0') {
      uVar3 = FUN_100b5ffd0(local_28);
      uVar3 = FUN_100b7fed0(uVar3);
      goto LAB_10061c39b;
    }
  }
  lVar2 = FUN_100b5ffe0(local_28);
  if (lVar2 == 0) {
    uVar3 = 0x8000000000000000;
  }
  else {
    uVar3 = FUN_100b5ffe0(local_28);
    FUN_100b673f0(&local_30,uVar3);
    uVar3 = QDateTime::date();
    QDateTime::~QDateTime(&local_30);
  }
LAB_10061c39b:
  FUN_100b5ff80(local_28);
  return uVar3;
}

