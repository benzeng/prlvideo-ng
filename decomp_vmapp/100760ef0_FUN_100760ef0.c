
undefined1
FUN_100760ef0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
             ulong param_6)

{
  void *pvVar1;
  char cVar2;
  undefined1 uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_54 = 0;
  lVar6 = (param_6 & 0xffffffff) * 0x768 + param_3;
  pvVar4 = (void *)FUN_1007605e0(param_1,param_4,lVar6,&local_54);
  uVar3 = 0;
  if ((pvVar4 != (void *)0x0) && (local_54 != 0)) {
    local_50 = 0x1000007feedfacf;
    local_48 = 0x400000003;
    local_40 = local_54 + param_5;
    local_3c = param_5 * 0xb8 + local_54 * 0x48;
    uVar7 = (ulong)local_3c;
    local_38 = 0;
    local_34 = 0;
    lVar5 = FUN_100761880(param_2,FUN_100761810,0,&local_50,0x20);
    if (lVar5 == 0x20) {
      uVar7 = uVar7 + 0x101f & 0x1fffff000;
      cVar2 = FUN_100760850(param_1,param_2,uVar7,pvVar4);
      uVar3 = 0;
      if (cVar2 != '\0') {
        cVar2 = FUN_1007609e0(param_1,param_2,param_3,param_5);
        uVar3 = 0;
        if (cVar2 != '\0') {
          uVar3 = FUN_100760be0(param_1,param_2,uVar7,param_4,pvVar4,lVar6);
        }
      }
    }
    else {
      uVar3 = 0;
      FUN_1008e3970("","dbgdump",0,"Write to dump file failed");
    }
  }
  while (pvVar4 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar4 + 0x10);
    _free(pvVar4);
    pvVar4 = pvVar1;
  }
  return uVar3;
}

