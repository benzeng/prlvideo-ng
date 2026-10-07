
undefined8 FUN_100520a70(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = 0xf0000000;
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0x9120:
    uVar2 = FUN_10051f580(*(undefined8 *)(param_1 + 0x28));
    return uVar2;
  case 0x9121:
    uVar2 = FUN_1005202d0(*(undefined8 *)(param_1 + 0x28));
    return uVar2;
  case 0x9122:
    uVar2 = FUN_10051f900();
    return uVar2;
  case 0x9123:
    if (*(ushort *)(param_2 + 0x14) < 8) {
      return 0xf0000009;
    }
    lVar1 = *(long *)(param_1 + 0x28);
    puVar3 = (undefined8 *)FUN_1002a6010(param_2);
    *(undefined8 *)(lVar1 + 8) = *puVar3;
    FUN_1005204a0();
    break;
  case 0x9124:
    if (*(ushort *)(param_2 + 0x14) < 8) {
      return 0xf0000009;
    }
    lVar1 = *(long *)(param_1 + 0x28);
    puVar3 = (undefined8 *)FUN_1002a6010(param_2);
    *puVar3 = *(undefined8 *)(lVar1 + 8);
    break;
  default:
    goto switchD_100520a9a_default;
  }
  uVar2 = 0;
switchD_100520a9a_default:
  return uVar2;
}

