
void FUN_1005f4480(long param_1,int param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x2e0))();
  uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x2e0))();
  iVar1 = FUN_1007db880(*(undefined8 *)(param_1 + 0x18),
                        (int)((((param_3 & 0xffffffff) - 1) + lVar2) / uVar3) + param_2,param_2);
  *(bool *)(param_1 + 0x28) = *(char *)(param_1 + 0x28) != '\0' && iVar1 == 0;
  return;
}

