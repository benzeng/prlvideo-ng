
undefined8 *
FUN_1004dd580(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  undefined8 local_38;
  
  puVar1 = operator_new(0x30);
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_FUN_100bc3698;
  puVar1[2] = param_2;
  bVar3 = (byte)param_6;
  *(byte *)(puVar1 + 3) = bVar3 >> 3 & 1;
  *(byte *)((long)puVar1 + 0x19) = bVar3 >> 2 & 1;
  *(byte *)((long)puVar1 + 0x1a) = bVar3 >> 1 & 1;
  *(byte *)((long)puVar1 + 0x1b) = bVar3 >> 4 & 1;
  plVar2 = (long *)0x0;
  if (*param_3 != 0) {
    plVar2 = *(long **)(*param_3 + 0x10);
  }
  (**(code **)(*plVar2 + 0x28))(&local_38,plVar2,param_4,param_5,param_6);
  puVar1[4] = local_38;
  *(undefined1 *)(puVar1 + 5) = 0;
  *param_1 = puVar1;
  return param_1;
}

