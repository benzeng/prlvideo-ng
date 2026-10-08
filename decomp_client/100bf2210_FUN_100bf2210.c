
undefined8 FUN_100bf2210(long param_1,undefined1 *param_2,int *param_3,int param_4)

{
  long lVar1;
  int iVar2;
  
  if (param_2 != (undefined1 *)0x0) {
    iVar2 = (uint)*(byte *)(*(long *)(param_1 + 0x80) + 0x4a1) +
            (uint)*(byte *)(*(long *)(param_1 + 0x80) + 0x460);
    if (param_4 <= iVar2) {
      FUN_100c62ee0(0x14,299,0x14f,"t1_reneg.c",0xca);
      return 0;
    }
    *param_2 = (char)iVar2;
    _memcpy(param_2 + 1,(void *)(*(long *)(param_1 + 0x80) + 0x420),
            (ulong)*(byte *)(*(long *)(param_1 + 0x80) + 0x460));
    lVar1 = *(long *)(param_1 + 0x80);
    _memcpy(param_2 + (ulong)*(byte *)(lVar1 + 0x460) + 1,(void *)(lVar1 + 0x461),
            (ulong)*(byte *)(lVar1 + 0x4a1));
  }
  *param_3 = *(byte *)(*(long *)(param_1 + 0x80) + 0x460) + 1 +
             (uint)*(byte *)(*(long *)(param_1 + 0x80) + 0x4a1);
  return 1;
}

