
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10030b530(undefined8 *param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  short sVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  void *pvVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  puVar1 = param_1 + 7;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_1003007f0(puVar1,param_1 + 0x14cd);
  *(undefined2 *)((long)param_1 + 0xa6ac) = 0xd2;
  local_48 = _DAT_100bbb9f0;
  uStack_40 = _UNK_100bbb9f8;
  local_58 = _DAT_100bbb9e0;
  uStack_50 = _UNK_100bbb9e8;
  local_68 = _DAT_100bbb9d0;
  uStack_60 = _UNK_100bbb9d8;
  local_78 = _DAT_100bbb9c0;
  uStack_70 = _UNK_100bbb9c8;
  local_88 = _DAT_100b39790;
  uStack_80 = _UNK_100b39798;
  local_98 = _DAT_100b39780;
  uStack_94 = _UNK_100b39784;
  uStack_90 = _UNK_100b39788;
  uStack_8c = _UNK_100b3978c;
  uVar6 = 0xd2;
  if (0 < param_4) {
    iVar15 = 0;
    do {
      iVar14 = iVar15 + 1;
      sVar2 = *(short *)(param_3 + (long)iVar15 * 2);
      if (sVar2 == 0xc32) {
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else if (sVar2 == 0x1f02) {
        uVar6 = *(undefined2 *)(param_3 + (long)iVar14 * 2);
        *(undefined2 *)((long)param_1 + 0xa6ac) = uVar6;
        iVar14 = iVar15 + 2;
      }
      else if (sVar2 == 0) break;
      iVar15 = iVar14;
    } while (iVar14 < param_4);
  }
  lVar8 = FUN_1002fa250(param_2,*(undefined1 *)(param_1 + 1),0,uVar6);
  param_1[2] = lVar8;
  if (lVar8 == 0) {
    puVar11 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar11 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar11,PTR_typeinfo_100ba22d8,0);
  }
  FUN_100300760(puVar1,*(undefined1 *)(param_1 + 1),*(undefined2 *)((long)param_1 + 0xa6ac));
  puVar9 = operator_new(0x2870);
  *(undefined4 *)(puVar9 + 3) = 0;
  puVar9[2] = 0;
  puVar9[1] = 0;
  puVar9[4] = &PTR_FUN_101117978;
  *(undefined4 *)(puVar9 + 0x105) = 9;
  ___bzero(puVar9 + 5,0x800);
  puVar9[0x106] = &PTR_FUN_101117978;
  *(undefined4 *)(puVar9 + 0x207) = 9;
  ___bzero(puVar9 + 0x107,0x800);
  puVar9[0x208] = &PTR_FUN_101117a08;
  *(undefined4 *)(puVar9 + 0x309) = 9;
  ___bzero(puVar9 + 0x209,0x800);
  puVar9[0x30a] = &PTR_FUN_101117a38;
  *(undefined4 *)(puVar9 + 0x40b) = 9;
  ___bzero(puVar9 + 0x30b,0x800);
  puVar9[0x40c] = &PTR_FUN_101117978;
  *(undefined4 *)(puVar9 + 0x50d) = 9;
  ___bzero(puVar9 + 0x40d,0x800);
  *puVar9 = 0;
  param_1[6] = puVar9;
  param_1[0xd] = puVar9;
  param_1[0x14d4] = 0;
  param_1[0x14d3] = 0;
  param_1[0x14d2] = 0;
  param_1[0x14d1] = 0;
  param_1[0x14d0] = 0;
  param_1[0x14cf] = 0;
  param_1[0x14ce] = 0;
  param_1[0x14cd] = 0;
  param_1[0x14cd] = param_1[2];
  param_1[0x14ce] = puVar1;
  uVar10 = FUN_1002adb30(*param_1);
  puVar11 = (undefined4 *)param_1[6];
  uVar7 = FUN_1002ad260(*(undefined2 *)((long)param_1 + 0xa6ac),
                        "IN_VS vec2 pos;\nIN_VS vec4 src;\nIN_VS vec4 dst;\nOUT_VS vec2 t0;\nvoid main()\n{\n gl_Position = vec4(pos * dst.zw + dst.xy, 0., 1.);\n t0 = pos * src.zw + src.xy;\n}\n"
                        ,
                        "IN_PS vec2 t0;\nuniform sampler2DRect tex;\nvoid main() { OUT_COLOR = TEXTURE2DRECT(tex, t0); }\n"
                        ,3,&local_78);
  *puVar11 = uVar7;
  (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,uVar7);
  uVar7 = (*(code *)DAT_1011c4a88[0x272])(*DAT_1011c4a88,*puVar11,"tex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar7,0);
  lVar8 = param_1[6];
  if (*(ushort *)((long)param_1 + 0xa6ac) < 300) {
    *(undefined4 *)(lVar8 + 4) = 0;
  }
  else {
    uVar7 = FUN_1002ad260(*(ushort *)((long)param_1 + 0xa6ac),
                          "IN_VS vec2 pos;\nIN_VS vec4 src;\nIN_VS vec4 dst;\nIN_VS vec4 ext;\nOUT_VS vec2 texCoord;\nOUT_VS_FLAT float level;\nvoid main()\n{\n gl_Position = vec4(pos * dst.zw + dst.xy, 0., 1.);\n texCoord = pos * src.zw + src.xy;\n level = ext.x;\n}\n"
                          ,
                          "IN_PS vec2 texCoord;\nIN_PS_FLAT float level;\nuniform sampler2D tex;\nvoid main() { gl_FragDepth = TEXTURE2DLOD(tex, texCoord.xy, level).x; }\n"
                          ,4,&local_78);
    *(undefined4 *)(lVar8 + 4) = uVar7;
    (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,uVar7);
    uVar7 = (*(code *)DAT_1011c4a88[0x272])(*DAT_1011c4a88,*(undefined4 *)(lVar8 + 4),"tex");
    (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar7,0);
  }
  (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,0);
  (*(code *)DAT_1011c4a88[0x285])(*DAT_1011c4a88,1,param_1[6] + 8);
  (*(code *)DAT_1011c4a88[0x283])(*DAT_1011c4a88,0x8892,*(undefined4 *)(param_1[6] + 8));
  (*(code *)DAT_1011c4a88[0x287])(*DAT_1011c4a88,0x8892,0x20,&local_98,0x88e4);
  (*(code *)DAT_1011c4a88[0x283])(*DAT_1011c4a88,0x8892,0);
  FUN_1002adb30(*param_1,uVar10);
  uVar16 = (ulong)DAT_1011c8100;
  pvVar13 = DAT_1011c80f8;
  uVar5 = DAT_1011c8100;
  if (1 < uVar16) {
    uVar12 = 1;
    do {
      if (*(long *)((long)DAT_1011c80f8 + uVar12 * 8) == 0) {
        uVar16 = uVar12 & 0xffffffff;
        goto LAB_10030ba10;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar16);
  }
  uVar3 = DAT_1011c8100 * 2;
  if (DAT_1011c8100 < uVar3) {
    pvVar13 = operator_new__((ulong)uVar3 << 3);
    pvVar4 = DAT_1011c80f8;
    _memcpy(pvVar13,DAT_1011c80f8,uVar16 * 8);
    ___bzero((void *)((long)pvVar13 + uVar16 * 8),uVar16 * 8);
    uVar5 = uVar3;
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
  }
LAB_10030ba10:
  DAT_1011c8100 = uVar5;
  DAT_1011c80f8 = pvVar13;
  *(undefined8 **)((long)DAT_1011c80f8 + uVar16 * 8) = param_1;
  *(int *)(param_1 + 0x14d5) = (int)uVar16 + DAT_1011c80f0;
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

