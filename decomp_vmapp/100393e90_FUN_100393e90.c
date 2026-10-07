
void FUN_100393e90(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  char *pcVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  puVar2 = *(uint **)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  uVar1 = *puVar2;
  lVar8 = *(long *)(lVar3 + 0xc0);
  uVar6 = 0;
  uVar7 = uVar1;
  if (*(long *)(lVar3 + 200) != lVar8) {
    uVar7 = 1;
    puVar5 = puVar2;
    while( true ) {
      pcVar4 = "in";
      if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
        pcVar4 = "attribute";
      }
      FUN_10038e8e0(puVar5,"%s vec4 ",pcVar4);
      FUN_10036bf10(*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(lVar8 + uVar6 * 3),
                    *(undefined1 *)(lVar8 + 1 + uVar6 * 3));
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),";\n");
      uVar6 = (ulong)uVar7;
      lVar8 = *(long *)(lVar3 + 0xc0);
      if ((ulong)((*(long *)(lVar3 + 200) - lVar8) * -0x5555555555555555) <= uVar6) break;
      puVar5 = *(uint **)(param_1 + 0x28);
      uVar7 = uVar7 + 1;
    }
    uVar7 = *puVar2;
  }
  if (uVar1 < uVar7) {
    FUN_10038e8e0(puVar2,"\n");
    return;
  }
  return;
}

