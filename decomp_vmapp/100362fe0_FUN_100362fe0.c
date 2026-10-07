
void FUN_100362fe0(long param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((*(long **)(param_2 + 0x48) != *(long **)(param_2 + 0x40)) &&
      (lVar1 = **(long **)(param_2 + 0x40), lVar1 != 0)) && ((**(byte **)(lVar1 + 0x88) & 1) != 0))
  {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    FUN_10038cb70(uVar2,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}

