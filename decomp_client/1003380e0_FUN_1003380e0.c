
undefined1 FUN_1003380e0(long param_1,uint param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    return 1;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return 1;
  }
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x18);
  }
  cVar6 = FUN_10031c1c0(uVar12);
  if (cVar6 == '\0') {
    return 1;
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    if (DAT_10230ffd0 < 2) {
      return 0;
    }
    uVar12 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar12 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193e0(&local_48,uVar12);
    QString::toUtf8();
    FUN_100df99c0("GUI_DDLL","prl_client_app",2,
                  "VM [%s] guest screens reconfiguration is in progress. Display #%d rect %dx%d at (%d, %d) is NOT ACCEPTED!"
                  ,local_40 + *(long *)(local_40 + 0x10),param_2,(param_3[2] + 1) - *param_3,
                  (param_3[3] + 1) - param_3[1],*param_3,param_3[1]);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100338204;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100338204:
    if (*(int *)local_48 == -1) {
      return 0;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    goto LAB_1003385ec;
  }
  puVar1 = (undefined8 *)(param_1 + 0x28);
  puVar7 = (uint *)*puVar1;
  if (1 < *puVar7) {
    FUN_100322820();
    puVar7 = (uint *)*puVar1;
  }
  puVar5 = *(uint **)(puVar7 + 4);
  puVar11 = (uint *)0x0;
  if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
LAB_1003382a2:
    puVar13 = puVar7 + 2;
  }
  else {
    do {
      while (puVar13 = puVar5, uVar8 = puVar13[6], param_2 <= uVar8) {
        puVar5 = *(uint **)(puVar13 + 2);
        puVar11 = puVar13;
        if (*(uint **)(puVar13 + 2) == (uint *)0x0) goto LAB_10033829d;
      }
      puVar5 = *(uint **)(puVar13 + 4);
    } while (*(uint **)(puVar13 + 4) != (uint *)0x0);
    if (puVar11 == (uint *)0x0) goto LAB_1003382a2;
    uVar8 = puVar11[6];
    puVar13 = puVar11;
LAB_10033829d:
    if (param_2 < uVar8) goto LAB_1003382a2;
  }
  if (1 < *puVar7) {
    FUN_100322820();
    puVar7 = (uint *)*puVar1;
  }
  if ((puVar7 + 2 != puVar13) || ((param_3[2] + 1 == *param_3 && (param_3[3] + 1 == param_3[1])))) {
    uVar8 = puVar13[7];
    uVar2 = puVar13[8];
    uVar3 = puVar13[0xc];
    uVar4 = puVar13[0xd];
    iVar9 = (uVar8 - 1) + uVar3;
    iVar10 = (uVar2 - 1) + uVar4;
    if ((iVar10 < (int)uVar4) ||
       (((iVar9 < (int)uVar3 || ((*(uint *)(param_1 + 0x24) & 1) == 0)) ||
        ((uVar3 == *param_3 && (uVar4 == param_3[1])))))) {
      if (iVar10 < (int)uVar4) {
        return 1;
      }
      if (iVar9 < (int)uVar3) {
        return 1;
      }
      if ((*(uint *)(param_1 + 0x24) & 2) == 0) {
        return 1;
      }
      if ((uVar8 == (param_3[2] + 1) - *param_3) && (uVar2 == (param_3[3] + 1) - param_3[1])) {
        return 1;
      }
      uVar12 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar12 = *(undefined8 *)(param_1 + 0x18);
      }
      FUN_1003193e0(&local_78,uVar12);
      QString::toLocal8Bit();
      FUN_100df99c0("GUI_DDLL","prl_client_app",0,
                    "VM [%s] display #%d size %dx%d doesn\'t match pending size %dx%d.",
                    local_70 + *(long *)(local_70 + 0x10),param_2,(param_3[2] + 1) - *param_3,
                    (param_3[3] + 1) - param_3[1],uVar8,uVar2);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100338416;
        }
        QArrayData::deallocate(local_70,1,8);
      }
LAB_100338416:
      if (*(int *)local_78 == -1) {
        return 0;
      }
      local_48 = local_78;
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        if (*(int *)local_78 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      goto LAB_1003385ec;
    }
    if (DAT_10230ffd0 < 2) {
      return 0;
    }
    uVar12 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar12 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193e0(&local_68,uVar12);
    QString::toLocal8Bit();
    FUN_100df99c0("GUI_DDLL","prl_client_app",2,
                  "VM [%s] display #%d position (%d,%d) doesn\'t match pending position (%d, %d).",
                  local_60 + *(long *)(local_60 + 0x10),param_2,*param_3,param_3[1],uVar3,uVar4);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003384fe;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1003384fe:
    if (*(int *)local_68 == -1) {
      return 0;
    }
    local_48 = local_68;
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    goto LAB_1003385ec;
  }
  if (DAT_10230ffd0 < 2) {
    return 0;
  }
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_58,uVar12);
  QString::toLocal8Bit();
  FUN_100df99c0("GUI_DDLL","prl_client_app",2,
                "VM [%s] display #%d is out of pending configuration bounds.",
                local_50 + *(long *)(local_50 + 0x10),param_2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003385cb;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1003385cb:
  if (*(int *)local_58 == -1) {
    return 0;
  }
  local_48 = local_58;
  if (*(int *)local_58 != 0) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + -1;
    UNLOCK();
    if (*(int *)local_58 != 0) {
      return 0;
    }
    local_31 = 0;
  }
LAB_1003385ec:
  QArrayData::deallocate(local_48,2,8);
  return 0;
}

