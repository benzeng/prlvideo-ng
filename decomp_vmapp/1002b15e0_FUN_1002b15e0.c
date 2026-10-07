
undefined8
FUN_1002b15e0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(DAT_1011c3698 + 0x1938);
  uVar2 = (ulong)*(uint *)(lVar1 + 0x3cecc);
  if (uVar2 == 0x10) {
    FUN_1008e3970("","LocalDevices",0,"[VGPU] not enougth region_reqs");
    return 2;
  }
  *(uint *)(lVar1 + 0x3cecc) = *(uint *)(lVar1 + 0x3cecc) + 1;
  *(undefined4 *)(lVar1 + 0x3ced0 + uVar2 * 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x3ced8 + uVar2 * 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x3cee0 + uVar2 * 0x28) = param_2;
  *(undefined8 *)(lVar1 + 0x3cee8 + uVar2 * 0x28) = param_3;
  *(undefined4 *)(lVar1 + 0x3cef0 + uVar2 * 0x28) = param_4;
  return 0;
}

