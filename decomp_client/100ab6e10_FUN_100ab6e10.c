
undefined8 FUN_100ab6e10(long *param_1,long param_2,uint param_3)

{
  char cVar1;
  ulong in_RAX;
  uint uVar2;
  ulong uVar3;
  undefined8 uStack_38;
  
  if (param_3 != 0) {
    uVar3 = 0;
    uStack_38 = in_RAX;
    do {
      uStack_38 = uStack_38 & 0xffffffff;
      cVar1 = (**(code **)(**(long **)(*param_1 + 0x10) + 0x10))
                        (*(long **)(*param_1 + 0x10),uVar3 + param_2,param_3 - (int)uVar3,
                         (long)&uStack_38 + 4);
      if (cVar1 == '\0') {
        return 0;
      }
      uVar2 = (int)uVar3 + uStack_38._4_4_;
      uVar3 = (ulong)uVar2;
    } while (uVar2 < param_3);
  }
  return 1;
}

