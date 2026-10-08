
undefined8 * FUN_1005810a0(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *local_30;
  
  if (DAT_102274378 == 0) {
    DAT_102274378 = FUN_100581170("Remaps::ProfilesList",0xffffffffffffffff,1);
  }
  uVar2 = DAT_102274378;
  uVar4 = QVariant::userType();
  puVar1 = PTR_shared_null_1021e15e8;
  if (uVar2 == uVar4) {
    uVar5 = QVariant::constData();
    FUN_10055a620(param_1,uVar5);
  }
  else {
    local_30 = PTR_shared_null_1021e15e8;
    cVar3 = QVariant::convert(param_2,(void *)(ulong)uVar2);
    if (cVar3 == '\0') {
      *param_1 = puVar1;
    }
    else {
      FUN_10055a620(param_1,&local_30);
    }
    FUN_1000fe670(&local_30);
  }
  return param_1;
}

