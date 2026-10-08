
undefined8 * FUN_100a23f10(undefined8 *param_1,long param_2,char param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 local_2d;
  undefined4 local_2c;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_3 != '\0') {
    local_2c = 1;
    if (*(long *)(param_2 + 0x10) != 0) {
      local_2c = (undefined4)*(long *)(param_2 + 0x10);
    }
    FUN_100a28930(param_1,0,&local_2c,&stack0xffffffffffffffd8);
  }
  lVar3 = *(long *)(param_2 + 8);
  if (lVar3 != param_2) {
    do {
      if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
        lVar2 = lVar3 + 0x11;
        uVar1 = (ulong)(*(byte *)(lVar3 + 0x10) >> 1);
      }
      else {
        uVar1 = *(ulong *)(lVar3 + 0x18);
        lVar2 = *(long *)(lVar3 + 0x20);
      }
      FUN_100a28b50(param_1,param_1[1],lVar2,lVar2 + uVar1);
      local_2d = 0;
      if ((undefined1 *)param_1[1] == (undefined1 *)param_1[2]) {
        FUN_100a2ad30(param_1,&local_2d);
      }
      else {
        *(undefined1 *)param_1[1] = 0;
        param_1[1] = param_1[1] + 1;
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != param_2);
  }
  return param_1;
}

