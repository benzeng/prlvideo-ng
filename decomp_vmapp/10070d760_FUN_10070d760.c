
undefined8 FUN_10070d760(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  size_t local_28;
  uint local_1c;
  
  pvVar6 = _malloc(0x1a050);
  *(void **)(param_1 + 0x10) = pvVar6;
  uVar7 = 0;
  if (pvVar6 != (void *)0x0) {
    *(undefined4 *)((long)pvVar6 + 0x40) = 0x400;
    local_28 = 4;
    iVar5 = _sysctlbyname("kern.aioprocmax",&local_1c,&local_28,(void *)0x0,0);
    if (iVar5 == 0) {
      if (local_1c < *(uint *)(*(long *)(param_1 + 0x10) + 0x40)) {
        *(uint *)(*(long *)(param_1 + 0x10) + 0x40) = local_1c;
      }
      FUN_1008e3970("","AbstractFile",0);
    }
    iVar5 = _sysctlbyname("kern.aiomax",&local_1c,&local_28,(void *)0x0,0);
    if (iVar5 == 0) {
      if (local_1c < *(uint *)(*(long *)(param_1 + 0x10) + 0x40)) {
        *(uint *)(*(long *)(param_1 + 0x10) + 0x40) = local_1c;
      }
      FUN_1008e3970("","AbstractFile",0,"kern.aiomax=%d",local_1c);
    }
    lVar2 = *(long *)(param_1 + 0x10);
    *(uint *)(lVar2 + 0x40) = *(uint *)(lVar2 + 0x40) >> 1;
    *(undefined4 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    puVar3[1] = 0;
    *puVar3 = 0;
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    uVar1 = *(uint *)(lVar2 + 0x40);
    if ((ulong)uVar1 != 0) {
      uVar8 = 0;
      plVar4 = (long *)(lVar2 + 0x48);
      plVar10 = (long *)0;
      do {
        plVar9 = plVar4;
        *plVar9 = (long)plVar10;
        *(long **)(lVar2 + 0x30) = plVar9;
        uVar8 = uVar8 + 1;
        plVar4 = plVar9 + 0xd;
        plVar10 = plVar9;
      } while (uVar8 < uVar1);
    }
    *(undefined8 *)(lVar2 + 0x1a048) = param_2;
    uVar7 = 1;
  }
  return uVar7;
}

