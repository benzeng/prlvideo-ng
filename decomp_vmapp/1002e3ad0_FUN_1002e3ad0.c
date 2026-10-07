
undefined8 FUN_1002e3ad0(long param_1,int param_2,short param_3,void *param_4,uint *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = 0x20;
  if ((param_2 == 0x100) && (param_3 == 1)) {
    uVar2 = 0x1a;
    if (*param_5 < 0x1a) {
      uVar2 = *param_5;
    }
    *param_5 = uVar2;
    _memcpy(param_4,(void *)((ulong)*(byte *)(param_1 + 0x3d) * 0x34 + -0x1a +
                            *(long *)(param_1 + 0x90)),(ulong)uVar2);
    uVar1 = 0;
  }
  return uVar1;
}

