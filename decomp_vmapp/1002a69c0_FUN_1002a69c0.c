
void FUN_1002a69c0(uint *param_1,undefined4 param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  
  uVar2 = param_1[0x10];
  if (uVar2 != 0) {
    puVar3 = param_1 + (ulong)(uVar2 - 1) * 8 + 0x18;
    do {
      if (*(long *)puVar3 != 0) {
        puVar1 = *(ulong **)(param_1 + 0xc);
        if ((*(byte *)((long)puVar1 + 0xc) & 1) != 0) {
          uVar4 = (ulong)puVar3[-2] + 8;
          if ((uVar4 <= (uint)puVar1[1]) && (3 < (uint)puVar1[1] - uVar4)) {
            uVar5 = (ulong)(uint)((int)*puVar1 + (int)uVar4) & 0xfff;
            if (3 < 0x1000 - uVar5) {
              *(undefined4 *)
               (*(long *)((long)puVar1 + ((*puVar1 & 0xfff) + uVar4 >> 8 & 0xfffffffffffff0) + 0x20)
               + uVar5) = *(undefined4 *)(*(long *)puVar3 + 0x10);
            }
          }
        }
      }
      puVar3 = puVar3 + -8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  pvVar6 = *(void **)(param_1 + 0xe);
  if (pvVar6 != (void *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0xc);
    if ((*(byte *)((long)puVar1 + 0xc) & 1) != 0) {
      uVar4 = (ulong)(param_1[4] + 0xfff + (*param_1 & 0xfff) >> 0xc) * 8 + 0x10;
      uVar5 = (uint)puVar1[1] - uVar4;
      if (uVar4 <= (uint)puVar1[1]) {
        uVar7 = uVar5 & 0xffffffff;
        if ((ushort)param_1[5] <= uVar5) {
          uVar7 = (ulong)(ushort)param_1[5];
        }
        if ((int)uVar7 != 0) {
          uVar4 = (*puVar1 & 0xfff) + uVar4;
          do {
            uVar2 = 0x1000 - (int)(uVar4 & 0xfff);
            uVar5 = (ulong)uVar2;
            if ((uint)uVar7 < uVar2) {
              uVar5 = uVar7;
            }
            _memcpy((void *)(*(long *)((long)puVar1 + (uVar4 >> 8 & 0xfffffffffffff0) + 0x20) +
                            (uVar4 & 0xfff)),pvVar6,uVar5);
            uVar4 = uVar4 + uVar5;
            pvVar6 = (void *)((long)pvVar6 + uVar5);
            uVar2 = (uint)uVar7 - (int)uVar5;
            uVar7 = (ulong)uVar2;
          } while (uVar2 != 0);
        }
      }
    }
  }
  puVar1 = *(ulong **)(param_1 + 0xc);
  if ((((*(byte *)((long)puVar1 + 0xc) & 1) != 0) && (3 < (uint)puVar1[1])) &&
     (((uint)puVar1[1] & 0xfffffffc) != 4)) {
    uVar4 = (ulong)((int)*puVar1 + 4) & 0xfff;
    if (3 < 0x1000 - uVar4) {
      *(undefined4 *)
       (*(long *)((long)puVar1 + ((*puVar1 & 0xfff) + 4 >> 8 & 0xfffffffffffff0) + 0x20) + uVar4) =
           param_2;
    }
  }
  FUN_1002a6200(param_1);
  operator_delete__(param_1);
  return;
}

