
undefined8 * FUN_10041de20(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *local_30;
  
  if (DAT_102273fdc == 0) {
    DAT_102273fdc = FUN_10041def0("QList<DeviceSelectorComboItem>",0xffffffffffffffff,1);
  }
  uVar2 = DAT_102273fdc;
  uVar4 = QVariant::userType();
  puVar1 = PTR_shared_null_1021e15e8;
  if (uVar2 == uVar4) {
    uVar5 = QVariant::constData();
    FUN_10041e050(param_1,uVar5);
  }
  else {
    local_30 = PTR_shared_null_1021e15e8;
    cVar3 = QVariant::convert(param_2,(void *)(ulong)uVar2);
    if (cVar3 == '\0') {
      *param_1 = puVar1;
    }
    else {
      FUN_10041e050(param_1,&local_30);
    }
    FUN_100419d80(&local_30);
  }
  return param_1;
}

