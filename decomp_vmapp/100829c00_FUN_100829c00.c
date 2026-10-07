
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100829c00(long *param_1,void *param_2,uint param_3,long param_4,undefined8 param_5)

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
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar5 = *param_1;
  if (param_4 == 0) {
    bVar2 = false;
    uVar4 = 0;
    if (lVar5 == 0) goto LAB_100829efb;
  }
  else {
    if ((lVar5 != param_4) && ((uVar4 = 0, param_2 == (void *)0x0 || ((int)param_3 < 0))))
    goto LAB_100829efb;
    *param_1 = param_4;
    bVar2 = true;
    lVar5 = param_4;
  }
  if (param_2 == (void *)0x0) {
    if (bVar2) goto LAB_100829d57;
LAB_100829edf:
    iVar3 = FUN_10088ab60(param_1 + 1,param_1 + 7);
    uVar4 = 1;
    if (iVar3 != 0) goto LAB_100829efb;
  }
  else {
    iVar3 = FUN_1008946a0(lVar5);
    if (0x80 < iVar3) {
      FUN_10081d560("hmac.c",0x6a,"j <= (int)sizeof(ctx->key)");
    }
    if (iVar3 < (int)param_3) {
      plVar1 = param_1 + 1;
      iVar3 = FUN_10088a720(plVar1,lVar5,param_5);
      if ((iVar3 != 0) && (iVar3 = FUN_10088a910(plVar1,param_2,(long)(int)param_3), iVar3 != 0)) {
        iVar3 = FUN_10088a9c0(plVar1,(long)param_1 + 0x9c,param_1 + 0x13);
        if (iVar3 != 0) {
          param_3 = *(uint *)(param_1 + 0x13);
          goto LAB_100829d36;
        }
      }
    }
    else {
      uVar4 = 0;
      if (0x80 < param_3) goto LAB_100829efb;
      _memcpy((void *)((long)param_1 + 0x9c),param_2,(long)(int)param_3);
      *(uint *)(param_1 + 0x13) = param_3;
LAB_100829d36:
      if (param_3 != 0x80) {
        ___bzero((long)param_1 + (ulong)param_3 + 0x9c,0x80 - param_3);
      }
LAB_100829d57:
      local_b8 = *(uint *)((long)param_1 + 0x9c) ^ _DAT_100b52190;
      uStack_b4 = *(uint *)(param_1 + 0x14) ^ _UNK_100b52194;
      uStack_b0 = *(uint *)((long)param_1 + 0xa4) ^ _UNK_100b52198;
      uStack_ac = *(uint *)(param_1 + 0x15) ^ _UNK_100b5219c;
      local_a8 = *(uint *)((long)param_1 + 0xac) ^ _DAT_100b52190;
      uStack_a4 = *(uint *)(param_1 + 0x16) ^ _UNK_100b52194;
      uStack_a0 = *(uint *)((long)param_1 + 0xb4) ^ _UNK_100b52198;
      uStack_9c = *(uint *)(param_1 + 0x17) ^ _UNK_100b5219c;
      local_98 = *(uint *)((long)param_1 + 0xbc) ^ _DAT_100b52190;
      uStack_94 = *(uint *)(param_1 + 0x18) ^ _UNK_100b52194;
      uStack_90 = *(uint *)((long)param_1 + 0xc4) ^ _UNK_100b52198;
      uStack_8c = *(uint *)(param_1 + 0x19) ^ _UNK_100b5219c;
      local_88 = *(uint *)((long)param_1 + 0xcc) ^ _DAT_100b52190;
      uStack_84 = *(uint *)(param_1 + 0x1a) ^ _UNK_100b52194;
      uStack_80 = *(uint *)((long)param_1 + 0xd4) ^ _UNK_100b52198;
      uStack_7c = *(uint *)(param_1 + 0x1b) ^ _UNK_100b5219c;
      local_78 = *(uint *)((long)param_1 + 0xdc) ^ _DAT_100b52190;
      uStack_74 = *(uint *)(param_1 + 0x1c) ^ _UNK_100b52194;
      uStack_70 = *(uint *)((long)param_1 + 0xe4) ^ _UNK_100b52198;
      uStack_6c = *(uint *)(param_1 + 0x1d) ^ _UNK_100b5219c;
      local_68 = *(uint *)((long)param_1 + 0xec) ^ _DAT_100b52190;
      uStack_64 = *(uint *)(param_1 + 0x1e) ^ _UNK_100b52194;
      uStack_60 = *(uint *)((long)param_1 + 0xf4) ^ _UNK_100b52198;
      uStack_5c = *(uint *)(param_1 + 0x1f) ^ _UNK_100b5219c;
      local_58 = *(uint *)((long)param_1 + 0xfc) ^ _DAT_100b52190;
      uStack_54 = *(uint *)(param_1 + 0x20) ^ _UNK_100b52194;
      uStack_50 = *(uint *)((long)param_1 + 0x104) ^ _UNK_100b52198;
      uStack_4c = *(uint *)(param_1 + 0x21) ^ _UNK_100b5219c;
      local_48 = *(uint *)((long)param_1 + 0x10c) ^ _DAT_100b52190;
      uStack_44 = *(uint *)(param_1 + 0x22) ^ _UNK_100b52194;
      uStack_40 = *(uint *)((long)param_1 + 0x114) ^ _UNK_100b52198;
      uStack_3c = *(uint *)(param_1 + 0x23) ^ _UNK_100b5219c;
      iVar3 = FUN_10088a720(param_1 + 7,lVar5,param_5);
      if (iVar3 != 0) {
        iVar3 = FUN_1008946a0(lVar5);
        iVar3 = FUN_10088a910(param_1 + 7,&local_b8,(long)iVar3);
        if (iVar3 != 0) {
          local_b8 = *(uint *)((long)param_1 + 0x9c) ^ _DAT_100b521a0;
          uStack_b4 = *(uint *)(param_1 + 0x14) ^ _UNK_100b521a4;
          uStack_b0 = *(uint *)((long)param_1 + 0xa4) ^ _UNK_100b521a8;
          uStack_ac = *(uint *)(param_1 + 0x15) ^ _UNK_100b521ac;
          local_a8 = *(uint *)((long)param_1 + 0xac) ^ _DAT_100b521a0;
          uStack_a4 = *(uint *)(param_1 + 0x16) ^ _UNK_100b521a4;
          uStack_a0 = *(uint *)((long)param_1 + 0xb4) ^ _UNK_100b521a8;
          uStack_9c = *(uint *)(param_1 + 0x17) ^ _UNK_100b521ac;
          local_98 = *(uint *)((long)param_1 + 0xbc) ^ _DAT_100b521a0;
          uStack_94 = *(uint *)(param_1 + 0x18) ^ _UNK_100b521a4;
          uStack_90 = *(uint *)((long)param_1 + 0xc4) ^ _UNK_100b521a8;
          uStack_8c = *(uint *)(param_1 + 0x19) ^ _UNK_100b521ac;
          local_88 = *(uint *)((long)param_1 + 0xcc) ^ _DAT_100b521a0;
          uStack_84 = *(uint *)(param_1 + 0x1a) ^ _UNK_100b521a4;
          uStack_80 = *(uint *)((long)param_1 + 0xd4) ^ _UNK_100b521a8;
          uStack_7c = *(uint *)(param_1 + 0x1b) ^ _UNK_100b521ac;
          local_78 = *(uint *)((long)param_1 + 0xdc) ^ _DAT_100b521a0;
          uStack_74 = *(uint *)(param_1 + 0x1c) ^ _UNK_100b521a4;
          uStack_70 = *(uint *)((long)param_1 + 0xe4) ^ _UNK_100b521a8;
          uStack_6c = *(uint *)(param_1 + 0x1d) ^ _UNK_100b521ac;
          local_68 = *(uint *)((long)param_1 + 0xec) ^ _DAT_100b521a0;
          uStack_64 = *(uint *)(param_1 + 0x1e) ^ _UNK_100b521a4;
          uStack_60 = *(uint *)((long)param_1 + 0xf4) ^ _UNK_100b521a8;
          uStack_5c = *(uint *)(param_1 + 0x1f) ^ _UNK_100b521ac;
          local_58 = *(uint *)((long)param_1 + 0xfc) ^ _DAT_100b521a0;
          uStack_54 = *(uint *)(param_1 + 0x20) ^ _UNK_100b521a4;
          uStack_50 = *(uint *)((long)param_1 + 0x104) ^ _UNK_100b521a8;
          uStack_4c = *(uint *)(param_1 + 0x21) ^ _UNK_100b521ac;
          local_48 = *(uint *)((long)param_1 + 0x10c) ^ _DAT_100b521a0;
          uStack_44 = *(uint *)(param_1 + 0x22) ^ _UNK_100b521a4;
          uStack_40 = *(uint *)((long)param_1 + 0x114) ^ _UNK_100b521a8;
          uStack_3c = *(uint *)(param_1 + 0x23) ^ _UNK_100b521ac;
          iVar3 = FUN_10088a720(param_1 + 0xd,lVar5,param_5);
          if (iVar3 != 0) {
            iVar3 = FUN_1008946a0(lVar5);
            iVar3 = FUN_10088a910(param_1 + 0xd,&local_b8,(long)iVar3);
            if (iVar3 != 0) goto LAB_100829edf;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_100829efb:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

