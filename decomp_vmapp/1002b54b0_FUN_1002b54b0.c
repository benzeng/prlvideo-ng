
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002b54b0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  size_t sVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  bool bVar15;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  DAT_1011c5648 = *(undefined4 *)(DAT_1011c3698 + 0x580);
  DAT_1011c5688 = FUN_1007da300("devices.usb.loglevel",0);
  FUN_1002d9f10(DAT_1011c568c);
  uVar12 = *(uint *)(DAT_1011c3698 + 0x5c0);
  if ((10 < uVar12 - 0x806) && ((uVar12 & 0xffffff00) != 0x700)) {
    DAT_101116b50 = 0;
  }
  DAT_101116b50 = FUN_1007da300("devices.usb.enable_mouse",DAT_101116b50);
  DAT_101116b50 = FUN_1007da300("devices.usb.mouse",DAT_101116b50);
  iVar1 = FUN_1006d65a0();
  if (iVar1 == 0) {
    DAT_101116c3a = 0xfff6;
  }
  if (*(int *)(DAT_1011c3698 + 0xaf0) == 3) {
    DAT_1011c5668 = 2;
  }
  else if (((0xf < uVar12 - 0x801) && (2 < uVar12 - 0x701)) && (uVar12 != 0x8ff)) {
    DAT_1011c5668 = 0;
  }
  if (((uVar12 & 0xffffff00) == 0x700) && (*(int *)(DAT_1011c3698 + 0xb60) != 0)) {
    DAT_1011c5668 = 2;
  }
  DAT_1011c5668 = FUN_1007da300("devices.usb.enable_keyboard",DAT_1011c5668);
  DAT_1011c5668 = FUN_1007da300("devices.usb.keyboard",DAT_1011c5668);
  bVar15 = uVar12 - 0x701 < 3;
  uVar4 = 0xfffb;
  if (bVar15) {
    uVar4 = 0x221;
  }
  uVar11 = 0x203a;
  if (bVar15) {
    uVar11 = 0x5ac;
  }
  DAT_101116dd8 = FUN_1007da300("devices.usb.keyboard_vid",uVar11);
  DAT_101116dda = FUN_1007da300("devices.usb.keyboard_pid",uVar4);
  DAT_1011171d0 = FUN_1007da300("devices.usb.bluetooth_vid",0x45e);
  DAT_1011171d2 = FUN_1007da300("devices.usb.bluetooth_pid",0x7e);
  DAT_101116b58 = FUN_1007da300("devices.usb.webcam_src",DAT_101116b58);
  DAT_101116b5c = FUN_1007da300("devices.usb.webcam_enum_delay",DAT_101116b5c);
  DAT_1011c566c = FUN_1007da300("devices.usb.grab_port",DAT_1011c566c);
  iVar1 = FUN_1007da300("devices.usb.idle_poll_timeout",0xfa);
  DAT_1011c564c = iVar1 * 1000;
  iVar1 = FUN_1007da300("devices.usb.active_poll_timeout",1);
  DAT_1011c5650 = iVar1 * 1000;
  DAT_1011c5654 = FUN_1007da300("devices.usb.active_detect_rounds",2000);
  iVar1 = FUN_1007da300("devices.usb.enumerate_boost_duration",1000);
  DAT_1011c5658 = iVar1 * 1000;
  DAT_1011c565c = 0xffffffff;
  iVar1 = FUN_1007da300("devices.usb.ehc_emulate_read",0);
  if (iVar1 == 0) {
    DAT_1011c565c = 200000;
  }
  DAT_1011c565c = FUN_1007da300("devices.usb.ehc_rollover_timeout",DAT_1011c565c);
  DAT_1011c5660 = FUN_1007da300("devices.usb.ehc_reserved_ports",3);
  DAT_101116b48 = FUN_1007da300("devices.usb.xhc_ready_timeout",DAT_101116b48);
  if ((uVar12 != 0x8ff) && (0xf < uVar12 - 0x801)) {
    _DAT_101116b4c = 0xf;
  }
  _DAT_101116b4c = FUN_1007da300("devices.usb.hub_ports",_DAT_101116b4c);
  DAT_1011c5664 = _DAT_101116b4c + 8U >> 3;
  DAT_101116b60 = FUN_1007da300("devices.usb.max_urb_size",DAT_101116b60);
  uVar12 = 0;
  DAT_1011c567c = FUN_1007da300("devices.usb.hide_uas",0);
  _memset((void *)(param_1 + 0x98),0xff,0x200);
  _memcpy((void *)(param_1 + 0x98),&DAT_100b381d0,0x160);
  uVar14 = 0x16;
  do {
    local_48 = (QArrayData *)QString::fromAscii_helper("devices.usb.filter%1",0x14);
    QString::arg(&local_40,&local_48,uVar12,0,10,0x20);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002b58e2;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1002b58e2:
    QString::toUtf8();
    pcVar5 = (char *)FUN_1007da5e0(local_58 + *(long *)(local_58 + 0x10),"");
    iVar1 = -1;
    if (pcVar5 != (char *)0x0) {
      sVar6 = _strlen(pcVar5);
      iVar1 = (int)sVar6;
    }
    local_50 = (QArrayData *)QString::fromAscii_helper(pcVar5,iVar1);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002b595a;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_1002b595a:
    iVar1 = FUN_1002b5270(&local_50,0,0xffffffff);
    iVar2 = FUN_1002b5270(&local_50,1,0xffffffff);
    iVar3 = FUN_1002b5270(&local_50,2,0xffffffff);
    uVar4 = FUN_1002b5270(&local_50,3,0xffffffff);
    uVar8 = 0;
    piVar7 = (int *)(param_1 + 0xa0);
    do {
      if ((((iVar1 != -1) && (piVar7[-2] == iVar1)) && (iVar2 != -1)) &&
         (((piVar7[-1] == iVar2 && (iVar3 != -1)) && (*piVar7 == iVar3)))) {
        *(undefined4 *)(param_1 + 0xa4 + uVar8 * 0x10) = uVar4;
        goto LAB_1002b5a42;
      }
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar8 < 0x20);
    lVar9 = (ulong)uVar14 * 0x10;
    *(int *)(param_1 + 0x98 + lVar9) = iVar1;
    *(int *)(param_1 + 0x9c + lVar9) = iVar2;
    *(int *)(param_1 + 0xa0 + lVar9) = iVar3;
    *(undefined4 *)(param_1 + 0xa4 + lVar9) = uVar4;
    uVar14 = uVar14 + 1;
LAB_1002b5a42:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002b5a79;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1002b5a79:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002b5aad;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1002b5aad:
    uVar12 = uVar12 + 1;
  } while ((uVar12 | uVar14) < 0x20);
  piVar7 = (int *)(param_1 + 0xb0);
  uVar8 = 0;
  while ((((piVar7[-6] != 0xfca || (piVar7[-5] != 0x1ffff)) || (uVar10 = uVar8, piVar7[-4] != 0x1ff)
          ) && (((uVar10 = uVar8 + 1, piVar7[-2] != 0xfca || (piVar7[-1] != 0x1ffff)) ||
                (*piVar7 != 0x1ff))))) {
    uVar8 = uVar8 + 2;
    piVar7 = piVar7 + 8;
    if (0x1f < uVar8) {
LAB_1002b5b96:
      puVar13 = (undefined4 *)(param_1 + 0xa4);
      uVar8 = 0;
      do {
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"DEV_FLAGS[%i] %08x:%08x:%08x - %08x",uVar8 & 0xffffffff,
                        puVar13[-3],puVar13[-2],puVar13[-1],*puVar13);
        }
        uVar8 = uVar8 + 1;
        puVar13 = puVar13 + 4;
      } while (uVar8 != 0x20);
      return;
    }
  }
  iVar1 = FUN_1007da300("devices.usb.blackberry_quirk",0xffffffff);
  if (iVar1 != -1) {
    uVar12 = *(uint *)(param_1 + 0xa4 + uVar10 * 0x10);
    if (iVar1 == 0) {
      uVar12 = uVar12 & 0xfffeffff;
    }
    else {
      uVar12 = uVar12 | 0x10000;
    }
    *(uint *)(param_1 + 0xa4 + uVar10 * 0x10) = uVar12;
  }
  iVar1 = FUN_1007da300("devices.usb.enable_pm",0xffffffff);
  if (iVar1 != -1) {
    uVar12 = *(uint *)(param_1 + 0xa4 + uVar10 * 0x10);
    if (iVar1 == 0) {
      uVar12 = uVar12 & 0xfffdffff;
    }
    else {
      uVar12 = uVar12 | 0x20000;
    }
    *(uint *)(param_1 + 0xa4 + uVar10 * 0x10) = uVar12;
  }
  goto LAB_1002b5b96;
}

