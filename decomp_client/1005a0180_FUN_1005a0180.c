
QVariant * FUN_1005a0180(QVariant *param_1)

{
  void *pvVar1;
  undefined1 local_28 [8];
  
  if (DAT_102310970 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1006b2390(pvVar1);
    DAT_102274b20 = 1;
    DAT_102310970 = pvVar1;
  }
  FUN_1006b2500(local_28,DAT_102310970);
  if (DAT_1022743e0 == 0) {
    DAT_1022743e0 = FUN_100598d80("QList<CSendKeyToVmInfo>",0xffffffffffffffff,1);
  }
  QVariant::QVariant(param_1,DAT_1022743e0,local_28,0);
  FUN_10056e3a0(local_28);
  return param_1;
}

