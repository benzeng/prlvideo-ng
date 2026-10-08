
int * FUN_100c5fe10(int *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 6);
  piVar2 = (int *)FUN_100bf3540(0x20,"stack.c",0x80);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined8 *)FUN_100bf3540(0x20,"stack.c",0x82);
    *(undefined8 **)(piVar2 + 2) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      *(undefined8 *)(*(long *)(piVar2 + 2) + 8) = 0;
      *(undefined8 *)(*(long *)(piVar2 + 2) + 0x10) = 0;
      *(undefined8 *)(*(long *)(piVar2 + 2) + 0x18) = 0;
      *(undefined8 *)(piVar2 + 6) = uVar1;
      piVar2[5] = 4;
      *piVar2 = 0;
      piVar2[4] = 0;
      pvVar4 = (void *)FUN_100bf36a0(*(undefined8 *)(piVar2 + 2),param_1[5] << 3,"stack.c",0x65);
      if (pvVar4 != (void *)0x0) {
        *(void **)(piVar2 + 2) = pvVar4;
        *piVar2 = *param_1;
        _memcpy(pvVar4,*(void **)(param_1 + 2),(long)*param_1 << 3);
        piVar2[4] = param_1[4];
        piVar2[5] = param_1[5];
        *(undefined8 *)(piVar2 + 6) = *(undefined8 *)(param_1 + 6);
        return piVar2;
      }
      if (*(long *)(piVar2 + 2) != 0) {
        FUN_100bf3910();
      }
    }
    FUN_100bf3910(piVar2);
  }
  return (int *)0x0;
}

