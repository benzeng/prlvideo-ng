
undefined8 FUN_1003b0560(long param_1,long *param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pvVar3 = operator_new(0x58);
  *(void **)pvVar3 = pvVar3;
  *(void **)((long)pvVar3 + 8) = pvVar3;
  *(void **)((long)pvVar3 + 0x10) = pvVar3;
  *(void **)((long)pvVar3 + 0x18) = pvVar3;
  *(long *)((long)pvVar3 + 0x20) = (long)pvVar3 + 0x18;
  *(long *)((long)pvVar3 + 0x28) = (long)pvVar3 + 0x18;
  *(undefined8 *)((long)pvVar3 + 0x40) = 0;
  *(undefined8 *)((long)pvVar3 + 0x38) = 0;
  *(undefined8 *)((long)pvVar3 + 0x30) = 0;
  *(undefined4 *)((long)pvVar3 + 0x48) = 3;
  *(undefined2 *)((long)pvVar3 + 0x4c) = 0;
  *(undefined1 *)((long)pvVar3 + 0x4e) = 0;
  *(undefined2 *)((long)pvVar3 + 0x50) = 0;
  *(undefined2 *)((long)pvVar3 + 0x52) = 0;
  *(undefined1 *)((long)pvVar3 + 0x56) = 0;
  *(undefined2 *)((long)pvVar3 + 0x54) = 0;
  puVar4 = operator_new__(200);
  *puVar4 = 3;
  puVar1 = puVar4 + 1;
  puVar4[2] = 0;
  puVar4[1] = 0;
  puVar4[3] = puVar1;
  puVar4[4] = puVar4 + 3;
  puVar4[5] = puVar4 + 3;
  puVar4[10] = 0;
  puVar4[9] = 0;
  *(undefined2 *)(puVar4 + 8) = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[0xb] = puVar4 + 9;
  puVar4[0xc] = puVar4 + 0xb;
  puVar4[0xd] = puVar4 + 0xb;
  puVar4[0x12] = 0;
  puVar4[0x11] = 0;
  *(undefined2 *)(puVar4 + 0x10) = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x13] = puVar4 + 0x11;
  puVar4[0x14] = puVar4 + 0x13;
  puVar4[0x15] = puVar4 + 0x13;
  *(undefined2 *)(puVar4 + 0x18) = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  *(undefined8 **)((long)pvVar3 + 0x40) = puVar1;
  puVar4[1] = pvVar3;
  puVar4[9] = pvVar3;
  puVar4[0x11] = pvVar3;
  lVar2 = *param_2;
  *(undefined4 *)((long)pvVar3 + 0x34) = *(undefined4 *)(lVar2 + 0x34);
  *(long *)((long)pvVar3 + 0x10) = lVar2;
  *(undefined8 *)((long)pvVar3 + 8) = *(undefined8 *)(lVar2 + 8);
  *(void **)(*(long *)(lVar2 + 8) + 0x10) = pvVar3;
  *(void **)(lVar2 + 8) = pvVar3;
  *(undefined2 *)((long)pvVar3 + 0x4c) = 0xdc;
  FUN_1003a7bd0(puVar1,param_3);
  *(undefined4 *)(puVar4 + 6) = 0;
  *(byte *)((long)puVar4 + 0x3d) = *(byte *)((long)puVar4 + 0x3d) & 0xe1 | 6;
  lVar2 = *(long *)((long)pvVar3 + 0x40);
  *(undefined1 *)(lVar2 + 0xb8) = 0;
  *(int *)(lVar2 + 0xa8) = param_4 + *(int *)(*(long *)(param_1 + 8) + 0x174);
  *(undefined1 *)((long)puVar4 + 0x39) = 0;
  *(undefined1 *)(lVar2 + 0xb1) = 0;
  *(undefined1 *)((long)puVar4 + 0x3a) = 1;
  *(undefined1 *)(lVar2 + 0xb2) = 1;
  *(undefined1 *)((long)puVar4 + 0x3b) = 2;
  *(undefined1 *)(lVar2 + 0xb3) = 2;
  *(undefined1 *)((long)puVar4 + 0x3c) = 3;
  *(undefined1 *)(lVar2 + 0xb4) = 3;
  FUN_1003aa7f0(lVar2 + 0x80);
  lVar5 = 0;
  if (*(char *)(puVar4 + 8) != '\x02') {
    if (*(char *)(puVar4 + 8) != '\x03') {
      return 3;
    }
    lVar5 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  lVar5 = lVar5 * 0x10;
  _local_68 = CONCAT44(*(undefined4 *)(param_3 + 0x18 + lVar5),
                       *(undefined4 *)(param_3 + 0x14 + lVar5));
  _uStack_60 = CONCAT44(*(undefined4 *)(param_3 + 0x10 + lVar5),1);
  FUN_1003a7bd0(*(long *)((long)pvVar3 + 0x40) + 0x40,&local_68);
  *(undefined2 *)((long)pvVar3 + 0x52) = *(undefined2 *)(param_3 + 0xc + lVar5);
  FUN_1003a7bd0(param_2,param_3);
  *(undefined1 *)(param_2 + 7) = *(undefined1 *)(lVar2 + 0xb8);
  *(undefined4 *)((long)param_2 + 0x2c) = *(undefined4 *)(lVar2 + 0xac);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(lVar2 + 0xa8);
  return 0;
}

