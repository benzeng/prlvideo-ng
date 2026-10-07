
undefined8 FUN_1001140c0(undefined8 param_1,ulong param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  param_4[4] = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  *(undefined4 *)((long)param_4 + 4) = 0x829f9fd;
  *(undefined4 *)(param_4 + 1) = 0x4240a016;
  bVar2 = FUN_1000ef0c0(0x20000);
  *(uint *)(param_4 + 3) = *(uint *)(param_4 + 3) & 0xffff0000 | (uint)bVar2 | 0x3000;
  if ((param_2 & 3) == 1) {
    *(byte *)((long)param_4 + 0xc) = *(byte *)((long)param_4 + 0xc) | 1;
    uVar4 = *(uint *)(param_4 + 2) | 0x20000800;
    *(uint *)(param_4 + 2) = uVar4;
  }
  else {
    uVar4 = *(uint *)(param_4 + 2);
    if (*(int *)(param_3 + 0x86) == 2) {
      uVar4 = uVar4 | 0x800;
      *(uint *)(param_4 + 2) = uVar4;
    }
  }
  puVar3 = (uint *)(param_4 + 2);
  *puVar3 = uVar4 | 0x8100000;
  uVar6 = *(uint *)((long)param_4 + 4);
  uVar1 = *(uint *)(param_4 + 1);
  *(uint *)(param_4 + 1) = uVar1 | 0x34981201;
  uVar5 = uVar6 | 0x7820200;
  *(uint *)((long)param_4 + 4) = uVar5;
  *(byte *)(param_4 + 4) = *(byte *)(param_4 + 4) | 1;
  if ((param_2 & 3) == 1) {
    uVar5 = uVar6 | 0x7820202;
    *(uint *)((long)param_4 + 4) = uVar5;
  }
  if (*(int *)(param_3 + 0x86) == 2) {
    *puVar3 = uVar4 | 0xca500000;
    uVar6 = *(uint *)((long)param_4 + 0xc) | 0x1044;
    *(uint *)((long)param_4 + 0xc) = uVar6;
    *puVar3 = uVar5 & 0x183f3ff | uVar4 | 0xca500000;
  }
  else {
    uVar6 = *(uint *)((long)param_4 + 0xc);
  }
  *(uint *)((long)param_4 + 0xc) = uVar6 | 0x20;
  *(byte *)((long)param_4 + 0x15) = *(byte *)((long)param_4 + 0x15) | 1;
  *(uint *)(param_4 + 1) = uVar1 | 0x34981229;
  *(undefined4 *)((long)param_4 + 0x1c) = 0x803bb;
  if ((param_2 & 4) != 0) {
    *(uint *)(param_4 + 1) = uVar1 | 0x349a1229;
    *(undefined4 *)((long)param_4 + 0x1c) = 0x807bb;
  }
  FUN_1000eef00(param_3,param_4,param_4);
  *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) | 0x1200000;
  *(undefined4 *)((long)param_4 + 0x24) = 0x55;
  return 0;
}

