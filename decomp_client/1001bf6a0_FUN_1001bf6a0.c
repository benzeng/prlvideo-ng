
void FUN_1001bf6a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long local_28;
  
  local_28 = 0;
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x14) != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x10) + 0x18);
    plVar1 = (long *)FUN_1001bfdb0(plVar3,param_2,0);
    if (*plVar1 == *plVar3) {
      plVar1 = &local_28;
    }
    else {
      plVar1 = (long *)(*plVar1 + 0x18);
    }
    lVar2 = *plVar1;
    if (lVar2 != 0) goto LAB_1001bf700;
  }
  lVar2 = FUN_1001be580(*(undefined8 *)(param_1 + 0x10),param_2);
LAB_1001bf700:
  FUN_1001bd350(lVar2);
  return;
}

