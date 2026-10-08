
void FUN_100ae59e0(undefined8 *param_1,void *param_2,ulong param_3)

{
  uint *puVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_10223b2c8;
  param_1[1] = PTR_shared_null_1021e1288;
  if ((((param_3 & 0x1f) == 0) && (param_2 != (void *)0x0)) &&
     (uVar2 = param_3 >> 5 & 0x7ffffff, (int)uVar2 - 1U < 0x10)) {
    param_1 = param_1 + 1;
    FUN_100ae6f40(param_1,uVar2);
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
    _memcpy((void *)((long)puVar1 + *(long *)(puVar1 + 4)),param_2,uVar2 << 5);
  }
  return;
}

