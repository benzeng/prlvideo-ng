
void FUN_10039e680(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = *param_2;
  if (uVar2 != 0) {
    uVar4 = 0;
    lVar3 = 0x10;
    do {
      lVar1 = *(long *)(param_2 + 4);
      if (*(long *)(lVar1 + -8 + lVar3) == param_1) {
        *(undefined8 *)(lVar1 + -8 + lVar3) = 0;
        (*DAT_1011c56a0)(uVar4 + 0x84c0);
        (*DAT_1011c5768)(*(undefined4 *)
                          (*(long *)(*(long *)(param_1 + 0x40) + (ulong)*(uint *)(lVar1 + lVar3) * 8
                                    ) + 0x14),0);
        uVar2 = *param_2;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < uVar2);
  }
  return;
}

