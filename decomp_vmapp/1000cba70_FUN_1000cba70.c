
undefined8 FUN_1000cba70(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_20;
  undefined1 local_12;
  
  FUN_1000c81f0();
  local_20 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_1000c95f0(param_1,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_12 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_12) goto LAB_1000cbad4;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1000cbad4:
  cVar1 = FUN_1000d67e0(param_1 + 0x2b8,param_1 + 0x1d0);
  if (cVar1 == '\0') {
    FUN_1008e3970("","vm",0,"Creating sav file failed");
    *(undefined4 *)(param_1 + 500) = 0x80020005;
    uVar2 = 0x80020005;
  }
  else {
    FUN_10008fa70(param_1,2);
    uVar2 = 0;
  }
  return uVar2;
}

