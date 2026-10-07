
void FUN_100392730(long param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_3c;
  ushort local_38;
  undefined1 local_36;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar5 = (undefined4)param_3;
  local_30 = uVar5;
  local_2c = param_2;
  if (((uint)(param_3 >> 8) & 0x18 | (uint)(param_3 >> 0x1c) & 7) == 1) {
    local_38 = CONCAT11((char)((uint)param_2 >> 0x10),(char)param_2) & 0xf0f;
    local_36 = 0xf;
    puVar2 = *(ushort **)(param_1 + 0x170);
    if (puVar2 == *(ushort **)(param_1 + 0x178)) {
      FUN_100356e50(param_1 + 0x168,&local_38);
    }
    else {
      *(undefined1 *)(puVar2 + 1) = 0xf;
      *puVar2 = local_38;
      *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x170) + 3;
    }
  }
  lVar1 = param_1 + 0x108;
  local_3c = 0x1f;
  puVar3 = *(undefined4 **)(param_1 + 0x110);
  puVar4 = *(undefined4 **)(param_1 + 0x118);
  if (puVar3 == puVar4) {
    FUN_10027f110(lVar1,&local_3c);
    puVar3 = *(undefined4 **)(param_1 + 0x110);
    puVar4 = *(undefined4 **)(param_1 + 0x118);
  }
  else {
    *puVar3 = 0x1f;
    puVar3 = puVar3 + 1;
    *(undefined4 **)(param_1 + 0x110) = puVar3;
  }
  if (puVar3 == puVar4) {
    FUN_10027f110(lVar1,&local_2c);
    puVar3 = *(undefined4 **)(param_1 + 0x110);
    puVar4 = *(undefined4 **)(param_1 + 0x118);
  }
  else {
    *puVar3 = param_2;
    puVar3 = puVar3 + 1;
    *(undefined4 **)(param_1 + 0x110) = puVar3;
  }
  if (puVar3 == puVar4) {
    FUN_10027f110(lVar1,&local_30);
  }
  else {
    *puVar3 = uVar5;
    *(undefined4 **)(param_1 + 0x110) = puVar3 + 1;
  }
  FUN_1003a0030(param_1,param_2,param_3 & 0xffffffff);
  return;
}

