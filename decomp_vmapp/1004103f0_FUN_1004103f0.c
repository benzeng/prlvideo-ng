
undefined8 FUN_1004103f0(undefined4 param_1,undefined8 *param_2,uint param_3,char param_4)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 local_38 [3];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  if (param_2 != (undefined8 *)0x0) {
    puVar2 = local_38;
    if (0x11 < param_3) {
      puVar2 = param_2;
    }
    *(undefined2 *)(puVar2 + 2) = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    *(undefined1 *)puVar2 = 0xf0;
    bVar3 = (byte)((uint)param_1 >> 0x10) & 0xf;
    if (param_4 != '\0') {
      bVar3 = bVar3 | 0x20;
    }
    *(byte *)((long)puVar2 + 2) = bVar3;
    *(char *)((long)puVar2 + 7) = (char)param_3 + -8;
    *(char *)((long)puVar2 + 0xc) = (char)((uint)param_1 >> 8);
    *(char *)((long)puVar2 + 0xd) = (char)param_1;
    if (puVar2 != param_2) {
      _memcpy(param_2,puVar2,(ulong)param_3);
    }
  }
  if (lVar1 == local_20) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

