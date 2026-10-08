
undefined1 FUN_1000e91d0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 local_40 [32];
  
  iVar3 = FUN_100a67f70(local_40,0x24);
  if (iVar3 != 0) {
    return 0;
  }
  lVar1 = *param_2;
  if ((*(int *)(lVar1 + 4) < 1) ||
     (iVar3 = FUN_100a68060(local_40,lVar1 + *(long *)(lVar1 + 0x10),*(int *)(lVar1 + 4) << 2,0x2006
                           ), iVar3 != 0)) {
    lVar1 = *param_3;
    if (*(int *)(lVar1 + 4) < 1) {
      uVar2 = 0;
      goto LAB_1000e92b5;
    }
    iVar3 = FUN_100a68060(local_40,lVar1 + *(long *)(lVar1 + 0x10),*(int *)(lVar1 + 4) << 3,0x200f);
    if (iVar3 != 0) {
      uVar2 = 0;
      goto LAB_1000e92b5;
    }
  }
  puVar4 = (undefined8 *)FUN_100a67f30(local_40);
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 4) = 0x24;
  *(undefined4 *)puVar4 = 0x6d;
  iVar3 = FUN_100a67f40(local_40);
  *(int *)(puVar4 + 2) = iVar3 + -0x14;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined4 *)((long)puVar4 + 4) = 2;
  uVar2 = FUN_1000e85b0(param_1,puVar4);
LAB_1000e92b5:
  FUN_100a681d0(local_40);
  return uVar2;
}

