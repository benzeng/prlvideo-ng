
void FUN_1003895c0(long *param_1,int param_2,int param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined8 extraout_RDX;
  undefined8 in_stack_ffffffffffffffb8;
  uint uVar6;
  
  uVar6 = (uint)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar1 = param_1[5];
  if (((lVar1 != 0) && (*(int *)(lVar1 + 0x78) == param_2)) && (*(int *)(lVar1 + 0x7c) == param_3))
  {
    iVar2 = FUN_10038e1b0(param_4);
    if (iVar2 == *(int *)(lVar1 + 0x18)) {
      return;
    }
  }
  uVar3 = FUN_10038e1d0(param_4);
  uVar4 = FUN_10038e1f0(param_4);
  (**(code **)(*param_1 + 0x48))(param_1);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  pvVar5 = operator_new(0xb0);
  FUN_1003806d0(pvVar5,1,1,0xde1,param_4,param_2,param_3,1,(ulong)uVar6 << 0x20);
  param_1[5] = (long)pvVar5;
  (*DAT_1011c5768)(*(undefined4 *)((long)pvVar5 + 0x14),*(undefined4 *)((long)pvVar5 + 0xc));
  (*DAT_1011c6c98)(0xde1,0,*(undefined4 *)(param_1[5] + 0x18),param_2,param_3,0,uVar3,uVar4,0);
                    /* WARNING: Could not recover jumptable at 0x0001003896e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5768)(*(undefined4 *)(param_1[5] + 0x14),0,extraout_RDX,DAT_1011c5768);
  return;
}

