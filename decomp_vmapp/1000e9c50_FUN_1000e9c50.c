
uint * FUN_1000e9c50(uint *param_1,long *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  
  puVar4 = (uint *)0x0;
  if ((*param_2 != 0) && (puVar4 = (uint *)0x0, *param_1 + 1 <= param_1[1])) {
    LOCK();
    uVar1 = *param_1;
    *param_1 = *param_1 + 1;
    UNLOCK();
    puVar4 = (uint *)0x0;
    if (*param_1 <= param_1[1]) {
      uVar5 = (ulong)uVar1;
      param_1[uVar5 * 0x10 + 8] = 0xfffffffe;
      *(undefined2 *)((long)param_1 + uVar5 * 0x40 + 0x26) = 0;
      *(undefined2 *)(param_1 + uVar5 * 0x10 + 9) = 0;
      param_1[uVar5 * 0x10 + 0xc] = param_3;
      param_1[uVar5 * 0x10 + 0xd] = param_3;
      param_1[uVar5 * 0x10 + 0xb] = param_4;
      LOCK();
      param_1[uVar5 * 0x10 + 10] = param_1[uVar5 * 0x10 + 10] + 1;
      UNLOCK();
      lVar2 = *(long *)(param_1 + uVar5 * 0x10 + 0x14);
      lVar3 = *param_2;
      if (lVar3 == 0) {
        *param_2 = lVar2;
      }
      else if (lVar2 == 0) {
        *(long *)(param_1 + uVar5 * 0x10 + 0x14) = lVar3;
      }
      else if (lVar3 != lVar2) {
        return (uint *)0x0;
      }
      puVar4 = param_1 + uVar5 * 0x10 + 8;
    }
  }
  return puVar4;
}

