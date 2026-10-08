
void FUN_10031fc50(long param_1,QString *param_2)

{
  QArrayData *pQVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  uint in_stack_00000020;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_80;
  undefined2 local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined4 local_5c;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  undefined4 local_38;
  undefined1 local_31;
  
  cVar2 = operator==(param_2,(QString *)(param_1 + 0x28));
  if (cVar2 == '\0') {
    return;
  }
  lVar6 = FUN_1003192a0(param_1,uStack0000000000000018);
  iVar5 = (int)(in_stack_00000008 >> 0x20);
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"VM Display %d screen size %dx%d, pos %d,%d",
                  uStack0000000000000018,in_stack_00000008 & 0xffffffff,iVar5,uStack000000000000001c
                  ,in_stack_00000020);
  }
  local_38 = 0;
  uStack_40 = (ulong)in_stack_00000020;
  local_48 = _uStack0000000000000018;
  uStack_50 = in_stack_00000010;
  local_58 = in_stack_00000008;
  local_5c = uStack0000000000000018;
  puVar7 = (ulong *)FUN_100321eb0(param_1 + 0x38,&local_5c);
  *(undefined4 *)(puVar7 + 4) = local_38;
  puVar7[3] = uStack_40;
  puVar7[2] = local_48;
  puVar7[1] = uStack_50;
  *puVar7 = local_58;
  if (((int)in_stack_00000008 == 0 || iVar5 == 0) ||
     ((lVar6 != 0 && (iVar4 = FUN_100325aa0(lVar6), iVar4 != 0)))) {
    if (lVar6 == 0) {
      return;
    }
    if (iVar5 != 0 || (int)in_stack_00000008 != 0) {
      return;
    }
    iVar5 = FUN_100325aa0(lVar6);
    if (iVar5 == 0) {
      return;
    }
    cVar2 = FUN_100325f80(lVar6);
    if (cVar2 != '\0') {
      return;
    }
    local_88 = 0;
    local_90 = 1;
    puVar9 = &local_90;
    iVar5 = 0;
    goto LAB_10031ff4e;
  }
  lVar8 = FUN_100319960(param_1);
  if (lVar8 == 0) {
    return;
  }
  iVar5 = FUN_100325aa0(lVar8);
  if (iVar5 == 0) {
    return;
  }
  if (2 < DAT_10230ffd0) {
    EnumUtils::enumToString(&local_70,iVar5,1);
    QString::toLocal8Bit();
    pQVar1 = local_68;
    lVar8 = *(long *)(local_68 + 0x10);
    uVar3 = FUN_10031bc70(param_1,iVar5);
    FUN_100df99c0("","prl_client_app",3,
                  " PRIMARY DISPLAY VIEW MODE IS %s, isUseMultipleDisplaysIn returned %d",
                  pQVar1 + lVar8,uVar3);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10031fec5;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_10031fec5:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10031fef8;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_10031fef8:
  cVar2 = FUN_10031bc70(param_1,iVar5);
  if (cVar2 == '\0') {
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x60))(*(long **)(param_1 + 0xd0),0);
    return;
  }
  if ((lVar6 == 0) && (lVar6 = FUN_100318bf0(param_1,uStack0000000000000018), lVar6 == 0)) {
    return;
  }
  cVar2 = FUN_10033fc40(*(undefined8 *)(param_1 + 0xd8),0,0);
  if (cVar2 != '\0') {
    return;
  }
  local_78 = 0;
  local_80 = 0;
  puVar9 = &local_80;
LAB_10031ff4e:
  FUN_1003244f0(lVar6,iVar5,puVar9);
  return;
}

