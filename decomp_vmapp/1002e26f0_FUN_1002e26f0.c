
void FUN_1002e26f0(undefined8 *param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  
  FUN_1002dbac0(param_1,param_2,0,0,&PTR_DAT_101116fe0,0);
  *param_1 = &PTR_FUN_100bb48a0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (DAT_1011c568c < 0) goto LAB_1002e2812;
  pQVar1 = *(QArrayData **)(param_1[1] + 0x20);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  QString::toUtf8();
  FUN_1008e3970("","USB",0,"Virtual UVC constructed <%s>",local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_1002e27e2;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1002e27e2:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1002e2812;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002e2812:
  uVar2 = FUN_10070e6f0("I@devices.usb.uvc.vframes");
  param_1[0x13] = uVar2;
  uVar2 = FUN_10070e6f0("I@devices.usb.uvc.iso_cntr");
  param_1[0x14] = uVar2;
  uVar2 = FUN_10070e6f0("I@devices.usb.uvc.pload_cntr");
  param_1[0x15] = uVar2;
  return;
}

