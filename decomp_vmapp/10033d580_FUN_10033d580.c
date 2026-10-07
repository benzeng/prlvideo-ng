
void FUN_10033d580(long param_1,uint param_2,uint param_3,void *param_4)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  _memcpy((void *)(param_1 + 0x9a70 + (ulong)param_2 * 4),param_4,(ulong)param_3 << 2);
  lVar2 = **(long **)(param_1 + 400);
  uVar3 = *(ulong *)(param_1 + 0x188) | *(ulong *)(lVar2 + 0x3030);
  *(ulong *)(param_1 + 0x188) = uVar3;
  param_3 = param_3 + param_2;
  if (*(uint *)(param_1 + 0xbb00) * 4 <= param_3) {
    uVar5 = param_3 >> 2;
    if (uVar5 != 0) {
      uVar4 = (param_3 & 0xfffffffc) - 2;
      do {
        fVar1 = *(float *)(param_1 + 0x9a70 + (ulong)(uVar4 - 2) * 4);
        if (((((fVar1 != 0.0) || (NAN(fVar1))) ||
             (fVar1 = *(float *)(param_1 + 0x9a70 + (ulong)(uVar4 - 1) * 4), fVar1 != 0.0)) ||
            ((NAN(fVar1) || (fVar1 = *(float *)(param_1 + 0x9a70 + (ulong)uVar4 * 4), fVar1 != 0.0))
            )) || ((NAN(fVar1) ||
                   ((fVar1 = *(float *)(param_1 + 0x9a70 + (ulong)(uVar4 + 1) * 4), fVar1 != 0.0 ||
                    (NAN(fVar1))))))) goto LAB_10033d65b;
        uVar5 = uVar5 - 1;
        uVar4 = uVar4 - 4;
      } while (uVar5 != 0);
    }
    uVar5 = 0;
LAB_10033d65b:
    if (*(uint *)(param_1 + 0xbb00) != uVar5) {
      *(ulong *)(param_1 + 0x188) = uVar3 | *(ulong *)(lVar2 + 0x3038);
    }
    *(uint *)(param_1 + 0xbb00) = uVar5;
  }
  return;
}

