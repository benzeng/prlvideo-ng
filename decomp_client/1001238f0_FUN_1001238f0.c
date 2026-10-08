
bool FUN_1001238f0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  QArrayData *local_60;
  char local_58 [71];
  undefined1 local_11;
  
  iVar2 = FUN_10018f890();
  if (iVar2 - 0x807U < 10) {
    if ((0x3fdU >> (iVar2 - 0x807U & 0x1f) & 1) == 0) {
      bVar4 = false;
    }
    else {
      uVar3 = FUN_10018d490(param_1);
      uVar3 = FUN_10016f500(uVar3);
      cVar1 = FUN_10061b4d0(uVar3,2);
      if (cVar1 == '\0') {
        bVar4 = false;
      }
      else {
        uVar3 = FUN_100748240();
        local_60 = (QArrayData *)QString::fromAscii_helper("antivirus.kasperskiy.guest",0x1a);
        uVar3 = FUN_100748290(uVar3,&local_60);
        FUN_100746ae0(local_58,uVar3);
        bVar4 = local_58[0] == '\0';
        FUN_10012ac30(local_58);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            UNLOCK();
            if (*(int *)local_60 != 0) {
              return bVar4;
            }
            local_11 = 0;
          }
          QArrayData::deallocate(local_60,2,8);
        }
      }
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

