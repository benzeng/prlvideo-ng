
int * FUN_1008b0010(long *param_1,long *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined1 local_40 [4];
  int local_3c;
  int local_38;
  undefined4 uStack_34;
  void *local_30;
  
  local_30 = (void *)*param_2;
  uVar2 = FUN_1008af630(&local_30,&local_38,&local_3c,local_40,param_3);
  uVar5 = 0;
  if (((uVar2 & 0x80) == 0) && (uVar5 = 0x99, local_3c < 0x20)) {
    uVar2 = FUN_1008a5ef0();
    uVar5 = 0xa9;
    if (((long)param_4 & uVar2) != 0) {
      if (local_3c == 3) {
        piVar3 = (int *)FUN_1008a82c0(param_1,param_2,param_3);
        return piVar3;
      }
      if (((param_1 == (long *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) &&
         (piVar3 = (int *)FUN_1008afd00(), piVar3 == (int *)0x0)) {
        return (int *)0x0;
      }
      lVar4 = 0;
      pvVar6 = (void *)0x0;
      if (CONCAT44(uStack_34,local_38) != 0) {
        pvVar6 = (void *)FUN_10081ddd0(local_38 + 1,"a_bytes.c",0x66);
        if (pvVar6 == (void *)0x0) {
          FUN_100887ce0(0xd,0x95,0x41,"a_bytes.c",0x7b);
          if ((param_1 != (long *)0x0) && ((int *)*param_1 == piVar3)) {
            return (int *)0x0;
          }
          FUN_1008afd70(piVar3);
          return (int *)0x0;
        }
        _memcpy(pvVar6,local_30,(long)local_38);
        *(undefined1 *)((long)pvVar6 + CONCAT44(uStack_34,local_38)) = 0;
        lVar4 = CONCAT44(uStack_34,local_38);
        local_30 = (void *)((long)local_30 + lVar4);
      }
      iVar1 = (int)lVar4;
      if (*(long *)(piVar3 + 2) != 0) {
        FUN_10081e1a0();
        iVar1 = local_38;
      }
      *piVar3 = iVar1;
      *(void **)(piVar3 + 2) = pvVar6;
      piVar3[1] = local_3c;
      if (param_1 != (long *)0x0) {
        *param_1 = (long)piVar3;
      }
      *param_2 = (long)local_30;
      return piVar3;
    }
  }
  FUN_100887ce0(0xd,0x95,uVar5,"a_bytes.c",0x7b);
  return (int *)0x0;
}

