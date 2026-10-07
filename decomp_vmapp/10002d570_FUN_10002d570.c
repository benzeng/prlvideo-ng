
undefined1 FUN_10002d570(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  QArrayData *local_20;
  undefined1 local_12;
  
  local_20 = (QArrayData *)QString::fromAscii_helper("parallels:app_packages:modernmix",0x20);
  iVar2 = QString::indexOf(param_2,&local_20,0,1);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_12 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_12) goto LAB_10002d5d6;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_10002d5d6:
  if (iVar2 == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10002d640();
  }
  return uVar1;
}

