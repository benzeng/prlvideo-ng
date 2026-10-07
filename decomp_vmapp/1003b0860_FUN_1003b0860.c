
undefined8 FUN_1003b0860(long param_1,long *param_2,uint *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  uint local_68;
  uint uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pvVar4 = operator_new(0x58);
  *(void **)pvVar4 = pvVar4;
  *(void **)((long)pvVar4 + 8) = pvVar4;
  *(void **)((long)pvVar4 + 0x10) = pvVar4;
  *(void **)((long)pvVar4 + 0x18) = pvVar4;
  *(long *)((long)pvVar4 + 0x20) = (long)pvVar4 + 0x18;
  *(long *)((long)pvVar4 + 0x28) = (long)pvVar4 + 0x18;
  *(undefined8 *)((long)pvVar4 + 0x40) = 0;
  *(undefined8 *)((long)pvVar4 + 0x38) = 0;
  *(undefined8 *)((long)pvVar4 + 0x30) = 0;
  *(undefined4 *)((long)pvVar4 + 0x48) = 4;
  *(undefined2 *)((long)pvVar4 + 0x4c) = 0;
  *(undefined1 *)((long)pvVar4 + 0x4e) = 0;
  *(undefined2 *)((long)pvVar4 + 0x50) = 0;
  *(undefined2 *)((long)pvVar4 + 0x52) = 0;
  *(undefined1 *)((long)pvVar4 + 0x56) = 0;
  *(undefined2 *)((long)pvVar4 + 0x54) = 0;
  puVar5 = operator_new__(0x108);
  *puVar5 = 4;
  puVar5[2] = 0;
  puVar5[1] = 0;
  puVar5[3] = puVar5 + 1;
  puVar5[4] = puVar5 + 3;
  puVar5[5] = puVar5 + 3;
  puVar5[10] = 0;
  puVar5[9] = 0;
  *(undefined2 *)(puVar5 + 8) = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[0xb] = puVar5 + 9;
  puVar5[0xc] = puVar5 + 0xb;
  puVar5[0xd] = puVar5 + 0xb;
  puVar5[0x12] = 0;
  puVar5[0x11] = 0;
  *(undefined2 *)(puVar5 + 0x10) = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x13] = puVar5 + 0x11;
  puVar5[0x14] = puVar5 + 0x13;
  puVar5[0x15] = puVar5 + 0x13;
  puVar5[0x1a] = 0;
  puVar5[0x19] = 0;
  *(undefined2 *)(puVar5 + 0x18) = 0;
  puVar5[0x17] = 0;
  puVar5[0x16] = 0;
  puVar5[0x1b] = puVar5 + 0x19;
  puVar5[0x1c] = puVar5 + 0x1b;
  puVar5[0x1d] = puVar5 + 0x1b;
  *(undefined1 *)(puVar5 + 0x20) = 0;
  *(byte *)((long)puVar5 + 0x101) = *(byte *)((long)puVar5 + 0x101) & 0xfe;
  puVar5[0x1f] = 0;
  puVar5[0x1e] = 0;
  *(undefined8 **)((long)pvVar4 + 0x40) = puVar5 + 1;
  puVar5[1] = pvVar4;
  puVar5[9] = pvVar4;
  puVar5[0x11] = pvVar4;
  puVar5[0x19] = pvVar4;
  lVar1 = *param_2;
  *(undefined4 *)((long)pvVar4 + 0x34) = *(undefined4 *)(lVar1 + 0x34);
  *(long *)((long)pvVar4 + 8) = lVar1;
  *(undefined8 *)((long)pvVar4 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
  *(void **)(*(long *)(lVar1 + 0x10) + 8) = pvVar4;
  *(void **)(lVar1 + 0x10) = pvVar4;
  *(undefined2 *)((long)pvVar4 + 0x4c) = 0xdb;
  *(undefined1 *)(puVar5 + 8) = 0;
  *(int *)(puVar5 + 6) = param_4 + *(int *)(*(long *)(param_1 + 8) + 0x174);
  *(byte *)((long)puVar5 + 0x3d) = *(byte *)((long)puVar5 + 0x3d) | 4;
  lVar1 = *(long *)((long)pvVar4 + 0x40);
  FUN_1003a7bd0(lVar1 + 0x40,param_3);
  *(undefined4 *)(lVar1 + 0x68) = 0;
  *(byte *)(lVar1 + 0x75) = *(byte *)(lVar1 + 0x75) & 0xe5 | 2;
  *(undefined1 *)(puVar5 + 7) = *(undefined1 *)(lVar1 + 0x70);
  *(undefined1 *)((long)puVar5 + 0x39) = 0;
  *(undefined1 *)(lVar1 + 0x71) = 0;
  *(undefined1 *)((long)puVar5 + 0x3a) = 1;
  *(undefined1 *)(lVar1 + 0x72) = 1;
  *(undefined1 *)((long)puVar5 + 0x3b) = 2;
  *(undefined1 *)(lVar1 + 0x73) = 2;
  *(undefined1 *)((long)puVar5 + 0x3c) = 3;
  *(undefined1 *)(lVar1 + 0x74) = 3;
  FUN_1003aa7f0(lVar1 + 0x40);
  lVar1 = *(long *)((long)pvVar4 + 0x40);
  *(undefined1 *)(lVar1 + 0xb8) = 0xd;
  *(byte *)(lVar1 + 0xb5) = *(byte *)(lVar1 + 0xb5) | 1;
  lVar2 = *(long *)((long)pvVar4 + 0x40);
  *(undefined1 *)(lVar2 + 0xf8) = 0xd;
  *(byte *)(lVar2 + 0xf5) = *(byte *)(lVar2 + 0xf5) | 1;
  FUN_1003a7bd0(param_2,param_3);
  *(undefined1 *)(param_2 + 7) = *(undefined1 *)(puVar5 + 8);
  *(undefined4 *)((long)param_2 + 0x2c) = *(undefined4 *)((long)puVar5 + 0x34);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(puVar5 + 6);
  uVar3 = *param_3 >> 0xc & 0xff;
  lVar7 = 0;
  if ((uVar3 == 8) || (uVar3 == 3)) {
    lVar7 = 1;
  }
  else if (uVar3 == 1) {
    lVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    lVar7 = 0;
    if (lVar6 != 0) {
      *(undefined2 *)((long)pvVar4 + 0x50) = *(undefined2 *)(*(long *)(param_1 + 8) + 0x17c);
      if (param_3[5] != 0) {
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        _local_68 = CONCAT44(param_3[6],param_3[5]);
        _uStack_60 = CONCAT44(param_3[4],1);
        FUN_1003a7bd0(lVar1 + 0x80,&local_68);
      }
      if (param_3[9] != 0) {
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        _local_68 = CONCAT44(param_3[10],param_3[9]);
        _uStack_60 = CONCAT44(param_3[8],1);
        FUN_1003a7bd0(lVar2 + 0xc0,&local_68);
      }
      *(short *)((long)pvVar4 + 0x52) =
           *(short *)((long)pvVar4 + 0x50) * (short)param_3[3] + (short)param_3[7];
      return 0;
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  _local_68 = CONCAT44(param_3[lVar7 * 4 + 6],param_3[lVar7 * 4 + 5]);
  _uStack_60 = CONCAT44(param_3[lVar7 * 4 + 4],1);
  FUN_1003a7bd0(lVar2 + 0xc0,&local_68);
  *(short *)((long)pvVar4 + 0x52) = (short)param_3[lVar7 * 4 + 3];
  return 0;
}

