
void FUN_100547260(long param_1,long param_2,undefined8 param_3,char param_4,code *param_5,
                  long param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if ((*(int *)(param_1 + 0x40) == 2) && (param_4 == '\0')) {
    uVar1 = *(uint *)(param_1 + 0x38);
    if (uVar1 != 0) {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(param_1 + 0x30) + lVar4 * 4) == 0) {
          uVar2 = *(int *)(param_1 + 0x3c) << 5;
          lVar3 = (ulong)uVar2 * lVar4;
          uVar1 = (int)*(ulong *)(param_1 + 0x10) - (int)lVar3;
          if (lVar3 + (ulong)uVar2 <= *(ulong *)(param_1 + 0x10)) {
            uVar1 = uVar2;
          }
          (**(code **)(**(long **)(param_1 + 0x28) + 0x48))
                    (*(long **)(param_1 + 0x28),lVar3 + *(long *)(param_1 + 8),uVar1);
          uVar1 = *(uint *)(param_1 + 0x38);
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < uVar1);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (((ulong)param_5 & 1) != 0) {
      param_5 = *(code **)(param_5 + *(long *)(param_2 + param_6) + -1);
    }
    (*param_5)((long *)(param_2 + param_6),param_1,param_3);
    if (*(void **)(param_1 + 0x30) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 0x30));
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

