
void FUN_10035f230(long param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
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
  
  puVar6 = *(uint **)(*(long *)(param_1 + 0x30) + 0x8068 +
                     (ulong)((param_3 >> 0xc ^ param_3) & 0xfff ^ param_3 >> 0x18) * 8);
  while( true ) {
    if (puVar6 == (uint *)0x0) {
      return;
    }
    if (*puVar6 == param_3) break;
    puVar6 = *(uint **)(puVar6 + 4);
  }
  lVar2 = *(long *)(puVar6 + 2);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar2 + 8);
  if ((*(ushort *)(lVar3 + 0xb0) & 8) == 0) {
    return;
  }
  *(undefined4 *)(*(long *)(lVar3 + 0x28) + (ulong)*(uint *)(lVar2 + 4) * 0xc) = param_4;
  iVar1 = *(int *)(lVar3 + 8);
  FUN_1002abbd0(*(undefined8 *)(param_1 + 0x38),param_2,param_4,iVar1 != 0x1b);
  if (iVar1 == 0x1b) {
    return;
  }
  uVar5 = *(uint *)(lVar2 + 4);
  uVar8 = 1 << ((byte)uVar5 & 0x1f);
  uVar7 = 1;
  if ((*(ushort *)(lVar3 + 0xb0) & 1) == 0) {
    uVar7 = uVar8;
  }
  if ((*(uint *)(lVar3 + 0xa8) & uVar7) == 0) {
    return;
  }
  local_50 = *(undefined4 *)(lVar3 + 0xc);
  local_4c = *(undefined4 *)(lVar3 + 0x10);
  local_58 = 0;
  local_54 = 0;
  local_70 = 1;
  local_60 = 0;
  local_6c = 0;
  local_68 = 0x8e;
  local_48 = *(undefined4 *)(lVar3 + 8);
  local_3c = *(undefined4 *)(*(long *)(lVar3 + 0x28) + 4 + (ulong)uVar5 * 0xc);
  local_38 = (ulong)*(uint *)(*(long *)(lVar3 + 0x28) + (ulong)uVar5 * 0xc) +
             *(long *)(*(long *)(param_1 + 0x38) + 0x920);
  local_44 = local_50;
  local_40 = local_4c;
  uVar4 = FUN_10032dee0(lVar3,uVar5);
  FUN_10035f8d0(param_1,lVar3,uVar4,0,&local_48,&local_58,&local_58,1,(param_5 & 0xff) * 2 + 1,
                param_2,&local_70);
  uVar5 = 0xfffffffe;
  if ((*(ushort *)(lVar3 + 0xb0) & 1) == 0) {
    uVar5 = ~uVar8;
  }
  *(uint *)(lVar3 + 0xa8) = *(uint *)(lVar3 + 0xa8) & uVar5;
  return;
}

