
int FUN_100161cf0(long param_1)

{
  QString QVar1;
  int iVar2;
  bool *pbVar3;
  QArrayData *local_38;
  undefined1 local_2a;
  
  pbVar3 = (bool *)FUN_100161b90();
  iVar2 = CSdkRequest::waitForCompletion(pbVar3,0);
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlSrv_FsGetDirEntries failed with RC = %.8X",
                  iVar2);
  }
  else {
    QVar1.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0xe8);
    CSdkRequest::getResultAsString((int)&local_38);
    CBaseNode::fromString(QVar1,SUB81(&local_38,0),(QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return iVar2;
        }
        local_2a = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  return iVar2;
}

