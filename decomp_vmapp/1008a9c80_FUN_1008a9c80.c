
undefined4 * FUN_1008a9c80(undefined4 param_1,uint param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_10081ddd0(0xd0,"ameth_lib.c",0x11d);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  ___bzero(puVar1,0xd0);
  *puVar1 = param_1;
  puVar1[1] = param_1;
  *(long *)(puVar1 + 2) = (long)(int)(param_2 | 2);
  if (param_4 == 0) {
    *(undefined8 *)(puVar1 + 6) = 0;
LAB_1008a9cfd:
    if (param_3 == 0) {
      *(undefined8 *)(puVar1 + 4) = 0;
    }
    else {
      lVar2 = FUN_10087d050(param_3);
      *(long *)(puVar1 + 4) = lVar2;
      if (lVar2 == 0) goto LAB_1008a9d13;
    }
    *(undefined8 *)(puVar1 + 0x24) = 0;
    *(undefined8 *)(puVar1 + 0x22) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 0x1e) = 0;
    *(undefined8 *)(puVar1 + 0x1c) = 0;
    *(undefined8 *)(puVar1 + 0x1a) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x32) = 0;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(undefined8 *)(puVar1 + 0x2e) = 0;
    *(undefined8 *)(puVar1 + 0x2c) = 0;
    *(undefined8 *)(puVar1 + 0x2a) = 0;
    *(undefined8 *)(puVar1 + 0x28) = 0;
    puVar3 = puVar1;
  }
  else {
    lVar2 = FUN_10087d050(param_4);
    *(long *)(puVar1 + 6) = lVar2;
    if (lVar2 != 0) goto LAB_1008a9cfd;
LAB_1008a9d13:
    puVar3 = (undefined4 *)0x0;
    if ((*(byte *)(puVar1 + 2) & 2) != 0) {
      if (*(long *)(puVar1 + 4) != 0) {
        FUN_10081e1a0();
      }
      if (*(long *)(puVar1 + 6) != 0) {
        FUN_10081e1a0();
      }
      FUN_10081e1a0(puVar1);
      puVar3 = (undefined4 *)0x0;
    }
  }
  return puVar3;
}

