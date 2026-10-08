
void FUN_1006a88f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  QArrayData *pQVar6;
  long local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined4 local_108;
  QArrayData *local_100;
  QVariant local_f8;
  QArrayData *local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QVariant local_c8;
  long local_b8;
  QArrayData *local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QVariant local_80;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QVariant local_58;
  int *local_48;
  long local_40;
  undefined1 local_31;
  
  local_60 = (QArrayData *)QString::fromAscii_helper("context",7);
  FUN_1003deba0(&local_58,param_2,&local_60);
  FUN_100086de0(&local_48,&local_58);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a8975;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006a8975:
  if (((local_48 == (int *)0x0) || (local_48[1] == 0)) || (local_40 == 0)) {
    if (DAT_10230ffd0 < 2) goto LAB_1006a8e69;
    local_88 = (QArrayData *)QString::fromAscii_helper("contextClass",0xc);
    FUN_1003deba0(&local_80,param_2,&local_88);
    QVariant::toString();
    QString::toUtf8();
    pQVar6 = local_68 + *(long *)(local_68 + 0x10);
    local_b0 = (QArrayData *)QString::fromAscii_helper("contextProps",0xc);
    FUN_1003deba0(&local_a8,param_2,&local_b0);
    QVariant::toString();
    QString::toUtf8();
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",2,
                  "NULL context, expect class %s with properties: %s",pQVar6,
                  local_90 + *(long *)(local_90 + 0x10));
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a8d58;
      }
      QArrayData::deallocate(local_90,1,8);
    }
LAB_1006a8d58:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a8d8e;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1006a8d8e:
    QVariant::~QVariant(&local_a8);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a8dd0;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1006a8dd0:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a8e00;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_1006a8e00:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a8e30;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1006a8e30:
    QVariant::~QVariant(&local_80);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        UNLOCK();
        if (*(int *)local_88 != 0) goto LAB_1006a8e69;
        local_31 = 0;
      }
      QArrayData::deallocate(local_88,2,8);
    }
    goto LAB_1006a8e69;
  }
  local_d0 = (QArrayData *)QString::fromAscii_helper("actions",7);
  FUN_1003deba0(&local_c8,param_2,&local_d0);
  QVariant::toList();
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006a8a1d;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1006a8a1d:
  if (*(int *)(local_b8 + 0xc) == *(int *)(local_b8 + 8)) {
    local_e8 = (QArrayData *)QString::fromAscii_helper("actions",7);
    FUN_1003deba0(&local_e0,param_2,&local_e8);
    iVar2 = QVariant::type();
    QVariant::~QVariant(&local_e0);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a8aae;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_1006a8aae:
    if (iVar2 != 2) {
      FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "updateHash[UpdateDataKeys::Actions].type() == QVariant::Int",
                    "ActionManager/ActionUpdater/CActionUpdater.cpp",0x117,"updateActionGroup");
    }
    local_100 = (QArrayData *)QString::fromAscii_helper("actions",7);
    FUN_1003deba0(&local_f8,param_2,&local_100);
    FUN_10012ae80(&local_b8,&local_f8);
    QVariant::~QVariant(&local_f8);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006a8b78;
      }
      QArrayData::deallocate(local_100,2,8);
    }
  }
LAB_1006a8b78:
  FUN_100036740(&local_120,&local_b8);
  local_118 = (undefined8 *)(local_120 + 0x10 + (long)*(int *)(local_120 + 8) * 8);
  local_110 = (undefined8 *)(local_120 + 0x10 + (long)*(int *)(local_120 + 0xc) * 8);
  if (*(int *)(local_120 + 8) != *(int *)(local_120 + 0xc)) {
    do {
      local_108 = 1;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar3 = QVariant::toInt((bool *)*local_118);
      lVar4 = 0;
      if (local_48[1] != 0) {
        lVar4 = local_40;
      }
      lVar4 = FUN_100692d00(uVar1,uVar3,lVar4);
      if (lVar4 != 0) {
        lVar5 = 0;
        if (local_48[1] != 0) {
          lVar5 = local_40;
        }
        FUN_1006a6000(param_1,lVar4,lVar5);
      }
      local_118 = local_118 + 1;
    } while (local_118 != local_110);
  }
  local_108 = 1;
  FUN_100035ea0(&local_120);
  FUN_100035ea0(&local_b8);
LAB_1006a8e69:
  if (local_48 != (int *)0x0) {
    LOCK();
    *local_48 = *local_48 + -1;
    local_31 = *local_48 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(local_48);
    }
  }
  return;
}

