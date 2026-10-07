
void FUN_10058fd10(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  long local_30;
  
  lVar1 = param_1 + 0x9c;
  cVar2 = FUN_1007ea210(lVar1);
  if ((cVar2 == '\0') && (-1 < *(int *)(param_1 + 0x98))) {
    iVar3 = *(int *)(param_1 + 200);
    if (iVar3 != -1) {
      lVar4 = *(long *)(param_1 + 0xc0);
      if (lVar4 == 0) {
        local_40[0] = false;
      }
      else {
        lVar4 = ___dynamic_cast(lVar4,&PTR_vtable_10111dd60,&PTR_vtable_100bcc3b0,0xffffffffffffffff
                               );
        local_40[0] = lVar4 != 0;
      }
      local_38 = *(undefined4 *)(param_1 + 0x78);
      local_3c = iVar3;
      local_30 = param_1;
      uVar5 = (**(code **)(**(long **)(param_1 + 0x70) + 0x350))();
      FUN_1005ad370(uVar5,FUN_10058fbd0,local_40);
    }
    if (*(char *)(param_1 + 0xb0) != '\0') {
      if (*(long *)(param_1 + 0xf0) != 1) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "m_Merge.WrSnapsImgList.size() == 1","Storage.cpp",0x878,"DeleteStateEnd");
      }
      iVar3 = FUN_10058b170(param_1,param_1 + 0xd0,(long *)(param_1 + 0xc0),lVar1,
                            *(long *)(param_1 + 0xe8) + 0x10,*(undefined1 *)(param_1 + 0xb1));
      *(int *)(param_1 + 0x98) = iVar3;
      if (iVar3 < 0) {
        FUN_1008e3970("","vdisk",0,"Error: SwapImages failed at DeleteStateEnd, 0x%x");
      }
    }
    iVar3 = FUN_10058e450(param_1,lVar1);
    *(int *)(param_1 + 0x98) = iVar3;
    if (iVar3 < 0) {
      FUN_1008e3970("","vdisk",0,"Error: DeleteStateFiles failed at DeleteStateEnd, 0x%x");
    }
  }
  FUN_10058fec0(param_1);
  return;
}

