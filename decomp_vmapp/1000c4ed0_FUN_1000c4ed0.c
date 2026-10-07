
void FUN_1000c4ed0(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_1008e3970("","vm",0,"       VCPU 0x%x >>>",*param_1);
  lVar1 = *(long *)(param_1 + 6);
  if (lVar1 != 0) {
    FUN_1000c4d80(param_1,0);
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    FUN_1000c4d80(param_1,1);
  }
  lVar3 = *(long *)(param_1 + 10);
  if (lVar3 != 0) {
    FUN_1000c4d80(param_1,2);
  }
  if (*(long *)(param_1 + 0xc) == 0) {
    if (lVar3 == 0 && (lVar2 == 0 && lVar1 == 0)) {
      FUN_1008e3970("","vm",0,"    No profiled activity");
    }
  }
  else {
    FUN_1000c4d80(param_1,3);
  }
  FUN_1000c43a0(param_1);
  return;
}

