
undefined4 FUN_10080bd30(long param_1,uint param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  long local_38;
  
  local_38 = (ulong)CONCAT11((char)param_2,(char)(param_2 >> 8)) << 0x30;
  lVar11 = FUN_1008dfdc0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x268),&local_38);
  if (lVar11 == 0) {
    uVar10 = 0;
    _fprintf(*(FILE **)PTR____stderrp_100ba2328,"retransmit:  message %d non-existant\n",
             (ulong)param_2 & 0xffff);
    *param_4 = 0;
  }
  else {
    *param_4 = 1;
    puVar4 = *(undefined1 **)(lVar11 + 8);
    lVar11 = 0xc;
    if (*(int *)(puVar4 + 0x28) != 0) {
      lVar11 = 1;
    }
    _memcpy(*(void **)(*(long *)(param_1 + 0x50) + 8),*(void **)(puVar4 + 0x58),
            *(long *)(puVar4 + 8) + lVar11);
    uVar12 = *(undefined8 *)(puVar4 + 8);
    *(int *)(param_1 + 0x60) = (int)lVar11 + (int)uVar12;
    uVar1 = *(undefined2 *)(puVar4 + 0x10);
    uVar5 = *(undefined8 *)(puVar4 + 0x20);
    lVar11 = *(long *)(param_1 + 0x88);
    *(undefined1 *)(lVar11 + 0x290) = *puVar4;
    *(undefined8 *)(lVar11 + 0x298) = uVar12;
    *(undefined2 *)(lVar11 + 0x2a0) = uVar1;
    *(undefined8 *)(lVar11 + 0x2a8) = 0;
    *(undefined8 *)(lVar11 + 0x2b0) = uVar5;
    uVar8 = *(undefined8 *)(param_1 + 0xe8);
    uVar9 = *(undefined8 *)(param_1 + 0xf0);
    uVar12 = *(undefined8 *)(param_1 + 0xf8);
    uVar5 = *(undefined8 *)(param_1 + 0x130);
    uVar2 = *(ushort *)(lVar11 + 0x20a);
    *(undefined4 *)(lVar11 + 0x378) = 1;
    uVar10 = *(undefined4 *)(puVar4 + 0x34);
    uVar6 = *(undefined4 *)(puVar4 + 0x38);
    uVar7 = *(undefined4 *)(puVar4 + 0x3c);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(puVar4 + 0x30);
    *(undefined4 *)(param_1 + 0xec) = uVar10;
    *(undefined4 *)(param_1 + 0xf0) = uVar6;
    *(undefined4 *)(param_1 + 0xf4) = uVar7;
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(puVar4 + 0x40);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(puVar4 + 0x48);
    uVar3 = *(ushort *)(puVar4 + 0x50);
    *(ushort *)(lVar11 + 0x20a) = uVar3;
    uVar14 = uVar2 - 1;
    if (uVar3 == uVar14) {
      local_40 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x58);
      *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x58) = *(undefined8 *)(lVar11 + 0x236);
    }
    uVar13 = 0x14;
    if (*(int *)(puVar4 + 0x28) == 0) {
      uVar13 = 0x16;
    }
    uVar10 = FUN_10080a2e0(param_1,uVar13);
    local_58 = (undefined4)uVar8;
    uStack_54 = (undefined4)((ulong)uVar8 >> 0x20);
    uStack_50 = (undefined4)uVar9;
    uStack_4c = (undefined4)((ulong)uVar9 >> 0x20);
    *(undefined4 *)(param_1 + 0xe8) = local_58;
    *(undefined4 *)(param_1 + 0xec) = uStack_54;
    *(undefined4 *)(param_1 + 0xf0) = uStack_50;
    *(undefined4 *)(param_1 + 0xf4) = uStack_4c;
    *(undefined8 *)(param_1 + 0xf8) = uVar12;
    *(undefined8 *)(param_1 + 0x130) = uVar5;
    lVar11 = *(long *)(param_1 + 0x88);
    *(ushort *)(lVar11 + 0x20a) = uVar2;
    if (*(ushort *)(puVar4 + 0x50) == uVar14) {
      *(undefined8 *)(lVar11 + 0x236) = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x58);
      *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x58) = local_40;
      lVar11 = *(long *)(param_1 + 0x88);
    }
    *(undefined4 *)(lVar11 + 0x378) = 0;
    uVar12 = FUN_10080e290(param_1);
    FUN_10087db60(uVar12,0xb,0,0);
  }
  return uVar10;
}

