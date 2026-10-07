
void FUN_1003012b0(long param_1,int param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ulong in_RAX;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined8 uStack_38;
  
  if (0 < param_2) {
    lVar6 = 0;
    uStack_38 = in_RAX;
    do {
      uVar1 = *(uint *)(param_3 + lVar6 * 4);
      uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 0x828);
      uVar3 = 0x20;
      uVar7 = uVar1;
      if (uVar2 < 0x20) {
        do {
          uVar3 = uVar3 >> 1;
          uVar7 = uVar7 ^ uVar7 >> (sbyte)uVar3;
        } while (uVar2 < uVar3);
      }
      for (puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x28 + (ulong)(uVar7 & 0xff) * 8);
          puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
        if (*puVar4 == uVar1) {
          uStack_38 = CONCAT44(puVar4[1],(undefined4)uStack_38);
          if (puVar4[1] != 0) {
            (*(code *)DAT_1011c4a88[0x3c])(*DAT_1011c4a88,1,(long)&uStack_38 + 4);
            FUN_100305a80(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_3 + lVar6 * 4),0);
          }
          goto LAB_100301377;
        }
      }
      uStack_38 = uStack_38 & 0xffffffff;
LAB_100301377:
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 1;
    } while (iVar5 != param_2 + -1);
  }
  return;
}

