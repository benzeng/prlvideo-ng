
undefined8 FUN_1002d87d0(undefined8 *param_1,long param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  char *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulong)in_RAX >> 0x20);
  bVar1 = *(byte *)(param_1 + 0x1f);
  if (0x2f < bVar1) {
    if (bVar1 == 0x30) {
      if (2 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] req=USB_REQUEST_SET_SEL",(long)param_1 + 0xcf);
      }
      if (param_3 != 1) {
        return 1;
      }
      *(undefined4 *)(param_2 + 0x454) = *(undefined4 *)(param_2 + 0x43c);
      return 1;
    }
    if (bVar1 == 0x31) {
      if (DAT_1011c568c < 3) {
        return 1;
      }
      FUN_1008e3970("","USB",0,"[%s] req=USB_REQUEST_SET_ISOCH_DELAY",(long)param_1 + 0xcf);
      return 1;
    }
switchD_1002d880c_caseD_2:
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] ControlHDTStandardRequest, Unknown HostToDevice Request",
                    (long)param_1 + 0xcf);
    }
    goto LAB_1002d8970;
  }
  switch(bVar1) {
  case 1:
    if (param_3 != 2) {
      return 1;
    }
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] req=USB_REQUEST_CLEAR_FEATURE",(long)param_1 + 0xcf);
    }
    bVar1 = *(byte *)((long)param_1 + 0xf7);
    if ((((bVar1 & 0x1f) == 0) && (*(short *)((long)param_1 + 0xf9) == 1)) &&
       ((*(byte *)((long)param_1 + 0x92) & 2) == 0)) goto LAB_1002d8970;
    if (bVar1 == 2) {
      if (2 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] req=USB_REQUEST_CLEAR_FEATURE(EndPoint)",(long)param_1 + 0xcf
                     );
      }
      *(undefined4 *)(param_2 + 0x46c) = 0xe000404f;
      if (((*(short *)((long)param_1 + 0xf9) == 0) && (*(short *)((long)param_1 + 0xfb) != 0)) &&
         (lVar2 = *(long *)(param_1[0x18] + 0x40 + (ulong)(byte)*(short *)((long)param_1 + 0xfb) * 8
                           ), lVar2 != 0)) {
        FUN_1002d7b20(lVar2,1);
        *(undefined4 *)(param_2 + 0x46c) = 0;
      }
      (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,param_2);
      return 1;
    }
    if (bVar1 == 1) {
      if (2 < DAT_1011c568c) {
        pcVar5 = "[%s] req=USB_REQUEST_CLEAR_FEATURE(Interface)";
LAB_1002d8e3c:
        FUN_1008e3970("","USB",0,pcVar5,(long)param_1 + 0xcf);
      }
    }
    else {
      if (bVar1 != 0) {
        if (DAT_1011c568c < 1) goto LAB_1002d8970;
        pcVar5 = "[%s] ControlHTDStandardRequest, unknown req2 0x%02X";
        break;
      }
      if (2 < DAT_1011c568c) {
        pcVar5 = "[%s] req=USB_REQUEST_CLEAR_FEATURE(Device)";
        goto LAB_1002d8e3c;
      }
    }
    bVar6 = *(long *)(param_1[0x18] + 0x10) == 0;
    goto LAB_1002d8e57;
  default:
    goto switchD_1002d880c_caseD_2;
  case 3:
    if (param_3 != 2) {
      return 1;
    }
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] req=USB_REQUEST_SET_FEATURE",(long)param_1 + 0xcf);
    }
    if ((((*(byte *)((long)param_1 + 0xf7) & 0x1f) == 0) && (*(short *)((long)param_1 + 0xf9) == 1))
       && ((*(byte *)((long)param_1 + 0x92) & 2) == 0)) goto LAB_1002d8970;
    if (((*(byte *)((long)param_1 + 0xf7) == 2) &&
        (*(undefined4 *)(param_2 + 0x46c) = 0xe000404f, *(short *)((long)param_1 + 0xf9) == 0)) &&
       ((*(short *)((long)param_1 + 0xfb) != 0 &&
        ((lVar2 = *(long *)(param_1[0x18] + 0x40 + (ulong)(byte)*(short *)((long)param_1 + 0xfb) * 8
                           ), lVar2 != 0 && ((*(byte *)(lVar2 + 0xcb) & 3) != 1)))))) {
      *(undefined4 *)(lVar2 + 0xbc) = 1;
      *(undefined4 *)(param_2 + 0x46c) = 0;
    }
    goto LAB_1002d8b10;
  case 5:
    if (param_3 != 2) {
      return 1;
    }
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] req=USB_REQUEST_SET_ADDRESS",(long)param_1 + 0xcf);
    }
    if (*(char *)((long)param_1 + 0xf7) == '\0') {
      FUN_1002d4610(param_1[0x18],*(undefined2 *)((long)param_1 + 0xf9));
      _snprintf((char *)((long)param_1 + 0xcf),0x28,"%s:%02x.%02x%c",param_1[0x18] + 0x838,
                (ulong)*(byte *)(param_1[0x18] + 0x1c),(ulong)*(byte *)((long)param_1 + 0xca),
                CONCAT44(uVar7,(int)"csbi"[(ulong)*(byte *)((long)param_1 + 0xcb) & 3]));
      *(undefined1 *)((long)param_1 + 0xf6) = 0;
      if (DAT_1011c568c < 1) {
        return 1;
      }
      FUN_1008e3970("","USB",0,"[%s] USB_REQUEST_SET_ADDRESS %x",(char *)((long)param_1 + 0xcf),
                    *(undefined2 *)((long)param_1 + 0xf9));
      return 1;
    }
    if (DAT_1011c568c < 1) goto LAB_1002d8970;
    pcVar5 = "[%s] ControlHTDStandardRequest, Unknown USB_REQUEST_SET_ADDRESS(0x%04X)";
    break;
  case 7:
    if (param_3 != 1) {
      return 1;
    }
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] req=USB_REQUEST_SET_DESCRIPTOR",(long)param_1 + 0xcf);
    }
LAB_1002d8b10:
    bVar6 = true;
LAB_1002d8e57:
    uVar4 = FUN_1002d90c0(param_1,param_2,bVar6);
    return uVar4;
  case 9:
    if (param_3 != 2) {
      return 1;
    }
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] req=USB_REQUEST_SET_CONFIGURATION",(long)param_1 + 0xcf);
    }
    if (*(char *)((long)param_1 + 0xf7) == '\0') {
      iVar3 = FUN_1002d6230(param_1[0x18],*(undefined2 *)((long)param_1 + 0xf9));
      if (iVar3 != 0) {
        return 1;
      }
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] Failed USB_REQUEST_SET_CONFIGURATION(0x%04X)",
                      (long)param_1 + 0xcf,*(undefined2 *)((long)param_1 + 0xf9));
      }
      if (*(short *)((long)param_1 + 0xf9) == 0) {
        return 1;
      }
      *(undefined4 *)(param_2 + 0x468) = 7;
      return 1;
    }
    if (DAT_1011c568c < 3) goto LAB_1002d8970;
    pcVar5 = "[%s] UNKNOWN USB_REQUEST_SET_CONFIGURATION(0x%02X)";
    break;
  case 0xb:
    if (param_3 != 2) {
      return 1;
    }
    if (1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] req=USB_REQUEST_SET_INTERFACE",(long)param_1 + 0xcf);
    }
    if (*(char *)((long)param_1 + 0xf7) == '\x01') {
      iVar3 = FUN_1002d6370(param_1[0x18],*(undefined2 *)((long)param_1 + 0xfb),
                            *(undefined2 *)((long)param_1 + 0xf9),0);
      if (iVar3 != 0) {
        return 1;
      }
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] Failed USB_REQUEST_SET_INTERFACE(0x%04X,0x%04X)",
                      (long)param_1 + 0xcf,*(undefined2 *)((long)param_1 + 0xfb),
                      CONCAT44(uVar7,(uint)*(ushort *)((long)param_1 + 0xf9)));
      }
      *(undefined4 *)(param_2 + 0x468) = 7;
      return 1;
    }
    if (DAT_1011c568c < 2) goto LAB_1002d8970;
    pcVar5 = "[%s] ControlHTDStandardRequest, req=UNKNOWN USB_REQUEST_SET_INTERFACE(0x%02X)";
  }
  FUN_1008e3970("","USB",0,pcVar5,(long)param_1 + 0xcf);
LAB_1002d8970:
  *(undefined4 *)(param_2 + 0x468) = 4;
  return 1;
}

