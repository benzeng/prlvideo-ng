
undefined4 FUN_1001c85b7(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ssize_t sVar3;
  int *piVar4;
  ulong local_c8;
  undefined4 local_c0;
  uint local_b8 [35];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  int local_c;
  
  do {
    if ((*(uint *)(param_1 + 0x2c) >> 1 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x40) == 0) {
      uVar2 = (*(code *)_xmlMallocAtomic)(65000);
      *(undefined8 *)(param_1 + 0x40) = uVar2;
      if (*(long *)(param_1 + 0x40) == 0) {
        FUN_1001c7d96("allocating input");
        *(undefined4 *)(param_1 + 100) = 0xffffffff;
        return 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x60) = 65000;
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
    }
    if (*(long *)(param_1 + 0x40) + 0x1000U < *(ulong *)(param_1 + 0x58)) {
      local_2c = (int)*(undefined8 *)(param_1 + 0x58) - (int)*(undefined8 *)(param_1 + 0x40);
      local_28 = (int)*(undefined8 *)(param_1 + 0x50) - (int)*(undefined8 *)(param_1 + 0x58);
      _memmove(*(void **)(param_1 + 0x40),*(void **)(param_1 + 0x58),(long)local_28);
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) - (long)local_2c;
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) - (long)local_2c;
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) - (long)local_2c;
    }
    if ((ulong)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x60)) <
        *(long *)(param_1 + 0x50) + 0x1000U) {
      local_24 = (int)*(undefined8 *)(param_1 + 0x50) - (int)*(undefined8 *)(param_1 + 0x40);
      local_20 = (int)*(undefined8 *)(param_1 + 0x48) - (int)*(undefined8 *)(param_1 + 0x40);
      local_1c = (int)*(undefined8 *)(param_1 + 0x58) - (int)*(undefined8 *)(param_1 + 0x40);
      local_18 = *(undefined8 *)(param_1 + 0x40);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) * 2;
      uVar2 = (*(code *)_xmlRealloc)(local_18,(long)*(int *)(param_1 + 0x60));
      *(undefined8 *)(param_1 + 0x40) = uVar2;
      if (*(long *)(param_1 + 0x40) == 0) {
        FUN_1001c7d96("allocating input buffer");
        (*(code *)_xmlFree)(local_18);
        *(undefined4 *)(param_1 + 100) = 0xffffffff;
        return 0xffffffff;
      }
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x40) + (long)local_24;
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40) + (long)local_20;
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x40) + (long)local_1c;
    }
    sVar3 = _recv(*(int *)(param_1 + 0x28),*(void **)(param_1 + 0x50),0x1000,0);
    *(int *)(param_1 + 100) = (int)sVar3;
    if (0 < *(int *)(param_1 + 100)) {
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + (long)*(int *)(param_1 + 100);
      return *(undefined4 *)(param_1 + 100);
    }
    if (*(int *)(param_1 + 100) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 100) == -1) {
      iVar1 = FUN_1001c7dc4();
      if (iVar1 == 0x36) {
        return 0;
      }
      if (0x36 < iVar1) {
        if (iVar1 == 0x3a) {
          return 0;
        }
LAB_1001c8a8f:
        ___xmlIOErr(10,0,"recv failed\n");
        return 0xffffffff;
      }
      if (1 < iVar1 - 0x23U) goto LAB_1001c8a8f;
    }
    local_c8 = (ulong)DAT_101111308;
    local_c0 = 0;
    _memset(local_b8,0,0x80);
    local_c = *(int *)(param_1 + 0x28);
    local_b8[(ulong)(long)local_c >> 5] =
         1 << ((byte)local_c & 0x1f) | local_b8[(ulong)(long)local_c >> 5];
    iVar1 = _select_1050(*(int *)(param_1 + 0x28) + 1,local_b8,0,0,&local_c8);
    if ((iVar1 < 1) && (piVar4 = ___error(), *piVar4 != 4)) {
      return 0;
    }
  } while( true );
}

