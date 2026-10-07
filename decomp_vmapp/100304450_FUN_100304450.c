
undefined8 FUN_100304450(long param_1,uint param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_1c;
  
  uVar3 = (ulong)param_2;
  if (*(uint *)(param_1 + 0xc60) < 0x20) {
    uVar2 = 0x20;
    uVar3 = (ulong)param_2;
    do {
      uVar2 = uVar2 >> 1;
      uVar3 = (ulong)((uint)uVar3 ^ (uint)uVar3 >> (sbyte)uVar2);
    } while (*(uint *)(param_1 + 0xc60) < (uint)uVar2);
  }
  puVar1 = *(uint **)(param_1 + 0x460 + (uVar3 & 0xff) * 8);
  local_1c = 0;
  do {
    if (puVar1 == (uint *)0x0) {
LAB_1003044b0:
      if ((param_2 != 0) && (local_1c == 0)) {
        (**(code **)(param_1 + 0x18))(1,&local_1c);
        FUN_100305f50(param_1,param_2,local_1c);
      }
      *(uint *)(param_1 + 0x1480) = param_2;
      (**(code **)(param_1 + 8))(local_1c);
      return 1;
    }
    if (*puVar1 == param_2) {
      local_1c = puVar1[1];
      goto LAB_1003044b0;
    }
    puVar1 = *(uint **)(puVar1 + 2);
  } while( true );
}

