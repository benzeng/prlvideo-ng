
long FUN_100b903d0(undefined8 *param_1,void *param_2)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined4 local_2c;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_100b90660(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(long *)(puVar3 + 4) != 0) {
    lVar1 = *(long *)(puVar3 + 4);
    lVar5 = 0;
    do {
      while (lVar4 = lVar1, iVar2 = _memcmp((void *)(lVar4 + 0x18),param_2,0xb), iVar2 < 0) {
        lVar1 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar4 + 0x10) == 0) {
          lVar4 = lVar5;
          if (lVar5 == 0) goto LAB_100b9045b;
          goto LAB_100b90446;
        }
      }
      lVar1 = *(long *)(lVar4 + 8);
      lVar5 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_100b90446:
    iVar2 = _memcmp(param_2,(void *)(lVar4 + 0x18),0xb);
    if (-1 < iVar2) goto LAB_100b90474;
  }
LAB_100b9045b:
  local_2c = 0;
  lVar4 = FUN_100b90560(param_1,param_2,&local_2c);
LAB_100b90474:
  return lVar4 + 0x24;
}

