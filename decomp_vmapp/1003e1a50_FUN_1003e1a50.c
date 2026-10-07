
undefined8 FUN_1003e1a50(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  ushort uVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  size_t sVar15;
  uint uVar16;
  undefined2 local_358;
  undefined1 local_356;
  undefined1 local_355;
  undefined8 local_354;
  undefined1 local_34c;
  undefined1 local_34b;
  undefined1 local_34a;
  undefined1 local_349;
  uint local_348;
  
  lVar10 = param_1[0xb];
  pbVar1 = (byte *)(lVar10 + 6);
  pbVar2 = (byte *)(lVar10 + 2);
  pbVar3 = (byte *)(lVar10 + 9);
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar16 = *(uint *)(param_1 + 0x19), uVar16 == 0xffffffff)) {
    uVar9 = CONCAT11((char)*(undefined2 *)(lVar10 + 7),
                     (char)((ushort)*(undefined2 *)(lVar10 + 7) >> 8));
    uVar16 = 0x10000;
    if (uVar9 != 0) {
      uVar16 = (uint)uVar9;
    }
    lVar10 = param_1[0xb];
  }
  bVar4 = *(byte *)(lVar10 + 1);
  if ((((99 < *pbVar1) && (*pbVar1 != 0xaa)) || (uVar14 = *pbVar2 & 0xf, 5 < uVar14)) ||
     ((0x27U >> uVar14 & 1) == 0)) goto switchD_1003e1b65_caseD_3;
  bVar8 = *pbVar3 >> 6;
  if (bVar8 == 0) {
    switch(uVar14) {
    case 0:
      local_358 = 0x1200;
      local_356 = 1;
      local_355 = 1;
      local_354 = 0x11400;
      if ((bVar4 & 2) != 0) {
        local_354 = 0x2000000011400;
      }
      local_34c = 0;
      local_34b = 0x14;
      local_34a = 0xaa;
      local_349 = 0;
      if ((bVar4 & 2) == 0) {
        uVar14 = (int)param_1[0x13] + 0x96;
        local_348 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                    uVar14 * 0x1000000;
      }
      else {
        uVar13 = param_1[0x13] + 300;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar13 / 0x4b;
        local_348 = (uint)CONCAT12((char)uVar13 + (char)(uVar13 / 0x4b) * -0x4b,
                                   CONCAT11((char)(uVar13 / 0x4b) +
                                            (char)(SUB164(auVar6 * ZEXT816(0x8888888888888889),8) >>
                                                  5) * -0x3c,(char)(uVar13 / 0x1194))) << 8;
      }
      uVar14 = 0x14;
      break;
    case 1:
      local_358 = 0xa00;
      local_356 = 1;
      local_355 = 1;
      local_354 = 0x1400;
      uVar14 = 0xc;
      break;
    case 2:
      puVar11 = _malloc(0x30);
      if (puVar11 != (undefined2 *)0x0) {
        puVar11[1] = 0x101;
        *puVar11 = 0x2e00;
        *(undefined1 *)(puVar11 + 6) = 1;
        *(undefined1 *)((long)puVar11 + 0xd) = 0;
        *(undefined1 *)(puVar11 + 7) = 0;
        *(undefined8 *)(puVar11 + 2) = 0xa0001401;
        *(undefined1 *)((long)puVar11 + 0x17) = 1;
        *(undefined1 *)(puVar11 + 0xc) = 0;
        *(undefined1 *)((long)puVar11 + 0x19) = 0;
        *(undefined8 *)((long)puVar11 + 0xf) = 0xa1001401;
        *(undefined1 *)((long)puVar11 + 0x1d) = 0xa2;
        puVar11[0xd] = 0x1401;
        uVar13 = param_1[0x13] + 0x96;
        uVar14 = (uint)uVar13;
        if ((bVar4 & 2) == 0) {
          *(uint *)((long)puVar11 + 0x21) =
               uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
        }
        else {
          *(char *)(puVar11 + 0x11) = (char)(uVar13 / 0x1194);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar13 / 0x4b;
          *(char *)((long)puVar11 + 0x23) =
               (char)(uVar13 / 0x4b) +
               (char)(SUB164(auVar7 * ZEXT816(0x8888888888888889),8) >> 5) * -0x3c;
          *(char *)(puVar11 + 0x12) = (char)uVar13 + (char)(uVar13 / 0x4b) * -0x4b;
        }
        *(undefined1 *)((long)puVar11 + 0x21) = 0;
        *(undefined1 *)(puVar11 + 0xf) = 0;
        *(undefined1 *)((long)puVar11 + 0x1f) = 0;
        *(undefined1 *)(puVar11 + 0x10) = 0;
        *(undefined1 *)(puVar11 + 0xe) = 0;
        *(undefined1 *)(puVar11 + 0x13) = 0x14;
        *(undefined1 *)(puVar11 + 0x14) = 1;
        *(undefined1 *)((long)puVar11 + 0x25) = 1;
        *(undefined1 *)((long)puVar11 + 0x29) = 0;
        *(undefined4 *)(puVar11 + 0x16) = 0;
        *(byte *)(puVar11 + 0x15) = bVar4 & 2;
        *(undefined1 *)((long)puVar11 + 0x2b) = 0;
        *(undefined1 *)((long)puVar11 + 0x27) = 0;
        uVar14 = 0x30;
        if (uVar16 < 0x30) {
          uVar14 = uVar16;
        }
        sVar15 = 4;
        if (uVar14 < 5) {
          sVar15 = (ulong)uVar14;
        }
        _memcpy((void *)param_1[9],puVar11,sVar15);
        (**(code **)(*param_1 + 0x278))(param_1,uVar14,uVar16);
        _free(puVar11);
        return 0;
      }
    default:
switchD_1003e1b65_caseD_3:
      uVar12 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
      return uVar12;
    case 5:
      uVar14 = 0x324;
      if (uVar16 < 0x324) {
        uVar14 = uVar16;
      }
      ___bzero(&local_358,uVar14);
      local_358 = 0x200;
      uVar14 = 0x16;
    }
    if (uVar16 < uVar14) {
      uVar14 = uVar16;
    }
  }
  else if (bVar8 == 2) {
    local_358 = 0x1200;
    local_356 = 1;
    local_355 = 1;
    local_354 = 0x11400;
    if ((bVar4 & 2) != 0) {
      local_354 = 0x2000000011400;
    }
    local_34c = 0;
    local_34b = 0x14;
    local_34a = 0xaa;
    local_349 = 0;
    if ((bVar4 & 2) == 0) {
      uVar14 = (int)param_1[0x13] + 0x96;
      local_348 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                  uVar14 * 0x1000000;
    }
    else {
      uVar13 = param_1[0x13] + 300;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar13 / 0x4b;
      local_348 = (uint)CONCAT12((char)uVar13 + (char)(uVar13 / 0x4b) * -0x4b,
                                 CONCAT11((char)(uVar13 / 0x4b) +
                                          (char)(SUB164(auVar5 * ZEXT816(0x8888888888888889),8) >> 5
                                                ) * -0x3c,(char)(uVar13 / 0x1194))) << 8;
    }
    uVar14 = 0x14;
    if (uVar16 < 0x14) {
      uVar14 = uVar16;
    }
  }
  else {
    if (bVar8 != 1) goto switchD_1003e1b65_caseD_3;
    local_358 = 0xa00;
    local_356 = 1;
    local_355 = 1;
    local_354 = 0x11400;
    uVar14 = 0xc;
    if (uVar16 < 0xc) {
      uVar14 = uVar16;
    }
  }
  sVar15 = 0x324;
  if (uVar14 < 0x325) {
    sVar15 = (ulong)uVar14;
  }
  _memcpy((void *)param_1[9],&local_358,sVar15);
  (**(code **)(*param_1 + 0x278))(param_1,uVar14,uVar16);
  return 0;
}

