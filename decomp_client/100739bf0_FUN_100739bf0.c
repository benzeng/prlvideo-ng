
void FUN_100739bf0(long *param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  Node *pNVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  QArrayData *local_48;
  QArrayData *local_40;
  Node *local_38;
  undefined1 local_29;
  
  cVar2 = operator==((QString *)(param_1[2] + 0x20),param_2);
  if (cVar2 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1[2] + 0x20),param_2);
  (**(code **)(*param_1 + 0x158))(&local_38,param_1);
  QString::toLatin1();
  QByteArray::QByteArray((QByteArray *)&local_40,(char *)(local_48 + *(long *)(local_48 + 0x10)),-1)
  ;
  iVar4 = *(int *)(local_38 + 0x20);
  iVar7 = 0;
  if (iVar4 != 0) {
    plVar5 = *(long **)(local_38 + 8);
    do {
      pNVar3 = (Node *)*plVar5;
      iVar7 = 0;
      if (pNVar3 != local_38) goto LAB_100739ca0;
      iVar4 = iVar4 + -1;
      plVar5 = plVar5 + 1;
    } while (iVar4 != 0);
  }
  goto LAB_100739cd9;
  while (pNVar3 = (Node *)QHashData::nextNode(pNVar3), pNVar3 != local_38) {
LAB_100739ca0:
    lVar1 = *(long *)(pNVar3 + 0x10);
    if ((*(int *)(lVar1 + 4) == *(int *)(local_40 + 4)) &&
       (iVar4 = _memcmp((void *)(lVar1 + *(long *)(lVar1 + 0x10)),
                        local_40 + *(long *)(local_40 + 0x10),(long)*(int *)(lVar1 + 4)), iVar4 == 0
       )) {
      iVar7 = *(int *)(pNVar3 + 0xc);
      break;
    }
  }
LAB_100739cd9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100739d09;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100739d09:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100739d39;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100739d39:
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pNVar3 = local_38 + 0x10;
      *(int *)pNVar3 = *(int *)pNVar3 + -1;
      local_29 = *(int *)pNVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100739d68;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_38);
  }
LAB_100739d68:
  QSortFilterProxyModel::setSortRole((int)param_1);
  uVar6 = 0;
  if (iVar7 == -1) {
    uVar6 = 0xffffffff;
  }
  QSortFilterProxyModel::sort(param_1,uVar6,*(undefined4 *)(param_1[2] + 0x28));
  FUN_100857eb0(param_1,param_2);
  return;
}

