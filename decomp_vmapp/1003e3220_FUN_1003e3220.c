
undefined8
FUN_1003e3220(long param_1,undefined4 param_2,undefined8 *param_3,uint param_4,int param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0xac);
  if (0x11 < param_4) {
    puVar3 = param_3;
  }
  bVar2 = (byte)((uint)param_2 >> 0x10) & 0xf;
  if (param_5 != 0) {
    bVar2 = bVar2 | 0x20;
  }
  puVar1 = (undefined8 *)(param_1 + 0xac);
  if (param_3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  *(undefined2 *)(puVar1 + 2) = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined1 *)puVar1 = 0xf0;
  *(byte *)((long)puVar1 + 2) = bVar2;
  *(char *)((long)puVar1 + 7) = (char)param_4 + -8;
  *(char *)((long)puVar1 + 0xc) = (char)((uint)param_2 >> 8);
  *(char *)((long)puVar1 + 0xd) = (char)param_2;
  if ((puVar1 != param_3) && (param_3 != (undefined8 *)0x0)) {
    _memcpy(param_3,puVar1,(ulong)param_4);
  }
  return 0xffffffff;
}

