
int FUN_100db3840(long param_1,uint param_2,char param_3,char param_4)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  ulong uVar5;
  QArrayData *local_40;
  QArrayData *local_38;
  
  if (2 < param_2) {
    FUN_100df99c0("","AbstractFile",0,"GetHandle: Incorrent index %u specified",param_2);
    return -1;
  }
  if (param_2 == 0) {
    return *(int *)(param_1 + 8);
  }
  uVar5 = (ulong)param_2;
  iVar2 = *(int *)(param_1 + 8 + uVar5 * 4);
  if (iVar2 != -1) {
    return iVar2;
  }
  if (param_3 == '\0') {
    pcVar4 = "GetHandle: Force open is not set and handle invalid";
LAB_100db39aa:
    FUN_100df99c0("","AbstractFile",0,pcVar4);
    return -1;
  }
  if (*(int *)(param_1 + 8) == -1) {
    pcVar4 = "GetHandle: File is not opened yet.";
    goto LAB_100db39aa;
  }
  QString::toUtf8();
  iVar2 = _open((char *)(local_38 + *(long *)(local_38 + 0x10)),*(int *)(param_1 + 0x68),0x1b4);
  *(int *)(param_1 + 8 + uVar5 * 4) = iVar2;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 == 0) {
LAB_100db3902:
      QArrayData::deallocate(local_38,1,8);
    }
    else {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 == 0) goto LAB_100db3902;
    }
    iVar2 = *(int *)(param_1 + 8 + uVar5 * 4);
  }
  if (iVar2 == -1) {
    QString::toUtf8();
    lVar1 = *(long *)(local_40 + 0x10);
    piVar3 = ___error();
    pcVar4 = _strerror(*piVar3);
    FUN_100df99c0("","AbstractFile",0,"Error creating handle of file \'%s\' with error \'%s\'",
                  local_40 + lVar1,pcVar4);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_100db3a31;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  else {
    if (param_4 == '\0') {
      return iVar2;
    }
    iVar2 = _fcntl(iVar2,0x30,1);
    if (iVar2 < 0) {
      piVar3 = ___error();
      pcVar4 = _strerror(*piVar3);
      FUN_100df99c0("","AbstractFile",0,"Caching disable failed (%s)",pcVar4);
    }
  }
LAB_100db3a31:
  return *(int *)(param_1 + 8 + uVar5 * 4);
}

