
undefined8 FUN_1007ee2a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x48) != 0x2140) {
LAB_1007ee2fb:
    uVar3 = FUN_1007fd930(param_1,0x16);
    return uVar3;
  }
  lVar2 = FUN_100810a40(param_1);
  if ((lVar2 == 0) &&
     ((lVar1 = *(long *)(*(long *)(param_1 + 0x80) + 0x3a8), *(long *)(lVar1 + 0x20) != 0x20 ||
      ((*(byte *)(lVar1 + 0x18) & 0x10) != 0)))) {
    uVar3 = 0xd18;
  }
  else {
    lVar2 = FUN_1007fddf0(param_1,lVar2);
    if (lVar2 != 0) {
      *(undefined4 *)(param_1 + 0x48) = 0x2141;
      *(int *)(param_1 + 0x60) = (int)lVar2;
      *(undefined4 *)(param_1 + 100) = 0;
      goto LAB_1007ee2fb;
    }
    uVar3 = 0xd20;
  }
  FUN_100887ce0(0x14,0x9a,0x44,"s3_srvr.c",uVar3);
  *(undefined4 *)(param_1 + 0x48) = 5;
  return 0;
}

