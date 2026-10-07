
void FUN_100362370(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  uVar6 = *(uint *)(param_2 + 0x164);
  if (uVar6 == 0) {
    return;
  }
  puVar4 = *(uint **)(*(long *)(param_1 + 0x30) + 0x8068 +
                     (ulong)((uVar6 >> 0xc ^ uVar6) & 0xfff ^ uVar6 >> 0x18) * 8);
  while( true ) {
    if (puVar4 == (uint *)0x0) {
      return;
    }
    if (*puVar4 == uVar6) break;
    puVar4 = *(uint **)(puVar4 + 4);
  }
  lVar1 = *(long *)(puVar4 + 2);
  if (lVar1 == 0) {
    return;
  }
  uVar6 = *(uint *)(lVar1 + 4);
  uVar5 = (ulong)uVar6;
  lVar1 = *(long *)(lVar1 + 8);
  if (lVar1 == 0) {
    return;
  }
  if ((*(ushort *)(lVar1 + 0xb0) & 1) == 0) {
    uVar9 = *(uint *)(*(long *)(param_1 + 0x38) + 0x9830);
    if (uVar9 == 0) {
      return;
    }
    uVar3 = *(undefined4 *)(*(long *)(lVar1 + 0x28) + uVar5 * 0xc);
    iVar8 = *(int *)(lVar1 + 0x10) * *(int *)(*(long *)(lVar1 + 0x28) + 4 + uVar5 * 0xc);
    uVar7 = 0;
    cVar2 = FUN_1002ad170(*(long *)(param_1 + 0x38),0,uVar3,iVar8);
    if (cVar2 == '\0') {
      do {
        uVar7 = uVar7 + 1;
        if (uVar9 <= uVar7) {
          return;
        }
        cVar2 = FUN_1002ad170(*(undefined8 *)(param_1 + 0x38),uVar7,uVar3,iVar8);
      } while (cVar2 == '\0');
      if (uVar7 == 0xffffffff) {
        return;
      }
    }
    uVar9 = 1 << ((byte)uVar6 & 0x1f);
    uVar6 = 1;
    if ((*(ushort *)(lVar1 + 0xb0) & 1) == 0) {
      uVar6 = uVar9;
    }
    if ((*(uint *)(lVar1 + 0xa8) & uVar6) != 0) {
      local_50 = *(undefined4 *)(lVar1 + 0xc);
      local_4c = *(undefined4 *)(lVar1 + 0x10);
      local_58 = 0;
      local_54 = 0;
      local_70 = 1;
      local_60 = 0;
      local_6c = 0;
      local_68 = 0x8e;
      local_48 = *(undefined4 *)(lVar1 + 8);
      local_3c = *(undefined4 *)(*(long *)(lVar1 + 0x28) + 4 + uVar5 * 0xc);
      local_38 = (ulong)*(uint *)(*(long *)(lVar1 + 0x28) + uVar5 * 0xc) +
                 *(long *)(*(long *)(param_1 + 0x38) + 0x920);
      local_44 = local_50;
      local_40 = local_4c;
      uVar3 = FUN_10032dee0(lVar1,uVar5);
      FUN_10035f8d0(param_1,lVar1,uVar3,0,&local_48,&local_58,&local_58,1,1,uVar7,&local_70);
      uVar6 = 0xfffffffe;
      if ((*(ushort *)(lVar1 + 0xb0) & 1) == 0) {
        uVar6 = ~uVar9;
      }
      *(uint *)(lVar1 + 0xa8) = *(uint *)(lVar1 + 0xa8) & uVar6;
    }
    return;
  }
  return;
}

