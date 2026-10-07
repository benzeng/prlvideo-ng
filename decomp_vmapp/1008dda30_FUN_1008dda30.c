
undefined8 * FUN_1008dda30(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)FUN_1008da520();
  if (puVar2 == (undefined8 *)0x0) goto LAB_1008ddb0e;
  if (puVar2[1] == 0) {
    puVar3 = (undefined8 *)FUN_1008a4610(&DAT_100be8388);
    puVar2[1] = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      uVar4 = FUN_100821870(0x15);
      **(undefined8 **)(puVar2[1] + 0x18) = uVar4;
      FUN_100899890(*puVar2);
      uVar4 = FUN_100821870(0x17);
      *puVar2 = uVar4;
      goto LAB_1008ddac6;
    }
    uVar5 = 0x7e;
    uVar4 = 0x41;
    uVar6 = 0x5a;
LAB_1008ddb01:
    FUN_100887ce0(0x2e,uVar5,uVar4,"cms_env.c",uVar6);
  }
  else {
    iVar1 = FUN_100821ab0(*puVar2);
    if (iVar1 != 0x17) {
      uVar5 = 0x83;
      uVar4 = 0x6b;
      uVar6 = 0x4f;
      goto LAB_1008ddb01;
    }
LAB_1008ddac6:
    if ((puVar2[1] != 0) &&
       (iVar1 = FUN_1008def60(*(undefined8 *)(puVar2[1] + 0x18),param_1,0,0), iVar1 != 0)) {
      return puVar2;
    }
  }
  FUN_1008da540(puVar2);
LAB_1008ddb0e:
  FUN_100887ce0(0x2e,0x7c,0x41,"cms_env.c",0x86);
  return (undefined8 *)0x0;
}

