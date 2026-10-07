
undefined8 FUN_1008d3640(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_100821ab0(*(undefined8 *)(param_2 + 0x18));
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
      lVar2 = FUN_1008afdf0(4);
      *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x10) + 0x10) = lVar2;
      break;
    }
    goto LAB_1008d36e1;
  case 0x18:
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x28) + 0x10);
    if (lVar2 != 0) goto LAB_1008d36e1;
    lVar2 = FUN_1008afdf0(4);
    *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x28) + 0x10) = lVar2;
    break;
  default:
    goto switchD_1008d3676_default;
  }
  if (lVar2 != 0) {
LAB_1008d36e1:
    *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) | 0x10;
    *param_1 = lVar2 + 8;
    uVar3 = 1;
  }
switchD_1008d3676_default:
  return uVar3;
}

