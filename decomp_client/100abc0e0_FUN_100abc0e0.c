
void FUN_100abc0e0(undefined8 param_1,QByteArray *param_2,undefined4 param_3,long param_4,
                  long *param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  bool bVar8;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  uint local_60;
  undefined1 local_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_29;
  
  local_34 = param_6;
  local_30 = param_3;
  iVar2 = FUN_100a67f70(local_58,0);
  if (iVar2 != 0) {
    return;
  }
  FUN_100a68060(local_58,&local_30,4,0x2001);
  if (param_4 != 0) {
    FUN_100a68060(local_58,param_4,0x10,0x2003);
  }
  local_78 = (int *)*param_5;
  if (*local_78 != -1) {
    if (*local_78 == 0) {
      QListData::detach((int)&local_78);
      iVar2 = local_78[2];
      if (iVar2 != local_78[3]) {
        puVar6 = (undefined8 *)(*param_5 + 0x10 + (long)*(int *)(*param_5 + 8) * 8);
        piVar7 = local_78 + (long)iVar2 * 2 + 4;
        lVar3 = (long)local_78[3] * 8 + (long)iVar2 * -8;
        do {
          piVar1 = (int *)*puVar6;
          *(int **)piVar7 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_29 = *piVar1 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          puVar6 = puVar6 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *local_78 = *local_78 + 1;
      local_29 = *local_78 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)local_78[2] * 2 + 4;
  local_68 = local_78 + (long)local_78[3] * 2 + 4;
  local_60 = 1;
  if (local_78[2] != local_78[3]) {
    do {
      local_80 = *(QArrayData **)local_70;
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
      }
      if (local_60 != 0) {
        QString::toUtf8();
        FUN_100a68060(local_58,local_88 + *(long *)(local_88 + 0x10),*(undefined4 *)(local_88 + 4),
                      0x2002);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_29 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100abc275;
          }
          QArrayData::deallocate(local_88,1,8);
        }
LAB_100abc275:
        local_60 = 0;
      }
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100abc2ac;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100abc2ac:
      local_70 = local_70 + 2;
      uVar5 = local_60 ^ 1;
      bVar8 = local_60 != 1;
      local_60 = uVar5;
    } while ((bVar8) && (local_70 != local_68));
  }
  FUN_100036370(&local_78);
  FUN_100a68060(local_58,&local_34,4,0x2004);
  pcVar4 = (char *)FUN_100a67f30(local_58);
  iVar2 = FUN_100a67f40(local_58);
  QByteArray::QByteArray((QByteArray *)&local_90,pcVar4,iVar2);
  QByteArray::operator=(param_2,(QByteArray *)&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100abc35d;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100abc35d:
  FUN_100a681d0(local_58);
  return;
}

