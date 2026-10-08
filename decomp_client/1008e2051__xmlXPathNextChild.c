
undefined8 _xmlXPathNextChild(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_28;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    local_28 = 0;
  }
  else if (param_2 == 0) {
    if (*(long *)(*(long *)(param_1 + 0x18) + 8) == 0) {
      local_28 = 0;
    }
    else {
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 8);
      if (uVar1 < 0x16) {
        uVar2 = 1L << ((byte)uVar1 & 0x3f);
        if ((uVar2 & 0x51fa) != 0) {
          return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x18);
        }
        if ((uVar2 & 0x202e00) != 0) {
          return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x18);
        }
        if ((uVar2 & 0x1f8004) != 0) {
          return 0;
        }
      }
      local_28 = 0;
    }
  }
  else if ((*(int *)(param_2 + 8) == 9) || (*(int *)(param_2 + 8) == 0xd)) {
    local_28 = 0;
  }
  else {
    local_28 = *(undefined8 *)(param_2 + 0x30);
  }
  return local_28;
}

