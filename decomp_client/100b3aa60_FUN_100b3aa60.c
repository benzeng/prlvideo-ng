
bool FUN_100b3aa60(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  bool bVar6;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  uint uVar5;
  
  if (*param_2 == 0) {
    return false;
  }
  if (*(long *)(*param_2 + 0x10) == 0) {
    return false;
  }
  QRegExp::pattern();
  local_48 = (QArrayData *)QString::fromAscii_helper("\\n",2);
  uVar1 = QString::count(&local_40,&local_48,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b3aafa;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b3aafa:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b3ab2a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100b3ab2a:
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar5 = 1;
  if (1 < uVar1) {
    uVar5 = uVar1;
  }
  iVar4 = -uVar5;
  lVar2 = param_3;
  do {
    QString::insert((int)&local_50,(QChar *)0x0,
                    (int)*(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10) +
                    (int)*(long *)(lVar2 + 0x10));
    lVar2 = *(long *)(lVar2 + 8);
    lVar3 = param_1 + 0x18;
    if (lVar2 == param_1 + 0x18) break;
    iVar4 = iVar4 + 1;
    lVar3 = lVar2;
  } while (iVar4 != 0);
  lVar2 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(*param_2 + 0x10);
  }
  iVar4 = QRegExp::indexIn(lVar2 + 8,&local_50,0,0);
  bVar6 = iVar4 != -1;
  if (bVar6) {
    lVar2 = *(long *)(*param_2 + 0x10);
    *(long *)(lVar2 + 0x60) = lVar3;
    *(long *)(lVar2 + 0x68) = param_3;
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return bVar6;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return bVar6;
}

