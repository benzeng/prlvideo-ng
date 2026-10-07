
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1000eb330(long param_1,int *param_2,undefined8 param_3,long param_4,uint param_5,long param_6,
             undefined4 param_7,code *param_8)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
  if (param_8 == (code *)0x0) {
    uVar5 = *(undefined8 *)(param_2 + 0xb);
    pcVar2 = "Invalid custom descriptor %s, line=%u";
    uVar4 = 0;
    uVar3 = 0x191;
LAB_1000eb3c4:
    FUN_1008e3970("","vm",0,pcVar2,uVar5,uVar3);
    return uVar4;
  }
  if ((ulong)param_5 + param_4 < param_6 + 0x10U) {
    param_8 = *(code **)(param_2 + 0xb);
    uVar5 = 0x10;
    pcVar2 = "Ptr is out of range. Item %s (%p,0x%zx,%p,0x%x), line=%u";
    goto LAB_1000eb4b0;
  }
  _DAT_1011b6d58 = CONCAT44(DAT_1011b6d58_4,param_5);
  _DAT_1011b6d68 = CONCAT44(DAT_1011b6d6c,param_7);
  DAT_1011b6d40 = param_2;
  _DAT_1011b6d48 = param_3;
  DAT_1011b6d50 = param_4;
  DAT_1011b6d60 = param_6;
  _DAT_1011b6d70 = param_1;
  if (*param_2 == 0x10) {
    if (param_1 == 0) {
      uVar4 = 1;
      if ((int)DAT_1011c37a0 == 0) {
        return 1;
      }
      uVar5 = *(undefined8 *)(param_2 + 0xb);
      pcVar2 = "Item %s is not initialized. Skipped while restoring/saving, line=%u";
      uVar3 = 0x1ae;
      _DAT_1011b6d70 = 0;
      goto LAB_1000eb3c4;
    }
    iVar1 = (*param_8)();
LAB_1000eb420:
    if (iVar1 == 0) {
      return 1;
    }
  }
  else if (*param_2 == 0xc) {
    iVar1 = (*param_8)();
    goto LAB_1000eb420;
  }
  _DAT_1011b6d78 = 0;
  _DAT_1011b6d70 = 0;
  _DAT_1011b6d68 = 0;
  DAT_1011b6d60 = 0;
  _DAT_1011b6d58 = 0;
  DAT_1011b6d50 = 0;
  _DAT_1011b6d48 = 0;
  DAT_1011b6d40 = (int *)0x0;
  param_6 = *(long *)(param_2 + 0xb);
  uVar5 = CONCAT44(uVar6,0x1bd);
  pcVar2 = "Custom function failed pFunc=%p, %s, line=%u";
LAB_1000eb4b0:
  FUN_1008e3970("","vm",0,pcVar2,param_8,param_6,uVar5);
  return 0;
}

