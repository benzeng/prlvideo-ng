
undefined8 * FUN_100bf8640(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t sVar3;
  void *pvVar4;
  void *pvVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return param_1;
  }
  puVar1 = (undefined8 *)FUN_100c74da0();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100c62ee0(8,0x65,0xd,"obj_lib.c",0x50);
    return (undefined8 *)0x0;
  }
  pvVar2 = (void *)FUN_100bf3540(*(undefined4 *)((long)param_1 + 0x14),"obj_lib.c",0x53);
  if (pvVar2 == (void *)0x0) {
LAB_100bf8793:
    FUN_100c62ee0(8,0x65,0x41,"obj_lib.c",0x73);
LAB_100bf87b4:
    if (pvVar2 != (void *)0x0) {
      FUN_100bf3910(pvVar2);
    }
    FUN_100bf3910(puVar1);
    return (undefined8 *)0x0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    _memcpy(pvVar2,(void *)param_1[3],(long)*(int *)((long)param_1 + 0x14));
  }
  puVar1[3] = pvVar2;
  *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)((long)param_1 + 0x14);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 2);
  puVar1[1] = 0;
  *puVar1 = 0;
  pvVar4 = (void *)0x0;
  if ((char *)param_1[1] != (char *)0x0) {
    sVar3 = _strlen((char *)param_1[1]);
    pvVar4 = (void *)FUN_100bf3540(sVar3 + 1 & 0xffffffff,"obj_lib.c",0x5f);
    if (pvVar4 == (void *)0x0) goto LAB_100bf8793;
    _memcpy(pvVar4,(void *)param_1[1],(long)(int)(sVar3 + 1));
    puVar1[1] = pvVar4;
  }
  if ((char *)*param_1 != (char *)0x0) {
    sVar3 = _strlen((char *)*param_1);
    pvVar5 = (void *)FUN_100bf3540(sVar3 + 1 & 0xffffffff,"obj_lib.c",0x68);
    if (pvVar5 == (void *)0x0) {
      FUN_100c62ee0(8,0x65,0x41,"obj_lib.c",0x73);
      if (pvVar4 != (void *)0x0) {
        FUN_100bf3910();
      }
      goto LAB_100bf87b4;
    }
    _memcpy(pvVar5,(void *)*param_1,(long)(int)(sVar3 + 1));
    *puVar1 = pvVar5;
  }
  *(uint *)(puVar1 + 4) = *(uint *)(param_1 + 4) | 0xd;
  return puVar1;
}

