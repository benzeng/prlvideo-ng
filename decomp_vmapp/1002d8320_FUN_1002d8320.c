
ulong FUN_1002d8320(long param_1,long param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  char *pcVar7;
  size_t sVar8;
  undefined2 local_38;
  undefined2 local_36;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  
  *(undefined4 *)(param_2 + 0x454) = 0;
  *(undefined4 *)(param_2 + 0x46c) = 0;
  *(undefined4 *)(param_2 + 0x468) = 0;
  bVar1 = *(byte *)(param_1 + 0xf8);
  if (5 < bVar1) {
    switch(bVar1) {
    case 6:
      if (param_3 != 1) {
        return 1;
      }
      if (2 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] req=USB_REQUEST_GET_DESCRIPTOR",param_1 + 0xcf);
      }
      if (*(ushort *)(param_1 + 0xf9) == 0x100) {
        if (0x12 < *(uint *)(param_2 + 0x43c)) {
          *(undefined4 *)(param_2 + 0x43c) = 0x12;
        }
LAB_1002d860d:
        if ((*(byte *)(param_1 + 0x92) & 4) != 0) {
          pcVar6 = FUN_1002d91b0;
LAB_1002d8622:
          *(code **)(param_2 + 0x478) = pcVar6;
        }
      }
      else {
        uVar3 = *(ushort *)(param_1 + 0xf9) & 0xff00;
        if ((short)uVar3 < 0xf00) {
          if ((short)uVar3 < 0x600) {
            if (uVar3 == 0x100) goto LAB_1002d860d;
            if ((uVar3 == 0x200) &&
               (((*(uint *)(param_1 + 0x90) & 0x20000) == 0 ||
                ((*(uint *)(param_1 + 0x90) & 0x40000) != 0 || DAT_1011c567c != 0)))) {
              pcVar6 = FUN_1002d9220;
              goto LAB_1002d8622;
            }
          }
          else if (uVar3 == 0x600) {
            if ((*(byte *)(param_1 + 0x92) & 4) != 0) {
              if (*(int *)(param_2 + 0x468) != 0) {
                return 1;
              }
              lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x30);
              local_38 = 0x60a;
              local_36 = *(undefined2 *)(lVar2 + 2);
              local_34 = *(undefined1 *)(lVar2 + 4);
              local_33 = *(undefined1 *)(lVar2 + 5);
              local_32 = *(undefined1 *)(lVar2 + 6);
              local_31 = *(undefined1 *)(lVar2 + 7);
              local_30 = *(undefined1 *)(lVar2 + 0x11);
              local_2f = 0;
              if (0 < DAT_1011c568c) {
                FUN_1008e3970("","USB",0,"Emulate usb2 device qualifier descriptor (bcd:%04x sz:%d)"
                             );
              }
              uVar5 = (ulong)*(uint *)(param_2 + 0x43c);
              sVar8 = 10;
              if (uVar5 < 0xb) {
                sVar8 = uVar5;
              }
              uVar4 = 10;
              if (uVar5 < 0xb) {
                uVar4 = *(uint *)(param_2 + 0x43c);
              }
              _memcpy((void *)(param_2 + 0x4d8),&local_38,sVar8);
              *(uint *)(param_2 + 0x454) = uVar4;
              return 1;
            }
          }
          else if ((uVar3 == 0x700) && ((*(byte *)(param_1 + 0x92) & 8) == 0)) {
            *(undefined4 *)(param_2 + 0x468) = 4;
            return 1;
          }
        }
        else if ((uVar3 == 0xf00) && ((*(byte *)(param_1 + 0x92) & 4) != 0)) {
          *(undefined4 *)(param_2 + 0x468) = 4;
          return 1;
        }
      }
      uVar4 = FUN_1002d90c0(param_1,param_2,1);
      if (uVar4 == 0) {
        return 0;
      }
      pcVar6 = *(code **)(param_2 + 0x478);
      if (pcVar6 == (code *)0x0) {
        return (ulong)uVar4;
      }
LAB_1002d8799:
      (*pcVar6)(param_2);
      return (ulong)uVar4;
    default:
      goto switchD_1002d8403_caseD_7;
    case 8:
      if (param_3 != 1) {
        return 1;
      }
      if (DAT_1011c568c < 3) goto LAB_1002d858e;
      pcVar7 = "[%s] req=USB_REQUEST_GET_CONFIGURATION";
      break;
    case 10:
      if (param_3 != 1) {
        return 1;
      }
      if (DAT_1011c568c < 3) goto LAB_1002d858e;
      pcVar7 = "[%s] req=USB_REQUEST_GET_INTERFACE";
      break;
    case 0xc:
      if (2 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] req=USB_REQUEST_SYNC_FRAME",param_1 + 0xcf);
      }
      goto LAB_1002d84ad;
    }
    FUN_1008e3970("","USB",0,pcVar7,param_1 + 0xcf);
LAB_1002d858e:
    uVar5 = FUN_1002d90c0(param_1,param_2,1);
    return uVar5;
  }
  if (bVar1 == 0) {
    if (param_3 != 1) {
      return 1;
    }
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] req=USB_REQUEST_GET_STATUS",param_1 + 0xcf);
    }
    if (*(byte *)(param_1 + 0xf7) == 0x82) {
      if (*(short *)(param_1 + 0xfb) == 0) {
        *(undefined2 *)(param_2 + 0x4d8) = 0;
        *(undefined4 *)(param_2 + 0x454) = 2;
        return 1;
      }
    }
    else if (((*(byte *)(param_1 + 0xf7) & 0x1f) == 0) && ((*(byte *)(param_1 + 0x92) & 2) == 0)) {
      *(code **)(param_2 + 0x478) = FUN_1002d90a0;
    }
    uVar4 = FUN_1002d90c0(param_1,param_2,1);
    if (uVar4 == 0) {
      return 0;
    }
    pcVar6 = *(code **)(param_2 + 0x478);
    if (pcVar6 == (code *)0x0) {
      return (ulong)uVar4;
    }
    goto LAB_1002d8799;
  }
switchD_1002d8403_caseD_7:
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] ControlDTHStandardRequest unkn req=0x%02X",param_1 + 0xcf);
  }
LAB_1002d84ad:
  *(undefined4 *)(param_2 + 0x468) = 4;
  return 1;
}

