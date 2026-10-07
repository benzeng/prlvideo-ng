
void FUN_1005fbc60(undefined8 *param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    if ((puVar3[2] & 0x7fffffff) == 0) {
      puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
      *param_1 = puVar3;
    }
    else {
      FUN_1005fc970(param_1,puVar3[1],puVar3[2] & 0x7fffffff,0);
      puVar3 = (uint *)*param_1;
    }
  }
  lVar1 = *(long *)(puVar3 + 4);
  lVar4 = (long)param_2 * 0x20;
  uVar2 = *param_3;
  *(undefined8 *)((long)puVar3 + lVar4 + 8 + lVar1) = param_3[1];
  *(undefined8 *)((long)puVar3 + lVar4 + lVar1) = uVar2;
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    if ((puVar3[2] & 0x7fffffff) == 0) {
      puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
      *param_1 = puVar3;
    }
    else {
      FUN_1005fc970(param_1,puVar3[1],puVar3[2] & 0x7fffffff,0);
      puVar3 = (uint *)*param_1;
    }
  }
  *(int *)((long)puVar3 + lVar4 + 0x18 + *(long *)(puVar3 + 4)) = param_2;
  if (1 < *puVar3) {
    if ((puVar3[2] & 0x7fffffff) == 0) {
      puVar3 = (uint *)QArrayData::allocate(0x20,8,0,2);
      *param_1 = puVar3;
    }
    else {
      FUN_1005fc970(param_1,puVar3[1],puVar3[2] & 0x7fffffff,0);
      puVar3 = (uint *)*param_1;
    }
  }
  *(undefined8 *)((long)puVar3 + lVar4 + 0x10 + *(long *)(puVar3 + 4)) = param_4;
  return;
}

