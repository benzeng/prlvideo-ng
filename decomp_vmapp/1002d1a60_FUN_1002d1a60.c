
undefined8 FUN_1002d1a60(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_2 + 0xc);
  uVar3 = uVar2 >> 0x18;
  uVar4 = (ulong)uVar3;
  param_3[1] = 0;
  *param_3 = 0;
  *(uint *)((long)param_3 + 0xc) = uVar3 << 0x18 | 0x8400;
  *(undefined4 *)(param_3 + 1) = 0x13000000;
  if ((byte)((char)(uVar2 >> 0x18) - 1U) < 0x20) {
    if ((char)param_1[uVar4 * 0xa2 + 0x363] == -1) {
      if (DAT_1011c568c < 0) {
        return 0x2c00;
      }
      FUN_1008e3970("","USB",0,"[XHC][SLOT%d] Device Reset -> Invalid port state",uVar3);
      return 0x2c00;
    }
    if ((char)param_1[uVar4 * 0xa2 + 0x363] != '\0') {
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_10008d2d0(&local_48,param_1[uVar4 * 0xa2 + 0x362],0x400);
      (**(code **)(*param_1 + 0x58))(param_1,*(byte *)(param_1 + uVar4 * 0xa2 + 0x363) - 1);
      local_48[1] = local_48[1] & 0xffffff00ffffffff;
      *local_48 = *local_48;
      *local_48 = *local_48;
      local_48[1] = local_48[1] & 0x7ffffffffffffff | 0x800000000000000;
      uVar2 = 2;
      do {
        FUN_1002d2ca0(param_1,uVar3,uVar2 & 0xff,0);
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x1f);
      *(undefined1 *)((long)param_3 + 0xb) = 1;
      if (1 < DAT_1011c568c) {
        uVar1 = FUN_1002da2f0(local_48);
        FUN_1008e3970("","USB",0,"[XHC][SLOT%d] Device Reset %s",uVar3,uVar1);
      }
      FUN_10008d3f0(&local_48);
      return 0x2c00;
    }
  }
  if (-1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[XHC][SLOT%d][EP%d] Invalid slot/ep state",uVar3,0xff);
  }
  return 0x2c00;
}

