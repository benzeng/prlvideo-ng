
undefined1 FUN_100777880(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  QArrayData *local_68;
  char local_60 [71];
  undefined1 local_19;
  
  cVar1 = FUN_100774d90();
  uVar2 = 1;
  if (cVar1 != '\0') {
    return 1;
  }
  cVar1 = FUN_100d80630(1);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar3 = FUN_100748240();
  local_68 = (QArrayData *)QString::fromAscii_helper("toolbox",7);
  uVar3 = FUN_100748290(uVar3,&local_68);
  FUN_100746ae0(local_60,uVar3);
  FUN_10012ac30(local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10077791a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10077791a:
  if (local_60[0] == '\0') {
    uVar2 = FUN_1007dc3c0();
  }
  return uVar2;
}

