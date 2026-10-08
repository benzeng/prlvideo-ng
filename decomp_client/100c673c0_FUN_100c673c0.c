
int FUN_100c673c0(long param_1,undefined8 param_2,long param_3,long param_4,int param_5,uint param_6
                 ,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined1 *local_e8;
  uint local_ac;
  undefined1 local_a8 [48];
  undefined1 local_78 [64];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_ac = 0;
  iVar7 = *(int *)(param_1 + 8);
  iVar9 = *(int *)(param_1 + 0xc);
  local_38 = lVar8;
  if (0x40 < iVar7) {
    FUN_100bf2cd0("evp_key.c",0x85,"nkey <= EVP_MAX_KEY_LENGTH");
  }
  if (0x10 < iVar9) {
    FUN_100bf2cd0("evp_key.c",0x86,"niv <= EVP_MAX_IV_LENGTH");
  }
  if (param_4 != 0) {
    local_e8 = param_8;
    FUN_100c65850(local_a8);
    iVar3 = 0;
    do {
      iVar1 = FUN_100c65920(local_a8,param_2,0);
      if (iVar1 == 0) {
        iVar1 = 0;
        goto LAB_100c676df;
      }
      if ((iVar3 != 0) && (iVar1 = FUN_100c65b10(local_a8,local_78,local_ac), iVar1 == 0)) {
        iVar1 = 0;
        goto LAB_100c676df;
      }
      iVar1 = FUN_100c65b10(local_a8,param_4,(long)param_5);
      if (iVar1 == 0) {
        iVar1 = 0;
        goto LAB_100c676df;
      }
      if ((param_3 != 0) && (iVar1 = FUN_100c65b10(local_a8,param_3,8), iVar1 == 0)) {
        iVar1 = 0;
        goto LAB_100c676df;
      }
      iVar1 = FUN_100c65bc0(local_a8,local_78,&local_ac);
      if (iVar1 == 0) {
        iVar1 = 0;
        goto LAB_100c676df;
      }
      uVar10 = 1;
      if (1 < param_6) {
        do {
          iVar2 = FUN_100c65920(local_a8,param_2,0);
          iVar1 = 0;
          if (((iVar2 == 0) ||
              (iVar2 = FUN_100c65b10(local_a8,local_78,local_ac), iVar1 = 0, iVar2 == 0)) ||
             (iVar2 = FUN_100c65bc0(local_a8,local_78,&local_ac), iVar2 == 0)) goto LAB_100c676df;
          uVar10 = uVar10 + 1;
        } while (uVar10 < param_6);
      }
      uVar6 = 0;
      uVar4 = 0;
      iVar1 = 0;
      if (iVar7 != 0) {
        do {
          if (uVar6 == local_ac) goto LAB_100c67616;
          puVar5 = (undefined1 *)0x0;
          if (param_7 != (undefined1 *)0x0) {
            *param_7 = local_78[uVar6];
            puVar5 = param_7 + 1;
          }
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + -1;
          param_7 = puVar5;
        } while (iVar7 != 0);
        iVar7 = 0;
LAB_100c67616:
        uVar4 = uVar6 & 0xffffffff;
        iVar1 = iVar7;
      }
      iVar7 = iVar1;
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        uVar10 = (uint)uVar4;
        puVar5 = local_e8;
        while (local_e8 = puVar5, uVar10 != local_ac) {
          local_e8 = (undefined1 *)0x0;
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = local_78[uVar4];
            local_e8 = puVar5 + 1;
          }
          if (iVar9 == 1) {
            iVar9 = 0;
            break;
          }
          iVar9 = iVar9 + -1;
          uVar10 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar10;
          puVar5 = local_e8;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar9 != 0 || iVar7 != 0);
    iVar1 = *(int *)(param_1 + 8);
LAB_100c676df:
    FUN_100c65c50(local_a8);
    _OPENSSL_cleanse(local_78,0x40);
    lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
    iVar7 = iVar1;
  }
  if (lVar8 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

