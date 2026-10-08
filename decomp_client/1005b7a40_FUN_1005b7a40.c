
bool FUN_1005b7a40(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  QArrayData *local_60;
  char local_58 [71];
  undefined1 local_11;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_10016f500(uVar2);
  cVar1 = FUN_10061b4d0(uVar2,0x80);
  if (cVar1 == '\0') {
    local_60 = (QArrayData *)QString::fromAscii_helper("trial.windows",0xd);
    uVar2 = FUN_100748240();
    uVar2 = FUN_100748290(uVar2,&local_60);
    FUN_100746ae0(local_58,uVar2);
    FUN_10012ac30(local_58);
    bVar3 = local_58[0] == '\0';
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return bVar3;
        }
        local_11 = 0;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

