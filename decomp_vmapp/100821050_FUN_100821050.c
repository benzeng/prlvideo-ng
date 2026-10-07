
undefined8 FUN_100821050(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (DAT_1011c06d0 == 0) {
    FUN_10081e310(3);
    DAT_1011c06d0 = FUN_1008856e0(FUN_100820d40,FUN_100820d90);
    FUN_10081e310(2);
    if (DAT_1011c06d0 == 0) {
      return 0;
    }
  }
  puVar2 = (uint *)FUN_10081ddd0(0x18,"o_names.c",0xbf);
  uVar5 = 0;
  if (puVar2 != (uint *)0x0) {
    *(undefined8 *)(puVar2 + 2) = param_1;
    puVar2[1] = param_2 & 0x8000;
    *puVar2 = param_2 & 0xffff7fff;
    *(undefined8 *)(puVar2 + 4) = param_3;
    piVar3 = (int *)FUN_1008859e0(DAT_1011c06d0,puVar2);
    if (piVar3 == (int *)0x0) {
      if (*(int *)(DAT_1011c06d0 + 0xa8) != 0) {
        return 0;
      }
    }
    else {
      if ((DAT_1011c06d8 != 0) && (iVar1 = FUN_100885600(), *piVar3 < iVar1)) {
        lVar4 = FUN_100885620(DAT_1011c06d8);
        (**(code **)(lVar4 + 0x10))(*(undefined8 *)(piVar3 + 2),*piVar3,*(undefined8 *)(piVar3 + 4))
        ;
      }
      FUN_10081e1a0(piVar3);
    }
    uVar5 = 1;
  }
  return uVar5;
}

