
int FUN_0040ea60(undefined8 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  char *__ptr;
  uint uVar3;
  uint uVar4;
  ulong uVar6;
  undefined4 local_24;
  int iVar5;
  
  uVar1 = param_2 * 2 + 0x10;
  __ptr = malloc((ulong)uVar1);
  __ptr[0] = '\x03';
  __ptr[1] = '\0';
  __ptr[2] = '\0';
  __ptr[3] = '\0';
  *(uint *)(__ptr + 0xc) = param_2;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      uVar3 = uVar4 + 1;
      __ptr[(ulong)uVar4 + 0x10] = (char)uVar4 + (char)((ulong)uVar4 / 0xff);
      uVar4 = uVar3;
    } while (uVar3 != param_2);
  }
  local_24 = 0;
  iVar2 = FUN_0040e870(param_1,__ptr,param_2 + 0x10,uVar1,&local_24);
  if ((iVar2 == 0) && (uVar1 != 0)) {
    uVar6 = 0;
    if (*__ptr == '\x11') {
      do {
        iVar5 = (int)uVar6;
        uVar4 = iVar5 + 1;
        uVar6 = (ulong)uVar4;
        if (uVar1 == uVar4) goto LAB_0040eb15;
        uVar4 = iVar5 + 0x12;
      } while (__ptr[uVar6] == (char)((char)uVar4 + (char)((ulong)uVar4 / 0xff)));
    }
    iVar2 = -5;
  }
LAB_0040eb15:
  free(__ptr);
  return iVar2;
}

