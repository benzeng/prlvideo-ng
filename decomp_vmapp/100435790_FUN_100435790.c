
void FUN_100435790(long param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined1 local_48 [16];
  undefined1 local_31;
  
  if (*param_3 == 0) {
    return;
  }
  lVar6 = *(long *)(*param_3 + 0x10);
  if (lVar6 == 0) {
    return;
  }
  if (*(int *)(lVar6 + 0x40) != 0x30da6) {
    if (*(int *)(lVar6 + 0x40) != 0x30da7) {
      return;
    }
    piVar10 = (int *)0x0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      piVar10 = *(int **)(*(long *)(lVar6 + 0x80) + 0x10);
    }
    if (*(uint *)(lVar6 + 0x8c) < 0x14) {
      return;
    }
    if (0xf < (uint)piVar10[4]) {
      FUN_1008e3970("","IODesktopServer",0,
                    " Error: display \'%d\' is greater than PRL_IO_MAX_DISPLAYS");
      return;
    }
    QMutex::lock();
    local_48 = ZEXT816(0xffffffffffffffff) << 0x40;
    if ((0 < piVar10[2]) && (local_48 = ZEXT816(0xffffffffffffffff) << 0x40, 0 < piVar10[3])) {
      local_48._0_8_ = *(undefined8 *)piVar10;
      local_48._12_4_ = piVar10[3] + -1 + piVar10[1];
      local_48._8_4_ = piVar10[2] + -1 + *piVar10;
      lVar6 = (ulong)(uint)piVar10[4] * 0x424;
      if (*(char *)(param_1 + 0x38 + lVar6) == '\0') goto LAB_100435d0a;
      local_58 = 0;
      local_54 = 0;
      local_50 = *(int *)(param_1 + 0x40 + lVar6) + -1;
      local_4c = *(int *)(param_1 + 0x44 + lVar6) + -1;
      local_48 = QRect::operator&((QRect *)local_48,(QRect *)&local_58);
    }
    lVar6 = FUN_100436170(param_1 + 0x20,param_2);
    uVar9 = (ulong)(uint)piVar10[4];
    iVar2 = local_48._0_4_;
    iVar11 = local_48._8_4_;
    iVar7 = local_48._12_4_;
    iVar3 = local_48._4_4_;
    if ((iVar11 == iVar2 + -1) && (iVar7 == iVar3 + -1)) {
      lVar8 = uVar9 * 0x38;
      *(undefined4 *)(lVar6 + 0x40 + lVar8) = 0;
      *(undefined4 *)(lVar6 + 0x44 + lVar8) = 0;
      *(undefined4 *)(lVar6 + 0x48 + lVar8) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x4c + lVar8) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x20 + lVar8) = 0;
      *(undefined4 *)(lVar6 + 0x24 + lVar8) = 0;
      *(undefined4 *)(lVar6 + 0x28 + lVar8) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x2c + lVar8) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x30 + lVar8) = 0;
      *(undefined8 *)(lVar6 + 0x34 + lVar8) = 0xffffffff00000000;
      *(undefined4 *)(lVar6 + 0x3c + lVar8) = 0xffffffff;
    }
    else if ((iVar2 <= iVar11) && (iVar3 <= iVar7)) {
      lVar8 = uVar9 * 0x38;
      if ((((*(int *)(lVar6 + 0x40 + lVar8) != iVar2) || (*(int *)(lVar6 + 0x48 + lVar8) != iVar11))
          || (*(int *)(lVar6 + 0x44 + lVar8) != iVar3)) || (*(int *)(lVar6 + 0x4c + lVar8) != iVar7)
         ) {
        *(undefined8 *)(lVar6 + 0x28 + lVar8) = local_48._8_8_;
        *(undefined8 *)(lVar6 + 0x20 + lVar8) = local_48._0_8_;
        *(undefined4 *)(lVar6 + 0x30 + lVar8) = 0;
        *(undefined8 *)(lVar6 + 0x34 + lVar8) = 0xffffffff00000000;
        *(undefined4 *)(lVar6 + 0x3c + lVar8) = 0xffffffff;
        *(undefined1 (*) [16])(lVar6 + 0x40 + lVar8) = local_48;
        uVar9 = (ulong)(uint)piVar10[4];
      }
      FUN_100432bf0(param_1,param_2,uVar9,0,0xffffffffffffffff);
    }
LAB_100435d0a:
    QMutex::unlock();
    return;
  }
  if (*(uint *)(lVar6 + 0x8c) < 4) {
    return;
  }
  uVar1 = **(undefined4 **)(*(long *)(lVar6 + 0x80) + 0x10);
  uVar5 = FUN_1004399e0();
  cVar4 = FUN_10043b210(uVar5,0,uVar1);
  if (cVar4 != '\0') {
    QMutex::lock();
    local_78 = 1;
    local_74 = uVar1;
    FUN_100434990(param_1,param_2,0x30d45,&local_78,8,param_3,0);
    lVar6 = FUN_100436170(param_1 + 0x20,param_2);
    *(undefined4 *)(lVar6 + 0x10) = uVar1;
    FUN_100432bf0(param_1,param_2,0,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,1,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,2,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,3,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,4,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,5,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,6,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,7,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,8,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,9,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,10,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,0xb,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,0xc,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,0xd,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,0xe,0,0xffffffffffffffff);
    FUN_100432bf0(param_1,param_2,0xf,0,0xffffffffffffffff);
    goto LAB_100435d0a;
  }
  local_68 = (QArrayData *)*param_2;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","IODesktopServer",0,
                "Can\'t set encoding for client \'%s\'. Encoder of type \'%d\' does not exist",
                local_60 + *(long *)(local_60 + 0x10),uVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100435ae0;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100435ae0:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100435b10;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100435b10:
  local_70 = 0;
  local_6c = uVar1;
  FUN_100434990(param_1,param_2,0x30d45,&local_70,8,param_3,0);
  return;
}

