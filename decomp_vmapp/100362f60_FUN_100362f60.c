
void FUN_100362f60(long param_1,long param_2,undefined8 param_3,uint param_4,uint param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((*(long **)(param_2 + 0x48) != *(long **)(param_2 + 0x40)) &&
      (lVar1 = **(long **)(param_2 + 0x40), lVar1 != 0)) &&
     ((*(uint *)(*(long *)(lVar1 + 0x88) + (ulong)param_4 * 4) >> (param_5 & 0x1f) & 1) != 0)) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    FUN_10038c380(uVar2,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}

