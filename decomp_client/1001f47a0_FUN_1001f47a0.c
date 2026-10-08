
undefined4 FUN_1001f47a0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  CVirtualNetwork local_f0 [216];
  
  uVar1 = 0x80000009;
  if (*(int *)(*(long *)(param_1 + 0x40) + 8) < *(int *)(*(long *)(param_1 + 0x40) + 0xc)) {
    FUN_1001f64a0(local_f0,param_1 + 0x40);
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x38);
    }
    uVar2 = FUN_100174ab0(uVar2,local_f0);
    uVar1 = FUN_1001f4300(param_1,uVar2,"1subTaskCompleted(PRL_RESULT)");
    CVirtualNetwork::~CVirtualNetwork(local_f0);
  }
  return uVar1;
}

