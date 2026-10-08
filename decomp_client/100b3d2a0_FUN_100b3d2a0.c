
int FUN_100b3d2a0(undefined8 *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 uVar5;
  uint *puVar6;
  long local_48;
  undefined8 **local_40;
  undefined8 **local_38;
  undefined8 local_30;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_100b467c0(param_1,puVar3[1]);
    puVar3 = (uint *)*param_1;
  }
  *param_2 = (long)(puVar3 + (long)(int)puVar3[3] * 2 + 4);
  local_40 = &local_40;
  local_30 = 0;
  local_38 = local_40;
  cVar1 = FUN_100b46a70(local_40,1,0);
  if (cVar1 == '\0') {
    piVar4 = ___error();
    FUN_100b47de0(*piVar4);
    uVar5 = FUN_100b47dd0();
    iVar2 = -0x7fffc000;
    FUN_100df99c0("","prl_net",0,"[PrlNet]  makeEthIfacesList returned error: %ld",uVar5);
  }
  else {
    local_48 = 0;
    iVar2 = FUN_100b53720(&local_40,&local_48);
    if (-1 < iVar2) {
      puVar3 = (uint *)*param_1;
      if (1 < *puVar3) {
        FUN_100b467c0(param_1,puVar3[1]);
        puVar3 = (uint *)*param_1;
      }
      puVar6 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
      do {
        if (1 < *puVar3) {
          FUN_100b467c0(param_1,puVar3[1]);
          puVar3 = (uint *)*param_1;
        }
        if (puVar6 == puVar3 + (long)(int)puVar3[3] * 2 + 4) {
          iVar2 = -0x7fffffff;
          FUN_100df99c0("","prl_net",0,
                        "Internal error: getDefaultBridgedAdapter():Passed list of adapters doesn\'t contain adaptersList."
                       );
          goto LAB_100b3d42e;
        }
        if (*(short *)(local_48 + 0x26) == *(short *)(*(long *)puVar6 + 0x28)) {
          iVar2 = _memcmp((void *)(local_48 + 0x20),(void *)(*(long *)puVar6 + 0x2a),6);
          if (iVar2 == 0) goto code_r0x000100b3d39f;
        }
        puVar6 = puVar6 + 2;
      } while( true );
    }
    FUN_100df99c0("","prl_net",0,"getDefaultBridgedAdapter() failed with 0x%x",iVar2);
  }
LAB_100b3d42e:
  FUN_100b3d5f0(&local_40);
  return iVar2;
code_r0x000100b3d39f:
  *param_2 = (long)puVar6;
  iVar2 = 0;
  goto LAB_100b3d42e;
}

