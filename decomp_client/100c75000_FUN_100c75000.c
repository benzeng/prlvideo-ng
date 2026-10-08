
int * FUN_100c75000(long *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  
  if (param_3 < 1) {
    FUN_100c62ee0(0xd,0xbd,0x98,"a_bitstr.c",0xb3);
  }
  else {
    if (((param_1 == (long *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) &&
       (piVar3 = (int *)FUN_100c8b370(3), piVar3 == (int *)0x0)) {
      return (int *)0x0;
    }
    pbVar2 = (byte *)*param_2;
    bVar1 = *pbVar2;
    uVar6 = 0xdc;
    if (bVar1 < 8) {
      pbVar7 = pbVar2 + 1;
      *(ulong *)(piVar3 + 4) = (ulong)(bVar1 | 8) | *(ulong *)(piVar3 + 4) & 0xfffffffffffffff0;
      pvVar4 = (void *)0x0;
      iVar5 = (int)(param_3 + -1);
      if (param_3 < 2) {
LAB_100c750f3:
        *piVar3 = iVar5;
        if (*(long *)(piVar3 + 2) != 0) {
          FUN_100bf3910();
        }
        *(void **)(piVar3 + 2) = pvVar4;
        piVar3[1] = 3;
        if (param_1 != (long *)0x0) {
          *param_1 = (long)piVar3;
        }
        *param_2 = pbVar7;
        return piVar3;
      }
      pvVar4 = (void *)FUN_100bf3540(param_3 + -1,"a_bitstr.c",0x9e);
      uVar6 = 0x41;
      if (pvVar4 != (void *)0x0) {
        _memcpy(pvVar4,pbVar7,(long)iVar5);
        *(byte *)(param_3 + -2 + (long)pvVar4) =
             *(byte *)(param_3 + -2 + (long)pvVar4) & (byte)(0xff << (bVar1 & 0x1f));
        pbVar7 = pbVar2 + param_3;
        goto LAB_100c750f3;
      }
    }
    FUN_100c62ee0(0xd,0xbd,uVar6,"a_bitstr.c",0xb3);
    if ((param_1 != (long *)0x0) && ((int *)*param_1 == piVar3)) {
      return (int *)0x0;
    }
    FUN_100c8b2f0(piVar3);
  }
  return (int *)0x0;
}

