
/* WARNING: Type propagation algorithm not settling */

int FUN_1001bc5d0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  uint local_30 [6];
  
  if ((DAT_1023120b8 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_1023120b8), iVar1 != 0)) {
    DAT_1023120b0 = (undefined8 *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_1001bca20,&DAT_1023120b0,0x100000000);
    ___cxa_guard_release(&DAT_1023120b8);
  }
  if (*(int *)((long)DAT_1023120b0 + 0x14) == 0) {
    local_30[5] = 6;
    puVar3 = (undefined4 *)FUN_1001bca60(&DAT_1023120b0,local_30 + 5);
    *puVar3 = 100;
    local_30[4] = 8;
    puVar3 = (undefined4 *)FUN_1001bca60(&DAT_1023120b0,local_30 + 4);
    *puVar3 = 200;
    local_30[3] = 5;
    puVar3 = (undefined4 *)FUN_1001bca60(&DAT_1023120b0,local_30 + 3);
    *puVar3 = 300;
    local_30[2] = 0xf;
    puVar3 = (undefined4 *)FUN_1001bca60(&DAT_1023120b0,local_30 + 2);
    *puVar3 = 400;
    local_30[1] = 3;
    puVar3 = (undefined4 *)FUN_1001bca60(&DAT_1023120b0,local_30 + 1);
    *puVar3 = 500;
  }
  uVar2 = BootDevice::getType();
  local_30[0] = uVar2;
  iVar1 = BootDevice::getIndex();
  if (iVar1 == 0) {
    if ((int)uVar2 < 0xf) {
      switch(uVar2) {
      case 3:
        return 3;
      case 5:
        return 1;
      case 6:
        return 0;
      case 8:
        return 4;
      }
    }
    else if (uVar2 == 0xf) {
      return 2;
    }
  }
  if (*(uint *)(DAT_1023120b0 + 4) != 0) {
    uVar6 = *(uint *)((long)DAT_1023120b0 + 0x24) ^ uVar2;
    for (puVar4 = *(undefined8 **)
                   (DAT_1023120b0[1] + ((ulong)uVar6 % (ulong)*(uint *)(DAT_1023120b0 + 4)) * 8);
        puVar4 != DAT_1023120b0; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar6) && (uVar2 == *(uint *)((long)puVar4 + 0xc))) {
        if (puVar4 != DAT_1023120b0) {
          piVar5 = (int *)FUN_1001bca60(&DAT_1023120b0,local_30);
          return iVar1 + *piVar5;
        }
        break;
      }
    }
  }
  return iVar1 + 1000 + uVar2 * 100;
}

