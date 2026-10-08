
void FUN_100ae58e0(undefined8 *param_1,uint param_2,void *param_3)

{
  uint *puVar1;
  
  *param_1 = &PTR_FUN_10223b2c8;
  param_1[1] = PTR_shared_null_1021e1288;
  if ((param_2 - 1 < 0x10) && (param_3 != (void *)0x0)) {
    param_1 = param_1 + 1;
    FUN_100ae6f40(param_1,param_2);
    puVar1 = (uint *)*param_1;
    if (1 < *puVar1) {
      if ((puVar1[2] & 0x7fffffff) == 0) {
        puVar1 = (uint *)QArrayData::allocate(0x20,8,0,2);
        *param_1 = puVar1;
      }
      else {
        FUN_100ae7220(param_1,puVar1[1],puVar1[2] & 0x7fffffff,0);
        puVar1 = (uint *)*param_1;
      }
    }
    _memcpy((void *)((long)puVar1 + *(long *)(puVar1 + 4)),param_3,(ulong)param_2 << 5);
  }
  return;
}

