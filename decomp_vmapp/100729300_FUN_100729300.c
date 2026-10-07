
uint FUN_100729300(undefined8 param_1)

{
  long lVar1;
  undefined8 local_b0;
  undefined1 local_a8 [96];
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_b0 = param_1;
  local_38 = lVar1;
  FUN_100823660(local_a8);
  FUN_100823400(local_a8,&local_b0,4);
  FUN_100823570(&local_48,local_a8);
  if (lVar1 == local_38) {
    return ((uStack_3c >> 0x18 ^
            uStack_44 >> 0x18 ^
            uStack_3c >> 8 ^
            uStack_44 >> 8 ^ (local_40 ^ local_48) >> 8 & 0xff ^ local_48 >> 0x18 ^ local_40 >> 0x18
            ) & 0x1f) << 8 |
           (uStack_3c >> 0x10 ^
           uStack_44 >> 0x10 ^
           uStack_3c ^
           uStack_44 ^
           local_48 >> 0x10 ^ local_40 ^ local_48 ^
           (uint)(CONCAT44(uStack_3c,local_40) >> 0x10) & 0xffff) & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

