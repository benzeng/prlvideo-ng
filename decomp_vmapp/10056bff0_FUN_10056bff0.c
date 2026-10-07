
void FUN_10056bff0(undefined8 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  undefined1 local_68 [24];
  undefined4 local_50;
  code *local_48;
  long *local_40;
  long local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = *(long *)(param_2 + 0x20);
  plVar2 = *(long **)(lVar1 + 0x1210);
  local_38 = param_2;
  local_30 = param_1;
  local_28 = param_3;
  if (((plVar2 != (long *)0x0) && (cVar3 = (**(code **)(*plVar2 + 0x48))(plVar2), cVar3 == '\0')) &&
     (*(int *)(lVar1 + 0x1288) == 0)) {
    if (*(long *)(param_2 + 0x10) == 0) {
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","Flush->FlushCallback != NULL"
                    ,"DiskStatesImp.cpp",0x864,"HostFlushCallback");
    }
    local_48 = FUN_10056da50;
    local_40 = &local_38;
    local_50 = 0;
    (**(code **)(*plVar2 + 0x20))(plVar2,local_68);
    return;
  }
  FUN_10056da50(&local_38);
  return;
}

