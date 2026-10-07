
void FUN_100359600(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined4 local_38;
  uint local_34;
  
  FUN_1002adb30(*param_1,param_1[1]);
  uVar5 = *(uint *)(param_2 + 8);
  puVar9 = (uint *)param_1[(ulong)((uVar5 >> 0xc ^ uVar5) & 0xfff ^ uVar5 >> 0x18) + 0x100d];
  while( true ) {
    if (puVar9 == (uint *)0x0) {
      return;
    }
    if (*puVar9 == uVar5) break;
    puVar9 = *(uint **)(puVar9 + 4);
  }
  lVar2 = *(long *)(puVar9 + 2);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar2 + 8);
  uVar1 = *(undefined4 *)(lVar2 + 4);
  uVar5 = FUN_10032dee0(lVar3,uVar1);
  uVar6 = FUN_10032df00(lVar3,uVar1);
  local_48 = *(undefined1 (*) [16])(param_2 + 0xc);
  local_34 = *(uint *)(lVar3 + 0x14);
  local_38 = 0;
  if (*(int *)(lVar3 + 8) != 0x1b) {
    FUN_10035e0e0(param_1[5],lVar3,local_48,(ulong)uVar5,uVar6);
    iVar7 = FUN_10035db70(param_1[5],lVar3,uVar1);
    if (iVar7 != -1) {
      local_60 = 1;
      local_50 = 0;
      local_5c = 0;
      local_58 = 0x8e;
      FUN_10035e300(param_1[5],lVar3,uVar1,local_48,1,0,iVar7,&local_60);
      return;
    }
    uVar5 = 1 << ((byte)uVar1 & 0x1f);
    if ((*(ushort *)(lVar3 + 0xb0) & 1) != 0) {
      uVar5 = 1;
    }
    *(uint *)(lVar3 + 0xa8) = *(uint *)(lVar3 + 0xa8) | uVar5;
    return;
  }
  if (local_48._0_4_ == 0) {
    bVar4 = (byte)uVar6;
    uVar8 = 1;
    if (*(uint *)(lVar3 + 0xc) >> (bVar4 & 0x1f) != 0) {
      uVar8 = *(uint *)(lVar3 + 0xc) >> (bVar4 & 0x1f);
    }
    if (local_48._8_4_ != uVar8) {
      return;
    }
    iVar7 = *(int *)(lVar3 + 0x24);
    if ((iVar7 != 2) && (iVar7 != 7)) {
      if (local_48._4_4_ != 0) {
        return;
      }
      uVar8 = 1;
      if (*(uint *)(lVar3 + 0x10) >> (bVar4 & 0x1f) != 0) {
        uVar8 = *(uint *)(lVar3 + 0x10) >> (bVar4 & 0x1f);
      }
      if (local_48._12_4_ != uVar8) {
        return;
      }
      if (iVar7 == 5) {
        uVar8 = 1;
        if (local_34 >> (bVar4 & 0x1f) != 0) {
          uVar8 = local_34 >> (bVar4 & 0x1f);
        }
        if (local_34 != uVar8) {
          return;
        }
      }
    }
    puVar9 = (uint *)(*(long *)(lVar3 + 0x90) + (ulong)uVar5 * 4);
    *puVar9 = *puVar9 | 1 << (bVar4 & 0x1f);
    return;
  }
  return;
}

