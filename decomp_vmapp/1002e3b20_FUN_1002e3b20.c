
int FUN_1002e3b20(long param_1,undefined1 param_2,byte param_3,short param_4,uint param_5,
                 undefined8 *param_6,uint *param_7)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  if (1 < (param_5 & 0xfe)) {
    return 0x20;
  }
  iVar1 = 0x20;
  if (param_3 < 0x81) {
    if (param_3 == 1) {
      iVar1 = FUN_1002e38c0(param_1,param_4,param_5 & 0xffff,param_6);
    }
  }
  else {
    switch(param_3) {
    case 0x81:
      if (param_5 == 1) {
        if (param_4 == 0x200) {
          *(undefined2 *)(param_6 + 3) = *(undefined2 *)(param_1 + 0x6c);
          param_6[2] = *(undefined8 *)(param_1 + 100);
          uVar2 = *(undefined8 *)(param_1 + 0x54);
          uVar4 = *(undefined8 *)(param_1 + 0x5c);
        }
        else {
          if (param_4 != 0x100) break;
          *(undefined2 *)(param_6 + 3) = *(undefined2 *)(param_1 + 0x52);
          param_6[2] = *(undefined8 *)(param_1 + 0x4a);
          uVar2 = *(undefined8 *)(param_1 + 0x3a);
          uVar4 = *(undefined8 *)(param_1 + 0x42);
        }
        param_6[1] = uVar4;
        *param_6 = uVar2;
        return 0;
      }
      if (param_5 == 0) {
        *(undefined1 *)param_6 = 6;
        return 0;
      }
      break;
    case 0x82:
    case 0x87:
      if ((param_4 == 0x100) && ((param_5 & 0xffff) == 1)) {
        uVar3 = 0x1a;
        if (*param_7 < 0x1a) {
          uVar3 = *param_7;
        }
        *param_7 = uVar3;
        pvVar5 = (void *)((ulong)*(byte *)(param_1 + 0x3d) * 0x34 + -0x34 +
                         *(long *)(param_1 + 0x90));
LAB_1002e3c51:
        _memcpy(param_6,pvVar5,(ulong)uVar3);
        return 0;
      }
      break;
    case 0x83:
      if ((param_4 == 0x100) && ((param_5 & 0xffff) == 1)) {
        uVar3 = 0x1a;
        if (*param_7 < 0x1a) {
          uVar3 = *param_7;
        }
        *param_7 = uVar3;
        pvVar5 = (void *)((ulong)*(byte *)(param_1 + 0x3d) * 0x34 + -0x1a +
                         *(long *)(param_1 + 0x90));
        goto LAB_1002e3c51;
      }
      break;
    case 0x86:
      if ((param_5 & 0xffff) == 0x300) {
        *(undefined1 *)param_6 = 5;
        return 0;
      }
    }
  }
  if ((iVar1 != 0) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"USB_UVC: unsupported request %02x %02x %04x %04x %d",param_2,param_3,
                  param_4,param_5,*param_7);
  }
  return iVar1;
}

