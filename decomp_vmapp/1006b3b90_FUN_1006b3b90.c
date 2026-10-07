
int FUN_1006b3b90(undefined8 *param_1,long *param_2)

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
    FUN_10027ab40(param_1,puVar3[1]);
    puVar3 = (uint *)*param_1;
  }
  *param_2 = (long)(puVar3 + (long)(int)puVar3[3] * 2 + 4);
  local_40 = &local_40;
  local_30 = 0;
  local_38 = local_40;
  cVar1 = FUN_1006c1580(local_40,1,0);
  if (cVar1 == '\0') {
    piVar4 = ___error();
    FUN_1006c2990(*piVar4);
    uVar5 = FUN_1006c2980();
    iVar2 = -0x7fffc000;
    FUN_1008e3970("","prl_net",0,"[PrlNet]  makeEthIfacesList returned error: %ld",uVar5);
  }
  else {
    local_48 = 0;
    iVar2 = FUN_1006ce2d0(&local_40,&local_48);
    if (-1 < iVar2) {
      puVar3 = (uint *)*param_1;
      if (1 < *puVar3) {
        FUN_10027ab40(param_1,puVar3[1]);
        puVar3 = (uint *)*param_1;
      }
      puVar6 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
      do {
        if (1 < *puVar3) {
          FUN_10027ab40(param_1,puVar3[1]);
          puVar3 = (uint *)*param_1;
        }
        if (puVar6 == puVar3 + (long)(int)puVar3[3] * 2 + 4) {
          iVar2 = -0x7fffffff;
          FUN_1008e3970("","prl_net",0,
                        "Internal error: getDefaultBridgedAdapter():Passed list of adapters doesn\'t contain adaptersList."
                       );
          goto LAB_1006b3d1e;
        }
        if (*(short *)(local_48 + 0x26) == *(short *)(*(long *)puVar6 + 0x28)) {
          iVar2 = _memcmp((void *)(local_48 + 0x20),(void *)(*(long *)puVar6 + 0x2a),6);
          if (iVar2 == 0) goto code_r0x0001006b3c8f;
        }
        puVar6 = puVar6 + 2;
      } while( true );
    }
    FUN_1008e3970("","prl_net",0,"getDefaultBridgedAdapter() failed with 0x%x",iVar2);
  }
LAB_1006b3d1e:
  FUN_1006c1f60(&local_40);
  return iVar2;
code_r0x0001006b3c8f:
  *param_2 = (long)puVar6;
  iVar2 = 0;
  goto LAB_1006b3d1e;
}

