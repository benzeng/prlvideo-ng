
undefined1 FUN_1007dcb30(int *param_1,int param_2,int16_t param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  kevent local_40;
  
  if (param_1[2] < 1) {
    uVar3 = 0;
    FUN_1008e3970("","Std",0,"invalid pollset_remove (%s): no entries in pollset",param_4);
    if (param_1[2] < 1) {
      uVar3 = 0;
      FUN_1008e3970("","Std",0,"ASSERT( %s ) occured in %s:%d [%s]","pollset->count > 0",
                    "pollset_mac.cpp",0x6a,"__pollset_remove");
    }
  }
  else {
    local_40.ident = (uintptr_t)param_2;
    local_40.flags = 2;
    local_40.udata._4_4_ = 0;
    local_40._20_8_ = 0;
    local_40._12_8_ = 0;
    local_40.filter = param_3;
    iVar1 = _kevent(*param_1,&local_40,1,(kevent *)0x0,0,(timespec *)0x0);
    if (iVar1 < 0) {
      iVar1 = FUN_1008e38f0(&DAT_1011a6570);
      if (iVar1 != 0) {
        piVar2 = ___error();
        FUN_1008e3970("","Std",0,"Failed to del kevent (%s): %d",param_4,*piVar2);
      }
      FUN_1008e3970("","Std",0,"ASSERT( %s ) occured in %s:%d [%s]","err >= 0","pollset_mac.cpp",
                    0x73,"__pollset_remove");
    }
    param_1[2] = param_1[2] + -1;
    uVar3 = 1;
  }
  return uVar3;
}

