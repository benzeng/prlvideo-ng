
undefined8 FUN_100c9ef60(long param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = 0;
  if (param_1 == 0) {
LAB_100c9ef90:
    lVar3 = 0;
    if ((param_2 == 0) || (lVar3 = FUN_100c58250(param_2), lVar5 = lVar2, lVar3 != 0)) {
      puVar4 = (undefined8 *)FUN_100bf3540(0x18,"v3_utl.c",0x5b);
      if (puVar4 == (undefined8 *)0x0) {
        FUN_100c62ee0(0x22,0x69,0x41,"v3_utl.c",0x66);
        goto LAB_100c9f07d;
      }
      if (*param_3 == 0) {
        lVar5 = FUN_100c60010();
        *param_3 = lVar5;
        if (lVar5 != 0) goto LAB_100c9efdd;
      }
      else {
LAB_100c9efdd:
        *puVar4 = 0;
        puVar4[1] = lVar2;
        puVar4[2] = lVar3;
        iVar1 = FUN_100c604e0(*param_3,puVar4);
        if (iVar1 != 0) {
          return 1;
        }
      }
      FUN_100c62ee0(0x22,0x69,0x41,"v3_utl.c",0x66);
      FUN_100bf3910(puVar4);
      goto LAB_100c9f07d;
    }
  }
  else {
    lVar2 = FUN_100c58250();
    lVar5 = 0;
    if (lVar2 != 0) goto LAB_100c9ef90;
  }
  lVar2 = lVar5;
  FUN_100c62ee0(0x22,0x69,0x41,"v3_utl.c",0x66);
  lVar3 = 0;
LAB_100c9f07d:
  if (lVar2 != 0) {
    FUN_100bf3910(lVar2);
  }
  if (lVar3 != 0) {
    FUN_100bf3910(lVar3);
  }
  return 0;
}

