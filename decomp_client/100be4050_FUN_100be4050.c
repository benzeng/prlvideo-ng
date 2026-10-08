
void FUN_100be4050(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_100be85e0(param_2);
  FUN_100be9b10(param_1,uVar3);
  if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1);
    lVar2 = *(long *)(param_2 + 8);
    *(long *)(param_1 + 8) = lVar2;
    (**(code **)(lVar2 + 8))(param_1);
  }
  lVar2 = *(long *)(param_1 + 0x100);
  uVar3 = 0;
  if (*(long *)(param_2 + 0x100) != 0) {
    FUN_100bf2cf0(*(long *)(param_2 + 0x100) + 0x120,1,0xd,"ssl_lib.c",0x377);
    uVar3 = *(undefined8 *)(param_2 + 0x100);
  }
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  if (lVar2 != 0) {
    FUN_100be7960(lVar2);
  }
  uVar1 = *(uint *)(param_2 + 0x108);
  if (0x20 < (ulong)uVar1) {
    FUN_100c62ee0(0x14,0xda,0x111,"ssl_lib.c",0x1a1);
    return;
  }
  *(uint *)(param_1 + 0x108) = uVar1;
  _memcpy((void *)(param_1 + 0x10c),(void *)(param_2 + 0x10c),(ulong)uVar1);
  return;
}

