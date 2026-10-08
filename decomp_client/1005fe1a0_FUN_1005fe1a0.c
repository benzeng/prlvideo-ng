
undefined8 * FUN_1005fe1a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  QArrayData *local_28;
  undefined1 local_1a;
  
  iVar2 = *(int *)(param_2 + 0x80);
  if (iVar2 == 1) {
    pcVar3 = "qrc:/cd_32x32.png";
    iVar2 = 0x11;
  }
  else if (iVar2 == 3) {
    pcVar3 = "qrc:/usb_32.png";
    iVar2 = 0xf;
  }
  else {
    if (iVar2 == 2) {
      local_28 = (QArrayData *)QString::fromAscii_helper("image://fileIcon/%1/32",0x16);
      QString::arg(param_1,&local_28,param_2 + 0x78,0,0x20);
      if (*(int *)local_28 == -1) {
        return param_1;
      }
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return param_1;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
      return param_1;
    }
    pcVar3 = "";
    iVar2 = 0;
  }
  uVar1 = QString::fromAscii_helper(pcVar3,iVar2);
  *param_1 = uVar1;
  return param_1;
}

