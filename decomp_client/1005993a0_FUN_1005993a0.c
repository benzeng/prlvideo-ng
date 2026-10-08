
undefined8 * FUN_1005993a0(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *local_30;
  
  if (DAT_1022743e0 == 0) {
    DAT_1022743e0 = FUN_100598d80("QList<CSendKeyToVmInfo>",0xffffffffffffffff,1);
  }
  uVar2 = DAT_1022743e0;
  uVar4 = QVariant::userType();
  puVar1 = PTR_shared_null_1021e15e8;
  if (uVar2 == uVar4) {
    uVar5 = QVariant::constData();
    FUN_10056ec80(param_1,uVar5);
  }
  else {
    local_30 = PTR_shared_null_1021e15e8;
    cVar3 = QVariant::convert(param_2,(void *)(ulong)uVar2);
    if (cVar3 == '\0') {
      *param_1 = puVar1;
    }
    else {
      FUN_10056ec80(param_1,&local_30);
    }
    FUN_10056e3a0(&local_30);
  }
  return param_1;
}

