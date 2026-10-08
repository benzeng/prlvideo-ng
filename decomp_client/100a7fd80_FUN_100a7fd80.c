
undefined1
FUN_100a7fd80(long param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined8 param_5,
             undefined2 param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  QArrayData *pQVar4;
  QArrayData *local_90;
  undefined8 local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined8 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined2 local_48;
  undefined2 local_46;
  undefined8 local_40;
  undefined1 local_31;
  
  local_40 = 0;
  if (param_3 != 0) {
    FUN_100a68840(&local_40);
  }
  local_48 = param_4;
  local_46 = param_6;
  if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
     (uVar3 = FUN_100be45f0(*(undefined8 *)(param_1 + 0x328)), (uVar3 & 0x3000) == 0)) {
    iVar1 = FUN_100aa39b0(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),&local_48,4,param_3
                          ,0);
  }
  else {
    iVar1 = FUN_100aa2360(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),&local_48,4,param_3
                          ,0);
  }
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_3 != 0) {
      local_60 = 0;
      FUN_100a68840(&local_60);
      iVar1 = FUN_100a68860(&local_40,&local_60);
      if (iVar1 == param_3) {
        local_70 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)local_70 + 1U) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + 1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("","IOCommunication",0,"%sConnection timeout expired!",
                      local_68 + *(long *)(local_68 + 0x10));
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a7ff7d;
          }
          QArrayData::deallocate(local_68,1,8);
        }
LAB_100a7ff7d:
        if (*(int *)local_70 == -1) goto LAB_100a801f3;
        pQVar4 = local_70;
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          UNLOCK();
          if (*(int *)local_70 != 0) goto LAB_100a801f3;
          local_31 = 0;
        }
        goto LAB_100a801e4;
      }
      iVar1 = param_3 - iVar1;
    }
    if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
       (uVar3 = FUN_100be45f0(*(undefined8 *)(param_1 + 0x328)), (uVar3 & 0x3000) == 0)) {
      iVar2 = FUN_100aa39b0(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),param_5,param_6,
                            iVar1,0);
    }
    else {
      iVar2 = FUN_100aa2360(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),param_5,param_6,
                            iVar1,0);
    }
    if (iVar2 == 0) {
      if (iVar1 == 0) {
        return 1;
      }
      local_88 = 0;
      FUN_100a68840(&local_88);
      iVar2 = FUN_100a68860(&local_40,&local_88);
      if (iVar1 != iVar2) {
        return 1;
      }
      pQVar4 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sConnection timeout expired!",
                    local_90 + *(long *)(local_90 + 0x10));
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a801bd;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_100a801bd:
      if (*(int *)pQVar4 == -1) goto LAB_100a801f3;
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        UNLOCK();
        if (*(int *)pQVar4 != 0) goto LAB_100a801f3;
        local_31 = 0;
      }
    }
    else {
      local_80 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,
                    "%sProxy handshake error: send of connection request failed!",
                    local_78 + *(long *)(local_78 + 0x10));
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a800c4;
        }
        QArrayData::deallocate(local_78,1,8);
      }
LAB_100a800c4:
      if (*(int *)local_80 == -1) goto LAB_100a801f3;
      pQVar4 = local_80;
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        UNLOCK();
        if (*(int *)local_80 != 0) goto LAB_100a801f3;
        local_31 = 0;
      }
    }
  }
  else {
    local_58 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,
                  "%sProxy handshake error: send of connection request failed!",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a7fe9a;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_100a7fe9a:
    if (*(int *)local_58 == -1) goto LAB_100a801f3;
    pQVar4 = local_58;
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_100a801f3;
      local_31 = 0;
    }
  }
LAB_100a801e4:
  QArrayData::deallocate(pQVar4,2,8);
LAB_100a801f3:
  *(undefined4 *)(param_1 + 0xa4) = 8;
  return 0;
}

