
undefined8 FUN_100c93360(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = (undefined4 *)FUN_100c83f00();
  puVar6 = (undefined8 *)0x0;
  puVar7 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    lVar4 = FUN_100c8b280();
    *(long *)(puVar3 + 2) = lVar4;
    puVar6 = (undefined8 *)0x0;
    puVar7 = puVar3;
    if (lVar4 != 0) {
      *puVar3 = 0x10;
      uVar1 = FUN_100c80850(param_2,lVar4 + 8,&DAT_102252dc8);
      **(undefined4 **)(puVar3 + 2) = uVar1;
      puVar6 = (undefined8 *)FUN_100c7bc40();
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        lVar4 = FUN_100c60010();
        puVar6[2] = lVar4;
        if ((lVar4 != 0) && (iVar2 = FUN_100c604e0(lVar4,puVar3), iVar2 != 0)) {
          *(undefined4 *)(puVar6 + 1) = 0;
          uVar5 = FUN_100bf6fe0(param_3);
          *puVar6 = uVar5;
          lVar4 = *(long *)(*param_1 + 0x30);
          if (lVar4 == 0) {
            lVar4 = FUN_100c60010();
            *(long *)(*param_1 + 0x30) = lVar4;
            puVar7 = (undefined4 *)0x0;
            if (lVar4 == 0) goto LAB_100c9345d;
          }
          iVar2 = FUN_100c604e0(lVar4,puVar6);
          puVar7 = (undefined4 *)0x0;
          if (iVar2 != 0) {
            return 1;
          }
        }
      }
    }
  }
LAB_100c9345d:
  FUN_100c7bc60(puVar6);
  FUN_100c83f20(puVar7);
  return 0;
}

