
undefined8 FUN_100b35620(undefined8 param_1,undefined8 param_2,QVariant *param_3)

{
  QObject *pQVar1;
  uint uVar2;
  uint uVar3;
  int local_2c;
  QVariant local_28;
  
  local_2c = FUN_100b35450();
  if (local_2c == 0xffffffff) {
    return 0;
  }
  uVar2 = (param_3->field0_0x0).field1_0x8.bitField0_30;
  uVar3 = uVar2 & 0x3ffffff8;
  uVar2 = uVar2 & 0x40000000;
  if (uVar2 == 0) {
    if (uVar3 < 8) {
      (param_3->field0_0x0).field1_0x8.bitField0_30 = 2;
      (param_3->field0_0x0).field0_0x0.field5 = local_2c;
      return 1;
    }
  }
  else if ((uVar3 < 8) &&
          (pQVar1 = (param_3->field0_0x0).field0_0x0.field15, *(int *)(pQVar1 + 8) == 1)) {
    (param_3->field0_0x0).field1_0x8.bitField0_30 = uVar2 | 2;
    **(int **)pQVar1 = local_2c;
    return 1;
  }
  QVariant::QVariant(&local_28,2,&local_2c,0);
  QVariant::operator=(param_3,&local_28);
  QVariant::~QVariant(&local_28);
  return 1;
}

