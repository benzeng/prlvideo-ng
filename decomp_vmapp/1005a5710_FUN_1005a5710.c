
undefined8 FUN_1005a5710(long param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 local_27;
  undefined2 local_23;
  undefined1 local_21;
  
  if (param_2 == 0) {
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","disk != NULL",
                  "DiskStatesManager.cpp",0xb4,"PushDisk");
  }
  plVar2 = operator_new(0x20);
  plVar2[2] = param_2;
  *(undefined1 *)(plVar2 + 3) = param_3;
  *(undefined1 *)((long)plVar2 + 0x1f) = local_21;
  *(undefined2 *)((long)plVar2 + 0x1d) = local_23;
  *(undefined4 *)((long)plVar2 + 0x19) = local_27;
  plVar2[1] = param_1 + 0x58;
  lVar1 = *(long *)(param_1 + 0x58);
  *plVar2 = lVar1;
  *(long **)(lVar1 + 8) = plVar2;
  *(long **)(param_1 + 0x58) = plVar2;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  return 0;
}

