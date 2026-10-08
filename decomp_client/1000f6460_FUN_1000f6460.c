
char FUN_1000f6460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  QArrayData *local_60;
  undefined **local_58 [2];
  undefined **local_48 [2];
  undefined **local_38 [2];
  undefined1 local_21;
  
  FUN_100d72f10(local_38);
  local_38[0] = &PTR_FUN_10226d338;
  FUN_100d72f10(local_48);
  local_48[0] = &PTR_FUN_10226d378;
  FUN_100d72f10(local_58);
  local_58[0] = &PTR_FUN_10226d3d8;
  QString::toUtf8();
  iVar1 = FUN_100d739f0(local_38,local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000f64fe;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1000f64fe:
  cVar2 = '\x03';
  if ((((iVar1 == 0) && (iVar1 = FUN_100d74680(local_48,local_38), iVar1 == 0)) &&
      (iVar1 = FUN_100d74770(local_58,1), iVar1 == 0)) &&
     (iVar1 = FUN_100d74870(local_58,local_48), iVar1 == 0)) {
    iVar1 = FUN_100d74a60(param_3,local_58);
    cVar2 = (iVar1 != 0) * '\x03';
  }
  FUN_100d72f50(local_58);
  FUN_100d72f50(local_48);
  FUN_100d72f50(local_38);
  return cVar2;
}

