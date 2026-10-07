
undefined8 FUN_10037f7d0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 local_a8 [64];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = 0;
  if ((*(byte *)(param_2 + 0xbb6c) & 1) == 0) {
    uVar4 = *(uint *)(param_2 + 34000);
  }
  local_38 = lVar7;
  if ((uVar4 >> (uVar1 & 0x1f) & 1) == 0) {
    puVar6 = &DAT_1011c5bc0;
  }
  else {
    pauVar5 = (undefined1 (*) [16])FUN_10033cfd0(param_2 + 0x210,uVar1);
    local_68._0_8_ = *(undefined8 *)*pauVar5;
    local_68._8_8_ = *(undefined8 *)(*pauVar5 + 8);
    auVar9 = *pauVar5;
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 == 0) {
      FUN_10038dac0(local_a8);
      FUN_10038dc10(param_2 + 0x2f0,local_a8,4);
      lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
      auVar9 = FUN_10038ded0(local_a8,local_68);
    }
    local_58._0_8_ = (undefined8)auVar9._0_4_;
    dVar3 = (double)auVar9._4_4_;
    local_58._8_4_ = SUB84(dVar3,0);
    local_58._12_4_ = (int)((ulong)dVar3 >> 0x20);
    local_48 = (double)auVar9._8_4_;
    dStack_40 = (double)auVar9._12_4_;
    if (iVar2 != 0) {
      fVar8 = DAT_100b3d740;
      if (*(char *)(*(long *)(param_1 + 0x10) + 2) != '\0') {
        fVar8 = DAT_100b3d73c;
      }
      local_58._8_8_ = DAT_100b5a890 ^ (ulong)dVar3;
      local_48 = DAT_100b59ac0 * local_48;
      dStack_40 = (dStack_40 + local_48) -
                  ((double)(fVar8 / (float)(*(int *)(param_2 + 0x1a0) - *(int *)(param_2 + 0x198)))
                   * (double)local_58._0_8_ -
                  (double)(fVar8 / (float)(*(int *)(param_2 + 0x1a4) - *(int *)(param_2 + 0x19c))) *
                  dVar3);
    }
    local_68 = auVar9;
    (*DAT_1011c5868)(uVar1 + 0x3000,local_58);
    puVar6 = &DAT_1011c5c78;
  }
  (*(code *)*puVar6)(uVar1 + 0x3000);
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

