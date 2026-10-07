
undefined8 FUN_10034d220(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar6 = 9;
  if (0x2f < *(uint *)(param_2 + 4)) {
    uVar8 = *(uint *)(param_2 + 0x20);
    puVar7 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                       (ulong)((uVar8 >> 0xc ^ uVar8) & 0xfff ^ uVar8 >> 0x18) * 8);
    lVar9 = 0;
    if (puVar7 != (uint *)0x0) {
      lVar9 = 0;
      do {
        if (*puVar7 == uVar8) {
          lVar9 = *(long *)(puVar7 + 2);
          break;
        }
        puVar7 = *(uint **)(puVar7 + 4);
      } while (puVar7 != (uint *)0x0);
    }
    uVar8 = *(uint *)(param_2 + 8);
    uVar6 = 7;
    for (puVar7 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                            (ulong)((uVar8 >> 0xc ^ uVar8) & 0xfff ^ uVar8 >> 0x18) * 8);
        puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
      if (*puVar7 == uVar8) {
        if (lVar9 == 0) {
          return 7;
        }
        lVar1 = *(long *)(puVar7 + 2);
        if (lVar1 == 0) {
          return 7;
        }
        lVar2 = *(long *)(lVar9 + 8);
        lVar3 = *(long *)(lVar1 + 8);
        local_48 = 2;
        local_38 = 0;
        local_44 = 0;
        local_40 = 0x8e;
        local_50 = *(undefined4 *)(lVar2 + 0xc);
        local_4c = *(undefined4 *)(lVar2 + 0x10);
        local_58 = 0;
        local_54 = 0;
        local_68 = *(undefined4 *)(param_2 + 0x10);
        uStack_64 = *(undefined4 *)(param_2 + 0x14);
        uStack_60 = *(undefined4 *)(param_2 + 0x18);
        uStack_5c = *(undefined4 *)(param_2 + 0x1c);
        uVar4 = FUN_10032dee0(lVar3,*(undefined4 *)(lVar1 + 4));
        uVar6 = *(undefined8 *)(param_1 + 0x2778);
        uVar5 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar9 + 4));
        FUN_10035f410(uVar6,lVar2,&local_58,uVar5,*(undefined4 *)(param_2 + 0x24),lVar3,&local_68,
                      uVar4,*(undefined4 *)(param_2 + 0xc),&local_48);
        uVar8 = 1 << ((byte)uVar4 & 0x1f);
        if ((*(ushort *)(lVar3 + 0xb0) & 1) != 0) {
          uVar8 = 1;
        }
        *(uint *)(lVar3 + 0xa8) = *(uint *)(lVar3 + 0xa8) | uVar8;
        return 0;
      }
    }
  }
  return uVar6;
}

