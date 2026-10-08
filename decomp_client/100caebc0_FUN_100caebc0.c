
undefined8 FUN_100caebc0(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_100bf7220(*(undefined8 *)(param_2 + 0x18));
  uVar3 = 0;
  switch(uVar1) {
  case 0x15:
    lVar2 = *(long *)(param_2 + 0x20);
    break;
  case 0x16:
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x28) + 0x20);
    break;
  case 0x17:
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x10) + 0x10);
    if (lVar2 == 0) {
      lVar2 = FUN_100c8b370(4);
      *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x10) + 0x10) = lVar2;
      break;
    }
    goto LAB_100caec61;
  case 0x18:
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x28) + 0x10);
    if (lVar2 != 0) goto LAB_100caec61;
    lVar2 = FUN_100c8b370(4);
    *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x28) + 0x10) = lVar2;
    break;
  default:
    goto switchD_100caebf6_default;
  }
  if (lVar2 != 0) {
LAB_100caec61:
    *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) | 0x10;
    *param_1 = lVar2 + 8;
    uVar3 = 1;
  }
switchD_100caebf6_default:
  return uVar3;
}

