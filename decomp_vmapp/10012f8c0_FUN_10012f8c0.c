
int FUN_10012f8c0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  QArrayData *pQVar3;
  QArrayData *local_28;
  undefined1 local_1a;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("backup_cmd_server_port",0x16);
  local_28 = pQVar3;
  iVar1 = FUN_10011d510(param_1,&local_28);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_1a = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_10012f921;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10012f921:
  iVar2 = 64000;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}

