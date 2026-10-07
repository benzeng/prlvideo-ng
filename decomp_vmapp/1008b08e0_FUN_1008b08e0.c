
undefined8
FUN_1008b08e0(undefined4 param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_58 [10];
  
  if (DAT_1011c2988 == 0) {
    DAT_1011c2988 = FUN_100884d30(FUN_1008b0a40);
    if (DAT_1011c2988 != 0) goto LAB_1008b0926;
    uVar4 = 0xf5;
LAB_1008b0a27:
    FUN_100887ce0(0xd,0x81,0x41,"a_strnid.c",uVar4);
    uVar4 = 0;
  }
  else {
LAB_1008b0926:
    local_58[0] = param_1;
    puVar3 = (undefined4 *)FUN_100822740(local_58,&DAT_100b59f10,0x13,0x28,FUN_1008b0aa0);
    if (puVar3 == (undefined4 *)0x0) {
      if (DAT_1011c2988 != 0) {
        iVar2 = FUN_100885160(DAT_1011c2988,local_58);
        if (-1 < iVar2) {
          puVar3 = (undefined4 *)FUN_100885620(DAT_1011c2988,iVar2);
          if (puVar3 != (undefined4 *)0x0) goto LAB_1008b097c;
        }
      }
      puVar3 = (undefined4 *)FUN_10081ddd0(0x28,"a_strnid.c",0xf9);
      if (puVar3 == (undefined4 *)0x0) {
        uVar4 = 0xfb;
        goto LAB_1008b0a27;
      }
      *(ulong *)(puVar3 + 8) = param_5 | 1;
      *puVar3 = param_1;
      bVar1 = true;
    }
    else {
LAB_1008b097c:
      *(ulong *)(puVar3 + 8) = *(ulong *)(puVar3 + 8) & 1 | param_5 & 0xfffffffffffffffe;
      bVar1 = false;
    }
    if (param_2 != -1) {
      *(long *)(puVar3 + 2) = param_2;
    }
    if (param_3 != -1) {
      *(long *)(puVar3 + 4) = param_3;
    }
    *(undefined8 *)(puVar3 + 6) = param_4;
    uVar4 = 1;
    if (bVar1) {
      FUN_1008852e0(DAT_1011c2988,puVar3);
    }
  }
  return uVar4;
}

