
bool FUN_1008db180(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  iVar1 = FUN_100821ab0(*param_1);
  if (iVar1 == 0x17) {
    puVar8 = *(undefined8 **)(param_1[1] + 8);
    if (puVar8 == (undefined8 *)0x0) {
      return false;
    }
  }
  else {
    if (iVar1 != 0x16) {
      uVar6 = 0x80;
      uVar5 = 0x98;
      uVar7 = 0x1a4;
LAB_1008db25c:
      FUN_100887ce0(0x2e,uVar6,uVar5,"cms_lib.c",uVar7);
      return false;
    }
    puVar8 = (undefined8 *)(param_1[1] + 0x18);
  }
  iVar1 = FUN_100885600(*puVar8);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      piVar3 = (int *)FUN_100885620(*puVar8,iVar1);
      if ((*piVar3 == 0) && (iVar2 = FUN_1008b71f0(*(undefined8 *)(piVar3 + 2),param_2), iVar2 == 0)
         ) {
        uVar6 = 0xa4;
        uVar5 = 0xaf;
        uVar7 = 0x1cc;
        goto LAB_1008db25c;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_100885600(*puVar8);
    } while (iVar1 < iVar2);
  }
  puVar4 = (undefined4 *)FUN_1008db0c0(param_1);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 2) = param_2;
  }
  return puVar4 != (undefined4 *)0x0;
}

