
undefined8 FUN_100c015e0(long *param_1,void *param_2,uint param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar5 = *param_1;
  if (param_4 == 0) {
    bVar2 = false;
    uVar4 = 0;
    if (lVar5 == 0) goto LAB_100c018db;
  }
  else {
    if ((lVar5 != param_4) && ((uVar4 = 0, param_2 == (void *)0x0 || ((int)param_3 < 0))))
    goto LAB_100c018db;
    *param_1 = param_4;
    bVar2 = true;
    lVar5 = param_4;
  }
  if (param_2 == (void *)0x0) {
    if (bVar2) goto LAB_100c01737;
LAB_100c018bf:
    iVar3 = FUN_100c65d60(param_1 + 1,param_1 + 7);
    uVar4 = 1;
    if (iVar3 != 0) goto LAB_100c018db;
  }
  else {
    iVar3 = FUN_100c6fc20(lVar5);
    if (0x80 < iVar3) {
      FUN_100bf2cd0("hmac.c",0x6a,"j <= (int)sizeof(ctx->key)");
    }
    if (iVar3 < (int)param_3) {
      plVar1 = param_1 + 1;
      iVar3 = FUN_100c65920(plVar1,lVar5,param_5);
      if ((iVar3 != 0) && (iVar3 = FUN_100c65b10(plVar1,param_2,(long)(int)param_3), iVar3 != 0)) {
        iVar3 = FUN_100c65bc0(plVar1,(long)param_1 + 0x9c,param_1 + 0x13);
        if (iVar3 != 0) {
          param_3 = *(uint *)(param_1 + 0x13);
          goto LAB_100c01716;
        }
      }
    }
    else {
      uVar4 = 0;
      if (0x80 < param_3) goto LAB_100c018db;
      _memcpy((void *)((long)param_1 + 0x9c),param_2,(long)(int)param_3);
      *(uint *)(param_1 + 0x13) = param_3;
LAB_100c01716:
      if (param_3 != 0x80) {
        ___bzero((long)param_1 + (ulong)param_3 + 0x9c,0x80 - param_3);
      }
LAB_100c01737:
      local_b8 = *(uint *)((long)param_1 + 0x9c) ^
                 s_6666666666666666_________________101da6e00._0_4_;
      uStack_b4 = *(uint *)(param_1 + 0x14) ^ s_6666666666666666_________________101da6e00._4_4_;
      uStack_b0 = *(uint *)((long)param_1 + 0xa4) ^
                  s_6666666666666666_________________101da6e00._8_4_;
      uStack_ac = *(uint *)(param_1 + 0x15) ^ s_6666666666666666_________________101da6e00._12_4_;
      local_a8 = *(uint *)((long)param_1 + 0xac) ^
                 s_6666666666666666_________________101da6e00._0_4_;
      uStack_a4 = *(uint *)(param_1 + 0x16) ^ s_6666666666666666_________________101da6e00._4_4_;
      uStack_a0 = *(uint *)((long)param_1 + 0xb4) ^
                  s_6666666666666666_________________101da6e00._8_4_;
      uStack_9c = *(uint *)(param_1 + 0x17) ^ s_6666666666666666_________________101da6e00._12_4_;
      local_98 = *(uint *)((long)param_1 + 0xbc) ^
                 s_6666666666666666_________________101da6e00._0_4_;
      uStack_94 = *(uint *)(param_1 + 0x18) ^ s_6666666666666666_________________101da6e00._4_4_;
      uStack_90 = *(uint *)((long)param_1 + 0xc4) ^
                  s_6666666666666666_________________101da6e00._8_4_;
      uStack_8c = *(uint *)(param_1 + 0x19) ^ s_6666666666666666_________________101da6e00._12_4_;
      local_88 = *(uint *)((long)param_1 + 0xcc) ^
                 s_6666666666666666_________________101da6e00._0_4_;
      uStack_84 = *(uint *)(param_1 + 0x1a) ^ s_6666666666666666_________________101da6e00._4_4_;
      uStack_80 = *(uint *)((long)param_1 + 0xd4) ^
                  s_6666666666666666_________________101da6e00._8_4_;
      uStack_7c = *(uint *)(param_1 + 0x1b) ^ s_6666666666666666_________________101da6e00._12_4_;
      local_78 = *(uint *)((long)param_1 + 0xdc) ^
                 s_6666666666666666_________________101da6e00._0_4_;
      uStack_74 = *(uint *)(param_1 + 0x1c) ^ s_6666666666666666_________________101da6e00._4_4_;
      uStack_70 = *(uint *)((long)param_1 + 0xe4) ^
                  s_6666666666666666_________________101da6e00._8_4_;
      uStack_6c = *(uint *)(param_1 + 0x1d) ^ s_6666666666666666_________________101da6e00._12_4_;
      local_68 = *(uint *)((long)param_1 + 0xec) ^
                 s_6666666666666666_________________101da6e00._0_4_;
      uStack_64 = *(uint *)(param_1 + 0x1e) ^ s_6666666666666666_________________101da6e00._4_4_;
      uStack_60 = *(uint *)((long)param_1 + 0xf4) ^
                  s_6666666666666666_________________101da6e00._8_4_;
      uStack_5c = *(uint *)(param_1 + 0x1f) ^ s_6666666666666666_________________101da6e00._12_4_;
      local_58 = *(uint *)((long)param_1 + 0xfc) ^
                 s_6666666666666666_________________101da6e00._0_4_;
      uStack_54 = *(uint *)(param_1 + 0x20) ^ s_6666666666666666_________________101da6e00._4_4_;
      uStack_50 = *(uint *)((long)param_1 + 0x104) ^
                  s_6666666666666666_________________101da6e00._8_4_;
      uStack_4c = *(uint *)(param_1 + 0x21) ^ s_6666666666666666_________________101da6e00._12_4_;
      local_48 = *(uint *)((long)param_1 + 0x10c) ^
                 s_6666666666666666_________________101da6e00._0_4_;
      uStack_44 = *(uint *)(param_1 + 0x22) ^ s_6666666666666666_________________101da6e00._4_4_;
      uStack_40 = *(uint *)((long)param_1 + 0x114) ^
                  s_6666666666666666_________________101da6e00._8_4_;
      uStack_3c = *(uint *)(param_1 + 0x23) ^ s_6666666666666666_________________101da6e00._12_4_;
      iVar3 = FUN_100c65920(param_1 + 7,lVar5,param_5);
      if (iVar3 != 0) {
        iVar3 = FUN_100c6fc20(lVar5);
        iVar3 = FUN_100c65b10(param_1 + 7,&local_b8,(long)iVar3);
        if (iVar3 != 0) {
          local_b8 = *(uint *)((long)param_1 + 0x9c) ^
                     s_6666666666666666_________________101da6e00._16_4_;
          uStack_b4 = *(uint *)(param_1 + 0x14) ^
                      s_6666666666666666_________________101da6e00._20_4_;
          uStack_b0 = *(uint *)((long)param_1 + 0xa4) ^
                      s_6666666666666666_________________101da6e00._24_4_;
          uStack_ac = *(uint *)(param_1 + 0x15) ^
                      s_6666666666666666_________________101da6e00._28_4_;
          local_a8 = *(uint *)((long)param_1 + 0xac) ^
                     s_6666666666666666_________________101da6e00._16_4_;
          uStack_a4 = *(uint *)(param_1 + 0x16) ^
                      s_6666666666666666_________________101da6e00._20_4_;
          uStack_a0 = *(uint *)((long)param_1 + 0xb4) ^
                      s_6666666666666666_________________101da6e00._24_4_;
          uStack_9c = *(uint *)(param_1 + 0x17) ^
                      s_6666666666666666_________________101da6e00._28_4_;
          local_98 = *(uint *)((long)param_1 + 0xbc) ^
                     s_6666666666666666_________________101da6e00._16_4_;
          uStack_94 = *(uint *)(param_1 + 0x18) ^
                      s_6666666666666666_________________101da6e00._20_4_;
          uStack_90 = *(uint *)((long)param_1 + 0xc4) ^
                      s_6666666666666666_________________101da6e00._24_4_;
          uStack_8c = *(uint *)(param_1 + 0x19) ^
                      s_6666666666666666_________________101da6e00._28_4_;
          local_88 = *(uint *)((long)param_1 + 0xcc) ^
                     s_6666666666666666_________________101da6e00._16_4_;
          uStack_84 = *(uint *)(param_1 + 0x1a) ^
                      s_6666666666666666_________________101da6e00._20_4_;
          uStack_80 = *(uint *)((long)param_1 + 0xd4) ^
                      s_6666666666666666_________________101da6e00._24_4_;
          uStack_7c = *(uint *)(param_1 + 0x1b) ^
                      s_6666666666666666_________________101da6e00._28_4_;
          local_78 = *(uint *)((long)param_1 + 0xdc) ^
                     s_6666666666666666_________________101da6e00._16_4_;
          uStack_74 = *(uint *)(param_1 + 0x1c) ^
                      s_6666666666666666_________________101da6e00._20_4_;
          uStack_70 = *(uint *)((long)param_1 + 0xe4) ^
                      s_6666666666666666_________________101da6e00._24_4_;
          uStack_6c = *(uint *)(param_1 + 0x1d) ^
                      s_6666666666666666_________________101da6e00._28_4_;
          local_68 = *(uint *)((long)param_1 + 0xec) ^
                     s_6666666666666666_________________101da6e00._16_4_;
          uStack_64 = *(uint *)(param_1 + 0x1e) ^
                      s_6666666666666666_________________101da6e00._20_4_;
          uStack_60 = *(uint *)((long)param_1 + 0xf4) ^
                      s_6666666666666666_________________101da6e00._24_4_;
          uStack_5c = *(uint *)(param_1 + 0x1f) ^
                      s_6666666666666666_________________101da6e00._28_4_;
          local_58 = *(uint *)((long)param_1 + 0xfc) ^
                     s_6666666666666666_________________101da6e00._16_4_;
          uStack_54 = *(uint *)(param_1 + 0x20) ^
                      s_6666666666666666_________________101da6e00._20_4_;
          uStack_50 = *(uint *)((long)param_1 + 0x104) ^
                      s_6666666666666666_________________101da6e00._24_4_;
          uStack_4c = *(uint *)(param_1 + 0x21) ^
                      s_6666666666666666_________________101da6e00._28_4_;
          local_48 = *(uint *)((long)param_1 + 0x10c) ^
                     s_6666666666666666_________________101da6e00._16_4_;
          uStack_44 = *(uint *)(param_1 + 0x22) ^
                      s_6666666666666666_________________101da6e00._20_4_;
          uStack_40 = *(uint *)((long)param_1 + 0x114) ^
                      s_6666666666666666_________________101da6e00._24_4_;
          uStack_3c = *(uint *)(param_1 + 0x23) ^
                      s_6666666666666666_________________101da6e00._28_4_;
          iVar3 = FUN_100c65920(param_1 + 0xd,lVar5,param_5);
          if (iVar3 != 0) {
            iVar3 = FUN_100c6fc20(lVar5);
            iVar3 = FUN_100c65b10(param_1 + 0xd,&local_b8,(long)iVar3);
            if (iVar3 != 0) goto LAB_100c018bf;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_100c018db:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

