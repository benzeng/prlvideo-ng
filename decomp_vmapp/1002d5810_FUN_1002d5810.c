
int FUN_1002d5810(long *param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  undefined4 local_20;
  ushort local_1c;
  undefined1 local_1a;
  
  if (param_1[2] == 0) {
    pvVar2 = operator_new(0x838,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar4 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      FUN_1002f3460(pvVar2,param_1);
      pvVar4 = pvVar2;
    }
  }
  else {
    pvVar2 = operator_new(0x28,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar4 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      FUN_1002d9d50(pvVar2,param_1);
      pvVar4 = pvVar2;
    }
  }
  *param_1 = (long)pvVar4;
  iVar1 = -0x7ffffffe;
  if ((pvVar4 != (void *)0x0) && (iVar1 = FUN_1002d59e0(param_1), -1 < iVar1)) {
    if (param_1[6] == 0) {
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] Get device descriptor error %X!",param_1 + 0x107,
                      *(undefined4 *)(*param_1 + 0x20));
      }
      (**(code **)(*(long *)*param_1 + 0x30))();
    }
    else {
      local_1a = 0;
      local_20 = 0x507;
      local_1c = (ushort)*(byte *)(param_1[6] + 7);
      iVar1 = FUN_1002d69b0(param_1,&local_20,0);
      if (iVar1 != 0) {
        if ((int)param_1[3] == 0) {
          FUN_1008e3970("","USB",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bValid",
                        "../Usb/CUsbDev.cpp",0xb6,"Init");
        }
        lVar3 = FUN_1000b3d20(DAT_1011c3698);
        param_1[0x10a] = lVar3;
        if ((int)param_1[7] == 0) {
          return 0;
        }
        (**(code **)(*(long *)param_1[5] + 0x70))();
        FUN_1002c0a20();
        return 0;
      }
    }
    FUN_1002d5dc0(param_1);
    iVar1 = -0x7ffffff7;
  }
  return iVar1;
}

