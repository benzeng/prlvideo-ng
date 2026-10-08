
ulong FUN_100b2e190(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long local_28;
  undefined1 local_20 [8];
  
  uVar4 = (ulong)*(uint *)((ulong)*(uint *)(param_2 + 0x20) + *(long *)(param_2 + 8) +
                          (param_3 & 0xffffffff) * 4);
  uVar3 = 0;
  if (uVar4 != 0) {
    cVar1 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x198))
                      ((long)param_1 + *(long *)(*param_1 + -0x18),uVar4 << 9,
                       *(int *)((long)param_1 + 0x1810c) << 9,"GetBlockOffset");
    uVar3 = 0;
    if (cVar1 != '\0') {
      iVar2 = FUN_100b2dc40(param_1,local_20,&local_28);
      uVar3 = 0;
      if ((-1 < iVar2) &&
         (uVar3 = uVar4, (ulong)(local_28 + *(long *)((long)param_1 + 0x18104)) < uVar4)) {
        FUN_100df99c0("","dimg",0,"Error: offset %llu lay out of configured disk size %llu",uVar4);
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x1a0))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
    }
  }
  return uVar3;
}

