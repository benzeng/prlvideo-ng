
undefined8 FUN_100c02170(long param_1,int param_2,int param_3,long param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  int iVar3;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (param_2 == 1) {
    *plVar1 = param_4;
  }
  else {
    if (param_2 == 7) {
      puVar2 = *(undefined4 **)(*(long *)(param_1 + 0x10) + 0x20);
      iVar3 = FUN_100c015e0(plVar1 + 4,*(undefined8 *)(puVar2 + 2),*puVar2,*plVar1,
                            *(undefined8 *)(param_1 + 8));
    }
    else {
      if (param_2 != 6) {
        return 0xfffffffe;
      }
      if (param_3 < -1) {
        return 0;
      }
      if (0 < param_3 && param_4 == 0) {
        return 0;
      }
      iVar3 = FUN_100c76bc0(plVar1 + 1,param_4);
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

