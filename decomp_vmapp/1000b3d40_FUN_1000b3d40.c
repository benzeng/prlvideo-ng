
void FUN_1000b3d40(long param_1,long param_2)

{
  ulong uVar1;
  
  *(long *)(*(long *)(param_1 + 0x1a10) + 0x718) = param_2;
  if ((param_2 == 0x7fffffffffffffff) && (*(int *)(param_1 + 0xa4) == 5)) {
    uVar1 = FUN_1007d87f0();
    FUN_1008e3970("","vm",0,"[%8llu] VPC unfreezed by HDD dl:%llu t:%llu",uVar1 / 1000,
                  0x7fffffffffffffff,*(undefined8 *)(*(long *)(param_1 + 0x1a10) + 0x710));
    FUN_10008fa70(param_1,0x4e25);
    return;
  }
  return;
}

