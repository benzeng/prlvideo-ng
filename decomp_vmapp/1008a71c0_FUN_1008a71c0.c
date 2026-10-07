
undefined8
FUN_1008a71c0(long *param_1,int *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
             long *param_6,long param_7,int param_8,int param_9,char param_10,char *param_11)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  long local_48;
  long local_40;
  int local_38;
  int local_34;
  
  lVar1 = *param_6;
  local_48 = lVar1;
  if (param_11 == (char *)0x0) {
    uVar2 = FUN_1008af630(&local_48,&local_40,&local_34,&local_38,param_7);
  }
  else if (*param_11 == '\0') {
    uVar2 = FUN_1008af630(&local_48,&local_40,&local_34,&local_38,param_7);
    *(uint *)(param_11 + 4) = uVar2;
    *(long *)(param_11 + 8) = local_40;
    *(int *)(param_11 + 0x14) = local_38;
    *(int *)(param_11 + 0x10) = local_34;
    iVar4 = (int)local_48 - (int)lVar1;
    *(int *)(param_11 + 0x18) = iVar4;
    *param_11 = '\x01';
    if (((uVar2 & 0x81) == 0) && (param_7 < iVar4 + local_40)) {
      FUN_100887ce0(0xd,0x68,0x9b,"tasn_dec.c",0x49d);
      *param_11 = '\0';
      return 0;
    }
  }
  else {
    uVar2 = *(uint *)(param_11 + 4);
    local_40 = *(long *)(param_11 + 8);
    local_38 = *(int *)(param_11 + 0x14);
    local_34 = *(int *)(param_11 + 0x10);
    local_48 = *(int *)(param_11 + 0x18) + lVar1;
  }
  if ((uVar2 & 0x80) == 0) {
    if (-1 < param_8) {
      if ((local_34 != param_8) || (local_38 != param_9)) {
        if (param_10 != '\0') {
          return 0xffffffff;
        }
        if (param_11 != (char *)0x0) {
          *param_11 = '\0';
        }
        FUN_100887ce0(0xd,0x68,0xa8,"tasn_dec.c",0x4b1);
        return 0;
      }
      if (param_11 != (char *)0x0) {
        *param_11 = '\0';
      }
    }
    if ((uVar2 & 1) != 0) {
      local_40 = (lVar1 + param_7) - local_48;
    }
    if (param_4 != (byte *)0x0) {
      *param_4 = (byte)uVar2 & 1;
    }
    if (param_5 != (byte *)0x0) {
      *param_5 = (byte)uVar2 & 0x20;
    }
    if (param_1 != (long *)0x0) {
      *param_1 = local_40;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = (undefined1)local_38;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = local_34;
    }
    *param_6 = local_48;
    uVar3 = 1;
  }
  else {
    FUN_100887ce0(0xd,0x68,0x66,"tasn_dec.c",0x4a5);
    uVar3 = 0;
    if (param_11 != (char *)0x0) {
      *param_11 = '\0';
    }
  }
  return uVar3;
}

