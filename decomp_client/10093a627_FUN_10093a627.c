
long FUN_10093a627(uint *param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long local_38;
  
  local_38 = param_2;
  do {
    if (local_38 == 0) {
      return 0;
    }
    puVar2 = *(uint **)(local_38 + 0x18);
    if ((puVar2 != (uint *)0x0) && (uVar1 = *puVar2, 5 < uVar1)) {
      if (uVar1 < 9) {
        lVar3 = FUN_10093a627(param_1,*(undefined8 *)(puVar2 + 6));
joined_r0x00010093a733:
        if (lVar3 != 0) {
          return lVar3;
        }
      }
      else if (uVar1 == 0x11) {
        if (puVar2 == param_1) {
          return local_38;
        }
        if (((puVar2[0xe] & 1) == 0) && (*(long *)(puVar2 + 6) != 0)) {
          puVar2[0xe] = puVar2[0xe] | 1;
          lVar3 = FUN_10093a627(param_1,*(undefined8 *)(*(long *)(puVar2 + 6) + 0x18));
          puVar2[0xe] = puVar2[0xe] ^ 1;
          goto joined_r0x00010093a733;
        }
      }
    }
    local_38 = *(long *)(local_38 + 0x10);
  } while( true );
}

