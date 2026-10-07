
undefined8 FUN_10081c910(long param_1,byte *param_2,int *param_3,int param_4)

{
  byte bVar1;
  
  if (param_2 != (byte *)0x0) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x80) + 0x460);
    if (param_4 <= (int)(uint)bVar1) {
      FUN_100887ce0(0x14,0x12a,0x14f,"t1_reneg.c",0x7a);
      return 0;
    }
    *param_2 = bVar1;
    _memcpy(param_2 + 1,(void *)(*(long *)(param_1 + 0x80) + 0x420),
            (ulong)*(byte *)(*(long *)(param_1 + 0x80) + 0x460));
  }
  *param_3 = *(byte *)(*(long *)(param_1 + 0x80) + 0x460) + 1;
  return 1;
}

