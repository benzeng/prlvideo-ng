
ulong FUN_10053d230(long param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 local_228;
  undefined8 uStack_220;
  uint local_218 [128];
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = 1;
  if (((long)iVar1 != 0xffffffffffffffff) && (uVar2 = 0xffffffea, iVar1 < 0x1000)) {
    ___bzero(local_218,0x200);
    local_228 = 0;
    uStack_220 = 0;
    local_218[(ulong)(long)iVar1 >> 5] =
         local_218[(ulong)(long)iVar1 >> 5] | 1 << ((byte)iVar1 & 0x1f);
    uVar2 = _select_DARWIN_EXTSN(iVar1 + 1,local_218,0,0,&local_228);
    if ((int)uVar2 == -1) {
      piVar3 = ___error();
      uVar2 = (ulong)(uint)-*piVar3;
    }
  }
  return uVar2;
}

