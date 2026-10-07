
undefined1
FUN_1006af510(undefined8 param_1,long *param_2,QRegExp *param_3,undefined8 param_4,long param_5,
             char param_6)

{
  QString *this;
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  undefined *local_48;
  QString local_40;
  undefined1 local_31;
  
  iVar2 = QRegExp::indexIn(param_3,param_4,0,0);
  if (iVar2 == -1) {
    return 0;
  }
  iVar2 = *(int *)(param_3 + 0x38);
  iVar3 = QRegExp::captureCount();
  if (iVar3 < iVar2) {
    return 0;
  }
  QRegExp::cap((int)&local_40);
  if (*(int *)(local_40.field0_0x0 + 4) == 0) {
    uVar7 = 0;
    goto LAB_1006af7d1;
  }
  local_48 = PTR_shared_null_100ba2188;
  local_68 = *(Data **)(param_3 + 0x10);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_68);
      lVar5 = (long)*(int *)(local_68 + 8);
      lVar8 = *(long *)(param_3 + 0x10);
      if (((Data *)(lVar8 + (long)*(int *)(lVar8 + 8) * 8) != local_68 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_68 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar5 * 8 + 0x10,(void *)(lVar8 + 0x10 + (long)*(int *)(lVar8 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      iVar2 = QRegExp::pos((int)param_3);
      if (iVar2 != -1) {
        QRegExp::cap((int)&local_70);
        FUN_10000c490(&local_48,&local_70);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006af699;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
LAB_1006af699:
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006af6e0;
    }
    QListData::dispose(local_68);
  }
LAB_1006af6e0:
  this = (QString *)(param_5 + 0x18);
  cVar1 = operator==(this,&local_40);
  if (cVar1 == '\0') {
    lVar8 = 0;
    if (*param_2 != 0) {
      lVar8 = *(long *)(*param_2 + 0x10);
    }
    FUN_1006b1970(lVar8 + 0x80,this);
    lVar8 = 0;
    if (*param_2 != 0) {
      lVar8 = *(long *)(*param_2 + 0x10);
    }
    plVar4 = (long *)FUN_1006b1a80(lVar8 + 0x80,&local_40);
    *plVar4 = param_5;
  }
  QString::operator=(this,&local_40);
  FUN_10051afa0(param_5 + 0x20,&local_48);
  QRegExp::operator=((QRegExp *)(param_5 + 0x28),param_3);
  *(undefined4 *)(param_5 + 0x30) = *(undefined4 *)(param_3 + 8);
  FUN_1006b1310(param_5 + 0x38,param_3 + 0x10);
  QString::operator=((QString *)(param_5 + 0x40),(QString *)(param_3 + 0x18));
  *(undefined4 *)(param_5 + 0x48) = *(undefined4 *)(param_3 + 0x20);
  FUN_1006b1310(param_5 + 0x50,param_3 + 0x28);
  FUN_1006b1310(param_5 + 0x58,param_3 + 0x30);
  *(undefined8 *)(param_5 + 0x60) = *(undefined8 *)(param_3 + 0x38);
  if (param_6 != '\0') {
    lVar8 = *(long *)(*param_2 + 0x10);
    if (*(long *)(lVar8 + 0x70) == 0) {
      *(long *)(lVar8 + 0x70) = param_5;
    }
    *(long *)(lVar8 + 0x78) = param_5;
  }
  FUN_100013180(&local_48);
  uVar7 = 1;
LAB_1006af7d1:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar7;
}

