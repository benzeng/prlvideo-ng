
undefined8 FUN_10040de80(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = param_2 * *(int *)(*(long *)(param_1 + 8) + 0xc);
  return CONCAT71((uint7)uVar2 / 0x3e800,
                  uVar2 / 1000 <
                  (*(int *)(lVar1 + 0x68) - *(int *)(lVar1 + 100) & *(uint *)(lVar1 + 0x70)));
}

