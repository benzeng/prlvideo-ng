
undefined1 FUN_1007dc8d0(int *param_1,void *param_2,int param_3,ushort param_4)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  long lVar4;
  kevent local_50;
  
  if ((param_4 & 0xffe7) != 0) {
    if (*(long *)((long)param_2 + 8) != 0) {
      FUN_1008e3970("","Std",0);
    }
    if (param_1[1] <= param_1[2] + 2) {
      lVar4 = (long)param_1[1] + 0x10;
      pvVar2 = _realloc(*(void **)(param_1 + 4),lVar4 * 0x20);
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
      *(void **)(param_1 + 4) = pvVar2;
      param_1[1] = (int)lVar4;
    }
    *(ushort *)((long)param_2 + 0x14) = param_4;
    *(int *)((long)param_2 + 0x10) = param_3;
    if ((param_4 & 1) != 0) {
      local_50.ident = (uintptr_t)param_3;
      local_50.filter = -1;
      local_50.flags = 1;
      local_50.fflags = 0;
      local_50.data = 0;
      local_50.udata = param_2;
      iVar1 = _kevent(*param_1,&local_50,1,(kevent *)0x0,0,(timespec *)0x0);
      if (iVar1 < 0) {
        iVar1 = FUN_1008e38f0(&DAT_1011a6558);
        if (iVar1 != 0) {
          piVar3 = ___error();
          FUN_1008e3970("","Std",0,"Failed to add kevent to kqueue: %d",*piVar3);
        }
        FUN_1008e3970("","Std",0,"ASSERT( %s ) occured in %s:%d [%s]","err >= 0","pollset_mac.cpp",
                      0x98,"pollset_add");
        return 0;
      }
      param_1[2] = param_1[2] + 1;
    }
    if ((param_4 & 4) != 0) {
      local_50.ident = (uintptr_t)*(int *)((long)param_2 + 0x10);
      local_50.filter = -2;
      local_50.flags = 1;
      local_50.fflags = 0;
      local_50.data = 0;
      local_50.udata = param_2;
      iVar1 = _kevent(*param_1,&local_50,1,(kevent *)0x0,0,(timespec *)0x0);
      if (iVar1 < 0) {
        iVar1 = FUN_1008e38f0(&DAT_1011a6560);
        if (iVar1 != 0) {
          piVar3 = ___error();
          FUN_1008e3970("","Std",0,"Failed to add kevent to kqueue: %d",*piVar3);
        }
        if ((param_4 & 1) != 0) {
          FUN_1007dcb30(param_1,param_3,0xffffffff,"POLLIN");
          return 0;
        }
        return 0;
      }
      param_1[2] = param_1[2] + 1;
    }
    *(int **)((long)param_2 + 8) = param_1;
  }
  return 1;
}

