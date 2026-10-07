
void FUN_10039e590(long param_1,uint *param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *param_2;
  if (uVar2 != 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      lVar1 = *(long *)(param_2 + 2);
      if (*(long *)(lVar1 + lVar5) == param_1) {
        *(undefined8 *)(lVar1 + 8 + lVar5) = 0;
        *(undefined8 *)(lVar1 + lVar5) = 0;
        (*DAT_1011c56a0)((int)uVar4 + 0x84c0);
        (*DAT_1011c5768)(*(undefined4 *)
                          (*(long *)(*(long *)(param_1 + 0x40) +
                                    (ulong)(*(int *)(param_1 + 8) == 0x23) * 8) + 0x14),0);
        *(undefined8 *)(*(long *)(param_2 + 0x9c) + uVar4 * 8) = 0;
        if (*(char *)(DAT_1011c8478 + 0x84) != '\0') {
          (*DAT_1011c5760)(uVar4 & 0xffffffff);
        }
        lVar1 = *(long *)param_3[1];
        uVar3 = *param_3 | *(ulong *)(lVar1 + 0x3058);
        *param_3 = uVar3;
        *param_3 = uVar3 | *(ulong *)(lVar1 + 0x3070);
        uVar2 = *param_2;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((uint)uVar4 < uVar2);
  }
  return;
}

