
undefined8 FUN_1002d0a00(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar2 = *(uint *)(param_2 + 0xc);
  uVar4 = uVar2 >> 0x18;
  param_3[1] = 0;
  *param_3 = 0;
  *(uint *)((long)param_3 + 0xc) = uVar4 << 0x18 | 0x8400;
  *(undefined4 *)(param_3 + 1) = 0x13000000;
  if ((byte)((char)(uVar2 >> 0x18) - 1U) < 0x20) {
    lVar3 = (ulong)uVar4 * 0x510;
    cVar1 = *(char *)(param_1 + 0x1b18 + lVar3);
    if (cVar1 != -1) {
      if (cVar1 == '\0') goto LAB_1002d0a6f;
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_10008d2d0(&local_48,*(undefined8 *)(param_1 + 0x1b10 + lVar3),0x400);
      local_48[1] = local_48[1] & 0x7ffffffffffffff;
      *local_48 = *local_48;
      FUN_10008d3f0(&local_48);
    }
    *(undefined1 *)(param_1 + 0x1b18 + lVar3) = 0;
    *(undefined1 *)((long)param_3 + 0xb) = 1;
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[XHC][SLOT%d] Disbale Slot -> ok",uVar4);
    }
  }
  else {
LAB_1002d0a6f:
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[XHC][SLOT%d][EP%d] Invalid slot/ep state",(ulong)uVar4,0xff);
    }
  }
  return 0x2c00;
}

