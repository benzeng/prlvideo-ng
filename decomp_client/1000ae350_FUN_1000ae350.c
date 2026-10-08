
undefined8 * FUN_1000ae350(undefined8 *param_1,QString *param_2,undefined8 *param_3)

{
  char cVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = PTR_shared_null_1021e15e8;
  puVar2 = (uint *)*param_3;
  if (0 < (int)(puVar2[3] - puVar2[2])) {
    uVar4 = (long)(int)(puVar2[3] - puVar2[2]);
    while( true ) {
      uVar3 = uVar4 - 1;
      if (1 < *puVar2) {
        FUN_1000b5cf0(param_3,puVar2[1]);
        puVar2 = (uint *)*param_3;
      }
      cVar1 = operator==(param_2,*(QString **)(puVar2 + ((long)(int)puVar2[2] + uVar3) * 2 + 4));
      if (cVar1 != '\0') {
        puVar2 = (uint *)*param_3;
        if (1 < *puVar2) {
          FUN_1000b5cf0(param_3,puVar2[1]);
          puVar2 = (uint *)*param_3;
        }
        FUN_1000341d0(param_1,*(long *)(puVar2 + ((long)(int)puVar2[2] + uVar3) * 2 + 4) + 8);
        FUN_1000b4720(param_3,uVar3 & 0xffffffff);
      }
      if ((long)uVar4 < 2) break;
      puVar2 = (uint *)*param_3;
      uVar4 = uVar3;
    }
  }
  return param_1;
}

