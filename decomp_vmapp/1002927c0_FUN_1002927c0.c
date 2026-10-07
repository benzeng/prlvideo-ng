
void FUN_1002927c0(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined2 local_240;
  undefined2 uStack_23e;
  undefined2 uStack_23c;
  short sStack_23a;
  undefined2 local_238 [10];
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
  undefined2 local_210;
  undefined2 local_20e;
  undefined2 local_20c;
  undefined1 local_20a;
  undefined1 local_209;
  undefined1 local_208;
  undefined1 local_207;
  undefined1 auStack_202 [42];
  undefined2 local_1d8;
  undefined1 local_1d5;
  undefined2 local_1d4;
  undefined1 local_1d1;
  undefined1 local_1cf;
  undefined2 local_1ce;
  undefined2 local_1bc;
  undefined2 local_1ba;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined2 local_1b4;
  undefined2 local_1b2;
  undefined2 local_1b0;
  undefined2 local_1aa;
  undefined2 local_1a8;
  undefined2 local_1a0;
  ushort local_19c;
  undefined2 local_19a;
  undefined2 local_198;
  undefined2 local_194;
  undefined2 local_192;
  undefined2 local_190;
  undefined2 local_18e;
  undefined2 local_18a;
  undefined2 local_188;
  undefined2 local_13a;
  undefined8 local_134;
  undefined2 local_7c;
  undefined1 local_3a;
  undefined1 local_39;
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *(long *)(param_2 + 0x60);
  uVar5 = (*(uint *)(lVar2 + 0x8c) & 0x3fffff) + 1;
  uVar11 = 0x200;
  if (uVar5 < 0x200) {
    uVar11 = uVar5;
  }
  local_38 = lVar9;
  if (uVar11 != 0) {
    if (*(char *)(param_2 + 0x39) == '3') {
      local_240 = 0xc0de;
      uStack_23e = 0;
      uStack_23c = 2;
      uVar4 = *(ushort *)(param_1 + 0xfee);
      uVar1 = *(ushort *)(param_1 + 0xff0);
      sStack_23a = uVar1 + uVar4 * 2;
      puVar8 = (undefined8 *)&local_240;
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0xff0);
      uVar4 = *(ushort *)(param_1 + 0xfee);
      puVar8 = (undefined8 *)0x0;
    }
    lVar3 = *(long *)(param_1 + 0x1000);
    ___bzero(local_238,0x200);
    local_238[0] = 0x8580;
    lVar7 = (ulong)uVar4 * 0x300;
    lVar9 = lVar3 + lVar7;
    lVar10 = (ulong)uVar1 * 0x80;
    local_223 = *(undefined1 *)(lVar10 + 0x46b0 + lVar9);
    local_224 = *(undefined1 *)(lVar10 + 0x46b1 + lVar9);
    local_221 = *(undefined1 *)(lVar10 + 0x46b2 + lVar9);
    local_222 = *(undefined1 *)(lVar10 + 0x46b3 + lVar9);
    local_21f = *(undefined1 *)(lVar10 + 0x46b4 + lVar9);
    local_220 = *(undefined1 *)(lVar10 + 0x46b5 + lVar9);
    local_21d = *(undefined1 *)(lVar10 + 0x46b6 + lVar9);
    local_21e = *(undefined1 *)(lVar10 + 0x46b7 + lVar9);
    local_21b = *(undefined1 *)(lVar10 + 0x46b8 + lVar9);
    local_21c = *(undefined1 *)(lVar10 + 0x46b9 + lVar9);
    local_219 = *(undefined1 *)(lVar10 + 0x46ba + lVar9);
    local_21a = *(undefined1 *)(lVar10 + 0x46bb + lVar9);
    local_217 = *(undefined1 *)(lVar10 + 0x46bc + lVar9);
    local_218 = *(undefined1 *)(lVar10 + 0x46bd + lVar9);
    local_215 = *(undefined1 *)(lVar10 + 0x46be + lVar9);
    local_216 = *(undefined1 *)(lVar10 + 0x46bf + lVar9);
    local_213 = *(undefined1 *)(lVar10 + 0x46c0 + lVar9);
    local_214 = *(undefined1 *)(lVar10 + 0x46c1 + lVar9);
    local_211 = *(undefined1 *)(lVar10 + 0x46c2 + lVar9);
    local_212 = *(undefined1 *)(lVar10 + 0x46c3 + lVar9);
    local_210 = 3;
    local_20e = 0x1000;
    local_20c = 4;
    local_209 = *(undefined1 *)(lVar10 + 0x46c4 + lVar9);
    local_20a = *(undefined1 *)(lVar10 + 0x46c5 + lVar9);
    local_207 = *(undefined1 *)(lVar10 + 0x46c6 + lVar9);
    local_208 = *(undefined1 *)(lVar10 + 0x46c7 + lVar9);
    lVar9 = lVar3 + 0x46cf + lVar7 + lVar10;
    lVar7 = 0;
    do {
      auStack_202[lVar7 * 2 + 1] = *(undefined1 *)(lVar9 + -3 + lVar7 * 2);
      auStack_202[lVar7 * 2] = *(undefined1 *)(lVar9 + -2 + lVar7 * 2);
      auStack_202[lVar7 * 2 + 3] = *(undefined1 *)(lVar9 + -1 + lVar7 * 2);
      auStack_202[lVar7 * 2 + 2] = *(undefined1 *)(lVar9 + lVar7 * 2);
      lVar7 = lVar7 + 2;
    } while (lVar7 != 0x14);
    local_1d8 = 1;
    local_1d5 = 0xb;
    local_1d4 = 0x4000;
    local_1d1 = 4;
    local_1cf = 4;
    local_1ce = 7;
    local_1bc = 0x101f;
    local_1ba = 7;
    local_1b8 = 3;
    local_1b6 = 0xb4;
    local_1b4 = 0xb4;
    local_1b2 = 300;
    local_1b0 = 0xb4;
    local_1aa = 0x1e;
    local_1a8 = 0x1e;
    local_1a0 = 6;
    local_19c = 0;
    if (*(int *)(lVar10 + 0x470c + lVar3 + (ulong)uVar4 * 0x300) == 0) {
      local_19a = 0;
    }
    else {
      local_19a = 0x20;
    }
    local_198 = 0x7e;
    local_194 = 0x4004;
    local_192 = 0x4010;
    local_190 = 0x4000;
    local_18e = 0x4004;
    local_18a = 0x4000;
    local_188 = 0x303;
    local_13a = 1;
    local_7c = 0x1010;
    local_3a = 0xa5;
    local_39 = FUN_100298a20(local_238,0x1ff);
    if (puVar8 != (undefined8 *)0x0) {
      local_134 = *puVar8;
    }
    if (DAT_101115f28 == -1) {
      DAT_101115f28 = FUN_1007da300("devices.ahci.aen",1);
    }
    if (DAT_101115f28 != 0) {
      local_19c = local_19c | 0x20;
    }
    local_39 = FUN_100298a20(local_238,0x1ff);
    iVar6 = FUN_10008c9b0(DAT_1011c3688,*(undefined8 *)(lVar2 + 0x80),local_238,uVar11);
    lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (iVar6 < 0) {
      FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","FALSE",
                    "../Ahci/sata_dvd.cpp",0x16e,"identify");
    }
  }
  *(undefined2 *)(param_2 + 0x38) = 0x40;
  (**(code **)(param_2 + 0x50))(param_2,uVar11);
  if (lVar9 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

