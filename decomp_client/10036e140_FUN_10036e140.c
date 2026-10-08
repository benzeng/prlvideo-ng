
ulong FUN_10036e140(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  QArrayData *local_70;
  undefined1 local_68 [48];
  QArrayData *local_38;
  ulong local_30;
  char local_22;
  undefined1 local_21;
  
  if ((DAT_102312260 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_102312260), iVar2 != 0)) {
    DAT_102312258._0_4_ = 0xffffffff;
    DAT_102312258._4_4_ = 0xffffffff;
    ___cxa_guard_release(&DAT_102312260);
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (((*(long *)(lVar4 + 0x18) == 0) || (*(int *)(*(long *)(lVar4 + 0x18) + 4) == 0)) ||
     (*(long *)(lVar4 + 0x20) == 0)) {
    uVar6 = CONCAT44(DAT_102312258._4_4_,(undefined4)DAT_102312258);
  }
  else {
    uVar1 = *(undefined4 *)(lVar4 + 0x38);
    uVar3 = FUN_10018c280();
    lVar4 = FUN_1003192a0(uVar3,uVar1);
    if (lVar4 != 0) {
      auVar7 = FUN_100325fd0(lVar4);
      uVar6 = (auVar7._8_8_ + 1) - auVar7._0_8_;
      uVar5 = ((auVar7._8_8_ >> 0x20) + 1) - (auVar7._0_8_ >> 0x20);
      if (-1 < (int)((uint)uVar5 | (uint)uVar6)) goto LAB_10036e254;
    }
    FUN_100df99c0("","prl_client_app",0,"Resize window using a cached size.");
    local_22 = '\0';
    uVar3 = FUN_100370280();
    lVar4 = *(long *)(param_1 + 0x40);
    if (((*(long *)(lVar4 + 0x18) == 0) || (*(int *)(*(long *)(lVar4 + 0x18) + 4) == 0)) ||
       (*(long *)(lVar4 + 0x20) == 0)) {
      local_70 = (QArrayData *)PTR_shared_null_1021e1288;
    }
    else {
      FUN_100188480(&local_70);
      lVar4 = *(long *)(param_1 + 0x40);
    }
    FUN_100371ce0(local_68,uVar3,&local_70,*(undefined4 *)(lVar4 + 0x38),1,&local_22);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10036e2c0;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10036e2c0:
    uVar6 = local_30;
    if (local_22 == '\0') {
      uVar6 = CONCAT44(DAT_102312258._4_4_,(undefined4)DAT_102312258);
    }
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_10036e24d;
        local_21 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_10036e24d:
  uVar5 = uVar6 >> 0x20;
LAB_10036e254:
  return uVar6 & 0xffffffff | uVar5 << 0x20;
}

