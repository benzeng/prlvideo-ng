
void FUN_100739ee0(long *param_1,QString *param_2)

{
  long lVar1;
  char cVar2;
  Node *pNVar3;
  int iVar4;
  long *plVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  Node *local_38;
  undefined1 local_29;
  
  cVar2 = operator==((QString *)(param_1[2] + 0x30),param_2);
  if (cVar2 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1[2] + 0x30),param_2);
  (**(code **)(*param_1 + 0x158))(&local_38,param_1);
  QString::toLatin1();
  QByteArray::QByteArray((QByteArray *)&local_40,(char *)(local_48 + *(long *)(local_48 + 0x10)),-1)
  ;
  iVar4 = *(int *)(local_38 + 0x20);
  if (iVar4 != 0) {
    plVar5 = *(long **)(local_38 + 8);
    do {
      pNVar3 = (Node *)*plVar5;
      if (pNVar3 != local_38) goto LAB_100739f90;
      iVar4 = iVar4 + -1;
      plVar5 = plVar5 + 1;
    } while (iVar4 != 0);
  }
  goto LAB_100739fc9;
  while (pNVar3 = (Node *)QHashData::nextNode(pNVar3), pNVar3 != local_38) {
LAB_100739f90:
    lVar1 = *(long *)(pNVar3 + 0x10);
    if ((*(int *)(lVar1 + 4) == *(int *)(local_40 + 4)) &&
       (iVar4 = _memcmp((void *)(lVar1 + *(long *)(lVar1 + 0x10)),
                        local_40 + *(long *)(local_40 + 0x10),(long)*(int *)(lVar1 + 4)), iVar4 == 0
       )) break;
  }
LAB_100739fc9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100739ff9;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100739ff9:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10073a029;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10073a029:
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pNVar3 = local_38 + 0x10;
      *(int *)pNVar3 = *(int *)pNVar3 + -1;
      local_29 = *(int *)pNVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10073a058;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_38);
  }
LAB_10073a058:
  QSortFilterProxyModel::setFilterRole((int)param_1);
  FUN_100857f60(param_1,param_2);
  return;
}

