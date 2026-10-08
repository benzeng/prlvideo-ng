
bool FUN_1005bf2d0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  QArrayData *local_68;
  char local_60 [71];
  undefined1 local_19;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar3 = false;
  }
  else if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    bVar3 = false;
  }
  else if (*(long *)(param_1 + 0x18) == 0) {
    bVar3 = false;
  }
  else {
    cVar1 = FUN_100d80630(1);
    if (cVar1 == '\0') {
      uVar2 = FUN_100748240();
      local_68 = (QArrayData *)QString::fromAscii_helper("win7look",8);
      uVar2 = FUN_100748290(uVar2,&local_68);
      FUN_100746ae0(local_60,uVar2);
      if (local_60[0] == '\0') {
        bVar3 = (*(uint *)(param_1 + 0x38) & 0xfffffffd) == 0x80c;
      }
      else {
        bVar3 = false;
      }
      FUN_10012ac30(local_60);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          UNLOCK();
          if (*(int *)local_68 != 0) {
            return bVar3;
          }
          local_19 = 0;
        }
        QArrayData::deallocate(local_68,2,8);
      }
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}

