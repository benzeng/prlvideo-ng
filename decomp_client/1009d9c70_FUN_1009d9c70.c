
undefined8 FUN_1009d9c70(long param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)*(int *)(param_1 + 0x18) * 0xc;
  uVar1 = (*(int *)(param_1 + 0x20 + lVar3) + 0x27U & 0xfffffffc) + *(int *)(param_1 + 0x18) * 0xc;
  *(uint *)(param_1 + 4) = uVar1;
  if ((ulong)uVar1 + (long)param_3 < 0x41d) {
    *(int *)(param_1 + 0x20 + lVar3) = param_3;
    if (param_2 != (void *)0x0) {
      _memcpy((void *)(param_1 + 0x24 + (long)*(int *)(param_1 + 0x18) * 0xc),param_2,(long)param_3)
      ;
    }
    iVar2 = (*(int *)(param_1 + 0x20 + (long)*(int *)(param_1 + 0x18) * 0xc) + 0x27U & 0xfffffffc) +
            *(int *)(param_1 + 0x18) * 0xc;
    *(int *)(param_1 + 4) = iVar2;
    uVar4 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

