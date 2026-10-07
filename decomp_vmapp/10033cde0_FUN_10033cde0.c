
void FUN_10033cde0(long param_1,undefined8 *param_2,ulong param_3,ulong param_4,undefined4 param_5,
                  undefined4 param_6)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) != 0) {
      FUN_10035bdc0(*(undefined8 *)(*(long *)(param_1 + 48000) + 8));
      return;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = param_5;
    *(undefined4 *)((long)param_2 + 0xc) = param_6;
    uVar2 = (uint)param_4;
    if (uVar2 == 0) {
      FUN_10035c0d0(*(undefined8 *)(*(long *)(param_1 + 48000) + 8),*param_2);
      return;
    }
    for (puVar1 = *(uint **)(*(long *)(param_1 + 0xbb88) + 0x8068 +
                            (ulong)(((uint)(param_4 >> 0xc) & 0xfffff ^ uVar2) & 0xfff ^
                                   (uint)(param_4 >> 0x18) & 0xff) * 8); puVar1 != (uint *)0x0;
        puVar1 = *(uint **)(puVar1 + 4)) {
      if (*puVar1 == uVar2) {
        if (*(long *)(puVar1 + 2) == 0) {
          return;
        }
        FUN_10035ca80(*(undefined8 *)(*(long *)(param_1 + 48000) + 8),
                      *(undefined8 *)(*(long *)(puVar1 + 2) + 8),param_6);
        return;
      }
    }
  }
  return;
}

