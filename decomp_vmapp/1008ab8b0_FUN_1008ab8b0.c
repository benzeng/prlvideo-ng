
undefined8 FUN_1008ab8b0(undefined8 param_1,long *param_2,int *param_3,long *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  uVar4 = 0;
  if (param_4 != (long *)0x0) {
    puVar1 = (undefined8 *)*param_4;
    local_40 = puVar1[2];
    local_48 = puVar1[3];
    local_38 = puVar1[4];
    iVar2 = (**(code **)(*(long *)(puVar1[1] + 0x20) + 0x18))(0xb,puVar1,puVar1[1],&local_48);
    if (0 < iVar2) {
      uVar3 = FUN_1008a5200(*puVar1,0,puVar1[1]);
      local_30 = FUN_10081ddd0(uVar3,"bio_ndef.c",0xea);
      uVar4 = 0;
      if (local_30 != 0) {
        puVar1[5] = local_30;
        *param_2 = local_30;
        iVar2 = FUN_1008a5200(*puVar1,&local_30,puVar1[1]);
        uVar4 = 0;
        if (*(long *)puVar1[4] != 0) {
          *param_2 = *(long *)puVar1[4];
          *param_3 = (iVar2 - *(int *)puVar1[4]) + *(int *)(puVar1 + 5);
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}

