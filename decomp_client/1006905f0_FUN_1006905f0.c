
bool FUN_1006905f0(int param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (param_2 == 0) {
    return false;
  }
  uVar1 = FUN_10018a9d0(param_2);
  iVar2 = EnumUtils::sdkToGuiEnum(uVar1);
  if (iVar2 != 0x10) {
    return iVar2 == param_1;
  }
  EnumUtils::enumToString(&local_28,0x10);
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"Unsupported VM state: %s %.8X",
                local_20 + *(long *)(local_20 + 0x10),0x10);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100690698;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_100690698:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006906c8;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006906c8:
  FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                "ActionManager/ActionHelpersPrivate.cpp",0x48,"testVmState");
  return false;
}

