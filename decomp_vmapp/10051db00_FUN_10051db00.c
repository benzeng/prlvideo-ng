
undefined8 * FUN_10051db00(undefined8 *param_1,long *param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  *param_1 = PTR_shared_null_100ba2188;
  puVar1 = (undefined8 *)*param_2;
  if (*(uint *)(puVar1 + 4) == 0) {
    return param_1;
  }
  uVar2 = *(uint *)((long)puVar1 + 0x24) ^ *param_3;
  puVar3 = *(undefined8 **)(puVar1[1] + ((ulong)uVar2 % (ulong)*(uint *)(puVar1 + 4)) * 8);
  while( true ) {
    if (puVar3 == puVar1) {
      return param_1;
    }
    if ((*(uint *)(puVar3 + 1) == uVar2) && (*param_3 == *(uint *)((long)puVar3 + 0xc))) break;
    puVar3 = (undefined8 *)*puVar3;
  }
  if (puVar3 == puVar1) {
    return param_1;
  }
  do {
    FUN_100036f00(param_1,puVar3 + 2);
    puVar3 = (undefined8 *)*puVar3;
    if (puVar3 == (undefined8 *)*param_2) {
      return param_1;
    }
  } while (*(uint *)((long)puVar3 + 0xc) == *param_3);
  return param_1;
}

