
undefined8 FUN_1002cc390(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  uVar2 = 0;
  if ((((((((*(byte *)(lVar1 + 0x202c) & 2) != 0) && (uVar2 = 2, *(int *)(param_1 + 0x3c) != 0)) &&
         (uVar2 = 1, (*(byte *)(lVar1 + 0x1064) & 2) == 0)) &&
        (((*(byte *)(lVar1 + 0x1068) & 2) == 0 && ((*(byte *)(lVar1 + 0x106c) & 2) == 0)))) &&
       (((*(byte *)(lVar1 + 0x1070) & 2) == 0 &&
        (((*(byte *)(lVar1 + 0x1074) & 2) == 0 && ((*(byte *)(lVar1 + 0x1078) & 2) == 0)))))) &&
      ((*(byte *)(lVar1 + 0x107c) & 2) == 0)) &&
     (((((*(byte *)(lVar1 + 0x1080) & 2) == 0 && ((*(byte *)(lVar1 + 0x1084) & 2) == 0)) &&
       ((*(byte *)(lVar1 + 0x1088) & 2) == 0)) &&
      ((((*(byte *)(lVar1 + 0x108c) & 2) == 0 && ((*(byte *)(lVar1 + 0x1090) & 2) == 0)) &&
       (((*(byte *)(lVar1 + 0x1094) & 2) == 0 &&
        (((*(byte *)(lVar1 + 0x1098) & 2) == 0 && ((*(byte *)(lVar1 + 0x109c) & 2) == 0)))))))))) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    uVar2 = 2;
  }
  return uVar2;
}

