
undefined1 FUN_100cd56b0(long *param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  Data *pDVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  uint *puVar11;
  uint *puVar12;
  int local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  QMutex::lock();
  *(long *)(param_1[0x6a] + 0xf0) = *(long *)(param_1[0x6a] + 0xf0) + 1;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 4;
    puVar11 = (uint *)param_1[4];
    if (1 < *puVar11) {
      uVar3 = puVar11[2];
      pDVar7 = (Data *)QListData::detach((int)plVar1);
      lVar4 = *plVar1;
      lVar8 = (long)*(int *)(lVar4 + 8);
      puVar12 = (uint *)(lVar4 + 0x10 + lVar8 * 8);
      if ((puVar11 + (long)(int)uVar3 * 2 + 4 != puVar12) &&
         (lVar9 = *(int *)(lVar4 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(lVar4 + 0xc))) {
        _memcpy(puVar12,puVar11 + (long)(int)uVar3 * 2 + 4,lVar9 * 8);
      }
      if (*(int *)pDVar7 != -1) {
        if (*(int *)pDVar7 != 0) {
          LOCK();
          *(int *)pDVar7 = *(int *)pDVar7 + -1;
          local_31 = *(int *)pDVar7 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cd5764;
        }
        QListData::dispose(pDVar7);
      }
    }
LAB_100cd5764:
    puVar12 = (uint *)*plVar1;
    puVar11 = puVar12 + (long)(int)puVar12[2] * 2 + 4;
    local_78 = 0;
    do {
      if (1 < *puVar12) {
        uVar3 = puVar12[2];
        pDVar7 = (Data *)QListData::detach((int)plVar1);
        lVar4 = *plVar1;
        lVar8 = (long)*(int *)(lVar4 + 8);
        puVar2 = (uint *)(lVar4 + 0x10 + lVar8 * 8);
        if ((puVar12 + (long)(int)uVar3 * 2 + 4 != puVar2) &&
           (lVar9 = *(int *)(lVar4 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(lVar4 + 0xc))) {
          _memcpy(puVar2,puVar12 + (long)(int)uVar3 * 2 + 4,lVar9 * 8);
        }
        if (*(int *)pDVar7 != -1) {
          if (*(int *)pDVar7 != 0) {
            LOCK();
            *(int *)pDVar7 = *(int *)pDVar7 + -1;
            local_31 = *(int *)pDVar7 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cd57f0;
          }
          QListData::dispose(pDVar7);
        }
      }
LAB_100cd57f0:
      if (puVar11 == (uint *)(*plVar1 + 0x10 + (long)*(int *)(*plVar1 + 0xc) * 8))
      goto LAB_100cd5844;
      iVar5 = (**(code **)(**(long **)puVar11 + 0x100))();
      if ((iVar5 != 2) &&
         (iVar5 = (**(code **)(**(long **)puVar11 + 0xb8))(*(long **)puVar11,param_2,param_3),
         local_78 <= iVar5)) {
        local_78 = iVar5;
      }
      puVar11 = puVar11 + 2;
      puVar12 = (uint *)*plVar1;
    } while( true );
  }
  uVar10 = 0;
  FUN_100df99c0("","hid",0,"[CHIDHostHook] m_pView is NULL. Mouse event was not sent.");
  goto LAB_100cd59de;
LAB_100cd5844:
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_60 = (QArrayData *)QString::fromAscii_helper("HID Host Hook/Modifier Mouse Delay",0x22);
  QVariant::QVariant(&local_70,0x96);
  QSettings::value((QString *)&local_58,&local_48);
  uVar6 = QVariant::toUInt((bool *)&local_58);
  QVariant::~QVariant(&local_58);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cd58e9;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100cd58e9:
  if (local_78 == 0) {
    if ((((*(int *)(param_2 + 0x30) != 0) || (*(int *)(param_2 + 0x20) != 0)) ||
        (*(int *)(param_2 + 0x24) != 0)) ||
       ((*(int *)(param_2 + 0x28) != 0 || (*(int *)(param_2 + 0x2c) != 0)))) {
      FUN_100cd3d30(param_1,*(undefined4 *)((long)param_1 + 0x2c),1);
      if (*(int *)((long)param_1 + 0x2c) != 0) {
        FUN_100db8d20(uVar6);
      }
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
    }
    (**(code **)(*param_1 + 0xd8))(param_1,param_2,param_3);
  }
  else if (local_78 == 3) {
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    *(long *)(param_1[0x73] + 0xf0) = *(long *)(param_1[0x73] + 0xf0) + 1;
  }
  else if (0 < DAT_10230ffd0) {
    FUN_100df99c0("","hid",1,"[CHIDHostHook] Wrong mouse action result: %d",local_78);
  }
  uVar10 = 1;
  QSettings::~QSettings((QSettings *)&local_48);
LAB_100cd59de:
  QMutex::unlock();
  return uVar10;
}

