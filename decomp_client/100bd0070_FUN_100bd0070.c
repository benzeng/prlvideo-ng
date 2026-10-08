
undefined4 FUN_100bd0070(long param_1,int param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_b0 [48];
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [64];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if (*(long *)(*(long *)(param_1 + 0x80) + 0x1b8) != 0) {
    iVar2 = FUN_100bcfe80(param_1);
    uVar4 = 0;
    if (iVar2 == 0) goto LAB_100bd03ff;
  }
  local_80 = 0;
  if (**(long **)(*(long *)(param_1 + 0x80) + 0x1c0) == 0) {
LAB_100bd0103:
    local_80 = 1;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 8) != 0) {
      uVar5 = FUN_100c6fca0();
      iVar2 = FUN_100c6fc30(uVar5);
      lVar6 = 1;
      if (iVar2 == param_2) goto LAB_100bd021c;
    }
    local_80 = 2;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 0x10) != 0) {
      uVar5 = FUN_100c6fca0();
      iVar2 = FUN_100c6fc30(uVar5);
      lVar6 = 2;
      if (iVar2 == param_2) goto LAB_100bd021c;
    }
    local_80 = 3;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 0x18) != 0) {
      uVar5 = FUN_100c6fca0();
      iVar2 = FUN_100c6fc30(uVar5);
      lVar6 = 3;
      if (iVar2 == param_2) goto LAB_100bd021c;
    }
    local_80 = 4;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 0x20) != 0) {
      uVar5 = FUN_100c6fca0();
      iVar2 = FUN_100c6fc30(uVar5);
      lVar6 = 4;
      if (iVar2 == param_2) goto LAB_100bd021c;
    }
    local_80 = 5;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 0x28) != 0) {
      uVar5 = FUN_100c6fca0();
      iVar2 = FUN_100c6fc30(uVar5);
      lVar6 = 5;
      if (iVar2 == param_2) goto LAB_100bd021c;
    }
    local_80 = 6;
  }
  else {
    uVar5 = FUN_100c6fca0();
    iVar2 = FUN_100c6fc30(uVar5);
    lVar6 = 0;
    if (iVar2 != param_2) goto LAB_100bd0103;
LAB_100bd021c:
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + lVar6 * 8);
    if (lVar6 != 0) {
      FUN_100c65850(local_b0);
      FUN_100c6fcb0(local_b0,8);
      FUN_100c65d60(local_b0,lVar6);
      uVar5 = FUN_100c6fca0(local_b0);
      iVar2 = FUN_100c6fc50(uVar5);
      uVar4 = 0;
      if (iVar2 < 0) goto LAB_100bd03ff;
      if (param_3 == 0) {
LAB_100bd02ae:
        iVar3 = FUN_100c65b10(local_b0,*(long *)(param_1 + 0x130) + 0x14,
                              (long)*(int *)(*(long *)(param_1 + 0x130) + 0x10));
        if (iVar3 < 1) goto LAB_100bd039c;
        lVar6 = (long)(0x30 - (int)(0x30 % (long)iVar2));
        iVar2 = FUN_100c65b10(local_b0,&DAT_102302ec0,lVar6);
        if (iVar2 < 1) goto LAB_100bd039c;
        iVar2 = FUN_100c65bc0(local_b0,local_78,&local_80);
        if (iVar2 < 1) goto LAB_100bd039c;
        uVar5 = FUN_100c6fca0(local_b0);
        iVar2 = FUN_100c65920(local_b0,uVar5,0);
        if (iVar2 < 1) goto LAB_100bd039c;
        iVar2 = FUN_100c65b10(local_b0,*(long *)(param_1 + 0x130) + 0x14,
                              (long)*(int *)(*(long *)(param_1 + 0x130) + 0x10));
        if (iVar2 < 1) goto LAB_100bd039c;
        iVar2 = FUN_100c65b10(local_b0,&DAT_102302ef0,lVar6);
        if (iVar2 < 1) goto LAB_100bd039c;
        iVar2 = FUN_100c65b10(local_b0,local_78,local_80);
        if (iVar2 < 1) goto LAB_100bd039c;
        iVar2 = FUN_100c65bc0(local_b0,param_5,&local_7c);
        if (iVar2 < 1) goto LAB_100bd039c;
      }
      else {
        iVar3 = FUN_100c65b10(local_b0,param_3,(long)param_4);
        if (0 < iVar3) goto LAB_100bd02ae;
LAB_100bd039c:
        FUN_100c62ee0(0x14,0x11d,0x44,"s3_enc.c",0x2b7);
        local_7c = 0;
      }
      FUN_100c65c50(local_b0);
      uVar4 = local_7c;
      goto LAB_100bd03ff;
    }
  }
  FUN_100c62ee0(0x14,0x11d,0x144,"s3_enc.c",0x2a0);
  uVar4 = 0;
LAB_100bd03ff:
  if (lVar1 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

