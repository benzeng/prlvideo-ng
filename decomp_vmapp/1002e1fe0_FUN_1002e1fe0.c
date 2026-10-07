
undefined8
FUN_1002e1fe0(long param_1,char param_2,char param_3,short param_4,uint param_5,undefined1 *param_6,
             uint *param_7)

{
  uint uVar1;
  uint uVar2;
  QArrayData *local_30;
  
  if (*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4) <= param_5) {
    return 0x20;
  }
  if (param_3 == '\x02') {
    if (param_2 < '\0') {
      return 0x20;
    }
    if (param_4 != 0) {
      return 0x20;
    }
  }
  else {
    if (param_3 == '\x01') {
      if (-1 < param_2) {
        return 0x20;
      }
      if (param_4 != 0) {
        return 0x20;
      }
      if (*param_7 != 1) {
        return 0x20;
      }
      *param_6 = 0x18;
      return 0;
    }
    if (param_3 != '\0') {
      if (DAT_1011c568c < 0) {
        return 0x20;
      }
      FUN_1008e3970("","USB",0,"USB_PRN: undefined request %02x %02x %04x %04x %d",param_2,param_3,
                    param_4,param_5,*param_7);
      return 0x20;
    }
    if (-1 < param_2) {
      return 0x20;
    }
    if (param_4 != 0) {
      return 0x20;
    }
    uVar1 = *param_7;
    if (uVar1 < 2) {
      return 0x20;
    }
    uVar2 = *(int *)(*(long *)(param_1 + 0x58) + 4) + 2;
    if (uVar1 < uVar2) {
      uVar2 = uVar1;
    }
    *param_7 = uVar2;
    *param_6 = (char)(uVar2 >> 8);
    param_6[1] = (char)*param_7;
    QString::toUtf8();
    _memcpy(param_6 + 2,local_30 + *(long *)(local_30 + 0x10),(ulong)(*param_7 - 2));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return 0;
        }
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  return 0;
}

