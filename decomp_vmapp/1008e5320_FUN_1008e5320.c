
undefined8 FUN_1008e5320(long *param_1,long *param_2)

{
  char cVar1;
  ulong in_RAX;
  uint uVar2;
  ulong uVar3;
  undefined8 local_28;
  
  local_28 = in_RAX;
  (**(code **)(*param_2 + 0x18))(param_2,&local_28);
  uVar3 = 0;
  do {
    local_28 = local_28 & 0xffffffff;
    cVar1 = (**(code **)(**(long **)(*param_1 + 0x10) + 0x10))
                      (*(long **)(*param_1 + 0x10),(long)&local_28 + uVar3,4 - (int)uVar3,
                       (long)&local_28 + 4);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar2 = (int)uVar3 + local_28._4_4_;
    uVar3 = (ulong)uVar2;
  } while (uVar2 < 4);
  return 1;
}

