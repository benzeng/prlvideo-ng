
undefined1 FUN_100124e20(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_68;
  char local_60 [71];
  undefined1 local_19;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    iVar3 = FUN_10018f890(param_1);
    if (((iVar3 != 0x80b) && (iVar3 = FUN_10018f890(param_1), iVar3 != 0x80c)) &&
       (iVar3 = FUN_10018f890(param_1), iVar3 != 0x80e)) {
      return 0;
    }
    uVar4 = FUN_100748240();
    local_68 = (QArrayData *)QString::fromAscii_helper("win10.upgrade.advisor",0x15);
    uVar4 = FUN_100748290(uVar4,&local_68);
    FUN_100746ae0(local_60,uVar4);
    if (local_60[0] == '\0') {
      uVar4 = FUN_10018d490(param_1);
      uVar4 = FUN_10016f500(uVar4);
      uVar2 = FUN_10061b500(uVar4,0x80);
    }
    else {
      uVar2 = 0;
    }
    FUN_10012ac30(local_60);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        if (*(int *)local_68 != 0) {
          return uVar2;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

