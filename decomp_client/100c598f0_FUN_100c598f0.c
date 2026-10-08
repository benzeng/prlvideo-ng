
int FUN_100c598f0(long param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == (void *)0x0) {
    uVar4 = 0x73;
    uVar5 = 0xb3;
  }
  else {
    if ((*(byte *)(param_1 + 0x21) & 2) == 0) {
      puVar1 = *(undefined8 **)(param_1 + 0x30);
      FUN_100c58810(param_1,0xf);
      uVar4 = *puVar1;
      iVar2 = (int)uVar4 + param_3;
      iVar3 = FUN_100c58060(puVar1,(long)iVar2);
      if (iVar3 != iVar2) {
        return -1;
      }
      _memcpy((void *)((long)(int)uVar4 + puVar1[1]),param_2,(long)param_3);
      return param_3;
    }
    uVar4 = 0x7e;
    uVar5 = 0xb8;
  }
  FUN_100c62ee0(0x20,0x75,uVar4,"bss_mem.c",uVar5);
  return -1;
}

