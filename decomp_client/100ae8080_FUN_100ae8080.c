
undefined4 FUN_100ae8080(ulong *param_1,long param_2,long *param_3)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  QArrayData *pQVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong local_78;
  uint local_6c;
  ulong local_68;
  undefined4 local_5c;
  ulong local_48;
  int local_40;
  int iStack_3c;
  undefined1 local_38 [7];
  undefined1 local_31;
  
  plVar3 = param_3;
  if (param_3 == (long *)0x0) {
    plVar3 = operator_new(0x10);
    *plVar3 = (long)PTR_shared_null_1021e1288;
    FUN_100ae74d0(plVar3,local_38);
  }
  if (*(int *)(*plVar3 + 4) < 1) {
    local_6c = 0;
    local_68 = 0xffffffffffffffff;
    local_5c = 3;
    local_78 = 0;
  }
  else {
    local_68 = 0xffffffffffffffff;
    local_5c = 3;
    iVar8 = 0;
    local_6c = 0;
    local_78 = 0;
    do {
      auVar9 = FUN_100ae7b40(plVar3,iVar8);
      auVar10 = FUN_100ae7d30(plVar3,iVar8);
      uVar6 = auVar10._8_8_;
      uVar4 = auVar10._0_8_;
      uVar2 = auVar10._0_4_;
      if (auVar9._0_4_ == uVar2) {
        if (auVar9._8_4_ == auVar10._8_4_) {
          if (auVar9._12_4_ != auVar10._12_4_) {
            cVar1 = FUN_100ae8350();
            local_78 = auVar9._8_8_ >> 0x20;
            if (cVar1 != '\0') {
              local_78 = uVar6 >> 0x20;
            }
            local_68 = uVar6 & 0xffffffff | (uVar6 >> 0x20) << 0x20;
            local_5c = 3;
            local_6c = uVar2;
          }
        }
        else {
          cVar1 = FUN_100ae8350();
          uVar5 = auVar9._8_8_;
          if (cVar1 != '\0') {
            uVar5 = uVar6;
          }
          local_5c = 2;
          local_78 = uVar4 >> 0x20;
          local_6c = (uint)uVar5;
          local_68 = uVar6;
        }
      }
      else {
        cVar1 = FUN_100ae8350();
        uVar5 = auVar9._0_8_;
        if (cVar1 != '\0') {
          uVar5 = uVar4;
        }
        local_68 = uVar6 & 0xffffffff00000000 | uVar5 & 0xffffffff;
        local_5c = 0;
        local_78 = uVar4 >> 0x20;
        local_6c = uVar2;
      }
      if ((auVar9._4_4_ != auVar10._4_4_) &&
         (_local_40 = CONCAT44(auVar9._4_4_,auVar10._8_4_), local_48 = uVar4, param_2 != 0)) {
        FUN_100ae85a0(param_2,&local_48);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(*plVar3 + 4));
  }
  if (param_1 != (ulong *)0x0) {
    *param_1 = (ulong)local_6c | local_78 << 0x20;
    param_1[1] = local_68;
  }
  if (param_3 != (long *)0x0) {
    return local_5c;
  }
  pQVar7 = (QArrayData *)*plVar3;
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ae82dc;
      pQVar7 = (QArrayData *)*plVar3;
    }
    QArrayData::deallocate(pQVar7,4,8);
  }
LAB_100ae82dc:
  operator_delete(plVar3);
  return local_5c;
}

