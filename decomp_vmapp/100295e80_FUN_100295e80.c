
void FUN_100295e80(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  QArrayData *pQVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined2 local_260;
  undefined2 uStack_25e;
  undefined2 uStack_25c;
  short sStack_25a;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  undefined1 local_239;
  undefined2 local_238;
  undefined2 local_236;
  undefined2 local_234;
  undefined2 local_232;
  short local_230;
  undefined2 local_22e;
  undefined2 local_22c;
  undefined1 local_224;
  undefined1 local_223;
  undefined1 local_222;
  undefined1 local_221;
  undefined1 local_220;
  undefined1 local_21f;
  undefined1 local_21e;
  undefined1 local_21d;
  undefined1 local_21c;
  undefined1 local_21b;
  undefined1 local_21a;
  undefined1 local_219;
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215;
  undefined1 local_214;
  undefined1 local_213;
  undefined1 local_212;
  undefined1 local_211;
  undefined4 local_210;
  undefined1 local_20a;
  undefined1 local_209;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204;
  undefined1 local_203;
  undefined8 local_202;
  undefined8 local_1fa;
  undefined8 local_1f2;
  undefined8 local_1ea;
  undefined8 local_1e2;
  undefined1 local_1da;
  undefined1 local_1d9;
  undefined2 local_1d8;
  undefined1 local_1d5;
  undefined2 local_1d4;
  undefined1 local_1d1;
  undefined1 local_1cf;
  undefined2 local_1ce;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined2 local_1c8;
  uint local_1c6;
  undefined1 local_1c2;
  undefined1 local_1c1;
  uint local_1c0;
  undefined2 local_1bc;
  undefined2 local_1ba;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined2 local_1b4;
  undefined2 local_1b2;
  undefined2 local_1b0;
  undefined2 local_1ae;
  undefined2 local_1a2;
  ushort local_1a0;
  ushort local_198;
  undefined2 local_196;
  undefined2 local_194;
  undefined2 local_192;
  undefined2 local_190;
  undefined2 local_18e;
  undefined2 local_18c;
  undefined2 local_18a;
  undefined2 local_188;
  ulong local_170;
  undefined2 local_166;
  ushort local_164;
  undefined2 local_14e;
  undefined8 local_134;
  undefined2 local_e6;
  undefined2 local_86;
  undefined2 local_7c;
  undefined1 local_3a;
  undefined1 local_39;
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *(long *)(param_2 + 0x60);
  uVar6 = (*(uint *)(lVar2 + 0x8c) & 0x3fffff) + 1;
  uVar14 = 0x200;
  if (uVar6 < 0x200) {
    uVar14 = uVar6;
  }
  local_38 = lVar13;
  if (uVar14 == 0) goto LAB_100296679;
  if (*(char *)(param_2 + 0x39) == '3') {
    local_260 = 0xc0de;
    uStack_25e = 0;
    uStack_25c = 2;
    uVar5 = *(ushort *)(param_1 + 0xfee);
    uVar1 = *(ushort *)(param_1 + 0xff0);
    sStack_25a = uVar1 + uVar5 * 2;
    puVar9 = (undefined8 *)&local_260;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xff0);
    uVar5 = *(ushort *)(param_1 + 0xfee);
    puVar9 = (undefined8 *)0x0;
  }
  lVar13 = *(long *)(param_1 + 0x1000);
  lVar11 = (ulong)uVar5 * 0x300 + lVar13;
  lVar12 = (ulong)uVar1 * 0x80;
  uVar3 = *(ulong *)(lVar12 + 0x46a8 + lVar11);
  iVar7 = *(int *)(lVar12 + 0x46f4 + lVar11);
  ___bzero(&local_238,0x200);
  local_86 = 0x1c20;
  local_238 = 0x440;
  if (uVar3 < 0xfbfc11) {
    local_236 = *(undefined2 *)(lVar12 + 0x4698 + lVar11);
    local_232 = *(undefined2 *)(lVar12 + 0x469c + lVar11);
    local_22c = *(undefined2 *)(lVar12 + 0x46a0 + lVar11);
  }
  else {
    local_22c = 0x3f;
    local_232 = 0x10;
    local_236 = 0x3fff;
  }
  local_234 = 0xc837;
  lVar4 = (ulong)uVar5 * 0x300;
  lVar8 = lVar13 + lVar4;
  local_223 = *(undefined1 *)(lVar12 + 0x46b0 + lVar8);
  local_224 = *(undefined1 *)(lVar12 + 0x46b1 + lVar8);
  local_221 = *(undefined1 *)(lVar12 + 0x46b2 + lVar8);
  local_222 = *(undefined1 *)(lVar12 + 0x46b3 + lVar8);
  local_21f = *(undefined1 *)(lVar12 + 0x46b4 + lVar8);
  local_220 = *(undefined1 *)(lVar12 + 0x46b5 + lVar8);
  local_21d = *(undefined1 *)(lVar12 + 0x46b6 + lVar8);
  local_21e = *(undefined1 *)(lVar12 + 0x46b7 + lVar8);
  local_21b = *(undefined1 *)(lVar12 + 0x46b8 + lVar8);
  local_21c = *(undefined1 *)(lVar12 + 0x46b9 + lVar8);
  local_219 = *(undefined1 *)(lVar12 + 0x46ba + lVar8);
  local_21a = *(undefined1 *)(lVar12 + 0x46bb + lVar8);
  local_217 = *(undefined1 *)(lVar12 + 0x46bc + lVar8);
  local_218 = *(undefined1 *)(lVar12 + 0x46bd + lVar8);
  local_215 = *(undefined1 *)(lVar12 + 0x46be + lVar8);
  local_216 = *(undefined1 *)(lVar12 + 0x46bf + lVar8);
  local_213 = *(undefined1 *)(lVar12 + 0x46c0 + lVar8);
  local_214 = *(undefined1 *)(lVar12 + 0x46c1 + lVar8);
  local_211 = *(undefined1 *)(lVar12 + 0x46c2 + lVar8);
  local_212 = *(undefined1 *)(lVar12 + 0x46c3 + lVar8);
  local_210 = 0x10000003;
  local_209 = *(undefined1 *)(lVar12 + 0x46c4 + lVar8);
  local_20a = *(undefined1 *)(lVar12 + 0x46c5 + lVar8);
  local_207 = *(undefined1 *)(lVar12 + 0x46c6 + lVar8);
  local_208 = *(undefined1 *)(lVar12 + 0x46c7 + lVar8);
  local_205 = *(undefined1 *)(lVar12 + 0x46c8 + lVar8);
  local_206 = *(undefined1 *)(lVar12 + 0x46c9 + lVar8);
  local_203 = *(undefined1 *)(lVar12 + 0x46ca + lVar8);
  local_204 = *(undefined1 *)(lVar12 + 0x46cb + lVar8);
  lVar13 = lVar13 + 0x46cf + lVar4 + lVar12;
  lVar8 = 0;
  do {
    *(undefined1 *)((long)&local_202 + lVar8 * 2 + 1) = *(undefined1 *)(lVar13 + -3 + lVar8 * 2);
    *(undefined1 *)((long)&local_202 + lVar8 * 2) = *(undefined1 *)(lVar13 + -2 + lVar8 * 2);
    *(undefined1 *)((long)&local_202 + lVar8 * 2 + 3) = *(undefined1 *)(lVar13 + -1 + lVar8 * 2);
    *(undefined1 *)((long)&local_202 + lVar8 * 2 + 2) = *(undefined1 *)(lVar13 + lVar8 * 2);
    lVar8 = lVar8 + 2;
  } while (lVar8 != 0x14);
  local_1c6 = ~-(uint)(uVar3 >> 0x20 == 0) | (uint)uVar3;
  local_1c0 = 0xfffffff;
  if (uVar3 < 0x10000000) {
    local_1c0 = (uint)uVar3;
  }
  local_1d9 = 0x80;
  local_1d8 = 0;
  local_1d5 = 0xf;
  local_1d4 = 0x4000;
  local_1d1 = 2;
  local_1cf = 2;
  local_1ce = 7;
  local_1bc = 0x8ff;
  local_1ba = 0x407;
  local_1b8 = 3;
  local_1b6 = 1;
  local_1b4 = 1;
  local_1b2 = 1;
  local_1b0 = 1;
  local_196 = 0x15;
  local_194 = 0x7020;
  local_192 = 0x7400;
  local_190 = 0x7000;
  local_18e = 0x4020;
  if (iVar7 == 0) {
    local_18e = 0x4000;
  }
  local_18c = 0x7400;
  local_18a = 0x7000;
  local_188 = 0x203f;
  uVar6 = *(uint *)(lVar12 + 0x4704 + lVar11) / *(uint *)(lVar12 + 0x4708 + lVar11);
  iVar7 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  uVar5 = (ushort)iVar7;
  if (uVar6 == 0) {
    uVar5 = 0xffff;
  }
  local_164 = (uVar5 & 0xf) + 0x6000;
  uVar6 = *(uint *)(lVar12 + 0x4708 + lVar11);
  if (uVar6 < 0x201) {
    local_230 = *(short *)(lVar12 + 0x46a0 + lVar11) << 9;
    local_22e = 0x200;
    local_198 = 0x7e;
  }
  else {
    local_164 = uVar5 & 0xf | 0x7000;
    local_14e = (undefined2)(uVar6 >> 1);
    local_198 = 0x40;
  }
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_7c = 0x1010;
  local_1da = 0x10;
  local_1a0 = 6;
  local_3a = 0xa5;
  if (puVar9 != (undefined8 *)0x0) {
    local_134 = *puVar9;
  }
  local_1cc = local_236;
  local_1ca = local_232;
  local_1c8 = local_22c;
  local_170 = uVar3;
  if (*(short *)((ulong)*(ushort *)(param_1 + 0xff0) * 0x80 + 0x46f8 +
                (ulong)*(ushort *)(param_1 + 0xfee) * 0x300 + *(long *)(param_1 + 0x1000)) == 1) {
    local_198 = local_198 | 0x1c0;
    local_86 = 1;
    local_166 = 0;
    local_e6 = 1;
    local_1ae = 0x4020;
    if ((DAT_101115f1c & 0xffffff00) == 0x700) {
      local_250 = (QArrayData *)QString::fromLatin1_helper((char *)&local_202,0x28);
      QString::fromUtf8_helper((char *)&local_248,0xa14ed6);
      QString::insert((int)&local_250,(QChar *)0x0,
                      (int)*(undefined8 *)(local_248 + 0x10) + (int)local_248);
      if (*(int *)local_248 != -1) {
        if (*(int *)local_248 != 0) {
          LOCK();
          *(int *)local_248 = *(int *)local_248 + -1;
          local_239 = *(int *)local_248 != 0;
          UNLOCK();
          if ((bool)local_239) goto LAB_1002964f5;
        }
        QArrayData::deallocate(local_248,2,8);
      }
LAB_1002964f5:
      QString::truncate((int)&local_250);
      QString::toLatin1();
      pQVar10 = local_258 + *(long *)(local_258 + 0x10);
      if (*(int *)local_258 != -1) {
        if (*(int *)local_258 != 0) {
          LOCK();
          *(int *)local_258 = *(int *)local_258 + -1;
          local_239 = *(int *)local_258 != 0;
          UNLOCK();
          if ((bool)local_239) goto LAB_10029655c;
        }
        QArrayData::deallocate(local_258,1,8);
      }
LAB_10029655c:
      local_1e2 = *(undefined8 *)(pQVar10 + 0x20);
      local_1ea = *(undefined8 *)(pQVar10 + 0x18);
      local_1f2 = *(undefined8 *)(pQVar10 + 0x10);
      local_202 = *(undefined8 *)pQVar10;
      local_1fa = *(undefined8 *)(pQVar10 + 8);
      if (*(int *)local_250 != -1) {
        if (*(int *)local_250 != 0) {
          LOCK();
          *(int *)local_250 = *(int *)local_250 + -1;
          local_239 = *(int *)local_250 != 0;
          UNLOCK();
          if ((bool)local_239) goto LAB_1002965c6;
        }
        QArrayData::deallocate(local_250,2,8);
      }
    }
  }
LAB_1002965c6:
  if (*(char *)(param_1 + 0x137b0) != '\0') {
    local_1a0 = local_1a0 | 0x100;
    local_1a2 = 0x1f;
  }
  local_1c2 = *(undefined1 *)(param_1 + 0x141d0);
  local_1c1 = 1;
  local_39 = FUN_100298a20(&local_238,0x1ff);
  iVar7 = FUN_10008c9b0(DAT_1011c3688,*(undefined8 *)(lVar2 + 0x80),&local_238,uVar14);
  if (iVar7 < 0) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","FALSE",
                  "../Ahci/sata_hdd.cpp",0x2bd,"identify");
  }
LAB_100296679:
  *(undefined2 *)(param_2 + 0x38) = 0x40;
  (**(code **)(param_2 + 0x50))(param_2,uVar14);
  if (lVar13 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

