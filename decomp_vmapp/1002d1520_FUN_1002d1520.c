
undefined8 FUN_1002d1520(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long local_48 [2];
  undefined4 local_38;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  uVar5 = uVar1 >> 0x18;
  bVar2 = (byte)(uVar1 >> 0x10) & 0x1f;
  param_3[1] = 0;
  *param_3 = 0;
  *(uint *)((long)param_3 + 0xc) = uVar5 << 0x18 | 0x8400;
  *(undefined4 *)(param_3 + 1) = 0x13000000;
  if (((((char)(uVar1 >> 0x18) == '\0') || (0x20 < uVar5)) || ((uVar1 & 0x1f0000) == 0)) ||
     (lVar6 = (ulong)uVar5 * 0x510, *(char *)(param_1 + 0x1b18 + lVar6) == '\0')) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[XHC][SLOT%d][EP%d] Invalid slot/ep state",(ulong)uVar5,bVar2);
    }
  }
  else {
    iVar3 = FUN_1002d2ca0(param_1,uVar5,bVar2,3);
    if (iVar3 != 0) {
      *(undefined1 *)((long)param_3 + 0xb) = 1;
    }
    local_48[0] = 0;
    local_48[1] = 0;
    local_38 = 0;
    FUN_10008d2d0(local_48,*(undefined8 *)(param_1 + 0x1b10 + lVar6),0x400);
    if (1 < DAT_1011c568c) {
      uVar1 = *(uint *)(param_2 + 0xc);
      uVar4 = FUN_1002da3a0(local_48[0] + 0x20 + (long)(int)(bVar2 - 1) * 0x20);
      FUN_1008e3970("","USB",0,"[XHC][SLOT%d][EP%d] Endpoint Reset (TSP:%d) %s",uVar5,bVar2,
                    uVar1 >> 9 & 1,uVar4);
    }
    FUN_10008d3f0(local_48);
  }
  return 0x2c00;
}

