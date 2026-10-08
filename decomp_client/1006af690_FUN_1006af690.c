
bool FUN_1006af690(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  QArrayData *local_68;
  char local_60 [71];
  undefined1 local_19;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    uVar3 = FUN_100748240();
    local_68 = (QArrayData *)QString::fromAscii_helper("win7look",8);
    uVar3 = FUN_100748290(uVar3,&local_68);
    FUN_100746ae0(local_60,uVar3);
    if (local_60[0] == '\0') {
      iVar2 = FUN_10018f890(*(undefined8 *)(param_1 + 0x20));
      bVar4 = true;
      if (iVar2 != 0x80c) {
        iVar2 = FUN_10018f890(*(undefined8 *)(param_1 + 0x20));
        bVar4 = iVar2 == 0x80e;
      }
    }
    else {
      bVar4 = false;
    }
    FUN_10012ac30(local_60);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        if (*(int *)local_68 != 0) {
          return bVar4;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

