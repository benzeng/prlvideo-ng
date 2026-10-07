
undefined8 FUN_10044db70(uint *param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1[2] != param_1[1] - 1) {
    iVar3 = param_3;
  }
  (**(code **)(param_1 + 0xc))
            (*(undefined8 *)(param_1 + 6),param_2,(ulong)*param_1,(ulong)*param_1 << 2,iVar3);
  puVar1 = param_1 + 0x12;
  param_1[0x24] = param_1[0x25];
  (**(code **)(param_1 + 0xe))
            (puVar1,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),*param_1);
  param_1[0x25] = param_1[0x24];
  param_1[0x24] = param_1[0x26];
  (**(code **)(param_1 + 0xe))
            (puVar1,*(long *)(param_1 + 4) + 1,*(long *)(param_1 + 6) + 1,*param_1 + 1 >> 1);
  param_1[0x26] = param_1[0x24];
  param_1[0x24] = param_1[0x27];
  (**(code **)(param_1 + 0xe))
            (puVar1,*(long *)(param_1 + 4) + 2,*(long *)(param_1 + 6) + 2,*param_1 + 1 >> 1);
  param_1[0x27] = param_1[0x24];
  uVar2 = 1;
  if (iVar3 != 0) {
    param_1[0x24] = param_1[0x25];
    (**(code **)(param_1 + 0xe))
              (puVar1,*(undefined8 *)(param_1 + 4),(ulong)*param_1 * 4 + *(long *)(param_1 + 6));
    param_1[0x25] = param_1[0x24];
    uVar2 = 2;
  }
  return uVar2;
}

