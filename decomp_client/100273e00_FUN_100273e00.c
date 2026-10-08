
undefined8 FUN_100273e00(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QObject *pQVar3;
  undefined4 local_40 [2];
  undefined *local_38;
  undefined1 local_30 [16];
  undefined1 local_20;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10016f500(uVar2);
  cVar1 = FUN_10061b500(uVar2,0x2090);
  uVar2 = 0x3bfa;
  if (cVar1 != '\0') {
    pQVar3 = operator_new(0x30);
    local_40[0] = 100;
    local_38 = PTR_shared_null_1021e1288;
    local_30._8_4_ = (int)PTR_shared_null_1021e15e8;
    local_30._0_8_ = PTR_shared_null_1021e15e8;
    local_30._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
    local_20 = 0;
    FUN_1002dce60(pQVar3,local_40);
    FUN_1002748b0(local_40);
    QTimer::singleShot(3000,pQVar3,"1execute()");
    uVar2 = 0;
  }
  return uVar2;
}

