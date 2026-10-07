
ulong * FUN_10042abb0(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  
  puVar5 = (ulong *)0x0;
  if (param_2 != 0) {
    uVar1 = *param_1;
    if ((param_1[2] == 0) || (uVar2 = param_1[3], uVar1 - uVar2 < param_2)) {
      uVar2 = (param_2 + 0xf + uVar1) / uVar1;
      puVar5 = (ulong *)0x0;
      puVar3 = (ulong *)_mmap(0,uVar1 * uVar2,3,0x1002,0xffffffff,0);
      if (puVar3 != (ulong *)0xffffffffffffffff) {
        *puVar3 = param_1[1];
        puVar3[1] = uVar2;
        param_1[1] = (ulong)puVar3;
        param_1[4] = param_1[4] + uVar2;
        puVar5 = (ulong *)0x0;
        if (puVar3 != (ulong *)0x0) {
          uVar1 = *param_1;
          uVar4 = ((param_2 + 0x10 + uVar1) - uVar1 * uVar2) % uVar1;
          param_1[3] = uVar4;
          puVar5 = (ulong *)0x0;
          if (uVar4 != 0) {
            puVar5 = (ulong *)(uVar1 * (uVar2 - 1) + (long)puVar3);
          }
          param_1[2] = (ulong)puVar5;
          puVar5 = puVar3 + 2;
        }
      }
    }
    else {
      puVar5 = (ulong *)(param_1[2] + uVar2);
      param_1[3] = param_2 + uVar2;
      if (param_2 + uVar2 == uVar1) {
        param_1[3] = 0;
        param_1[2] = 0;
      }
    }
  }
  return puVar5;
}

