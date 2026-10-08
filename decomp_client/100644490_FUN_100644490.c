
undefined1 FUN_100644490(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  uVar4 = FUN_10063f730();
  uVar4 = FUN_100675e00(uVar4);
  uVar4 = FUN_10016f500(uVar4);
  uVar5 = FUN_10063f730(param_1);
  iVar2 = FUN_100678da0(uVar5);
  if (((iVar2 == 3) && (cVar1 = FUN_10061b4d0(uVar4,2), cVar1 != '\0')) &&
     (cVar1 = FUN_10061c5c0(uVar4), cVar1 == '\0')) {
    return 1;
  }
  uVar5 = FUN_10063f730(param_1);
  iVar2 = FUN_100678d90(uVar5);
  if (iVar2 == 3) {
    return 1;
  }
  uVar5 = FUN_10063f730(param_1);
  iVar2 = FUN_100678d90(uVar5);
  if ((iVar2 == 2) && (cVar1 = FUN_10061c5c0(uVar4), cVar1 != '\0')) {
    FUN_10061abe0(&local_40,uVar4,0);
    uVar3 = QVariant::toInt((bool *)&local_40);
    cVar1 = FUN_10061c740(uVar3);
    QVariant::~QVariant(&local_40);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  uVar4 = FUN_10063f730(param_1);
  FUN_100640930(&local_48,param_1);
  FUN_10067e730(uVar4,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return 0;
}

