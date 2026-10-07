
undefined8 FUN_0040e560(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar1 = FUN_0040e280(1,param_2 + 0xc);
  iVar2 = FUN_0040e660(&local_28,uVar1);
  uVar4 = 0xfffffffe;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x10) = local_28;
    *(undefined4 *)(param_1 + 0x18) = local_20;
    puVar3 = (undefined4 *)FUN_0040e1f0(param_1,param_2);
    uVar4 = 0;
    *puVar3 = 0;
    puVar3[2] = 0;
    puVar3[1] = 0x1000;
  }
  return uVar4;
}

