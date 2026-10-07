
void FUN_1000979a0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar3 = *(long *)(param_1 + 0x1a58);
  if (lVar3 == 0) {
    FUN_1008e3970("","vm",0,"USB controller is absent. No way to enable virtual HID");
    return;
  }
  DAT_101116b50 = 1;
  DAT_1011c5668 = 2;
  DAT_101116b50 = FUN_1007da300("devices.usb.enable_mouse",1);
  DAT_101116b50 = FUN_1007da300("devices.usb.mouse",DAT_101116b50);
  DAT_1011c5668 = FUN_1007da300("devices.usb.enable_keyboard",DAT_1011c5668);
  DAT_1011c5668 = FUN_1007da300("devices.usb.keyboard",DAT_1011c5668);
  local_30 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@MOUSE@|203a|fffc|full|--|PW3.0",0x26);
  lVar2 = FUN_1002bfd50(lVar3,&local_30);
  iVar1 = DAT_101116b50;
  if (lVar2 == 0) {
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100097adc;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_100097adc:
    if (iVar1 != 0) {
      FUN_1002bacc0(0,2,0);
    }
  }
  else if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100097aef;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100097aef:
  local_38 = (QArrayData *)
             QString::fromAscii_helper("VIRTUAL@KEYBOARD@|203a|fffb|full|--|PW3.0",0x29);
  lVar3 = FUN_1002bfd50(lVar3,&local_38);
  iVar1 = DAT_1011c5668;
  if (lVar3 != 0) {
    if (*(int *)local_38 == -1) {
      return;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
    return;
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100097b7a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100097b7a:
  if (iVar1 != 0) {
    FUN_1002bacc0(0,3,0);
  }
  return;
}

