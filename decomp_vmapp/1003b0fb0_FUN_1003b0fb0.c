
undefined8 FUN_1003b0fb0(long param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint *local_28;
  
  lVar1 = *(long *)(param_1 + 8);
  local_30 = 3;
  puVar2 = *(undefined8 **)(lVar1 + 0xc0);
  if (puVar2 == *(undefined8 **)(lVar1 + 200)) {
    local_28 = param_2;
    FUN_1003c5980(lVar1 + 0xb8,&local_30);
  }
  else {
    puVar2[1] = param_2;
    *puVar2 = CONCAT44(uStack_2c,3);
    *(long *)(lVar1 + 0xc0) = *(long *)(lVar1 + 0xc0) + 0x10;
  }
  uVar3 = 0;
  if (((*param_2 & 0xfffff800) == 0x1800) && (uVar3 = 1, param_2 < param_3)) {
    lVar1 = *(long *)(param_1 + 8);
    *(uint *)(lVar1 + 0x150) = param_2[1] >> 2;
    if (param_2 + 1 < param_3) {
      *(uint **)(lVar1 + 0x148) = param_2 + 2;
      uVar3 = 0;
    }
  }
  return uVar3;
}

