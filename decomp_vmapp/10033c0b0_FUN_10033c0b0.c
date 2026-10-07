
void FUN_10033c0b0(long param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined1 local_1d8 [420];
  undefined4 local_34;
  
  if (*(long **)(param_1 + 0xbb10) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0xbb10);
    plVar6 = (long *)(param_1 + 0xbb10);
    do {
      while (plVar7 = plVar2, param_2 <= *(uint *)(plVar7 + 4)) {
        plVar2 = (long *)*plVar7;
        plVar6 = plVar7;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_10033c110;
      }
      plVar1 = plVar7 + 1;
      plVar2 = (long *)*plVar1;
      plVar7 = plVar6;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033c110:
    if (((plVar7 != (long *)(param_1 + 0xbb10)) && (*(uint *)(plVar7 + 4) <= param_2)) &&
       (plVar7[5] != 0)) {
      FUN_100362590(*(undefined8 *)(param_1 + 48000),param_2);
      FUN_10033c1e0(param_1,param_2);
    }
  }
  FUN_100391b10(local_1d8);
  iVar3 = FUN_10039f080(param_3,param_4,local_1d8);
  if (iVar3 == 0) {
    pvVar4 = operator_new(0xf8);
    FUN_100391950(pvVar4,param_2,local_1d8);
    local_34 = *(undefined4 *)((long)pvVar4 + 0x18);
    puVar5 = (undefined8 *)FUN_10033f6c0(param_1 + 0xbb08,&local_34);
    *puVar5 = pvVar4;
  }
  FUN_100391ce0(local_1d8);
  return;
}

