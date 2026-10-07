
void FUN_1000d8680(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  char *pcVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 local_378;
  undefined4 *local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined4 *local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 *local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 *local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 *local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 *local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  void *local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  QArrayData *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  void *local_218;
  ulong uStack_210;
  undefined4 local_208;
  QArrayData *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 *local_1d8;
  ulong uStack_1d0;
  undefined4 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 *local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 *local_138;
  undefined8 *puStack_130;
  undefined8 *local_128;
  void *local_118;
  ulong uStack_110;
  undefined4 local_108;
  QArrayData *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 *local_d8;
  ulong uStack_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  lVar10 = *(long *)(param_1 + 0x1938);
  plVar9 = (long *)FUN_1000dcd50(6);
  lVar13 = *plVar9;
  uVar20 = *(uint *)(param_1 + 0xb5c);
  uVar16 = 2;
  if (*(int *)(lVar10 + 0xa0b0) == 0) {
    uVar16 = 1;
  }
  uVar7 = FUN_1000af640(param_1);
  iVar12 = *(int *)(param_1 + 0xae8);
  iVar1 = *(int *)(param_1 + 0x5d4);
  uVar18 = 0;
  if (*(int *)(param_1 + 0xaf0) != 5) {
    uVar18 = 2;
  }
  iVar8 = FUN_1007da300("devices.acpi",uVar18);
  if (iVar8 != 2) {
    if (iVar8 != 1) {
      return;
    }
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_10008d2d0(&local_78,0xe0000,0x14);
    local_98 = (undefined4 *)0x0;
    uStack_90 = 0;
    local_88 = 0;
    FUN_10008d2d0(&local_98,lVar13,0x2c);
    uVar21 = lVar13 + 0x6bU & 0xffffffffffffffc0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    FUN_10008d2d0(&local_b8,uVar21,0x74);
    local_d8 = (undefined4 *)0x0;
    uStack_d0 = 0;
    local_c8 = 0;
    FUN_10008d2d0(&local_d8,uVar21 + 0x80,0x40);
    lVar10 = uVar21 + 0xc0;
    uVar17 = 0;
    if ((uVar20 & 8) != 0) {
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      FUN_10008d2d0(&local_f8,lVar10,0x216);
      uVar17 = (undefined4)uStack_f0;
      FUN_1000da2b0(local_f8,uVar7,iVar12 != 0,1);
      FUN_10008d3f0(&local_f8);
      lVar10 = uVar21 + 0x300;
    }
    FUN_1000e9fd0(&local_100,(iVar1 != 0x3c5) * '\x02' + '\t');
    local_118 = (void *)0x0;
    uStack_110 = 0;
    local_108 = 0;
    FUN_10008d2d0(&local_118,lVar10,*(undefined4 *)(local_100 + 4));
    *(undefined1 *)(local_78 + 1) = 0;
    *(undefined1 *)((long)local_78 + 0xf) = 0;
    *(undefined4 *)(local_78 + 2) = (undefined4)uStack_90;
    *local_78 = 0x2052545020445352;
    *(undefined2 *)((long)local_78 + 0xd) = 0x2020;
    *(undefined4 *)((long)local_78 + 9) = 0x534c5250;
    *(char *)(local_78 + 1) =
         '`' - ((char)((ulong)uStack_90 >> 0x18) +
               (char)((ulong)uStack_90 >> 0x10) + (char)((ulong)uStack_90 >> 8) + (char)uStack_90);
    local_98[1] = 0x2c;
    *(undefined1 *)(local_98 + 2) = 1;
    *(undefined1 *)((long)local_98 + 9) = 0;
    *local_98 = 0x54445352;
    *(undefined2 *)((long)local_98 + 0xe) = 0x2020;
    *(undefined4 *)((long)local_98 + 10) = 0x534c5250;
    *(undefined8 *)(local_98 + 4) = 0x4d454f5f534c5250;
    local_98[6] = 1;
    local_98[7] = 0x4c544e49;
    local_98[8] = 0x20051216;
    local_98[9] = (undefined4)uStack_b0;
    local_98[10] = uVar17;
    cVar5 = '\0';
    lVar10 = 3;
    do {
      cVar5 = *(char *)((long)local_98 + lVar10) +
              *(char *)((long)local_98 + lVar10 + -1) +
              *(char *)((long)local_98 + lVar10 + -2) +
              *(char *)((long)local_98 + lVar10 + -3) + cVar5;
      lVar10 = lVar10 + 4;
    } while (lVar10 != 0x2f);
    *(char *)((long)local_98 + 9) = -cVar5;
    FUN_1000da550(local_b8,uStack_d0 & 0xffffffff,uStack_110 & 0xffffffff,uVar16,1);
    local_d8[1] = 0x40;
    *local_d8 = 0x53434146;
    *(undefined8 *)(local_d8 + 2) = 0;
    *(undefined8 *)(local_d8 + 4) = 0;
    *(undefined8 *)(local_d8 + 0xe) = 0;
    *(undefined8 *)(local_d8 + 0xc) = 0;
    *(undefined8 *)(local_d8 + 10) = 0;
    *(undefined8 *)(local_d8 + 8) = 0;
    *(undefined8 *)(local_d8 + 6) = 0;
    _memcpy(local_118,local_100 + *(long *)(local_100 + 0x10),(long)*(int *)(local_100 + 4));
    DAT_1011c3750 = (undefined4)uStack_d0;
    FUN_10008d3f0(&local_118);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d8ba9;
      }
      QArrayData::deallocate(local_100,1,8);
    }
LAB_1000d8ba9:
    FUN_10008d3f0(&local_d8);
    FUN_10008d3f0(&local_b8);
    FUN_10008d3f0(&local_98);
    FUN_10008d3f0(&local_78);
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x5ac);
  cVar5 = FUN_1000a45c0(param_1);
  uVar6 = FUN_1000af6a0(param_1);
  local_138 = (undefined8 *)0x0;
  puStack_130 = (undefined8 *)0x0;
  local_128 = (undefined8 *)0x0;
  local_158 = (undefined8 *)0x0;
  uStack_150 = 0;
  local_148 = 0;
  FUN_10008d2d0(&local_158,0xe0000,0x24);
  local_178 = (undefined4 *)0x0;
  uStack_170 = 0;
  local_168 = 0;
  FUN_10008d2d0(&local_178,lVar13,0x2c);
  uVar21 = lVar13 + 0x6bU & 0xffffffffffffffc0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  FUN_10008d2d0(&local_198,uVar21,0x74);
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  FUN_10008d2d0(&local_1b8,uVar21 + 0x80,0xf4);
  local_1d8 = (undefined4 *)0x0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  FUN_10008d2d0(&local_1d8,uVar21 + 0x180,0x40);
  uVar22 = uVar21 + 0x1c0;
  if ((uVar20 & 8) == 0) {
    local_378 = 0;
  }
  else {
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    FUN_10008d2d0(&local_1f8,uVar22,0x216);
    uVar18 = uStack_1f0;
    if (puStack_130 == local_128) {
      FUN_1000dc8a0(&local_138,&uStack_1f0);
    }
    else {
      *puStack_130 = uStack_1f0;
      puStack_130 = puStack_130 + 1;
    }
    local_378 = (undefined4)uVar18;
    FUN_1000da2b0(local_1f8,uVar7,iVar12 != 0);
    FUN_10008d3f0(&local_1f8);
    uVar22 = uVar21 + 0x400;
  }
  FUN_1000e9fd0(&local_200,(iVar1 != 0x3c5) * '\x02' + '\t');
  uVar3 = *(uint *)(local_200 + 4);
  local_218 = (void *)0x0;
  uStack_210 = 0;
  local_208 = 0;
  FUN_10008d2d0(&local_218,uVar22,(ulong)uVar3);
  uVar21 = (uVar22 | 0x3f) + (ulong)uVar3 & 0xffffffffffffffc0;
  if (cVar5 != '\0') {
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    FUN_10008d2d0(&local_238,uVar21,0xd0);
    if (puStack_130 == local_128) {
      FUN_1000dc8a0(&local_138,&uStack_230);
    }
    else {
      *puStack_130 = uStack_230;
      puStack_130 = puStack_130 + 1;
    }
    FUN_1000da690(local_238,(ulong)uVar2 << 0x14);
    FUN_1000e9fd0(&local_240,iVar1 != 0x3c5 | 10);
    uVar2 = *(uint *)(local_240 + 4);
    local_258 = (void *)0x0;
    uStack_250 = 0;
    local_248 = 0;
    FUN_10008d2d0(&local_258,uVar21 + 0x100,(ulong)uVar2);
    if (puStack_130 == local_128) {
      FUN_1000dc8a0(&local_138,&uStack_250);
    }
    else {
      *puStack_130 = uStack_250;
      puStack_130 = puStack_130 + 1;
    }
    _memcpy(local_258,local_240 + *(long *)(local_240 + 0x10),(long)*(int *)(local_240 + 4));
    FUN_10008d3f0(&local_258);
    if (*(int *)local_240 != -1) {
      if (*(int *)local_240 != 0) {
        LOCK();
        *(int *)local_240 = *(int *)local_240 + -1;
        local_31 = *(int *)local_240 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d8e6c;
      }
      QArrayData::deallocate(local_240,1,8);
    }
LAB_1000d8e6c:
    FUN_10008d3f0(&local_238);
    uVar21 = (uVar21 + 0x10f | 0x3f) + (ulong)uVar2 & 0xffffffffffffffc0;
  }
  if ((uVar20 & 1) != 0) {
    FUN_1008e3970("","vm",0,"HPET support is active!");
    local_278 = (undefined4 *)0x0;
    uStack_270 = 0;
    local_268 = 0;
    FUN_10008d2d0(&local_278,uVar21,0x38);
    if (puStack_130 == local_128) {
      FUN_1000dc8a0(&local_138,&uStack_270);
    }
    else {
      *puStack_130 = uStack_270;
      puStack_130 = puStack_130 + 1;
    }
    uVar21 = uVar21 + 0x40;
    local_278[1] = 0x38;
    *(undefined1 *)(local_278 + 2) = 0;
    *(undefined1 *)((long)local_278 + 9) = 0;
    *local_278 = 0x54455048;
    *(undefined2 *)((long)local_278 + 0xe) = 0x2020;
    *(undefined4 *)((long)local_278 + 10) = 0x534c5250;
    *(undefined8 *)(local_278 + 4) = 0x4d454f5f534c5250;
    local_278[6] = 1;
    local_278[7] = 0x4c544e49;
    local_278[8] = 0x20051216;
    *(undefined1 *)(local_278 + 10) = 0;
    *(undefined1 *)((long)local_278 + 0x29) = 0x40;
    *(undefined1 *)((long)local_278 + 0x2a) = 0x40;
    *(undefined1 *)((long)local_278 + 0x2b) = 0;
    *(undefined8 *)(local_278 + 0xb) = 0xfed00000;
    *(undefined1 *)(local_278 + 0xd) = 1;
    *(undefined2 *)((long)local_278 + 0x35) = 0x10;
    *(undefined1 *)((long)local_278 + 0x37) = 1;
    local_278[9] = 0x8086a701;
    cVar5 = '\0';
    lVar13 = 3;
    do {
      cVar5 = *(char *)((long)local_278 + lVar13) +
              *(char *)((long)local_278 + lVar13 + -1) +
              *(char *)((long)local_278 + lVar13 + -2) +
              *(char *)((long)local_278 + lVar13 + -3) + cVar5;
      lVar13 = lVar13 + 4;
    } while (lVar13 != 0x3b);
    *(char *)((long)local_278 + 9) = -cVar5;
    FUN_10008d3f0(&local_278);
  }
  if ((uVar20 & 4) != 0) {
    local_298 = (undefined4 *)0x0;
    uStack_290 = 0;
    local_288 = 0;
    FUN_10008d2d0(&local_298,uVar21,0x28);
    if (puStack_130 == local_128) {
      FUN_1000dc8a0(&local_138,&uStack_290);
    }
    else {
      *puStack_130 = uStack_290;
      puStack_130 = puStack_130 + 1;
    }
    uVar21 = uVar21 + 0x40;
    local_298[1] = 0x28;
    *(undefined1 *)(local_298 + 2) = 1;
    *(undefined1 *)((long)local_298 + 9) = 0;
    *local_298 = 0x54454157;
    *(undefined2 *)((long)local_298 + 0xe) = 0x2020;
    *(undefined4 *)((long)local_298 + 10) = 0x534c5250;
    *(undefined8 *)(local_298 + 4) = 0x4d454f5f534c5250;
    local_298[6] = 1;
    local_298[7] = 0x4c544e49;
    local_298[8] = 0x20051216;
    local_298[9] = 3;
    cVar5 = '\0';
    lVar13 = 3;
    do {
      cVar5 = *(char *)((long)local_298 + lVar13) +
              *(char *)((long)local_298 + lVar13 + -1) +
              *(char *)((long)local_298 + lVar13 + -2) +
              *(char *)((long)local_298 + lVar13 + -3) + cVar5;
      lVar13 = lVar13 + 4;
    } while (lVar13 != 0x2b);
    *(char *)((long)local_298 + 9) = -cVar5;
    FUN_10008d3f0(&local_298);
  }
  if ((uVar20 & 2) != 0) {
    local_2b8 = (undefined4 *)0x0;
    uStack_2b0 = 0;
    local_2a8 = 0;
    FUN_10008d2d0(&local_2b8,uVar21,0x3c);
    if (puStack_130 == local_128) {
      FUN_1000dc8a0(&local_138,&uStack_2b0);
    }
    else {
      *puStack_130 = uStack_2b0;
      puStack_130 = puStack_130 + 1;
    }
    uVar21 = uVar21 + 0x40;
    local_2b8[1] = 0x3c;
    *(undefined1 *)(local_2b8 + 2) = 1;
    *(undefined1 *)((long)local_2b8 + 9) = 0;
    *local_2b8 = 0x4746434d;
    *(undefined2 *)((long)local_2b8 + 0xe) = 0x2020;
    *(undefined4 *)((long)local_2b8 + 10) = 0x534c5250;
    *(undefined8 *)(local_2b8 + 4) = 0x4d454f5f534c5250;
    local_2b8[6] = 1;
    local_2b8[7] = 0x4c544e49;
    local_2b8[8] = 0x20051216;
    *(undefined8 *)(local_2b8 + 0xd) = 0;
    *(undefined8 *)(local_2b8 + 0xb) = 0;
    *(undefined8 *)(local_2b8 + 9) = 0;
    *(undefined8 *)(local_2b8 + 0xb) = 0xfc000000;
    *(undefined2 *)(local_2b8 + 0xd) = 0;
    *(undefined2 *)((long)local_2b8 + 0x36) = 0xf00;
    cVar5 = '\0';
    lVar13 = 3;
    do {
      cVar5 = *(char *)((long)local_2b8 + lVar13) +
              *(char *)((long)local_2b8 + lVar13 + -1) +
              *(char *)((long)local_2b8 + lVar13 + -2) +
              *(char *)((long)local_2b8 + lVar13 + -3) + cVar5;
      lVar13 = lVar13 + 4;
    } while (lVar13 != 0x3f);
    *(char *)((long)local_2b8 + 9) = -cVar5;
    FUN_10008d3f0(&local_2b8);
  }
  if ((uVar20 & 0x10) != 0) {
    if (DAT_1011c3758 != (undefined4 *)0x0) {
      operator_delete(DAT_1011c3758);
    }
    DAT_1011c3758 = (undefined4 *)0x0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2c8 = 0;
    FUN_10008d2d0(&local_2d8,uVar21,0x18c);
    FUN_1000da950(local_2d8,lVar10,1);
    if (puStack_130 == local_128) {
      FUN_1000dc8a0(&local_138,&uStack_2d0);
    }
    else {
      *puStack_130 = uStack_2d0;
      puStack_130 = puStack_130 + 1;
    }
    local_2f8 = (undefined4 *)0x0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    FUN_10008d2d0(&local_2f8,uVar21 + 0x1c0,0x230);
    puVar4 = local_2f8;
    local_2f8[1] = 0x230;
    *(undefined1 *)(local_2f8 + 2) = 1;
    *(undefined1 *)((long)local_2f8 + 9) = 0;
    *local_2f8 = 0x54535245;
    *(undefined2 *)((long)local_2f8 + 0xe) = 0x2020;
    *(undefined4 *)((long)local_2f8 + 10) = 0x534c5250;
    *(undefined8 *)(local_2f8 + 4) = 0x4d454f5f534c5250;
    local_2f8[6] = 1;
    local_2f8[7] = 0x4c544e49;
    local_2f8[8] = 0x20051216;
    local_2f8[10] = 0;
    FUN_1000db080(local_2f8 + 0xc);
    puVar4[9] = 0x30;
    puVar4[0xb] = 0x10;
    cVar5 = '\0';
    lVar10 = 3;
    do {
      cVar5 = *(char *)((long)puVar4 + lVar10) +
              *(char *)((long)puVar4 + lVar10 + -1) +
              *(char *)((long)puVar4 + lVar10 + -2) + *(char *)((long)puVar4 + lVar10 + -3) + cVar5;
      lVar10 = lVar10 + 4;
    } while (lVar10 != 0x233);
    *(char *)((long)puVar4 + 9) = -cVar5;
    if (puStack_130 == local_128) {
      FUN_1000dc8a0(&local_138,&uStack_2f0);
    }
    else {
      *puStack_130 = uStack_2f0;
      puStack_130 = puStack_130 + 1;
    }
    local_318 = 0;
    uStack_310 = 0;
    local_308 = 0;
    FUN_10008d2d0(&local_318,uVar21 + 0x400,0x130);
    FUN_1000dbe10(local_318,1);
    if (puStack_130 == local_128) {
      FUN_1000dc8a0(&local_138,&uStack_310);
    }
    else {
      *puStack_130 = uStack_310;
      puStack_130 = puStack_130 + 1;
    }
    local_338 = (undefined4 *)0x0;
    uStack_330 = 0;
    local_328 = 0;
    FUN_10008d2d0(&local_338,uVar21 + 0x540,0x30);
    puVar4 = local_338;
    local_338[1] = 0x30;
    *(undefined1 *)(local_338 + 2) = 1;
    *(undefined1 *)((long)local_338 + 9) = 0;
    *local_338 = 0x54524542;
    *(undefined2 *)((long)local_338 + 0xe) = 0x2020;
    *(undefined4 *)((long)local_338 + 10) = 0x534c5250;
    *(undefined8 *)(local_338 + 4) = 0x4d454f5f534c5250;
    local_338[6] = 1;
    local_338[7] = 0x4c544e49;
    local_338[8] = 0x20051216;
    local_338[9] = 0x800;
    uVar20 = 0x800;
    if (DAT_1011c3758 == (undefined4 *)0x0) {
      puVar11 = operator_new(0x34);
      lVar10 = *(long *)(DAT_1011c3698 + 0x1938);
      *puVar11 = 7;
      plVar9 = (long *)FUN_1000dcd50(7);
      lVar13 = *plVar9;
      puVar11[0xc] = 0x400;
      uVar22 = lVar13 + 0x43fU & 0xffffffffffffffc0;
      *(long *)(puVar11 + 8) = lVar13;
      *(ulong *)(puVar11 + 6) = uVar22;
      *(ulong *)(puVar11 + 2) = uVar22 + 0x2c0;
      *(ulong *)(puVar11 + 4) = uVar22 + 0x200;
      *(long *)(puVar11 + 10) = lVar10 + 0xa0d8;
      uVar20 = puVar4[9];
      DAT_1011c3758 = puVar11;
    }
    uVar21 = uVar21 + 0x580;
    lVar10 = *(long *)(DAT_1011c3758 + 2);
    *(ulong *)(DAT_1011c3758 + 2) = (ulong)uVar20 + 0x3f + lVar10 & 0xffffffffffffffc0;
    *(long *)(puVar4 + 10) = lVar10;
    cVar5 = '\0';
    lVar10 = 3;
    do {
      cVar5 = *(char *)((long)puVar4 + lVar10) +
              *(char *)((long)puVar4 + lVar10 + -1) +
              *(char *)((long)puVar4 + lVar10 + -2) + *(char *)((long)puVar4 + lVar10 + -3) + cVar5;
      lVar10 = lVar10 + 4;
    } while (lVar10 != 0x33);
    *(char *)((long)puVar4 + 9) = -cVar5;
    if (puStack_130 == local_128) {
      FUN_1000dc8a0(&local_138,&uStack_330);
    }
    else {
      *puStack_130 = uStack_330;
      puStack_130 = puStack_130 + 1;
    }
    FUN_10008d3f0(&local_338);
    FUN_10008d3f0(&local_318);
    FUN_10008d3f0(&local_2f8);
    FUN_10008d3f0(&local_2d8);
  }
  local_358 = (undefined4 *)0x0;
  uStack_350 = 0;
  local_348 = 0;
  local_40 = 0;
  if (puStack_130 == local_128) {
    FUN_1000dc8a0(&local_138,&local_40);
  }
  else {
    *puStack_130 = 0;
    puStack_130 = puStack_130 + 1;
  }
  uVar22 = (long)puStack_130 + (0x2c - (long)local_138);
  FUN_10008d2d0(&local_358,uVar21,uVar22 & 0xffffffff);
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_10008d2d0(&local_58,uVar21 + 0x3f + (uVar22 & 0xffffffff) & 0xffffffffffffffc0,0x394);
  local_58[1] = 0x394;
  *(undefined1 *)(local_58 + 2) = 1;
  *(undefined1 *)((long)local_58 + 9) = 0;
  *local_58 = 0x314d454f;
  *(undefined2 *)((long)local_58 + 0xe) = 0x2020;
  *(undefined4 *)((long)local_58 + 10) = 0x534c5250;
  *(undefined8 *)(local_58 + 4) = 0x4d454f5f534c5250;
  local_58[6] = 1;
  local_58[7] = 0x4c544e49;
  local_58[8] = 0x20051216;
  cVar5 = '\0';
  lVar10 = 3;
  do {
    cVar5 = *(char *)((long)local_58 + lVar10) +
            *(char *)((long)local_58 + lVar10 + -1) +
            *(char *)((long)local_58 + lVar10 + -2) +
            *(char *)((long)local_58 + lVar10 + -3) + cVar5;
    lVar10 = lVar10 + 4;
  } while (lVar10 != 0x397);
  *(char *)((long)local_58 + 9) = -cVar5;
  puVar14 = puStack_130 + -1;
  if (puVar14 == local_128) {
    puStack_130 = puVar14;
    FUN_1000dc8a0(&local_138,&uStack_50);
  }
  else {
    *puVar14 = uStack_50;
  }
  FUN_10008d3f0(&local_58);
  *(undefined1 *)(local_158 + 1) = 0;
  *(undefined1 *)((long)local_158 + 0xf) = 2;
  *(undefined4 *)(local_158 + 2) = (undefined4)uStack_170;
  *local_158 = 0x2052545020445352;
  *(undefined2 *)((long)local_158 + 0xd) = 0x2020;
  *(undefined4 *)((long)local_158 + 9) = 0x534c5250;
  *(char *)(local_158 + 1) =
       '^' - ((char)((ulong)uStack_170 >> 0x18) +
             (char)((ulong)uStack_170 >> 0x10) + (char)((ulong)uStack_170 >> 8) + (char)uStack_170);
  *(undefined4 *)((long)local_158 + 0x14) = 0x24;
  local_158[3] = uStack_350;
  *(undefined4 *)(local_158 + 4) = 0;
  cVar5 = '\0';
  lVar10 = 3;
  do {
    cVar5 = *(char *)((long)local_158 + lVar10) +
            *(char *)((long)local_158 + lVar10 + -1) +
            *(char *)((long)local_158 + lVar10 + -2) +
            *(char *)((long)local_158 + lVar10 + -3) + cVar5;
    lVar10 = lVar10 + 4;
  } while (lVar10 != 0x27);
  *(char *)(local_158 + 4) = -cVar5;
  local_178[1] = 0x2c;
  *(undefined1 *)(local_178 + 2) = 1;
  *(undefined1 *)((long)local_178 + 9) = 0;
  *local_178 = 0x54445352;
  *(undefined2 *)((long)local_178 + 0xe) = 0x2020;
  *(undefined4 *)((long)local_178 + 10) = 0x534c5250;
  *(undefined8 *)(local_178 + 4) = 0x4d454f5f534c5250;
  local_178[6] = 1;
  local_178[7] = 0x4c544e49;
  local_178[8] = 0x20051216;
  local_178[9] = (undefined4)uStack_190;
  local_178[10] = local_378;
  cVar5 = '\0';
  lVar10 = 3;
  do {
    cVar5 = *(char *)((long)local_178 + lVar10) +
            *(char *)((long)local_178 + lVar10 + -1) +
            *(char *)((long)local_178 + lVar10 + -2) +
            *(char *)((long)local_178 + lVar10 + -3) + cVar5;
    lVar10 = lVar10 + 4;
  } while (lVar10 != 0x2f);
  *(char *)((long)local_178 + 9) = -cVar5;
  local_358[1] = ((int)puStack_130 + 0x2c) - (int)local_138;
  *(undefined1 *)(local_358 + 2) = 1;
  *(undefined1 *)((long)local_358 + 9) = 0;
  *local_358 = 0x54445358;
  *(undefined2 *)((long)local_358 + 0xe) = 0x2020;
  *(undefined4 *)((long)local_358 + 10) = 0x534c5250;
  *(undefined8 *)(local_358 + 4) = 0x4d454f5f534c5250;
  local_358[6] = 1;
  local_358[7] = 0x4c544e49;
  local_358[8] = 0x20051216;
  *(undefined8 *)(local_358 + 9) = uStack_1b0;
  puVar14 = local_138;
  if (local_138 != puStack_130) {
    puVar15 = (undefined8 *)(local_358 + 0xb);
    do {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    } while (puVar14 != puStack_130);
  }
  cVar5 = '\0';
  iVar12 = (int)puVar14;
  if (iVar12 + (0x2c - (int)local_138) != 0) {
    uVar20 = (iVar12 + 0x2c) - (int)local_138;
    lVar10 = 0;
    cVar5 = '\0';
    if ((uVar20 & 3) != 0) {
      lVar10 = 0;
      do {
        cVar5 = *(char *)((long)local_358 + lVar10) + cVar5;
        lVar10 = lVar10 + 1;
      } while (((iVar12 + 0x2c) - (int)local_138 & 3U) != (uint)lVar10);
    }
    if (2 < uVar20 - 1) {
      iVar12 = ((iVar12 - (int)local_138) + 0x2f) - ((int)lVar10 + 3);
      pcVar19 = (char *)((long)local_358 + lVar10 + 3);
      do {
        cVar5 = *pcVar19 + pcVar19[-1] + pcVar19[-2] + pcVar19[-3] + cVar5;
        pcVar19 = pcVar19 + 4;
        iVar12 = iVar12 + -4;
      } while (iVar12 != 0);
    }
  }
  *(char *)((long)local_358 + 9) = -cVar5;
  FUN_1000da550(local_198,uStack_1d0 & 0xffffffff,uStack_210 & 0xffffffff,uVar16,1);
  FUN_1000dc6f0(local_1b8,uStack_1d0 & 0xffffffff,uStack_210 & 0xffffffff,uStack_1d0,uStack_210,
                uVar6,uVar16,3);
  local_1d8[1] = 0x40;
  local_1d8[7] = 0;
  *(undefined8 *)(local_1d8 + 5) = 0;
  *(undefined8 *)(local_1d8 + 3) = 0;
  *(undefined1 *)(local_1d8 + 8) = 1;
  *local_1d8 = 0x53434146;
  local_1d8[2] = 0;
  *(undefined1 *)((long)local_1d8 + 0x3f) = 0;
  *(undefined2 *)((long)local_1d8 + 0x3d) = 0;
  *(undefined4 *)((long)local_1d8 + 0x39) = 0;
  *(undefined8 *)((long)local_1d8 + 0x31) = 0;
  *(undefined8 *)((long)local_1d8 + 0x29) = 0;
  *(undefined8 *)((long)local_1d8 + 0x21) = 0;
  _memcpy(local_218,local_200 + *(long *)(local_200 + 0x10),(long)*(int *)(local_200 + 4));
  DAT_1011c3750 = (undefined4)uStack_1d0;
  FUN_1002a3640();
  FUN_10008d3f0(&local_358);
  FUN_10008d3f0(&local_218);
  if (*(int *)local_200 != -1) {
    if (*(int *)local_200 != 0) {
      LOCK();
      *(int *)local_200 = *(int *)local_200 + -1;
      local_31 = *(int *)local_200 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d9b00;
    }
    QArrayData::deallocate(local_200,1,8);
  }
LAB_1000d9b00:
  FUN_10008d3f0(&local_1d8);
  FUN_10008d3f0(&local_1b8);
  FUN_10008d3f0(&local_198);
  FUN_10008d3f0(&local_178);
  FUN_10008d3f0(&local_158);
  if (local_138 != (undefined8 *)0x0) {
    if (puStack_130 != local_138) {
      puStack_130 = (undefined8 *)
                    ((~((long)puStack_130 + (-8 - (long)local_138)) & 0xfffffffffffffff8U) +
                    (long)puStack_130);
    }
    operator_delete(local_138);
  }
  return;
}

