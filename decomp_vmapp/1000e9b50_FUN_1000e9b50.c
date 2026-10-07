
uint * FUN_1000e9b50(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)0x0;
  if (*param_1 + param_3 <= param_1[1]) {
    LOCK();
    uVar2 = *param_1;
    *param_1 = *param_1 + param_3;
    UNLOCK();
    puVar1 = (uint *)0x0;
    if (*param_1 <= param_1[1]) {
      puVar1 = param_1 + (ulong)uVar2 * 0x10 + 8;
      if ((short)param_3 != 0) {
        param_1 = param_1 + (ulong)uVar2 * 0x10 + 0xd;
        uVar2 = 0;
        do {
          param_1[-5] = param_2;
          *(short *)((long)param_1 + -0xe) = (short)uVar2;
          *(undefined2 *)(param_1 + -4) = 0;
          param_1[-1] = param_4;
          *param_1 = param_5;
          param_1[-2] = param_6;
          uVar2 = uVar2 + 1;
          param_1 = param_1 + 0x10;
        } while ((param_3 & 0xffff) != uVar2);
      }
    }
  }
  return puVar1;
}

