
undefined8
FUN_10010fa30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  char cVar2;
  byte local_20 [8];
  
  param_4[4] = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  *(undefined4 *)((long)param_4 + 4) = 0xf8bfbff;
  *(undefined4 *)(param_4 + 1) = 0x66da320b;
  *(undefined4 *)((long)param_4 + 0x1c) = 0x807bb;
  *(undefined4 *)((long)param_4 + 0xc) = 0x21;
  *(undefined4 *)(param_4 + 2) = 0x28100800;
  *(undefined4 *)((long)param_4 + 0x14) = 0x100;
  bVar1 = FUN_1000ef0c0(0x20000);
  *(uint *)(param_4 + 3) = *(uint *)(param_4 + 3) & 0xffff0000 | (uint)bVar1 | 0x3000;
  *(undefined4 *)(param_4 + 4) = 1;
  cVar2 = FUN_10077c1b0(local_20);
  if ((cVar2 != '\0') && ((local_20[0] & 4) != 0)) {
    *(byte *)((long)param_4 + 0xb) = *(byte *)((long)param_4 + 0xb) | 0x10;
  }
  FUN_1000eef00(param_3,param_4,param_4);
  *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) | 0x1200000;
  *(undefined4 *)((long)param_4 + 0x24) = 0x55;
  return 0;
}

