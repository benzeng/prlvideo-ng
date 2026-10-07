
void FUN_1004ada90(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  
  if (*(int *)(*(long *)(param_1 + 0xe8) + 0xc) != *(int *)(*(long *)(param_1 + 0xe8) + 8)) {
    local_38 = CONCAT44(param_3,param_2) ^ 0x100000000;
    do {
      lVar2 = FUN_1004d5c70((long *)(param_1 + 0xe8));
      if (lVar2 != 0) {
        lVar3 = FUN_1002a6010(lVar2);
        uVar1 = *(undefined4 *)(lVar3 + 4);
        FUN_1004c07d0(param_1 + 0x10,lVar2,local_38 & 0xffffffff);
        if ((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2 && (char)(local_38 >> 0x20) == '\0') {
          FUN_1004b6c40(*(undefined8 *)(param_1 + 0xf0),uVar1);
        }
      }
      lVar2 = *(long *)(param_1 + 0xe8);
    } while (*(int *)(lVar2 + 0xc) != *(int *)(lVar2 + 8));
  }
  return;
}

