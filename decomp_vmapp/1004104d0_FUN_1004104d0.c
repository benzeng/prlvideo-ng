
undefined8 FUN_1004104d0(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *in_R8;
  uint in_R9D;
  undefined8 local_38 [4];
  long local_18;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  bVar1 = *(byte *)(param_1 + 1);
  uVar3 = 0xffffffff;
  local_18 = lVar2;
  if ((((bVar1 & 0x74) != 4) && ((bVar1 & 4) == 0)) && (uVar3 = 0, (bVar1 & 0x70) == 0)) {
    if (in_R8 != (undefined8 *)0x0) {
      puVar4 = local_38;
      if (0x11 < in_R9D) {
        puVar4 = in_R8;
      }
      *(undefined2 *)(puVar4 + 2) = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      *(undefined1 *)puVar4 = 0xf0;
      *(undefined1 *)((long)puVar4 + 2) = 5;
      *(char *)((long)puVar4 + 7) = (char)in_R9D + -8;
      *(undefined1 *)((long)puVar4 + 0xc) = 0x26;
      *(undefined1 *)((long)puVar4 + 0xd) = 0;
      if (puVar4 != in_R8) {
        _memcpy(in_R8,puVar4,(ulong)in_R9D);
      }
    }
    uVar3 = 0xffffffff;
  }
  if (lVar2 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

