
undefined8 FUN_1003e2930(long *param_1)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulong uStack_20;
  
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar2 = *(uint *)(param_1 + 0x19), uVar2 == 0xffffffff)) {
    uVar2 = (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                           (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
  }
  local_28 = 0;
  uStack_30 = 0;
  uVar1 = *(uint *)(param_1 + 0x13);
  uStack_20 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                     uVar1 << 0x18);
  local_38 = 0x2040001011e00;
  sVar3 = (size_t)(uVar2 & 0xffff);
  if (0x20 < (uVar2 & 0xffff)) {
    sVar3 = 0x20;
  }
  _memcpy((void *)param_1[9],&local_38,sVar3);
  (**(code **)(*param_1 + 0x278))(param_1,sVar3,sVar3);
  return 0;
}

