
void FUN_1002db7e0(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  long *plVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0);
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (DAT_101116bca != 0) {
    uVar7 = 0;
    bVar5 = DAT_101116bca;
    do {
      iVar4 = (int)uVar7;
      if ((*(byte *)(param_1 + 0x3a + uVar7 * 4) & 1) == 0) {
        *(undefined2 *)(param_1 + 0x3a + uVar7 * 4) = 0x100;
        *(undefined2 *)(param_1 + 0x3c + uVar7 * 4) = 0;
      }
      else {
        plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x28);
        (**(code **)(*plVar3 + 0x58))(plVar3,(ulong)(iVar4 + 2));
        *(undefined2 *)(param_1 + 0x3a + uVar7 * 4) = 0x101;
        if (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x60 + (ulong)(iVar4 + 2) * 8) != 0
           ) {
          iVar6 = FUN_1002d6ce0();
          if (iVar6 == 0) {
            pbVar1 = (byte *)(param_1 + 0x3b + uVar7 * 4);
            *pbVar1 = *pbVar1 | 2;
          }
        }
        *(undefined2 *)(param_1 + 0x3c + uVar7 * 4) = 1;
        puVar2 = (uint *)(param_1 + 0xb8 + (ulong)(iVar4 + 1U >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)(iVar4 + 1U) & 0x1f);
        bVar5 = DAT_101116bca;
      }
      uVar7 = (ulong)(iVar4 + 1U);
    } while (iVar4 + 1U < (uint)bVar5);
  }
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[HUB] Reset finished");
  }
  FUN_1002ddc20(param_1);
  return;
}

