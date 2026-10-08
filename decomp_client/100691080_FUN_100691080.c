
void FUN_100691080(long param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != action","ActionManager/CActionManager.cpp",0x6d,"onActionTriggered");
  }
  cVar2 = QAction::isEnabled();
  if (cVar2 == '\0') {
    return;
  }
  uVar3 = FUN_1006959a0(param_2);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
    uVar6 = *(uint *)((long)puVar1 + 0x24) ^ uVar3;
    for (puVar4 = *(undefined8 **)(puVar1[1] + ((ulong)uVar6 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar4 != puVar1; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar6) && (uVar3 == *(uint *)((long)puVar4 + 0xc))) {
        if ((puVar4 != puVar1) && (lVar7 = puVar4[2], lVar7 != 0)) goto LAB_100691185;
        break;
      }
    }
  }
  lVar7 = 0;
  FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                "0 != handler","ActionManager/CActionManager.cpp",0x74,"onActionTriggered");
LAB_100691185:
  lVar5 = FUN_100695a30(param_2);
  if (lVar5 == 0) {
    FUN_100694760(&local_30,param_2);
    QString::toLocal8Bit();
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,
                  "(!)Error: failed to perform action %s since the context object is already dead",
                  local_28 + *(long *)(local_28 + 0x10));
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006912c0;
      }
      QArrayData::deallocate(local_28,1,8);
    }
LAB_1006912c0:
    if (*(int *)local_30 == -1) {
      return;
    }
    local_40 = local_30;
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    goto LAB_1006912e1;
  }
  cVar2 = FUN_100695bb0(lVar7,param_2,lVar5);
  if (cVar2 != '\0') {
    return;
  }
  FUN_100694760(&local_40,param_2);
  QString::toLocal8Bit();
  FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"(!)Error: failed to perform action: %s",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10069121d;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10069121d:
  if (*(int *)local_40 == -1) {
    return;
  }
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (*(int *)local_40 != 0) {
      return;
    }
    local_19 = 0;
  }
LAB_1006912e1:
  QArrayData::deallocate(local_40,2,8);
  return;
}

