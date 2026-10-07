
/* CBaseNode::isTagExcluded(QString const&) const */

undefined1 __thiscall CBaseNode::isTagExcluded(CBaseNode *this,QString *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  int *local_28;
  int *local_20;
  undefined1 local_11;
  
  local_28 = (int *)PTR_shared_null_100ba2188;
  local_40 = (QArrayData *)QString::fromAscii_helper("%1%2",4);
  local_48 = (QArrayData *)QString::fromAscii_helper("Tor",3);
  QString::arg(&local_38,&local_40,&local_48,0,0x20);
  local_50 = (QArrayData *)QString::fromAscii_helper("bayUuid",7);
  QString::arg(&local_30,&local_38,&local_50,0,0x20);
  FUN_10000c490(&local_28,&local_30);
  local_20 = local_28;
  if (*local_28 != -1) {
    if (*local_28 == 0) {
      QListData::detach((int)&local_20);
      iVar1 = local_20[2];
      if (iVar1 != local_20[3]) {
        piVar5 = local_28 + (long)local_28[2] * 2 + 4;
        piVar6 = local_20 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_20[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)piVar5;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_11 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          piVar5 = piVar5 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_28 = *local_28 + 1;
      local_11 = *local_28 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10001229f;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10001229f:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_11 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000122cf;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000122cf:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000122ff;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000122ff:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10001232f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10001232f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10001235f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10001235f:
  FUN_100013180(&local_28);
  uVar3 = QtPrivate::QStringList_contains(&local_20,param_1,1);
  FUN_100013180(&local_20);
  return uVar3;
}

