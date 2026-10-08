
bool FUN_1001223d0(undefined8 param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long local_48;
  uint local_3c;
  Data *local_38;
  undefined1 local_29;
  
  MacUtils::getHiDPIDisplays();
  iVar3 = *(int *)(local_38 + 0xc);
  iVar1 = *(int *)(local_38 + 8);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012241b;
    }
    QListData::dispose(local_38);
  }
LAB_10012241b:
  if (((iVar3 != iVar1) && (iVar3 = FUN_10018a9d0(param_1), iVar3 == 0x30000004)) &&
     ((cVar2 = FUN_1001221f0(param_1), cVar2 != '\0' ||
      ((uVar4 = FUN_10018f890(param_1), uVar4 - 0x80e < 3 || ((uVar4 & 0xffffff00) == 0x700)))))) {
    local_3c = 0;
    FUN_10018c250(&local_48,param_1);
    iVar3 = _PrlVm_ToolsGetShutdownCapabilities(local_48,&local_3c);
    if (-1 < iVar3) {
      uVar4 = local_3c & 0x10;
      if (local_48 != 0) {
        _PrlHandle_Free();
      }
      if (uVar4 == 0) {
        return false;
      }
      if (param_2 != '\0') {
        return true;
      }
      uVar4 = FUN_10018f890(param_1);
      if (uVar4 - 0x80e < 3) {
        return true;
      }
      if ((uVar4 & 0xffffff00) == 0x700) {
        return true;
      }
      uVar5 = FUN_10018c280(param_1);
      iVar3 = FUN_100319ae0(uVar5);
      return iVar3 == 3;
    }
    if (local_48 != 0) {
      _PrlHandle_Free();
    }
  }
  return false;
}

