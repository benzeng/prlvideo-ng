
bool FUN_1000e96d0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  QArrayData *local_38;
  undefined1 local_30 [15];
  undefined1 local_21;
  
  FUN_100761480(local_30);
  cVar1 = FUN_1000e9810(param_1);
  if (cVar1 == '\0') {
    bVar5 = false;
    goto LAB_1000e979d;
  }
  QString::toUtf8();
  cVar1 = FUN_100761540(local_30,local_38 + *(long *)(local_38 + 0x10),0,0,0,0,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000e975d;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1000e975d:
  if (cVar1 == '\0') {
    bVar5 = false;
  }
  else {
    uVar2 = _CFDataGetBytePtr(*(undefined8 *)(param_1 + 8));
    uVar3 = _CFDataGetLength(*(undefined8 *)(param_1 + 8));
    lVar4 = FUN_100761880(local_30,FUN_100761810,0,uVar2,uVar3);
    bVar5 = -1 < lVar4;
  }
LAB_1000e979d:
  FUN_100761500(local_30);
  return bVar5;
}

