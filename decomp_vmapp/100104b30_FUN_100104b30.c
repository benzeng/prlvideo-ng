
void FUN_100104b30(long param_1)

{
  int iVar1;
  int *piVar2;
  QArrayData *pQVar3;
  uint uVar4;
  GuestCommands *this;
  long lVar5;
  QString this_00;
  undefined8 *puVar6;
  int *piVar7;
  GuestCommands *pGVar8;
  bool bVar9;
  QTypedArrayData<unsigned_short> *local_70;
  QArrayData *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  QMutex::lock();
  this = operator_new(0xa0);
  GuestCommands::GuestCommands(this);
  pGVar8 = (GuestCommands *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    pGVar8 = *(GuestCommands **)(*(long *)(param_1 + 0x18) + 0x10);
  }
  CProblemReport::setGuestCommands(pGVar8);
  FUN_100105290(&local_60,param_1 + 0x28);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar7 = local_58 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          local_60 = local_60 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  FUN_100013180(&local_60);
  if (local_40 != 0) {
    do {
      if (local_50 == local_48) break;
      local_68 = *(QArrayData **)local_50;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      if (local_40 != 0) {
        this_00.field0_0x0 = operator_new(0xa8);
        GuestCommand::GuestCommand((GuestCommand *)this_00.field0_0x0);
        pQVar3 = local_68;
        if (1 < *(int *)local_68 + 1U) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + 1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
        }
        local_70 = this_00.field0_0x0;
        GuestCommand::setCommandName(this_00);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100104cfb;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100104cfb:
        puVar6 = (undefined8 *)FUN_100037140(param_1 + 0x28,&local_68);
        pQVar3 = (QArrayData *)*puVar6;
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        GuestCommand::setCommandResult(this_00);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100104d5a;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_100104d5a:
        FUN_100105330(this + 0x98,&local_70);
        local_40 = 0;
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100104d9c;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100104d9c:
      local_50 = local_50 + 2;
      uVar4 = local_40 ^ 1;
      bVar9 = local_40 != 1;
      local_40 = uVar4;
    } while (bVar9);
  }
  FUN_100013180(&local_58);
  QMutex::unlock();
  return;
}

