
bool FUN_100430680(long *param_1,int param_2)

{
  QArrayData *pQVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  QArrayData *pQVar5;
  long lVar6;
  QArrayData *local_40;
  undefined1 local_35;
  undefined1 local_32;
  undefined1 local_31;
  
  lVar6 = *param_1;
  iVar3 = QString::compare_helper
                    (*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4),"AllFiles",
                     0xffffffff,1);
  if (iVar3 == 0) {
    return false;
  }
  lVar6 = *param_1;
  iVar3 = QString::compare_helper
                    (*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4),"Home",0xffffffff,1)
  ;
  if (iVar3 == 0) {
    return false;
  }
  lVar6 = *param_1;
  iVar3 = QString::compare_helper
                    (*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4),".",0xffffffff,1);
  if (iVar3 == 0) {
    return false;
  }
  lVar6 = *param_1;
  iVar3 = QString::compare_helper
                    (*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4),"..",0xffffffff,1);
  if (iVar3 == 0) {
    return false;
  }
  if ((param_2 == 8) && (cVar2 = QString::endsWith(param_1,0x2e,1), cVar2 != '\0')) {
    return false;
  }
  QByteArray::QByteArray((QByteArray *)&local_40,"\\/:*?\"<>|",-1);
  pQVar1 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_35 = *(int *)local_40 != 0;
    UNLOCK();
  }
  lVar6 = (long)*(int *)(local_40 + 4);
  if (lVar6 != 0) {
    pQVar5 = local_40 + *(long *)(local_40 + 0x10);
    iVar3 = 1;
    do {
      iVar4 = QString::indexOf(param_1,(int)(char)*pQVar5,0,1);
      if (iVar4 != -1) goto LAB_1004307e5;
      pQVar5 = pQVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  iVar3 = 2;
LAB_1004307e5:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_32 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_100430812;
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_100430812:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar3 == 2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return iVar3 == 2;
}

