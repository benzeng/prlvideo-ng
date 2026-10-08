
int FUN_100d48d70(undefined8 param_1,long param_2,long param_3,int param_4,undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_3c;
  undefined8 local_38;
  
  if (param_2 != param_3) {
    do {
      iVar2 = _PrlVmDev_GetStackIndex(*(undefined8 *)(param_2 + 0x20),&local_3c);
      if (iVar2 < 0) {
        _PrlDbg_PrlResultToString(iVar2,&local_38);
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Error : Failed to get device stack index error 0x%X \'%s\'",iVar2,local_38);
        return iVar2;
      }
      local_3c = local_3c + param_4;
      iVar3 = _PrlVmDev_SetStackIndex(*(undefined8 *)(param_2 + 0x20));
      iVar2 = local_3c;
      if (iVar3 < 0) {
        uVar1 = *(undefined4 *)(param_2 + 0x18);
        _PrlDbg_PrlResultToString(iVar3,&local_38);
        FUN_100df99c0("","PrlSdkUtils",0,
                      "Error : Failed to set %s hard disk stack index %u -> %u error 0x%X \'%s\'",
                      param_5,uVar1,iVar2,iVar3,local_38);
        return iVar3;
      }
      param_2 = QMapNodeBase::nextNode();
    } while (param_2 != param_3);
  }
  return 0;
}

