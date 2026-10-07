
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1005f4e20(int param_1,int param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  QMutex::lock();
  puVar5 = DAT_1011cc9d8;
  do {
    if ((long **)puVar5 == &DAT_1011cc9d0) {
      plVar3 = (long *)0x0;
      if (param_1 != 0) {
        if (param_1 == 1) {
          plVar3 = operator_new(0x30,(nothrow_t *)PTR_nothrow_100ba21c8);
          if (plVar3 == (long *)0x0) {
            FUN_1008e3970("","vdisk",0,"Throttler: memory allocation problems");
            plVar3 = (long *)0x0;
          }
          else {
            FUN_1005f5490(plVar3,param_2);
            plVar4 = operator_new(0x28);
            *(undefined4 *)(plVar4 + 2) = 1;
            *(int *)((long)plVar4 + 0x14) = param_2;
            *(int *)(plVar4 + 3) = param_3;
            plVar4[4] = (long)plVar3;
            DAT_1011cc9d0[1] = (long)plVar4;
            *plVar4 = (long)DAT_1011cc9d0;
            DAT_1011cc9d0 = plVar4;
            plVar4[1] = (long)&DAT_1011cc9d0;
            _DAT_1011cc9e0 = _DAT_1011cc9e0 + 1;
            iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_4);
            if (iVar2 < 0) {
              lVar1 = *plVar4;
              *(long *)(lVar1 + 8) = plVar4[1];
              *(long *)plVar4[1] = lVar1;
              _DAT_1011cc9e0 = _DAT_1011cc9e0 + -1;
              operator_delete(plVar4);
              (**(code **)(*plVar3 + 0x10))(plVar3);
              plVar3 = (long *)0x0;
            }
          }
        }
        else {
          FUN_1008e3970("","vdisk",0,"Throttler: unsupported throttler type %d",param_1);
          plVar3 = (long *)0x0;
        }
      }
LAB_1005f50be:
      QMutex::unlock();
      return plVar3;
    }
    if (*(int *)(puVar5 + 3) == param_3) {
      if (*(int *)(puVar5 + 2) != param_1) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","type == it->type",
                      "CMergeThrottlerBase.cpp",0x26,"AddDisk");
      }
      if (*(int *)(puVar5 + 3) != param_3) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","group == it->group",
                      "CMergeThrottlerBase.cpp",0x27,"AddDisk");
      }
      if ((*(int *)((long)puVar5 + 0x14) != param_2) && (0 < DAT_1011b55f8)) {
        FUN_1008e3970("","vdisk",1,"Throttler: Ignored different ioLimitTotalMb = %u for group %u",
                      param_2,param_3);
      }
      plVar3 = (long *)puVar5[4];
      if (plVar3 == (long *)0x0) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL != rv",
                      "CMergeThrottlerBase.cpp",0x2e,"AddDisk");
      }
      iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_4);
      if (iVar2 < 0) {
        plVar3 = (long *)0x0;
      }
      goto LAB_1005f50be;
    }
    puVar5 = (undefined8 *)puVar5[1];
  } while( true );
}

