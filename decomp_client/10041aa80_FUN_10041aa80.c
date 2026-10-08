
undefined8 * FUN_10041aa80(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  int *local_38;
  undefined1 local_29;
  
  if (DAT_102273f30 == 0) {
    DAT_102273f30 = FUN_10041ab90("CVmEdWidgetIniterPrivate::PathValuesList",0xffffffffffffffff,1);
  }
  uVar2 = DAT_102273f30;
  uVar4 = QVariant::userType();
  puVar1 = PTR_shared_null_1021e15e8;
  if (uVar2 == uVar4) {
    uVar5 = QVariant::constData();
    FUN_1003df730(param_1,uVar5);
  }
  else {
    local_38 = (int *)PTR_shared_null_1021e15e8;
    cVar3 = QVariant::convert(param_2,(void *)(ulong)uVar2);
    if (cVar3 == '\0') {
      *param_1 = puVar1;
    }
    else {
      FUN_1003df730(param_1,&local_38);
    }
    if (*local_38 != -1) {
      if (*local_38 != 0) {
        LOCK();
        *local_38 = *local_38 + -1;
        UNLOCK();
        if (*local_38 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      FUN_10041b480(&local_38,local_38);
    }
  }
  return param_1;
}

