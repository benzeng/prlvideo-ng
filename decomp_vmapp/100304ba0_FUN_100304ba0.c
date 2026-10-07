
void FUN_100304ba0(long param_1,int param_2,long param_3)

{
  uint uVar1;
  ulong in_RAX;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_38;
  
  if (0 < param_2) {
    lVar6 = 0;
    uStack_38 = in_RAX;
    do {
      uVar1 = *(uint *)(param_3 + lVar6 * 4);
      uVar7 = (ulong)uVar1;
      uVar3 = 0x20;
      uVar4 = uVar7;
      if (*(uint *)(param_1 + 0x25c8) < 0x20) {
        do {
          uVar3 = uVar3 >> 1;
          uVar4 = (ulong)((uint)uVar4 ^ (uint)uVar4 >> (sbyte)uVar3);
        } while (*(uint *)(param_1 + 0x25c8) < (uint)uVar3);
      }
      for (puVar2 = *(uint **)(param_1 + 0x1dc8 + (uVar4 & 0xff) * 8); puVar2 != (uint *)0x0;
          puVar2 = *(uint **)(puVar2 + 2)) {
        if (*puVar2 == uVar1) {
          uStack_38 = CONCAT44(puVar2[1],(undefined4)uStack_38);
          if (puVar2[1] != 0) {
            if (uVar1 == *(uint *)(param_1 + 0x25d0)) {
              *(undefined4 *)(param_1 + 0x25d0) = 0;
            }
            else if (uVar1 == *(uint *)(param_1 + 0x25dc)) {
              *(undefined4 *)(param_1 + 0x25dc) = 0;
            }
            else if (uVar1 == *(uint *)(param_1 + 0x25e0)) {
              *(undefined4 *)(param_1 + 0x25e0) = 0;
            }
            else if (uVar1 == *(uint *)(param_1 + 0x25e4)) {
              *(undefined4 *)(param_1 + 0x25e4) = 0;
            }
            FUN_1003061a0(param_1,uVar7,0);
            (*(code *)DAT_1011c4a88[0x27c])(*DAT_1011c4a88,1,(long)&uStack_38 + 4);
          }
          goto LAB_100304cc0;
        }
      }
      uStack_38 = uStack_38 & 0xffffffff;
LAB_100304cc0:
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while (iVar5 != param_2 + -1);
  }
  return;
}

