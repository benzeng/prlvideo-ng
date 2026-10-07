
void FUN_1005f6bd0(long *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x118))();
  if (cVar1 == '\0') {
    if (param_2 == '\0') {
      iVar2 = (**(code **)(*param_1 + 0x108))(param_1);
      if (-1 < iVar2) {
        return;
      }
      FUN_1008e3970("","vdisk",0,"Cache processing at commit failed, err = 0x%X",iVar2);
      uVar3 = 0x114;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x110))();
      if (-1 < iVar2) {
        return;
      }
      FUN_1008e3970("","vdisk",0,"Cache processing at rollback failed, err = 0x%X",iVar2);
      uVar3 = 0x10b;
    }
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","false","OfflineOperations.cpp",
                  uVar3,"DoComplete");
  }
  return;
}

