
void FUN_1002d77d0(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  
  uVar2 = FUN_1002d6ce0(*(undefined8 *)(param_1 + 0xc0));
  bVar1 = *(byte *)(param_1 + 0xce);
  bVar5 = *(byte *)(param_1 + 0xcb) & 3;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  if (bVar5 == 3) {
    if (bVar1 == 0) {
      if (DAT_1011c568c < 0) {
        return;
      }
      pcVar4 = "[%s] INT endpoint with zero bInterval";
LAB_1002d790b:
      FUN_1008e3970("","USB",0,pcVar4,param_1 + 0xcf);
      return;
    }
    if (1 < uVar2 - 2) {
      if (1 < uVar2) {
        if (DAT_1011c568c < 0) {
          return;
        }
        pcVar4 = "[%s] INT endpoint with unsupported speed";
        goto LAB_1002d790b;
      }
      iVar3 = (uint)bVar1 * 1000;
      goto LAB_1002d7840;
    }
LAB_1002d7837:
    iVar3 = 0x7d;
  }
  else {
    if (bVar5 != 1) {
      return;
    }
    if (bVar1 == 0) {
      if (DAT_1011c568c < 0) {
        return;
      }
      pcVar4 = "[%s] ISO endpoint with zero bInterval";
      goto LAB_1002d790b;
    }
    if (uVar2 - 2 < 2) goto LAB_1002d7837;
    if (uVar2 != 1) {
      if (DAT_1011c568c < 0) {
        return;
      }
      pcVar4 = "[%s] ISO endpoint with unsupported speed";
      goto LAB_1002d790b;
    }
    iVar3 = 1000;
  }
  iVar3 = iVar3 << (bVar1 - 1 & 0x1f);
LAB_1002d7840:
  *(int *)(param_1 + 0x108) = iVar3;
  return;
}

