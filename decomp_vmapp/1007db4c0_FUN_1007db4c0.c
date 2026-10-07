
ulong FUN_1007db4c0(uint *param_1,void *param_2,uint param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0xffffffea;
  if (((param_1 != (uint *)0x0) && (param_4 < *param_1)) && (param_3 <= *param_1)) {
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else if (((param_4 | param_3) & 7) == 0) {
      uVar3 = param_3 - param_4 >> 3;
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = (ulong)(param_4 >> 3) & 0xfff;
        pvVar4 = (void *)((ulong)uVar3 + (long)param_2);
        uVar6 = (ulong)(param_4 >> 0xf);
        uVar5 = 0x1000 - uVar2;
        do {
          if (pvVar4 < (void *)((long)param_2 + uVar5)) {
            uVar5 = (long)pvVar4 - (long)param_2;
          }
          lVar1 = *(long *)(param_1 + (uVar6 & 0xffffffff) * 2 + 2);
          if (lVar1 == 1) {
            _memset(param_2,0xff,uVar5 & 0xffffffff);
          }
          else if (lVar1 == 0) {
            ___bzero(param_2,uVar5 & 0xffffffff);
          }
          else {
            _memcpy(param_2,(void *)(lVar1 + uVar2 * 8),uVar5 & 0xffffffff);
          }
          param_2 = (void *)((long)param_2 + uVar5);
          uVar6 = uVar6 + 1;
          uVar2 = 0;
          uVar5 = 0x1000;
        } while (param_2 < pvVar4);
      }
    }
  }
  return uVar2;
}

