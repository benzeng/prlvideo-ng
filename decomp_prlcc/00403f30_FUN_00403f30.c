
int * FUN_00403f30(undefined8 param_1)

{
  int iVar1;
  int *__pipedes;
  void *pvVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  
  __pipedes = operator_new(0x18);
  __pipedes[0] = 0;
  __pipedes[1] = 0;
  __pipedes[2] = 0;
  __pipedes[3] = 0;
  __pipedes[4] = 0;
  __pipedes[5] = 0;
  iVar1 = pipe(__pipedes);
  if (iVar1 != 0) {
    FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Control Center: creating pipe");
    operator_delete(__pipedes);
    return (int *)0x0;
  }
  fcntl(*__pipedes,4,0x800);
  *(undefined8 *)(__pipedes + 2) = param_1;
  *(int **)(__pipedes + 4) = DAT_0061d4e0;
  DAT_0061d4e0 = __pipedes;
  pvVar2 = DAT_0061d4f8;
  if (DAT_0061d4ec <= DAT_0061d4e8) {
    uVar4 = 2;
    uVar5 = 0x10;
    if (DAT_0061d4ec != 0) {
      uVar4 = DAT_0061d4ec * 2;
      uVar5 = (ulong)uVar4 * 8;
    }
    DAT_0061d4ec = uVar4;
    pvVar2 = operator_new__(uVar5);
    memcpy(pvVar2,DAT_0061d4f0,(ulong)DAT_0061d4e8 << 3);
    if (DAT_0061d4f0 != (void *)0x0) {
      operator_delete__(DAT_0061d4f0);
    }
    DAT_0061d4f0 = pvVar2;
    pvVar2 = operator_new__((ulong)DAT_0061d4ec << 3);
    memcpy(pvVar2,DAT_0061d4f8,(ulong)DAT_0061d4e8 << 3);
    if (DAT_0061d4f8 != (void *)0x0) {
      operator_delete__(DAT_0061d4f8);
    }
  }
  DAT_0061d4f8 = pvVar2;
  piVar3 = (int *)((ulong)DAT_0061d4e8 * 8 + (long)DAT_0061d4f0);
  *piVar3 = *__pipedes;
  *(undefined2 *)(piVar3 + 1) = 5;
  *(undefined8 *)((long)DAT_0061d4f8 + (ulong)DAT_0061d4e8 * 8) = param_1;
  DAT_0061d4e8 = DAT_0061d4e8 + 1;
  return __pipedes;
}

