
bool FUN_100db93e0(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  ssize_t sVar5;
  int *piVar6;
  char *pcVar7;
  bool bVar8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined1 local_c8 [4];
  ushort local_c4;
  undefined1 local_31;
  
  pcVar4 = _malloc(0x1000);
  if (pcVar4 == (char *)0x0) {
    return false;
  }
  if (*(int *)(*param_1 + 4) == 0) {
    bVar8 = false;
    goto LAB_100db95be;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_d0) || (*(long *)(local_d0 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_d0,*(uint *)(local_d0 + 4) + 1,*(uint *)(local_d0 + 8) >> 0x1f);
  }
  pcVar7 = pcVar4 + 0x800;
  _strncpy(pcVar4,(char *)(local_d0 + *(long *)(local_d0 + 0x10)),0x800);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100db94ad;
    }
    QArrayData::deallocate(local_d0,1,8);
  }
LAB_100db94ad:
  ___bzero(pcVar7,0x800);
  sVar5 = _readlink(pcVar4,pcVar7,0x800);
  iVar3 = (int)sVar5;
  pcVar2 = pcVar4;
  while (pcVar1 = pcVar7, -1 < iVar3) {
    ___bzero(pcVar2,0x800);
    sVar5 = _readlink(pcVar1,pcVar2,0x800);
    pcVar7 = pcVar2;
    pcVar2 = pcVar1;
    iVar3 = (int)sVar5;
  }
  piVar6 = ___error();
  if (*piVar6 != 0x16) {
    bVar8 = false;
    goto LAB_100db95be;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_d8) || (*(long *)(local_d8 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_d8,*(uint *)(local_d8 + 4) + 1,*(uint *)(local_d8 + 8) >> 0x1f);
  }
  _stat_INODE64(local_d8 + *(long *)(local_d8 + 0x10),local_c8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100db959e;
    }
    QArrayData::deallocate(local_d8,1,8);
  }
LAB_100db959e:
  bVar8 = (local_c4 & 0xb000) == 0x2000;
LAB_100db95be:
  _free(pcVar4);
  return bVar8;
}

