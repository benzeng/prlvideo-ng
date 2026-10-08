
void FUN_10031e490(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  int local_4c;
  QArrayData *local_48;
  QArrayData *local_40;
  int local_38;
  int local_34;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = param_3;
  if (param_3 == 0) {
    FUN_100321d40(param_1 + 0x38);
  }
  if (uVar1 != param_3) {
    FUN_100829f20(param_1,param_3);
  }
  local_48 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    UNLOCK();
    local_38 = CONCAT31(local_38._1_3_,*(int *)local_48 != 0);
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"Availabile VM displays count %d received by VM desktop [%s]",
                param_3,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      local_38 = CONCAT31(local_38._1_3_,*(int *)local_40 != 0);
      if (*(int *)local_40 != 0) goto LAB_10031e552;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10031e552:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      local_38 = CONCAT31(local_38._1_3_,*(int *)local_48 != 0);
      if (*(int *)local_48 != 0) goto LAB_10031e582;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10031e582:
  uVar8 = *(uint *)(*(long *)(param_1 + 0x48) + 4);
  if (uVar8 < param_3) {
    do {
      uVar8 = uVar8 + 1;
      FUN_100318bf0(param_1);
    } while (param_3 != uVar8);
  }
  local_4c = 0;
  lVar5 = FUN_100319960(param_1);
  iVar4 = 0;
  if (lVar5 != 0) {
    iVar4 = FUN_100325aa0(lVar5);
  }
  bVar2 = FUN_10033fc40(*(undefined8 *)(param_1 + 0xd8),&local_4c,0);
  cVar3 = FUN_10033fc40(*(undefined8 *)(param_1 + 0xd8),&local_38,0);
  if ((((cVar3 == '\0') || (local_38 != 0)) && (iVar4 != 0)) &&
     (((iVar4 != 3 && (param_3 != 0)) && ((uVar1 != param_3 && ((local_4c == 3 & bVar2) == 0)))))) {
    lVar5 = FUN_100319960(param_1);
    if (lVar5 == 0) {
      return;
    }
    uVar6 = FUN_100319960(param_1);
    cVar3 = FUN_100325d30(uVar6);
    if (cVar3 != '\0') {
      return;
    }
    if (bVar2 != 0) {
      iVar4 = local_4c;
    }
    local_98 = 3;
    local_90 = 0;
    local_94 = 0;
    local_8c = 0xffff;
    local_88 = 0;
    local_84 = 0;
    FUN_10033f580(*(undefined8 *)(param_1 + 0xd8),iVar4,&local_98);
    return;
  }
  if (DAT_10230ffd0 < 2) {
    return;
  }
  local_60 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    UNLOCK();
    local_38 = CONCAT31(local_38._1_3_,*(int *)local_60 != 0);
  }
  QString::toLocal8Bit();
  pQVar10 = local_58 + *(long *)(local_58 + 0x10);
  EnumUtils::enumToString(&local_70,iVar4,1);
  QString::toLocal8Bit();
  pQVar9 = local_68 + *(long *)(local_68 + 0x10);
  cVar3 = FUN_10033fc40(*(undefined8 *)(param_1 + 0xd8),&local_34,0);
  if (bVar2 == 0) {
    pcVar7 = "n/a";
  }
  else {
    EnumUtils::enumToString(&local_80,local_4c,1);
    QString::toLocal8Bit();
    pcVar7 = (char *)(local_78 + *(long *)(local_78 + 0x10));
  }
  FUN_100df99c0("","prl_client_app",2,
                "Skipping VM [%s] view mode switching to [%s]. Conditions:\n isClosing=%d\n isSwitchViewModeInProgress=%d (targetMode=%s)\n prevDisplaysCount=%d\n newsDisplaysCount=%d"
                ,pQVar10,pQVar9,cVar3 != '\0' && local_34 == 0,bVar2,pcVar7,uVar1,param_3);
  if (bVar2 != 0) {
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        local_38 = CONCAT31(local_38._1_3_,*(int *)local_78 != 0);
        if (*(int *)local_78 != 0) goto LAB_10031e7ee;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_10031e7ee:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        UNLOCK();
        local_38 = CONCAT31(local_38._1_3_,*(int *)local_80 != 0);
        if (*(int *)local_80 != 0) goto LAB_10031e81e;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_10031e81e:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      local_38 = CONCAT31(local_38._1_3_,*(int *)local_68 != 0);
      if (*(int *)local_68 != 0) goto LAB_10031e84e;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10031e84e:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      local_38 = CONCAT31(local_38._1_3_,*(int *)local_70 != 0);
      if (*(int *)local_70 != 0) goto LAB_10031e87e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10031e87e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      local_38 = CONCAT31(local_38._1_3_,*(int *)local_58 != 0);
      if (*(int *)local_58 != 0) goto LAB_10031e8ae;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10031e8ae:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      local_38 = CONCAT31(local_38._1_3_,*(int *)local_60 != 0);
      if (*(int *)local_60 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return;
}

