
undefined8 FUN_1002cdba0(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  CAbstractTask::getDefaultSubTaskList();
  lVar1 = *(long *)(param_2 + 0x28);
  iVar2 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     "Parallels Virtual PDF Printer",0xffffffff,1);
  if (iVar2 == 0) {
    local_20[0] = 2;
    FUN_1001298a0(param_1,local_20);
  }
  lVar1 = *(long *)(param_2 + 0x28);
  iVar2 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     "Parallels Virtual PDF Printer",0xffffffff,1);
  if (iVar2 != 0) {
    local_24 = 0;
    FUN_1001298a0(param_1,&local_24);
  }
  return param_1;
}

