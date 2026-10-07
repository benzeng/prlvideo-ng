
void FUN_1005f9440(long *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == '\0') {
    iVar1 = (**(code **)(*param_1 + 0x108))();
    if (-1 < iVar1) {
      return;
    }
    FUN_1008e3970("Backup","vdisk",0,"Cache processing at commit failed, err = 0x%X",iVar1);
    uVar2 = 0x43c;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x110))();
    if (-1 < iVar1) {
      return;
    }
    FUN_1008e3970("Backup","vdisk",0,"Cache processing at rollback failed, err = 0x%X",iVar1);
    uVar2 = 0x433;
  }
  FUN_1008e3970("Backup","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                "OfflineOperations.cpp",uVar2,"DoComplete");
  return;
}

