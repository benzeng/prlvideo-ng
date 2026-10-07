
void FUN_100038080(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar5 = (undefined8 *)FUN_10078cc60(param_2);
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  *(undefined4 *)puVar5 = 1;
  lVar6 = FUN_1002a6120(param_1,1,1);
  uVar1 = *(uint *)(lVar6 + 8);
  uVar2 = FUN_10078cc70(param_2);
  iVar3 = FUN_10078cc70(param_2);
  if (uVar1 < uVar2) {
    *(int *)(puVar5 + 2) = iVar3;
    uVar4 = 0x50;
  }
  else {
    *(int *)((long)puVar5 + 0xc) = iVar3 + -0x50;
    *(undefined4 *)(puVar5 + 1) = param_3;
    *(undefined4 *)(puVar5 + 2) = 0;
    uVar4 = FUN_10078cc70(param_2);
  }
  FUN_1002a5a50(lVar6,0,puVar5,uVar4);
  *(undefined4 *)(lVar6 + 0x10) = uVar4;
  return;
}

